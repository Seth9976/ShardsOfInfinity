// 函数名称: sub_4edaa0
// 虚拟地址: 0x4edaa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4edaa0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5462d3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_154 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t var_80
    __builtin_memset(&var_80, 0, 0x24)
    int32_t var_14_1 = 0
    int32_t eax_4 = sub_4ed860(arg2, &var_80)
    int32_t* i_2 = nullptr
    int32_t* i_5 = nullptr
    int32_t* i_4 = nullptr
    int32_t var_9c = 0
    int32_t var_98 = 0
    var_14_1.b = 1
    
    if (arg1[1] != 0x12)
        sub_44e4d0(eax_4, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FONT", 
            "c:\ax2017\engine\assetutils.cpp", 0x2e0, "FontGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_5 = sub_4459f0(arg1)
    void* var_84 = eax_5
    int32_t var_8c = 0
    int32_t ecx_2 = *(eax_5 + 0x14)
    int32_t result
    
    if (ecx_2 s<= 0)
    label_4edf29:
        int32_t* i = i_2
        
        if (i != 0)
            do
                int32_t* i_6 = i
                i = i[0x10]
                sub_4ed590(i_6, &var_80)
            while (i != 0)
            
            eax_5 = var_84
            ecx_2 = *(eax_5 + 0x14)
        
        int32_t i_1 = 0
        
        if (ecx_2 s> 0)
            int32_t ecx_20 = 0
            
            do
                void* eax_35 = *(eax_5 + 0x18)
                void* eax_36 = eax_35 + ecx_20
                
                if (eax_35 != neg.d(ecx_20))
                    int32_t var_3c
                    *(eax_36 + 4) = var_3c
                    int32_t var_38
                    *(eax_36 + 8) = var_38
                
                eax_5 = var_84
                i_1 += 1
                ecx_20 += 0x1c
            while (i_1 s< *(eax_5 + 0x14))
            
            i_2 = i_5
        
        sub_4ed860(&var_80, arg2)
        sub_484240(arg1)
        var_14_1.b = 3
        
        while (i_2 != 0)
            int32_t* i_7 = i_2
            i_2 = i_2[0x10]
            sub_45d050(i_7, 0x48)
        
        sub_4ee0a0(&var_80)
        result = 2
    else
        int32_t var_50
        int32_t edi = var_50
        int32_t edx_1 = 0
        int32_t var_88 = 0
        
        while (true)
            int32_t** esi_2 = *(eax_5 + 0x18) + edx_1
            int32_t** var_b0_1 = esi_2
            int32_t var_cc
            int32_t eax_6 = sub_4ed3c0(eax_5, &var_cc, *esi_2, edi)
            int32_t var_90_1 = 0
            
            if (esi_2[4] s> 0)
                int32_t edx_3 = 0
                int32_t var_c4
                int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(var_c4))
                int32_t var_94_1 = 0
                
                while (true)
                    void* ecx_5 = esi_2[5] + edx_3
                    float xmm1_1 = *(ecx_5 + 0x10)
                    
                    if (xmm0_2 f< xmm1_1)
                        sub_44e4d0(eax_6, &data_5559b1, "pGlyph->rectGlyph.y1 <= fontImageSpec.height", 
                            "c:\ax2017\engine\editor\atlasmaker.cpp", 0x39c, "AtlasMakerPlaceAssetFont")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t** var_110 = esi_2
                    int32_t var_10c_1 = var_8c
                    void* var_108_1 = ecx_5
                    int64_t var_ec_1
                    __builtin_memset(&var_ec_1, 0, 0x1c)
                    float xmm1_2
                    
                    if (0f <= xmm1_1)
                        xmm1_2 = xmm1_1 + 0.5f
                    else
                        xmm1_2 = xmm1_1 - 0.5f
                    
                    float xmm0_3 = *(ecx_5 + 0xc)
                    float xmm0_4
                    
                    if (0f <= xmm0_3)
                        xmm0_4 = xmm0_3 + 0.5f
                    else
                        xmm0_4 = xmm0_3 - 0.5f
                    
                    float xmm0_5 = *(ecx_5 + 8)
                    float xmm0_6
                    
                    if (0 f<= xmm0_5)
                        xmm0_6 = xmm0_5 + 0.5f
                    else
                        xmm0_6 = xmm0_5 - 0.5f
                    
                    float xmm0_7 = *(ecx_5 + 4)
                    float xmm0_8
                    
                    if (0 f<= xmm0_7)
                        xmm0_8 = xmm0_7 + 0.5f
                    else
                        xmm0_8 = xmm0_7 - 0.5f
                    
                    int32_t var_11c_1 = int.d(xmm0_6)
                    int32_t var_118_1 = int.d(xmm0_4)
                    int32_t var_114_1 = int.d(xmm1_2)
                    int128_t xmm0_9 = int.d(xmm0_8).o
                    float xmm0_10 = *(ecx_5 + 0x14)
                    float xmm0_11
                    
                    if (0 f<= xmm0_10)
                        xmm0_11 = xmm0_10 + 0.5f
                    else
                        xmm0_11 = xmm0_10 - 0.5f
                    
                    float xmm0_12 = *(ecx_5 + 0x18)
                    int32_t var_f4_1 = int.d(xmm0_11)
                    float xmm0_13
                    
                    if (0f <= xmm0_12)
                        xmm0_13 = xmm0_12 + 0.5f
                    else
                        xmm0_13 = xmm0_12 - 0.5f
                    
                    int32_t var_f0_1 = int.d(xmm0_13)
                    sub_4ed6f0(&var_110)
                    int32_t eax_11 = xmm0_9.d
                    int32_t esi_5 = xmm0_9:8.d - eax_11
                    int32_t eax_12 = xmm0_9:4.d
                    int32_t edi_3 = xmm0_9:0xc.d - eax_12
                    
                    if (esi_5 == 0 || edi_3 == 0)
                        int128_t var_104_2 = data_5725c4
                    else
                        int32_t var_bc
                        int32_t edx_6 = eax_11 * sub_4dd620(var_bc)
                        int32_t var_c0
                        int32_t var_13c_1 = var_c0
                        int32_t var_138_1 = var_bc
                        int32_t var_144_1 = esi_5
                        int32_t var_148 = var_cc + eax_12 * var_c0 + edx_6
                        int32_t var_140_1 = edi_3
                        int32_t var_130_1 = esi_5
                        int32_t var_12c_1 = edi_3
                        int32_t var_124_1 = var_50
                        int32_t eax_19 = sub_4dd730(esi_5, var_50)
                        int32_t var_128_1 = eax_19
                        void* eax_21 = sub_45cd70(sub_4dd7f0(eax_19, edi_3, esi_5, var_50))
                        void* var_134 = eax_21
                        sub_4ddd60(&var_148, &var_134)
                        int64_t var_dc_1
                        var_dc_1.d = eax_21
                        int64_t var_e4
                        var_e4.d = esi_5
                        var_e4:4.d = edi_3
                        int32_t eax_23 = sub_4ed020(&var_e4, &var_80)
                        
                        if (eax_23 == 1)
                            var_14_1.b = 2
                            int32_t* i_3 = i_4
                            
                            while (i_3 != 0)
                                int32_t* i_8 = i_3
                                i_3 = i_3[0x10]
                                sub_45d050(i_8, 0x48)
                            
                            sub_4ee0a0(&var_80)
                            result = 1
                            break
                        
                        int32_t var_d4
                        
                        if (eax_23 != 2)
                            if (eax_23 != 0)
                                sub_44e4d0(eax_23, &data_5559b1, "Halt", 
                                    "c:\ax2017\engine\editor\atlasmaker.cpp", 0x3c7, 
                                    "AtlasMakerPlaceAssetFont")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t eax_29 = var_dc_1.d
                            
                            if (eax_29 != 0)
                                _aligned_free_base(eax_29)
                            
                            int32_t eax_30 = var_dc_1:4.d
                            var_dc_1.d = 0
                            var_ec_1.d = eax_30
                            var_ec_1:4.d = var_d4
                        else
                            int32_t* eax_24 = sub_45cfa0(0x1c)
                            eax_24[3] += 1
                            int32_t* ecx_16 = *eax_24
                            
                            if (ecx_16 == 0)
                                sub_45ce30(eax_24)
                                ecx_16 = *eax_24
                            
                            int128_t xmm0_14 = var_e4.o
                            *eax_24 = *ecx_16
                            int128_t var_70_1
                            void* eax_26 = var_70_1:0xc.d
                            *ecx_16 = xmm0_14
                            ecx_16[4] = var_d4
                            ecx_16[5] = 0
                            ecx_16[6] = eax_26
                            int32_t var_60_1
                            
                            if (eax_26 == 0)
                                var_60_1 += 1
                                var_70_1:8.d = ecx_16
                                var_70_1:0xc.d = ecx_16
                                var_ec_1.d = var_dc_1:4.d
                                var_ec_1:4.d = var_d4
                            else
                                var_60_1 += 1
                                *(eax_26 + 0x14) = ecx_16
                                var_70_1:0xc.d = ecx_16
                                var_ec_1.d = var_dc_1:4.d
                                var_ec_1:4.d = var_d4
                    
                    sub_4f1ab0(&i_4, &var_110)
                    esi_2 = var_b0_1
                    eax_6 = var_90_1 + 1
                    edx_3 = var_94_1 + 0x24
                    var_90_1 = eax_6
                    var_94_1 = edx_3
                    xmm0_2 = _mm_cvtepi32_ps(zx.o(var_c4))
                    
                    if (eax_6 s>= esi_2[4])
                        edi = var_50
                        goto label_4edeec
                
                break
            
        label_4edeec:
            int32_t eax_32 = var_cc
            
            if (eax_32 != 0)
                _aligned_free_base(eax_32)
            
            int32_t eax_34 = var_8c + 1
            edx_1 = var_88 + 0x1c
            var_8c = eax_34
            ecx_2 = *(var_84 + 0x14)
            eax_5 = var_84
            var_88 = edx_1
            
            if (eax_34 s>= ecx_2)
                i_2 = i_4
                i_5 = i_2
                goto label_4edf29
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
