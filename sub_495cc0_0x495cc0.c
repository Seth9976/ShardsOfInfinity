// 函数名称: sub_495cc0
// 虚拟地址: 0x495cc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_495cc0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg2
    int32_t* var_8 = arg2
    void* edi = *(arg1 + 0x30)
    
    if (*(arg1 + 0x40) == 0)
        goto label_495d04
    
    int32_t result = *sub_4459f0(**(edi + 0x2e4))
    
    if (*(*(edi + 0x2dc) * 0x134 + result + 0xdd) == 0)
        arg2 = var_8
    label_495d04:
        int32_t* ebx_1 = arg2[1]
        float var_c_1
        bool p_2
        
        if (ebx_1[1] == 1)
            int32_t* eax_3 = *ebx_1
            float xmm0_1 = *eax_3
            float temp0_1 = eax_3[1]
            xmm0_1 - temp0_1
            var_c_1 = xmm0_1
            eax_3:1.b = (xmm0_1 == temp0_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_1, temp0_1) ? 1 : 0) << 2 | (xmm0_1 < temp0_1 ? 1 : 0)
            p_2 = unimplemented  {test ah, 0x44}
        
        if (ebx_1[1] != 1 || p_2)
            void* esi_1 = *(arg1 + 0x30)
            int32_t ecx_4 = (*(esi_1 + 0x2c) + *arg2) * *arg2
            int32_t edx_2 = (ecx_4 << 0xf) + not.d(ecx_4)
            int32_t ecx_6 = (edx_2 u>> 0xc ^ edx_2) * 5
            int32_t eax_10 = (ecx_6 u>> 4 ^ ecx_6) * 0x809
            arg2 = var_8
            var_c_1 = sub_4e0380(ebx_1, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                (((eax_10 u>> 0x10 ^ eax_10) & 0x7fffff) | 0x3f800000) - 1f)
            ebx_1 = arg2[1]
        
        float var_8_1
        bool p_4
        
        if (ebx_1[1] == 1)
            int32_t* eax_11 = *ebx_1
            float xmm0_3 = *eax_11
            float temp1_1 = eax_11[1]
            xmm0_3 - temp1_1
            var_8_1 = xmm0_3
            eax_11:1.b = (xmm0_3 == temp1_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_3, temp1_1) ? 1 : 0) << 2 | (xmm0_3 < temp1_1 ? 1 : 0)
            p_4 = unimplemented  {test ah, 0x44}
        
        if (ebx_1[1] != 1 || p_4)
            int32_t ecx_15 = (*(edi + 0x2c) + *arg2) * *arg2
            float xmm1_2 = *(edi + 0x2f0)
            int32_t edx_6 = (ecx_15 << 0xf) + not.d(ecx_15)
            int32_t ecx_17 = (edx_6 u>> 0xc ^ edx_6) * 5
            int32_t eax_18 = (ecx_17 u>> 4 ^ ecx_17) * 0x809
            int32_t eax_19 = *(edi + 0x2f4)
            int32_t edx_7 = eax_19 - 1
            
            if (xmm1_2 f<= *(edi + 0x2e8))
                edx_7 = eax_19
            
            var_8_1 = sub_4e0380(ebx_1, edx_7, xmm1_2, 
                (((eax_18 u>> 0x10 ^ eax_18) & 0x7fffff) | 0x3f800000) - 1f)
        
        int64_t var_2c
        int64_t* eax_21
        int80_t st0_1
        st0_1, eax_21 = sub_495970(&var_2c, *(*(edi + 0x2e4) + 0x54), arg1, var_c_1, &var_2c)
        int64_t xmm0_5 = *eax_21
        float eax_22 = eax_21[1].d
        float var_4c[0x5]
        int64_t* eax_25
        int80_t st0_2
        st0_2, eax_25 = sub_495970(&var_4c, *(*(edi + 0x2e4) + 0x54) - 1, arg1, var_8_1, &var_4c)
        float eax_26 = eax_25[1].d
        int32_t* eax_27 = *(edi + 0x2e4)
        var_2c = *eax_25
        int32_t eax_28 = sub_4459f0(*eax_27)
        int32_t* edx_13 = *(edi + 0x2dc) * 0x134 + *eax_28
        int32_t* var_8_2
        
        if (*(edx_13 + 0x59) == 0)
            if (data_5b39d8 s> 0x4d)
                var_8_2 = *(*(data_5b39d4 + 0x134) + 0x24)
                goto label_495ede
            
        label_4960cf:
            sub_44e4d0(eax_28, &data_5559b1, 
                "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                "c:\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        var_8_2 = sub_4b8ac0(eax_28, edx_13, &data_5b39c8, data_e471a0, 0x4d)
    label_495ede:
        eax_28 = sub_4459f0(**(edi + 0x2e4))
        int32_t* edx_15 = *(edi + 0x2dc) * 0x134 + *eax_28
        int32_t* ebx_3
        
        if (*(edx_15 + 0x5a) == 0)
            if (data_5b39d8 s<= 0x4e)
                goto label_4960cf
            
            ebx_3 = *(*(data_5b39d4 + 0x138) + 0x24)
            goto label_495f31
        
        ebx_3 = sub_4b8ac0(eax_28, edx_15, &data_5b39c8, data_e471a0, 0x4e)
    label_495f31:
        eax_28 = sub_4459f0(**(edi + 0x2e4))
        int32_t* edx_17 = *(edi + 0x2dc) * 0x134 + *eax_28
        int32_t* esi_2
        
        if (*(edx_17 + 0x5b) == 0)
            if (data_5b39d8 s<= 0x4f)
                goto label_4960cf
            
            esi_2 = *(*(data_5b39d4 + 0x13c) + 0x24)
            goto label_495f92
        
        esi_2 = sub_4b8ac0(eax_28, edx_17, &data_5b39c8, data_e471a0, 0x4f)
    label_495f92:
        float xmm0_7 = sub_4e0380(var_8_2, *(edi + 0x2f4), *(edi + 0x2e8), xmm0_5.d)
        float xmm0_8 = sub_4e0380(ebx_3, *(edi + 0x2f4), *(edi + 0x2e8), xmm0_5:4.d)
        float xmm0_9 = sub_4e0380(esi_2, *(edi + 0x2f4), *(edi + 0x2e8), eax_22)
        float xmm1_6 = *(edi + 0x2f0)
        int32_t eax_38 = *(edi + 0x2f4)
        int32_t edx_21 = eax_38 - 1
        
        if (xmm1_6 f<= *(edi + 0x2e8))
            edx_21 = eax_38
        
        float xmm0_10 = sub_4e0380(var_8_2, edx_21, xmm1_6, var_2c.d)
        float xmm1_7 = *(edi + 0x2f0)
        int32_t eax_39 = *(edi + 0x2f4)
        int32_t edx_22 = eax_39 - 1
        
        if (xmm1_7 f<= *(edi + 0x2e8))
            edx_22 = eax_39
        
        float xmm0_11 = sub_4e0380(ebx_3, edx_22, xmm1_7, var_2c:4.d)
        float xmm1_8 = *(edi + 0x2f0)
        int32_t eax_40 = *(edi + 0x2f4)
        int32_t edx_23 = eax_40 - 1
        
        if (xmm1_8 f<= *(edi + 0x2e8))
            edx_23 = eax_40
        
        float xmm0_12
        result, xmm0_12 = sub_4e0380(esi_2, edx_23, xmm1_8, eax_26)
        float xmm3_13 = xmm0_7 - xmm0_10 f+ *(edi + 0x29c)
        *(edi + 0x2a0) = *(edi + 0x2a0) + xmm0_8 - xmm0_11
        float xmm0_16 = *(edi + 0x2a4) + xmm0_9 - xmm0_12
        *(edi + 0x29c) = xmm3_13
        *(edi + 0x2a4) = xmm0_16
    
    return result
}
