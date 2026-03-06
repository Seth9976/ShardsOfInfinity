// 函数名称: sub_50e780
// 虚拟地址: 0x50e780
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_50e780(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax = sub_51a040(arg3, "#?RADIANCE\n")
    int32_t eax = sub_51a040(arg3, "#?RADIANCE\n")
    int32_t ecx = arg3[0x2d]
    arg3[0x2a] = arg3[0x2c]
    arg3[0x2b] = ecx
    
    if (eax == 0)
        eax = sub_51a040(arg3, "#?RGBE\n")
        arg3[0x2a] = arg3[0x2c]
        int32_t ecx_3 = arg3[0x2d]
        arg3[0x2b] = ecx_3
        
        if (eax == 0)
            int32_t var_2c_1 = ecx_3
            int32_t* var_30_1 = arg5
            int32_t edi_1 = sub_50e510(eax, arg2, arg3, arg4)
            int32_t var_c = edi_1
            
            if (edi_1 == 0)
                return 0
            
            int32_t eax_2 = *arg5
            int32_t ebx_1 = *arg2
            int32_t ecx_6 = *arg4
            float* esi_2 = sub_50dca0(eax_2, ecx_6, ebx_1, eax_2)
            float* var_14 = esi_2
            
            if (esi_2 == 0)
                _free(edi_1)
                return esi_2
            
            int32_t edx_2 = eax_2
            int32_t ecx_8 = edx_2
            
            if ((edx_2.b & 1) == 0)
                ecx_8 = edx_2 - 1
            
            int32_t i_2 = ebx_1 * ecx_6
            int32_t var_1c = ecx_8
            int32_t i_1 = i_2
            
            if (i_2 s> 0)
                float* eax_6 = esi_2
                void* ebx_2 = nullptr
                float* var_8_1 = eax_6
                int32_t i
                
                do
                    int32_t esi_3 = 0
                    
                    if (ecx_8 s> 0)
                        float* edi_2 = eax_6
                        
                        do
                            long double st0_1 = sub_414580(
                                _mm_cvtepi32_ps(zx.o(*(ebx_2 + esi_3 + var_c))) / 255f, 0x400ccccd)
                            esi_3 += 1
                            *edi_2 = fconvert.s(st0_1)
                            edi_2 = &edi_2[1]
                        while (esi_3 s< var_1c)
                        
                        edi_1 = var_c
                        edx_2 = eax_2
                        eax_6 = var_8_1
                    
                    if (esi_3 s>= edx_2)
                        esi_2 = var_14
                    else
                        void* ecx_10 = ebx_2 + esi_3
                        esi_2 = var_14
                        eax_6 = var_8_1
                        esi_2[ecx_10] = _mm_cvtepi32_ps(zx.o(*(ecx_10 + edi_1))) / 255f
                    
                    ebx_2 += edx_2
                    eax_6 = &eax_6[edx_2]
                    i = i_1
                    i_1 -= 1
                    ecx_8 = var_1c
                    var_8_1 = eax_6
                while (i != 1)
            
            _free(edi_1)
            return esi_2
    
    float* eax_12 = sub_51a370(eax, arg2, arg3, arg4, arg5)
    
    if (eax_12 != 0 && data_d76c5c != 0)
        char** eax_14 = arg4
        sub_50e420(eax_14, *arg2, eax_12, *eax_14, *arg5 << 2)
    
    return eax_12
}
