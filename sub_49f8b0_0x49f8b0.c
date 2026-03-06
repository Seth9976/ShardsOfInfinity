// 函数名称: sub_49f8b0
// 虚拟地址: 0x49f8b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_49f8b0(int32_t* arg1)
{
    // 第一条实际指令: if (data_cdf428 == 0)
    if (data_cdf428 == 0)
        return 
    
    int32_t* edx_1 = arg1
    int32_t i = 0
    int32_t i_1 = 0
    
    if (edx_1[1] s<= 0)
        return 
    
    int32_t ecx_1 = 0
    int32_t var_c_1 = 0
    
    do
        int32_t* ebx_1 = *edx_1
        int32_t edx_2 = *(ebx_1 + ecx_1)
        void* ebx_2 = ebx_1 + ecx_1
        int32_t ecx_2 = 0
        
        if (edx_2 s> 0)
            int32_t* eax = *(ebx_2 + 4)
            
            do
                if (*eax == 2)
                    int32_t eax_1 = eax[1]
                    *(ebx_2 + 8) = eax_1
                    sub_4b8790(eax_1, ebx_2, &data_5b39c8, 2)
                    break
                
                ecx_2 += 1
                eax = &eax[2]
            while (ecx_2 s< edx_2)
            
            i = i_1
        
        int32_t j = 0
        
        if (*ebx_2 s> 0)
            do
                int32_t esi_1 = *(ebx_2 + 4)
                int32_t eax_2 = *(esi_1 + (j << 3))
                
                if (eax_2 u>= 0x71)
                    sub_44e4d0(eax_2, &data_5559b1, 
                        "attribPair.tag >= 0 && attribPair.tag < NUM_PARTICLE_PARAM_TYPES", 
                        "c:\ax2017\engine\particle.cpp", 0xbbb, "ParticleLoad")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (eax_2 == 5)
                    int32_t**** esi_2 = *(esi_1 + (j << 3) + 4)
                    
                    if (esi_2 != 0)
                        int32_t*** eax_3 = *esi_2
                        
                        if (eax_3 == 0)
                            edx_2.b = 0
                            sub_4aa5d0(esi_2, edx_2.b)
                            eax_3 = *esi_2
                            
                            if (eax_3 == 0)
                                sub_48dac0(esi_2)
                                eax_3 = *esi_2
                        
                        int32_t* ecx_5 = **eax_3
                        int32_t eax_5 = *ecx_5
                        int32_t eax_7 = ecx_5[1]
                        float xmm2_3 =
                            _mm_cvtpd_ps(float.d(eax_5) f+ *((eax_5 u>> 0x1f << 3) + &data_59e4f0))
                            f* ecx_5[2] * 0.00999999978f
                        float xmm1_3 =
                            _mm_cvtpd_ps(float.d(eax_7) f+ *((eax_7 u>> 0x1f << 3) + &data_59e4f0))
                            f* ecx_5[2] * 0.00999999978f
                        float xmm0_6 = float.s(*(ebx_2 + 0xf0))
                        *(ebx_2 + 0xf8) = xmm2_3 / float.s(*(ebx_2 + 0xf4))
                        *(ebx_2 + 0xfc) = xmm1_3 / xmm0_6
                
                j += 1
            while (j s< *ebx_2)
            
            i = i_1
        
        edx_1 = arg1
        i += 1
        ecx_1 = var_c_1 + 0x134
        i_1 = i
        var_c_1 = ecx_1
    while (i s< edx_1[1])
}
