// 函数名称: sub_492f40
// 虚拟地址: 0x492f40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_492f40(int32_t arg1, int32_t* arg2, void* arg3, void* arg4, char* arg5, int32_t arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_543860
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = arg4
    int32_t eax_4 = *(ecx + 0x10) - 1
    char* eax_22
    int32_t* eax_9
    int32_t i
    char* const esi_1
    double xmm0_3
    int64_t var_6c
    double var_64
    double var_30
    char* const var_24
    
    if (eax_4 u> 0xf)
    label_4931dc:
        
        if (ecx == data_e47100)
            var_24 = *arg2
            int32_t xmm0_6 = arg2[1]
            int32_t* eax_24 = sub_492ae0(arg3, arg5)
            var_64 = _mm_cvtps_pd(xmm0_6)
            int64_t var_6c_1 = _mm_cvtps_pd(var_24)
            char const* const var_70_1 = "%g %g"
            sub_44f8c0(&eax_24[1], "%g %g")
            eax_22 = sub_492ee0(arg3, arg6)
        else
            int32_t var_74
            
            if (ecx == data_e47104 || ecx == data_e4719c || ecx == data_dff658 || ecx == data_e47124)
                int32_t xmm0_62 = (*arg2).d
                int32_t eax_38 = arg2[2]
                int32_t* eax_39 = sub_492ae0(arg3, arg5)
                var_64 = _mm_cvtps_pd(eax_38)
                int64_t var_6c_5 = _mm_cvtps_pd(var_30.d)
                var_74.q = _mm_cvtps_pd(xmm0_62)
                char const* const var_78_1 = "%g %g %g"
                sub_44f8c0(&eax_39[1], "%g %g %g")
                eax_22 = sub_492ee0(arg3, arg6)
            else
                int32_t var_7c
                int32_t var_50[0x4]
                
                if (ecx == data_e47108 || ecx == data_dff650 || ecx == data_e4712c)
                    var_50 = *arg2
                    int32_t* eax_36 = sub_492ae0(arg3, arg5)
                    int32_t xmm1_7[0x4] = var_50
                    var_64 = fconvert.d(_mm_shuffle_ps(xmm1_7, xmm1_7, 0xff))
                    double var_6c_4 = fconvert.d(_mm_shuffle_ps(xmm1_7, xmm1_7, 0xaa))
                    var_74.q = fconvert.d(_mm_shuffle_ps(xmm1_7, xmm1_7, 0x55))
                    var_7c.q = fconvert.d(xmm1_7)
                    char const* const var_80_1 = "%g %g %g %g"
                    sub_44f8c0(&eax_36[1], "%g %g %g %g")
                    eax_22 = sub_492ee0(arg3, arg6)
                else
                    int32_t var_84
                    
                    if (ecx == data_e4710c)
                        var_50 = *arg2
                        var_30 = *(arg2 + 0x10)
                        int32_t* eax_26 = sub_492ae0(arg3, arg5)
                        int32_t xmm1_1[0x4] = var_50
                        var_64 = _mm_cvtps_pd(arg3)
                        int64_t var_6c_2 = _mm_cvtps_pd(var_30.d)
                        var_74.q = fconvert.d(_mm_shuffle_ps(xmm1_1, xmm1_1, 0xff))
                        var_7c.q = fconvert.d(_mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa))
                        var_84.q = fconvert.d(_mm_shuffle_ps(xmm1_1, xmm1_1, 0x55))
                        double var_8c_1 = fconvert.d(xmm1_1)
                        char const* const var_90_1 = "%g %g %g %g %g %g"
                        sub_44f8c0(&eax_26[1], "%g %g %g %g %g %g")
                        eax_22 = sub_492ee0(arg3, arg6)
                    else if (ecx == data_e47110)
                        float xmm0_27[0x4] = *arg2
                        var_50 = *(arg2 + 0x10)
                        int32_t* eax_28 = sub_492ae0(arg3, arg5)
                        int32_t xmm1_2[0x4] = var_50
                        var_64 = fconvert.d(_mm_shuffle_ps(xmm1_2, xmm1_2, 0xff))
                        double var_6c_3 = fconvert.d(_mm_shuffle_ps(xmm1_2, xmm1_2, 0xaa))
                        var_74.q = fconvert.d(_mm_shuffle_ps(xmm1_2, xmm1_2, 0x55))
                        var_7c.q = fconvert.d(xmm1_2)
                        var_84.q = fconvert.d(_mm_shuffle_ps(xmm0_27, xmm0_27, 0xff))
                        double var_8c_2 = fconvert.d(_mm_shuffle_ps(xmm0_27, xmm0_27, 0xaa))
                        int32_t var_94
                        var_94.q = fconvert.d(_mm_shuffle_ps(xmm0_27, xmm0_27, 0x55))
                        double var_9c_1 = fconvert.d(xmm0_27)
                        char const* const var_a0_1 = "%g %g %g %g %g %g %g %g"
                        sub_44f8c0(&eax_28[1], "%g %g %g %g %g %g %g %g")
                        eax_22 = sub_492ee0(arg3, arg6)
                    else if (ecx != data_dff654)
                        if (ecx == data_e4711c || ecx == data_e47130)
                            var_50 = *arg2
                            goto label_49340e
                        
                        char* edx_17 = arg5
                        
                        if (ecx == data_dff65c)
                            eax_4.w = *arg2
                            var_24.w = eax_4.w
                            var_50[1] = zx.d(eax_4.b)
                            var_50[2] = zx.d(var_24:1.b)
                            var_50[3] = zx.d(*(arg2 + 2))
                            var_64:4.d = &var_50[1]
                            sub_492c50()
                            eax_4 = sub_492ee0(arg3, arg6)
                            ecx = arg4
                            edx_17 = arg5
                        
                        if (ecx != data_e47118)
                            if (ecx != data_e47114)
                                var_64:4.d = "DefParseTreeMakeFromDefinitionArrayableField"
                                var_64.d = 0x6db
                                var_6c:4.d = "c:\ax2017\engine\defparsetree.cpp"
                                sub_44e4d0(eax_4, &data_5559b1, "Halt")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t edi_2 = *arg2
                            int32_t esi_4 = arg2[1]
                            int32_t* eax_34 = sub_492ae0(arg3, edx_17)
                            var_64:4.d = esi_4
                            var_64.d = edi_2
                            var_6c:4.d = "%d %d"
                            var_6c.d = &eax_34[1]
                            sub_44f8c0(var_6c, var_64, eax_2)
                            eax_22 = sub_492ee0(arg3, arg6)
                        else
                            int64_t xmm0_49 = *arg2
                            var_50[3] = arg2[2]
                            var_64:4.d = &var_50[1]
                            var_50[1].q = xmm0_49
                            sub_492c50()
                            eax_22 = sub_492ee0(arg3, arg6)
                    else
                        var_50 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*arg2), 0), 0)
                    label_49340e:
                        var_64:4.d = &var_50
                        sub_492c20()
                        eax_22 = sub_492ee0(arg3, arg6)
    else
        switch (eax_4)
            case 0
                i = *arg2
                
                if ((arg6.b & 2) == 0)
                    if ((arg6.b & 0x20) == 0)
                        goto label_49305b
                    
                    if (arg7 != 0)
                        esi_1 = sub_4b8bc0(arg7, i)
                        goto label_492fed
                    
                    var_64:4.d = "DefParseTreeMakeFromDefinitionInt"
                    var_64.d = 0x608
                    var_6c:4.d = "c:\ax2017\engine\defparsetree.cpp"
                    sub_44e4d0(arg6, &data_5559b1, "pAttribTable")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t* eax_6 = arg7
                
                if (eax_6 == 0)
                    var_64:4.d = "DefParseTreeMakeFromDefinitionInt"
                    var_64.d = 0x600
                    var_6c:4.d = "c:\ax2017\engine\defparsetree.cpp"
                    sub_44e4d0(eax_6, &data_5559b1, "pSymbolTable")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (eax_6[1] == 0)
                label_492fc0:
                    esi_1 = &data_5559b1
                else
                    while (*eax_6 != i)
                        eax_6 = &eax_6[2]
                        
                        if (eax_6[1] == 0)
                            goto label_492fc0
                    
                    esi_1 = eax_6[1]
                
                goto label_492fed
            case 1
                i = sx.d(*arg2)
            label_49305b:
                int32_t* eax_11 = sub_492ae0(arg3, arg5)
                var_64:4.d = i
                var_64.d = &data_5828f8
                var_6c:4.d = &eax_11[1]
                sub_44f8c0()
                eax_22 = sub_492ee0(arg3, arg6)
            case 2
                i = sx.d(*arg2)
                goto label_49305b
            case 3
                int32_t xmm0_1 = *arg2
                eax_9 = sub_492ae0(arg3, arg5)
                xmm0_3 = _mm_cvtps_pd(xmm0_1)
            label_493021:
                var_64 = xmm0_3
                var_6c:4.d = &data_584ae4
                var_6c.d = &eax_9[1]
                sub_44f8c0(var_6c, var_64, eax_2)
                eax_22 = sub_492ee0(arg3, arg6)
            case 4, 5, 6, 8, 0xa, 0xb, 0xc
                goto label_4931dc
            case 7
                esi_1 = *arg2
            label_492fed:
                int32_t* eax_8 = sub_492ae0(arg3, arg5)
                var_64:4.d = esi_1
                sub_44f590(&eax_8[1])
                eax_22 = sub_492ee0(arg3, arg6)
            case 9
                if (*arg2 == 0)
                    var_64:4.d = 0
                    sub_492c00()
                else
                    var_64:4.d = 1
                    sub_492c00()
                
                eax_22 = sub_492ee0(arg3, arg6)
            case 0xd
                int32_t edi_1 = *arg2
                int32_t esi_2 = arg2[1]
                int32_t* eax_13 = sub_492ae0(arg3, arg5)
                var_64:4.d = esi_2
                var_64.d = edi_1
                var_6c:4.d = "%lld"
                var_6c.d = &eax_13[1]
                sub_44f8c0(var_6c, var_64, eax_2)
                eax_22 = sub_492ee0(arg3, arg6)
            case 0xe
                void* eax_15 = *arg2
                char* const esi_3 = &data_5559b1
                char* const var_2c_2 = &data_5559b1
                int32_t var_14_1 = 0
                
                if (eax_15 != 0)
                    char* eax_16 = *(eax_15 + 0x20)
                    var_64:4.d = ecx
                    var_64:4.d = eax_16
                    
                    if (eax_16 != 0 && *eax_16 != 0)
                        char* eax_17 = sub_44f000(&var_64:4)
                        *(eax_17 + 4) += 1
                    
                    var_64:4.d = sub_490030(&var_24)
                    var_14_1.b = 1
                    sub_44f510(&var_30:4)
                    var_14_1.b = 2
                    
                    if (data_cdf414 != 0)
                        char* eax_19 = var_24
                        
                        if (eax_19 != 0 && *eax_19 != 0)
                            char* eax_20 = sub_44f000(&var_24)
                            int32_t temp1_1 = *(eax_20 + 4)
                            *(eax_20 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                    
                    var_14_1.b = 0
                    esi_3 = var_2c_2
                    var_24 = &data_5559b1
                
                if (eax_15 == 0 || esi_3 != 0)
                    var_24 = esi_3
                
                int32_t* eax_21 = sub_492ae0(arg3, arg5)
                var_64:4.d = var_24
                sub_44f590(&eax_21[1])
                eax_22 = sub_492ee0(arg3, arg6)
                int32_t var_14_2 = 3
                
                if (data_cdf414 != 0 && esi_3 != 0 && *esi_3 != 0)
                    eax_22 = sub_44f000(&var_30:4)
                    int32_t temp0_1 = *(eax_22 + 4)
                    *(eax_22 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        int32_t eax_23 = sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_23
            case 0xf
                var_30 = *arg2
                eax_9 = sub_492ae0(arg3, arg5)
                xmm0_3 = var_30
                goto label_493021
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_22
}
