// 函数名称: sub_4ad780
// 虚拟地址: 0x4ad780
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4ad780(int32_t arg1, int32_t* arg2, float* arg3, int32_t arg4, int32_t arg5, float arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_WPBDI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_ec = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2[1] != 0x12)
        sub_44e4d0(arg6, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FONT", 
            "c:\ax2017\engine\assetutils.cpp", 0x2e0, "FontGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_4 = sub_4459f0(arg2)
    
    if (*(eax_4 + 0x14) != 0)
        void* edi_1 = *(eax_4 + 0x18)
        
        if (*(edi_1 + 8) != 0)
            void* ecx_2 = *sub_454030(*(edi_1 + 4))
            
            if (*(edi_1 + 8) != *(ecx_2 + 0x28))
                char* eax_7 = arg2[8]
                char* const ecx_3 = &data_5559b1
                
                if (eax_7 != 0)
                    ecx_3 = eax_7
                
                char* const var_f0_1 = ecx_3
                sub_44e260("didn't find asset in atlas forcing a reimport %s")
                sub_48da50(sub_48d180(arg2), 1, arg2, 0)
    
    float var_5c
    int32_t* var_f0_2 = &var_5c
    int32_t* result_1
    sub_42ce10(&result_1, arg2, 0x12)
    int32_t var_8_1 = 0
    void* eax_9 = data_cdf424
    float edx_1 = var_5c
    float xmm0 = *(eax_9 + 0x20)
    float xmm0_1 = *(eax_9 + 0x24)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(edx_1 i+ 0x14) s> 0)
        int32_t esi_1 = arg5
        int32_t edi_2 = arg4
        
        do
            float var_70_1 = 0f
            int32_t* ebx_1 = *(edx_1 i+ 0x18) + i * 0x1c
            int32_t* eax_11 = ebx_1[1]
            int32_t* ecx_9 = *ebx_1
            
            if (eax_11 != 0)
                ecx_9 = eax_11
            
            if (ecx_9[1] != 3)
                sub_44e4d0(eax_11, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "c:\ax2017\engine\texture.h", 0x84, "TextureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t* ecx_10 = *sub_4459f0(ecx_9)
            
            if (ecx_10 == 0)
                break
            
            int32_t eax_13 = *ecx_10
            edx_1 = var_5c
            double xmm0_4[0x2] =
                _mm_cvtepi32_pd(zx.q(eax_13)) f+ *((eax_13 u>> 0x1f << 3) + &data_59e4f0)
            int32_t eax_15 = ecx_10[1]
            float xmm1_1 = 1f / _mm_cvtpd_ps(xmm0_4)
            double xmm0_7 = _mm_cvtepi32_pd(zx.q(eax_15))
            bool cond:1_1 = *(edx_1 i+ 0x14) != 2
            int32_t eax_17 = edi_2
            float xmm1_2 = 1f / _mm_cvtpd_ps(xmm0_7 f+ *((eax_15 u>> 0x1f << 3) + &data_59e4f0))
            
            if (not(cond:1_1) && i_1 == 0)
                eax_17 = esi_1
            
            bool cond:2_1 = ebx_1[6].b != 0
            float var_90 = data_5c77bc
            float var_8c_1 = data_5c77c0
            
            if (not(cond:2_1))
                uint8_t var_66_1 = (eax_17 u>> 0x10).b
                uint8_t var_65_1 = (eax_17 u>> 0x18).b
                uint8_t var_67_1 = (eax_17 u>> 8).b
                var_90 = eax_17.b.d
                int32_t var_8c_2 = 0
            
            float ebx_2 = arg6
            float ecx_12
            ecx_12.b = *arg6
            
            while (ecx_12.b != 0)
                float eax_19
                
                if (ecx_12.b u>= 0x80)
                    eax_19.b = ecx_12.b
                    eax_19.b &= 0xe0
                    
                    if (eax_19.b != 0xc0)
                        eax_19.b = ecx_12.b
                        eax_19.b &= 0xf0
                        
                        if (eax_19.b != 0xe0)
                            ecx_12.b &= 0xf8
                            
                            if (ecx_12.b != 0xf0)
                                sub_44e4d0(eax_19, &data_5559b1, "!Xutf8_is_invalid_lead_char(str)", 
                                    "c:\ax2017\engine\xutf8.cpp", 0x212, "Xutf8_peek_next")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                
                float var_60 = ebx_2
                uint32_t eax_20 = sub_4afed0(&var_60)
                int32_t* eax_21
                int32_t* ecx_19
                eax_21, ecx_19 = sub_4ad6f0(eax_20, ebx_1, var_5c, eax_20)
                float var_58
                
                if (eax_21 != 0)
                    float xmm3_2 = eax_21[1] f* xmm1_1
                    float xmm1_4 = eax_21[2] f* xmm1_2
                    float xmm6_1 = eax_21[3]
                    float xmm7_1 = eax_21[4]
                    float xmm2_2 = xmm6_1 * xmm1_1
                    float xmm6_2 = xmm6_1 f- eax_21[1]
                    float xmm7_2 = xmm7_1 f- eax_21[2]
                    float xmm0_11 = xmm7_1 * xmm1_2
                    float var_cc = xmm3_2
                    float var_34 = xmm3_2
                    float var_24_1 = xmm3_2
                    float var_c8_1 = xmm1_4
                    float var_30_1 = xmm1_4
                    float var_28_1 = xmm1_4
                    float xmm3_5 = eax_21[5] f+ var_70_1 + xmm0
                    float xmm1_6 = eax_21[6] f+ xmm0_1
                    float var_c4_1 = xmm2_2
                    float xmm5_1 = arg3[3]
                    float xmm4_2 = *arg3 * xmm3_5
                    float var_2c_1 = xmm2_2
                    float var_1c_1 = xmm2_2
                    float xmm2_4 = arg3[1] * xmm1_6
                    float xmm7_4 = xmm7_2 + xmm1_6 + xmm0_1
                    float var_c0_1 = xmm0_11
                    float var_20_1 = xmm0_11
                    float var_18_1 = xmm0_11
                    var_58 = xmm6_2 + xmm3_5 + xmm0
                    float xmm6_5 = arg3[2]
                    float xmm7_5 = arg3[4]
                    var_60 = xmm4_2 + xmm2_4 + xmm6_5
                    float xmm0_16 = xmm7_5 * xmm1_6
                    float xmm5_2 = xmm5_1 * var_58
                    float xmm1_8 = xmm5_1 * xmm3_5
                    float xmm3_6 = arg3[5]
                    float xmm4_5 = xmm1_8 + xmm0_16 + xmm3_6
                    float var_54 = var_60
                    float var_50_1 = xmm4_5
                    float xmm4_9 = *arg3 * var_58
                    float xmm0_18 = arg3[1] * xmm7_4
                    float xmm4_11 = xmm4_9 + xmm2_4 + xmm6_5
                    float xmm2_7 = xmm5_2 + xmm0_16 + xmm3_6
                    var_58 = xmm0_18
                    float var_64 = xmm4_11
                    float var_4c_1 = xmm4_11
                    float var_48_1 = xmm2_7
                    float xmm2_9 = xmm0_18 + xmm4_2
                    var_58 = xmm2_9
                    float xmm4_13 = xmm2_9 + xmm6_5
                    float xmm7_6 = xmm7_5 * xmm7_4
                    float var_44_1 = xmm4_13
                    float var_3c_1 = xmm0_18 + xmm4_9 + xmm6_5
                    float xmm2_13 = xmm7_6 + xmm1_8 + xmm3_6
                    float var_38_1 = xmm7_6 + xmm5_2 + xmm3_6
                    float var_40_1 = xmm2_13
                    int32_t var_f0_4
                    
                    if (*(data_cdf424 + 0x38) == 0)
                        var_f0_4 = 0
                        sub_47c490(&var_90, &var_34, &var_54, &var_90, ecx_19, ecx_9)
                    else
                        xmm4_5 - xmm2_7
                        int32_t eax_23
                        eax_23:1.b = (xmm4_5 == xmm2_7 ? 1 : 0) << 6
                            | (is_unordered.d(xmm4_5, xmm2_7) ? 1 : 0) << 2 | (xmm4_5 < xmm2_7 ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2)
                            var_f0_4 = 0
                            sub_47c490(&var_90, &var_34, &var_54, &var_90, ecx_19, ecx_9)
                        else
                            float xmm0_21 = var_60
                            xmm0_21 - xmm4_13
                            eax_23:1.b = (xmm0_21 == xmm4_13 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_21, xmm4_13) ? 1 : 0) << 2
                                | (xmm0_21 < xmm4_13 ? 1 : 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_4)
                                var_f0_4 = 0
                                sub_47c490(&var_90, &var_34, &var_54, &var_90, ecx_19, ecx_9)
                            else
                                float var_dc = xmm0_21
                                float var_d8_1 = xmm4_5
                                float var_d4_1 = var_64
                                float var_d0_1 = xmm2_13
                                sub_47d1f0(&var_cc, &var_dc, ecx_9, &var_cc, &var_90, 0)
                    char ecx_22 = *ebx_2
                    var_60 = ebx_2
                    
                    if (ecx_22 u>= 0x80)
                        int32_t eax_25
                        eax_25.b = ecx_22
                        eax_25.b &= 0xe0
                        
                        if (eax_25.b != 0xc0)
                            eax_25.b = ecx_22
                            eax_25.b &= 0xf0
                            
                            if (eax_25.b != 0xe0 && (ecx_22 & 0xf8) != 0xf0)
                                sub_44e4d0(eax_25, &data_5559b1, "!Xutf8_is_invalid_lead_char(str)", 
                                    "c:\ax2017\engine\xutf8.cpp", 0x218, "Xutf8_next")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                    
                    sub_4afed0(&var_60)
                    ebx_2 = var_60
                    char ecx_25 = *ebx_2
                    
                    if (ecx_25 u>= 0x80)
                        uint32_t eax_27
                        eax_27.b = ecx_25
                        eax_27.b &= 0xe0
                        
                        if (eax_27.b != 0xc0)
                            eax_27.b = ecx_25
                            eax_27.b &= 0xf0
                            
                            if (eax_27.b != 0xe0 && (ecx_25 & 0xf8) != 0xf0)
                                sub_44e4d0(eax_27, &data_5559b1, "!Xutf8_is_invalid_lead_char(str)", 
                                    "c:\ax2017\engine\xutf8.cpp", 0x212, "Xutf8_peek_next")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                    
                    var_64 = ebx_2
                    eax_19 = sub_4afed0(&var_64)
                    var_64 = eax_19
                    var_58 = eax_21[7]
                    
                    if (eax_19 != 0)
                        int32_t j = eax_21[8]
                        
                        if (j != 0xffffffff)
                            eax_19 = var_5c
                            
                            if (j s< *(eax_19 i+ 0x1c))
                                eax_19 = *(eax_19 i+ 0x20) + j * 0xc
                                
                                do
                                    esi_1 = arg5
                                    
                                    if (*eax_19 != eax_20)
                                        break
                                    
                                    edi_2 = arg4
                                    
                                    if (*(eax_19 i+ 4) == var_64)
                                        var_58 += *(eax_19 i+ 8)
                                        break
                                    
                                    j += 1
                                    eax_19 += 0xc
                                while (j s< *(var_5c i+ 0x1c))
                    
                    edx_1 = var_5c
                    var_70_1 = _mm_cvtepi32_ps(zx.o(var_58)) f+ *(edx_1 i+ 0x10) + var_70_1
                else
                    ecx_19.b = *ebx_2
                    var_58 = ebx_2
                    
                    if (ecx_19.b u>= 0x80)
                        eax_21.b = ecx_19.b
                        eax_21.b &= 0xe0
                        
                        if (eax_21.b != 0xc0)
                            eax_21.b = ecx_19.b
                            eax_21.b &= 0xf0
                            
                            if (eax_21.b != 0xe0)
                                ecx_19.b &= 0xf8
                                
                                if (ecx_19.b != 0xf0)
                                    sub_44e4d0(eax_21, &data_5559b1, 
                                        "!Xutf8_is_invalid_lead_char(str)", 
                                        "c:\ax2017\engine\xutf8.cpp", 0x218, "Xutf8_next")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                    
                    eax_19, ecx_12 = sub_4afed0(&var_58)
                    ebx_2 = var_58
                    edx_1 = var_5c
                ecx_12.b = *ebx_2
            
            i = i_1 + 1
            i_1 = i
        while (i s< *(edx_1 i+ 0x14))
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
