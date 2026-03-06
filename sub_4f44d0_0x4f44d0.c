// 函数名称: sub_4f44d0
// 虚拟地址: 0x4f44d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4f44d0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t var_2c = esi
    void* eax_1 = *(*(arg2 + 0x58) + 4)
    
    if (eax_1 == 0x1e)
        sub_4ff270(arg1)
        BOOL eax_2
        eax_2.b = 1
        return eax_2
    
    if (eax_1 != 0x1d)
        if (eax_1 == 0x22)
            return sub_4779e0(esi)
        
        float var_18_1 = 1f
        
        if (*arg1 == 9)
            float xmm1_1 = 1f - _mm_cvtepi32_ps(zx.o(arg1[3])) * 0.00200000009f
            var_18_1 = xmm1_1
            *(arg2 + 0x54) = *(arg2 + 0x54) * xmm1_1
        
        int32_t* esi_4 = sub_4c0f50(data_ce275c)
        
        if (esi_4 != 0)
            if (*arg1 == 0)
                int32_t var_14
                int32_t var_10
                void var_c
                
                if (arg1[1] == 0x61)
                    int32_t* eax_5 = sub_490ca0(*esi_4)
                    int32_t i = 0
                    int32_t* var_1c_1 = eax_5
                    
                    if (eax_5[1] s> 0)
                        int32_t* ecx_2 = nullptr
                        int32_t* var_24_1 = nullptr
                        
                        do
                            int32_t eax_6 = *eax_5
                            
                            if (sub_4c4480(eax_6, *(ecx_2 + eax_6), *esi_4, &var_14, &var_10, &var_c)
                                    != 0 && esi_4[3] == var_14 && esi_4[4] == var_10)
                                int32_t eax_22 = mods.dp.d(sx.q(i + 1), var_1c_1[1]) * 2
                                sub_4c1ed0(eax_22, *(*var_1c_1 + (eax_22 << 3)), esi_4, 1f, 0)
                                int32_t eax_23
                                eax_23.b = 1
                                return eax_23
                            
                            eax_5 = var_1c_1
                            i += 1
                            ecx_2 = &var_24_1[4]
                            var_24_1 = ecx_2
                        while (i s< eax_5[1])
                
                if (*arg1 == 0 && arg1[1] == 0x41)
                    int32_t* eax_10 = sub_490ca0(*esi_4)
                    int32_t i_1 = 0
                    int32_t* var_24_2 = eax_10
                    
                    if (eax_10[1] s> 0)
                        char** ecx_6 = nullptr
                        char** var_1c_2 = nullptr
                        
                        do
                            int32_t eax_11 = *eax_10
                            
                            if (sub_4c4480(eax_11, *(ecx_6 + eax_11), *esi_4, &var_10, &var_14, &var_c)
                                    != 0 && esi_4[3] == var_10)
                                int32_t eax_14 = esi_4[4]
                                
                                if (eax_14 == var_14)
                                    int32_t ebx_1 = i_1 - 1
                                    
                                    if (ebx_1 == 0xffffffff)
                                        ebx_1 = var_24_2[1] - 1
                                    
                                    sub_4c1ed0(eax_14, *(*var_24_2 + ebx_1 * 0x10), esi_4, 1f, 0)
                                    int32_t eax_24
                                    eax_24.b = 1
                                    return eax_24
                            
                            eax_10 = var_24_2
                            i_1 += 1
                            ecx_6 = &var_1c_2[4]
                            var_1c_2 = ecx_6
                        while (i_1 s< eax_10[1])
            
            if (*arg1 == 0)
                if (arg1[1] == 0x2b)
                    esi_4[5] = esi_4[5] f* 1.25f
                
                if ((arg1[1] != 0x2b || *arg1 == 0) && arg1[1] == 0x2d)
                    esi_4[5] = esi_4[5] f* 0.800000012f
            
            esi_4[0xd] = esi_4[0xd] f* var_18_1
            esi_4[0x12] = esi_4[0x12] f* var_18_1
            
            if (*arg1 == 0 && arg1[1] == 0x62)
                eax_1.b = data_ce2760 == 0
                data_ce2760 = eax_1.b
                sub_4f4410(esi_4, zx.d(eax_1.b) ^ 1)
        
        if (*arg1 == 3)
            int32_t* ecx_10 = *(arg2 + 0x58)
            
            if (ecx_10 != 0)
                eax_1 = ecx_10[1]
                
                if (eax_1 == 0x19)
                    int32_t* eax_15 = sub_4953d0(ecx_10, &arg1[4])
                    
                    if (sub_44eea0(0x10).b != 0)
                        *(arg2 + 0x64) = eax_15[0x1e]
                        *(arg2 + 0x6c) = arg1[4]
                        *(arg2 + 0x70) = arg1[5]
                        int32_t eax_18
                        eax_18.b = 1
                        *(arg2 + 0x68) = 0
                        return eax_18
                else if (eax_1 == 0x18)
                    sub_4f49a0(arg1[4], arg1[5])
    else if (arg1[1] == 8 && (arg1[2].b & 2) != 0)
        sub_4d51d0()
        int32_t eax_3
        eax_3.b = 1
        return eax_3
    
    eax_1.b = 1
    return eax_1
}
