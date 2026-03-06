// 函数名称: sub_4c4160
// 虚拟地址: 0x4c4160
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c4160(int32_t* arg1, void** arg2)
{
    // 第一条实际指令: int32_t eax_1 = arg1[4] - 1
    int32_t eax_1 = arg1[4] - 1
    float xmm1_1 = _mm_cvtepi32_ps(zx.o(eax_1))
    int32_t esi_1 = int.d(xmm1_1 f* arg1[2]) + arg1[3]
    int32_t ebx_1 = int.d(arg1[1] f* xmm1_1) + arg1[3]
    int32_t* ecx = *arg1
    
    if (ecx[1] != 0x18)
        sub_44e4d0(eax_1, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
            "c:\ax2017\engine\assetutils.cpp", 0x2e6, "FlanimGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_2 = sub_4459f0(ecx)
    int32_t i_4 = 0
    int32_t i_5 = 0
    bool p_2
    
    if (esi_1 == ebx_1)
        float xmm0_4 = arg1[2]
        xmm0_4 f- 0
        int32_t* eax_3
        eax_3:1.b = (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2
            | (xmm0_4 < 0f ? 1 : 0)
        p_2 = unimplemented  {test ah, 0x44}
    
    if (esi_1 != ebx_1 || p_2)
        int32_t i = 0
        
        if (*(eax_2 + 0xc) s> 0)
            int32_t eax_6 = 0
            int32_t var_18 = 0
            void** var_c_2 = arg2
            
            do
                void* ecx_6 = *(eax_2 + 8) + eax_6
                int32_t eax_7 = *(ecx_6 + 4)
                
                if (esi_1 s< eax_7 && ebx_1 s>= eax_7)
                label_4c4242:
                    void** eax_8 = var_c_2
                    i_4 += 1
                    var_c_2 = &var_c_2[5]
                    *eax_8 = ecx_6
                    
                    if (i_4 == 0x10)
                        break
                else if (eax_7 == 0 && (esi_1 == 0 || esi_1 s> ebx_1))
                    goto label_4c4242
                
                i += 1
                eax_6 = var_18 + 0x14
                var_18 = eax_6
            while (i s< *(eax_2 + 0xc))
            
            i_5 = i_4
    else
        int32_t i_1 = 0
        
        if (*(eax_2 + 0xc) s> 0)
            int32_t eax_4 = 0
            int32_t var_1c_1 = 0
            void** var_c_1 = arg2
            
            do
                void* ecx_3 = *(eax_2 + 8) + eax_4
                
                if (esi_1 == *(ecx_3 + 4))
                    void** eax_5 = var_c_1
                    i_4 += 1
                    var_c_1 = &var_c_1[5]
                    i_5 = i_4
                    *eax_5 = ecx_3
                    
                    if (i_4 == 0x10)
                        break
                    
                    eax_4 = var_1c_1
                
                i_1 += 1
                eax_4 += 0x14
                var_1c_1 = eax_4
            while (i_1 s< *(eax_2 + 0xc))
    
    void var_2c
    int32_t xmm0_5[0x4] = sub_4c1f90(&var_2c, arg1[4], arg1[3], arg1[1], &var_2c)
    
    if (*(arg1 + 0x8d) != 0)
        int32_t var_24_1 = 0
    
    if (i_4 s<= 0)
        return i_4
    
    int32_t i_3 = i_4
    void* ebx_4 = &arg2[4]
    int32_t i_2
    
    do
        int32_t* esi_2 = *(ebx_4 - 0x10)
        
        if (esi_2[3] == 0)
            void* eax_11
            int32_t xmm0_6[0x4]
            eax_11, xmm0_6 = _strstr(xmm0_5, *esi_2, "sound_play:")
            
            if (eax_11 == 0)
                void* eax_13
                int32_t xmm0_7[0x4]
                eax_13, xmm0_7 = _strstr(xmm0_6, *esi_2, "sound_start:")
                
                if (eax_13 == 0)
                    void* eax_15
                    int32_t xmm0_8[0x4]
                    eax_15, xmm0_8 = _strstr(xmm0_7, *esi_2, "sound_stop:")
                    
                    if (eax_15 == 0)
                        void* eax_17
                        int32_t xmm0_9[0x4]
                        eax_17, xmm0_9 = _strstr(xmm0_8, *esi_2, "particle_play:")
                        
                        if (eax_17 == 0)
                            void* eax_19
                            int32_t xmm0_10[0x4]
                            eax_19, xmm0_10 = _strstr(xmm0_9, *esi_2, "particle_start:")
                            
                            if (eax_19 == 0)
                                void* eax_21
                                eax_21, xmm0_5 = _strstr(xmm0_10, *esi_2, "particle_stop:")
                                
                                if (eax_21 == 0)
                                    esi_2[3] = 1
                                else
                                    esi_2[3] = 6
                                    int32_t* eax_22
                                    eax_22, xmm0_5 = sub_48d5b0(eax_21 + 0xe, 0x19)
                                    esi_2[4] = eax_22
                            else
                                esi_2[3] = 5
                                int32_t* eax_20
                                eax_20, xmm0_5 = sub_48d5b0(eax_19 + 0xf, 0x19)
                                esi_2[4] = eax_20
                        else
                            esi_2[3] = 7
                            int32_t* eax_18
                            eax_18, xmm0_5 = sub_48d5b0(eax_17 + 0xe, 0x19)
                            esi_2[4] = eax_18
                    else
                        esi_2[3] = 3
                        int32_t* eax_16
                        eax_16, xmm0_5 = sub_48d5b0(eax_15 + 0xb, 0x15)
                        esi_2[4] = eax_16
                else
                    esi_2[3] = 2
                    int32_t* eax_14
                    eax_14, xmm0_5 = sub_48d5b0(eax_13 + 0xc, 0x15)
                    esi_2[4] = eax_14
            else
                esi_2[3] = 4
                int32_t* eax_12
                eax_12, xmm0_5 = sub_48d5b0(eax_11 + 0xb, 0x15)
                esi_2[4] = eax_12
        
        int32_t edx_2 = *(*(ebx_4 - 0x10) + 8)
        
        if (edx_2 != 0xffffffff)
            float var_5c
            sub_4c2ef0(&var_2c, edx_2, eax_2, &var_2c, &var_5c)
            float xmm2_1 = arg1[8]
            float xmm3_1 = arg1[0xd]
            float var_58
            xmm0_5 = xmm3_1 * var_58 f+ arg1[0xf]
            *(ebx_4 - 0xc) = xmm2_1 * var_5c f+ arg1[0xb]
            float var_54
            *(ebx_4 - 4) = xmm2_1 * var_54
            *(ebx_4 - 8) = xmm0_5
            float var_50
            *ebx_4 = xmm3_1 * var_50
        
        ebx_4 += 0x14
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    return i_5
}
