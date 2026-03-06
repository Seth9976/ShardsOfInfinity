// 函数名称: sub_475220
// 虚拟地址: 0x475220
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_475220(int32_t arg1, int32_t arg2, char arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t eax = data_64f84c
    int32_t eax = data_64f84c
    char const* const var_3c
    int32_t var_38
    char const* const var_34_1
    char* ecx_5
    float var_20
    
    if (eax != 0)
        if (eax == 2)
            *arg4 = *sub_45f080(&var_20, arg2, data_5cd9f8, &var_20)
            return arg4
        
        var_34_1 = "UI2DragSelectionRect"
        var_38 = 0x2bcc
        var_3c = "c:\ax2017\engine\ui2.cpp"
        ecx_5 = "Halt"
    else
        void* eax_1 = sub_469160(data_5cda2c)
        void* ecx_2 = *(eax_1 + 0x63c) * 0x208 + eax_1
        int128_t xmm0_1
        
        if (arg3 == 0)
            float xmm4_1[0x4] = *(ecx_2 + 0x14)
            float xmm3_3 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa) f- xmm4_1
            float xmm1_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0x55)
            float xmm2_3 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xff) - xmm1_2
            var_20 = xmm3_3 f* *(ecx_2 + 0xcc) f+ xmm4_1
            float var_1c_1 = *(ecx_2 + 0xd0) * xmm2_3 + xmm1_2
            float var_18_1 = *(ecx_2 + 0xd4) * xmm3_3 f+ xmm4_1
            float var_14_1 = *(ecx_2 + 0xd8) * xmm2_3 + xmm1_2
            xmm0_1 = var_20.o
        else
            xmm0_1 = *(ecx_2 + 0x14)
        
        int32_t edi_1 = 1
        *arg4 = xmm0_1
        
        if (data_5cea2c s<= 1)
            return arg4
        
        while (true)
            void* eax_2 = sub_469160((&data_5cda2c)[edi_1])
            eax = *(eax_1 + 0x63c)
            float xmm4_2 = *arg4
            
            if (arg3 == 0)
                float xmm3_4[0x4] = *(eax * 0x208 + eax_1 + 0x14)
                eax = *(eax_2 + 0x63c) * 0x208
                float xmm2_6 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0xaa) f- xmm3_4
                float xmm0_17 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0x55)
                float xmm1_5 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0xff) - xmm0_17
                float xmm5_3 = xmm2_6 f* *(eax + eax_2 + 0xcc) f+ xmm3_4
                float xmm6_3 = *(eax + eax_2 + 0xd4) * xmm2_6 f+ xmm3_4
                float xmm3_5 = *(arg4 + 8)
                float xmm7_3 = *(eax + eax_2 + 0xd0) * xmm1_5 + xmm0_17
                float xmm2_9 = *(eax + eax_2 + 0xd8) * xmm1_5 + xmm0_17
                
                if (xmm3_5 < xmm4_2)
                label_475327:
                    var_34_1 = "RectUnion"
                    var_38 = 0xdb
                    var_3c = "c:\ax2017\engine\rect.cpp"
                    ecx_5 = "RectIsNormalized(r0)"
                    break
                
                int32_t xmm1_6 = *(arg4 + 4)
                int32_t xmm0_18 = *(arg4 + 0xc)
                
                if (xmm0_18 f< xmm1_6)
                    goto label_475327
                
                var_20 = xmm5_3 <= xmm4_2 ? xmm5_3 : xmm4_2
                
                if (xmm3_5 <= xmm6_3)
                    float var_18_3 = xmm6_3
                else
                    float var_18_2 = xmm3_5
                
                if (xmm7_3 f<= xmm1_6)
                    float var_1c_3 = xmm7_3
                else
                    int32_t var_1c_2 = xmm1_6
                
                if (xmm0_18 f<= xmm2_9)
                    float var_14_3 = xmm2_9
                else
                    int32_t var_14_2 = xmm0_18
                
                *arg4 = var_20.o
            else if (*(arg4 + 8) f< xmm4_2 || not(*(arg4 + 0xc) f>= *(arg4 + 4)))
                goto label_475327
            
            edi_1 += 1
            
            if (edi_1 s>= data_5cea2c)
                return arg4
    sub_44e4d0(eax, &data_5559b1, ecx_5, var_3c, var_38, var_34_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
