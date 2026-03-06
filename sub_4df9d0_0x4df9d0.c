// 函数名称: sub_4df9d0
// 虚拟地址: 0x4df9d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4df9d0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void var_b8
    void var_b8
    int32_t eax_1 = __security_cookie ^ &var_b8
    int32_t esi_1 = *(arg3 + 4)
    int32_t var_b0 = esi_1
    
    if (esi_1 == 0)
        var_b0 = arg4[4]
    
    int32_t esi_3 = 1
    
    if (*(arg3 + 0x10) == 1)
        esi_3 = 6
    
    *arg2 = arg4[1]
    int32_t eax_4 = arg4[2]
    arg2[0xd] = esi_3
    int32_t esi_4 = esi_3 << 3
    arg2[1] = eax_4
    arg2[3] = 1
    uint32_t (* eax_5)[0x4] = sub_45cd70(esi_4)
    _memset(eax_5, 0, esi_4)
    int32_t* esi_5 = arg4
    int32_t var_c4_1 = arg5
    arg2[0xf] = eax_5
    arg2[4] = 6
    arg2[5] = var_b0
    int32_t eax_7 = *(arg3 + 0x10)
    arg2[6] = eax_7
    int32_t ecx_3 = sub_4de010(eax_7, esi_5, arg2)
    
    if (*(arg3 + 0x10) != 1)
        int32_t** edx_26 = arg2[0xf]
        *edx_26 = nullptr
        sub_51adf0(esi_5, edx_26)
    else
        int32_t eax_8 = esi_5[4]
        int128_t var_80 = *esi_5
        int32_t var_70_1 = eax_8
        int32_t eax_9 = *(arg3 + 0x14)
        int128_t var_2c
        __builtin_memset(&var_2c, 0, 0x18)
        bool cond:2_1
        
        if (eax_9 == 0)
            int32_t edi_2 = esi_5[2]
            int32_t edx_1 = esi_5[1]
            ecx_3 = edi_2 * 3
            
            if (edx_1 * 2 == ecx_3)
                goto label_4dfaf8
            
            int32_t edi_3 = edi_2 << 2
            eax_9 = edx_1 * 3
            
            if (eax_9 == edi_3)
                goto label_4dfb74
            
            cond:2_1 = edx_1 != edi_3
            goto label_4dfbee
        
        int32_t var_b0_1
        int32_t var_a8_1
        int32_t var_44
        int32_t edi_5
        int32_t var_3c
        
        if (eax_9 != 1)
            if (eax_9 != 2)
                cond:2_1 = eax_9 != 3
            label_4dfbee:
                
                if (cond:2_1)
                    sub_44e4d0(eax_9, &data_5559b1, "Halt", "c:\ax2017\engine\textureimport.cpp", 
                        0x5b4, "sTextureImportToPng")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_4df620(ecx_3, esi_5)
                int32_t eax_31 = esi_5[1]
                int32_t ecx_7 = esi_5[3]
                var_a8_1 = eax_31
                var_80:4.d = eax_31
                int32_t eax_32
                int32_t edx_15
                edx_15:eax_32 = muls.dp.d(0x2aaaaaab, esi_5[2])
                int32_t i = 0
                var_80:0xc.d = ecx_7
                var_44 = 0
                edi_5 = (edx_15 u>> 0x1f) + edx_15
                var_b0_1 = edi_5
                int32_t edx_17 = edi_5 * ecx_7
                bool cond:1_1 = data_65a2f4 s< 2
                var_80:8.d = edi_5
                int32_t var_40_3 = edx_17
                uint32_t xmm1_1[0x4] = _mm_shuffle_epi32(zx.o(edx_17), 0)
                
                if (cond:1_1)
                    int32_t ecx_8 = edx_17 * 2
                    
                    do
                        (&var_3c)[i] = ecx_8
                        i += 1
                        ecx_8 += edx_17
                    while (i s< 4)
                else
                    var_3c.o = _mm_mullo_epi32(xmm1_1, __paddd_xmmdq_memdq(data_59dfc0, data_59ded0))
                
                goto label_4dfc7f
            
        label_4dfb74:
            int32_t eax_22
            int32_t edx_7
            edx_7:eax_22 = sx.q(esi_5[1])
            int32_t eax_24 = (eax_22 + (edx_7 & 3)) s>> 2
            var_a8_1 = eax_24
            var_80:4.d = eax_24
            int32_t eax_25
            int32_t edx_9
            edx_9:eax_25 = muls.dp.d(0x55555556, esi_5[2])
            edi_5 = (edx_9 u>> 0x1f) + edx_9
            int32_t eax_27
            int32_t edx_10
            edx_10:eax_27 = sx.q(var_80:0xc.d)
            var_b0_1 = edi_5
            var_80:8.d = edi_5
            int32_t edx_13 = edi_5 * var_80:0xc.d
            int32_t esi_10 = ((edx_10 & 3) + eax_27) s>> 2
            int32_t var_34_2 = esi_10
            var_44 = edx_13
            int32_t var_40_2 = edx_13 + (esi_10 << 1)
            int32_t var_38_2 = esi_10 * 3 + edx_13
            var_3c = edx_13 + esi_10
            int32_t var_30_2 = esi_10 + (edx_13 << 1)
        label_4dfc7f:
            int32_t var_1c_1 = 2
            var_2c:8.d = 2
            var_2c:4.d = 3
            var_2c.d = 1
        else
        label_4dfaf8:
            var_44 = 0
            int32_t eax_11
            int32_t edx_2
            edx_2:eax_11 = muls.dp.d(0x55555556, esi_5[1])
            int32_t eax_14 = (edx_2 u>> 0x1f) + edx_2
            var_a8_1 = eax_14
            var_80:4.d = eax_14
            int32_t eax_16
            int32_t edx_3
            edx_3:eax_16 = sx.q(esi_5[2])
            edi_5 = (eax_16 - edx_3) s>> 1
            var_b0_1 = edi_5
            int32_t esi_8 = var_80:0xc.d s/ 3
            var_80:8.d = edi_5
            var_3c = esi_8
            int32_t edx_6 = edi_5 * var_80:0xc.d
            int32_t ecx_4 = esi_8 * 2
            int32_t var_40_1 = ecx_4
            int32_t var_30_1 = edx_6
            int32_t var_34_1 = edx_6 + esi_8
            int32_t var_38_1 = ecx_4 + edx_6
        int32_t* eax_33 = arg2
        eax_33[1] = edi_5
        int32_t i_1 = 0
        int32_t edx_18 = 0
        *eax_33 = var_a8_1
        int32_t var_88_1 = 0
        
        do
            int32_t* esi_12 = eax_33[0xf] + i_1
            int32_t eax_34 = *(&var_44 + edx_18)
            *esi_12 = 0
            var_80.d = eax_34 + *arg4
            int32_t eax_36 = *(&var_2c + edx_18)
            
            if (eax_36 == 0)
                sub_51adf0(&var_80, esi_12)
            else
                int32_t var_50_1 = var_b0_1
                int32_t var_54_1 = var_a8_1
                int32_t var_48_1 = eax_8
                int32_t var_4c_1 = sub_4dd730(var_a8_1, eax_8)
                void* eax_42 = sub_45cd70(sub_4dd7f0(eax_8, var_b0_1, var_a8_1, eax_8))
                void* var_58 = eax_42
                sub_4df010(eax_42, &var_58, &var_80, eax_36)
                sub_51adf0(&var_58, esi_12)
                void* eax_43 = var_58
                
                if (eax_43 != 0)
                    _aligned_free_base(eax_43)
            
            i_1 += 8
            eax_33 = arg2
            edx_18 = var_88_1 + 4
            var_88_1 = edx_18
        while (i_1 s< 0x30)
        
        esi_5 = arg4
    
    int32_t result = *esi_5
    
    if (result != 0)
        _aligned_free_base(result)
    
    result.b = 1
    *esi_5 = 0
    @__security_check_cookie@4(eax_1 ^ &var_b8)
    return result
}
