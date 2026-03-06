// 函数名称: sub_475a20
// 虚拟地址: 0x475a20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_475a20(int32_t arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    void* edx
    ecx, edx = __alloca_probe(0x1118)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t var_105c = 0
    int32_t var_1078 = ecx
    int32_t var_1010[0x3f8]
    sub_46ab50(&var_105c, &var_1010, data_5cd9fc, &var_105c, &data_5cda2c, data_5cea2c)
    int32_t eax_5 = var_105c << 2 s>> 2
    int32_t eax_6 = sub_429140(eax_5, &var_1010[var_105c], &var_1010, eax_5, sub_46ac60)
    int32_t* esi = data_5cd9f8
    char const* const var_1c_1
    int32_t var_18_2
    char const* const var_14_2
    char* ecx_4
    
    if (esi[1] == 0x22)
        eax_6 = sub_4459f0(esi)
        int32_t var_106c_1 = eax_6
        
        if (ecx == 0)
            if (edx == 0)
                goto label_475b2b
            
            var_14_2 = "UI2Move"
            var_18_2 = 0x2d3c
            var_1c_1 = "c:\ax2017\engine\ui2.cpp"
            ecx_4 = "itemInsert == NULL"
        else if (edx == 0 || *(edx + 0x6a4) == esi)
        label_475b2b:
            uint32_t var_10f8[0x4]
            eax_6 = _memset(&var_10f8, 0, 0x54)
            void* esi_1 = data_5c99a0
            int128_t xmm0_5
            
            if (ecx == 1)
                var_10f8 = *(edx + 0x6dc)
                int128_t var_10e8_1 = *(edx + 0x6ec)
                int128_t var_10d8_1 = *(edx + 0x6fc)
                int128_t var_10c8_1 = *(edx + 0x70c)
                xmm0_5 = *(edx + 0x71c)
            label_475c4d:
                int128_t var_10b8_1 = xmm0_5
                int32_t var_1068_1
                
                if (edx != 0)
                    var_1068_1 = *(edx + 0x6a8)
                else
                    var_1068_1 = 0xffffffff
                
                eax_6 = 0
                int32_t var_107c_1 = 0
                
                if (var_105c s<= 0)
                label_476127:
                    int32_t* result = sub_45e9a0(&data_5cd9fc)
                    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
                    return result
                
                while (true)
                    int32_t ecx_7 = var_1010[eax_6]
                    
                    if (ecx_7 == 0)
                        goto label_475bd0
                    
                    uint32_t edx_4 = zx.d(ecx_7.w)
                    
                    if (edx_4 u>= data_5c99a4)
                        break
                    
                    eax_6 = edx_4 * 0x1008
                    
                    if (*(eax_6 + esi_1 + 0x1004) != ecx_7)
                        break
                    
                    void* ebx_2 = edx_4 * 0x1008 + esi_1
                    int128_t xmm0_14 = *(*(ebx_2 + 0x63c) * 0x208 + ebx_2 + 0x14)
                    float xmm0_15 = *arg2
                    xmm0_15 f- 0
                    int32_t eax_11
                    eax_11:1.b = (xmm0_15 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_15, 0f) ? 1 : 0) << 2 | (xmm0_15 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    bool p_4
                    
                    if (not(p_2))
                        float xmm0_16 = arg2[1]
                        xmm0_16 f- 0
                        eax_11:1.b = (xmm0_16 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_16, 0f) ? 1 : 0) << 2 | (xmm0_16 < 0f ? 1 : 0)
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    float xmm1_3
                    float xmm2_3
                    
                    if (p_2 || p_4)
                        xmm1_3 = *arg2
                        xmm2_3 = arg2[1]
                    else
                        float xmm0_17 = 1f f/ data_5cda1c
                        void* eax_12 = *(ebx_2 + 0x784)
                        xmm1_3 = (*(eax_12 + 0x6dc) f- var_10f8[0]) * xmm0_17
                        xmm2_3 = (*(eax_12 + 0x6e0) f- var_10f8[1]) * xmm0_17
                    
                    void var_1108
                    int128_t* var_14_4 = &var_1108
                    float var_1020 = xmm1_3 f+ xmm0_14.d
                    float var_101c_1 = xmm2_3 f+ xmm0_14:4.d
                    float var_1018_1 = xmm0_14:8.d + xmm1_3
                    float var_1014_1 = xmm0_14:0xc.d + xmm2_3
                    int128_t xmm0_26 = *sub_47bc00(&var_1108, edx_4, &var_1020, var_14_4)
                    *(ebx_2 + 0x64c) = 0
                    int128_t var_1050 = xmm0_26
                    void* eax_15 = sub_46b120(ebx_2, 0x71)
                    
                    if (eax_15 == 0)
                        sub_44e4d0(eax_15, &data_5559b1, "&attribMap", "c:\ax2017\engine\ui2.cpp", 
                            0x1c8e, "AssignPropertyRect")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    sub_46b0a0(eax_15, 0x71, eax_15, &var_1050)
                    int32_t* eax_16 = sub_45d320(ebx_2)
                    int32_t var_14_6 = 0x68
                    int32_t var_18_4 = data_dff67c
                    int32_t* eax_17 = sub_45d320(ebx_2)
                    int32_t* eax_18 = sub_4b8ac0(eax_17, eax_17, &data_5b1d6c, var_18_4, var_14_6)
                    
                    if (eax_18 != 0)
                        int32_t i = 0
                        
                        if (eax_18[1] s> 0)
                            int32_t esi_2 = 0
                            
                            do
                                int32_t eax_19 = *eax_18
                                int32_t ecx_14 = 0
                                int32_t edx_6 = *(esi_2 + eax_19 + 4)
                                
                                if (edx_6 s> 0)
                                    int32_t* eax_20 = *(esi_2 + eax_19 + 8)
                                    
                                    do
                                        if (*eax_20 == 0x71)
                                            int32_t* eax_21
                                            int32_t edx_8
                                            eax_21, edx_8 = sub_4b8ac0(eax_20, eax_16, &data_5b1d6c, 
                                                data_e4712c, 0x71)
                                            float var_1030 = *eax_21 + xmm1_3
                                            float var_102c_1 = eax_21[1] f+ xmm2_3
                                            float var_1028_1 = eax_21[2] f+ xmm1_3
                                            float var_1024_1 = eax_21[3] f+ xmm2_3
                                            int128_t var_1040
                                            char* var_14_8 = &var_1040
                                            int32_t var_18_6 = 0x71
                                            void var_1118
                                            var_1040 =
                                                *sub_47bc00(&var_1118, edx_8, &var_1030, &var_1118)
                                            int128_t* eax_26 = sub_4b8ac0(
                                                sub_4b8610(&var_1040, eax_16, &data_5b1d6c, var_18_6, 
                                                    var_14_8), 
                                                eax_16, &data_5b1d6c, data_e4712c, 0x71)
                                            *eax_26 = var_1040
                                            
                                            if (eax_26 != 0)
                                                break
                                            
                                            sub_44e4d0(eax_26, &data_5559b1, 
                                                "memcpy(val, &value, sizeof(value))", 
                                                "c:\ax2017\engine\ui2.cpp", 0x1c5d, 
                                                "AssignPropertyRect")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        
                                        ecx_14 += 1
                                        eax_20 = &eax_20[2]
                                    while (ecx_14 s< edx_6)
                                
                                i += 1
                                esi_2 += 0xc
                            while (i s< eax_18[1])
                    
                    *(ebx_2 + 0x6a8)
                    int32_t var_108c
                    int32_t var_1088
                    int32_t var_1084
                    int32_t var_1074
                    int32_t var_1070
                    int32_t var_1064
                    char eax_27 = sub_475660(var_1068_1, var_1078, &var_1084, &var_1074, &var_1064, 
                        &var_108c, &var_1088, &var_1070)
                    esi_1 = data_5c99a0
                    
                    if (eax_27 != 0)
                        int32_t ebx_5 = var_1084
                        int32_t eax_29 = var_1074 - ebx_5
                        int32_t edi_1 = var_108c
                        int32_t eax_31 = var_1088 - edi_1
                        void* edx_13 = nullptr
                        
                        while (true)
                            if (edx_13 != 0)
                                edx_13 += 0x1008
                            else
                                edx_13 = esi_1
                            
                            void* eax_33 = data_5c99a4 * 0x1008 + esi_1
                            
                            if (edx_13 u>= eax_33)
                                break
                            
                            while (true)
                                if ((*(edx_13 + 0x1004) & 0xffff0000) != 0)
                                    if (*(edx_13 + 0x6a4) != esi)
                                        break
                                    
                                    int32_t ecx_18 = *(edx_13 + 0x6a8)
                                    
                                    if (ecx_18 u>= ebx_5 && ecx_18 u< var_1064 + ebx_5)
                                        ecx_18 += eax_29
                                        *(edx_13 + 0x6a8) = ecx_18
                                    else if (ecx_18 u>= edi_1 && ecx_18 u< var_1070 + edi_1)
                                        ecx_18 += eax_31
                                        *(edx_13 + 0x6a8) = ecx_18
                                    
                                    int32_t ecx_20 = *(*var_106c_1 + ecx_18 * 0xc + 8)
                                    int32_t eax_44 = *(edx_13 + 0x7f4)
                                    
                                    if (eax_44 s>= ecx_20)
                                        eax_44 = ecx_20
                                    
                                    *(edx_13 + 0x7f4) = eax_44
                                    esi_1 = data_5c99a0
                                    break
                                
                                edx_13 += 0x1008
                                
                                if (edx_13 u>= eax_33)
                                    goto label_476006
                        
                    label_476006:
                        int32_t i_1 = 0
                        
                        if (data_5cea2c s> 0)
                            do
                                int32_t ecx_17 = (&data_5cda2c)[i_1]
                                
                                if (ecx_17 u>= ebx_5 && ecx_17 u< var_1064 + ebx_5)
                                    (&data_5cda2c)[i_1] = ecx_17 + eax_29
                                else if (ecx_17 u>= edi_1 && ecx_17 u< var_1070 + edi_1)
                                    (&data_5cda2c)[i_1] = eax_31 + ecx_17
                                
                                i_1 += 1
                            while (i_1 s< data_5cea2c)
                            
                            esi_1 = data_5c99a0
                        
                        var_1078 = 2
                        var_1068_1 = var_1064 - 1 + var_1074
                    
                    eax_6 = var_107c_1 + 1
                    var_107c_1 = eax_6
                    
                    if (eax_6 s>= var_105c)
                        goto label_476127
                
                goto label_47613d
            
            if (ecx == 2)
                int128_t* eax_8 = *(edx + 0x784) + 0x6dc
                var_10f8 = *eax_8
                int128_t var_10e8_2 = eax_8[1]
                int128_t var_10d8_2 = eax_8[2]
                int128_t var_10c8_2 = eax_8[3]
                xmm0_5 = eax_8[4]
                goto label_475c4d
            
            int32_t ecx_6 = data_5cd9fc
            
            if (ecx_6 != 0)
                uint32_t edx_3 = zx.d(ecx_6.w)
                
                if (edx_3 u< data_5c99a4)
                    eax_6 = edx_3 * 0x1008
                    
                    if (*(eax_6 + esi_1 + 0x1004) != ecx_6)
                        goto label_47613d
                    
                    int32_t eax_9 = edx_3 * 0x1008
                    var_10f8 = *(eax_9 + esi_1 + 0x6dc)
                    int128_t var_10e8_3 = *(eax_9 + esi_1 + 0x6ec)
                    int128_t var_10d8_3 = *(eax_9 + esi_1 + 0x6fc)
                    int128_t var_10c8_3 = *(eax_9 + esi_1 + 0x70c)
                    xmm0_5 = *(eax_9 + esi_1 + 0x71c)
                    goto label_475c4d
                
            label_47613d:
                var_14_2 = "DataArray<struct UI2>::DataArrayGet"
                ecx_4 = "DataArrayTryToGet(id) != NULL"
                var_18_2 = 0x6d
            else
            label_475bd0:
                var_14_2 = "DataArray<struct UI2>::DataArrayGet"
                var_18_2 = 0x6c
                ecx_4 = "id != DATAID_NULL"
            
            var_1c_1 = "c:\ax2017\engine\dataarray.h"
        else
            var_14_2 = "UI2Move"
            var_18_2 = 0x2d40
            var_1c_1 = "c:\ax2017\engine\ui2.cpp"
            ecx_4 = "itemInsert->sourceAsset == sourceAsset"
    else
        var_14_2 = "UI2DefGet"
        var_18_2 = 0x623
        var_1c_1 = "c:\ax2017\engine\ui2.cpp"
        ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
    
    sub_44e4d0(eax_6, &data_5559b1, ecx_4, var_1c_1, var_18_2, var_14_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
