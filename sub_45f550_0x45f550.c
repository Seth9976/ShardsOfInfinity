// 函数名称: sub_45f550
// 虚拟地址: 0x45f550
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_45f550(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, void* arg5, char* arg6, int32_t* arg7, int32_t arg8, int32_t arg9, uint32_t* arg10, char arg11)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542801
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_124 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_ec = arg6
    int32_t* edi = *(arg3 + 4) + (arg2 << 3)
    int32_t edx = *edi
    uint32_t result = edx - 0x64
    
    if (result u<= 0x8e)
        result = zx.d(lookup_table_460cf0[result])
        int32_t var_88
        char* var_78
        int32_t var_68[0x7]
        
        switch (result)
            case 0
                result = sub_44f590(arg5 + 0x698, sub_45d3b0(result, edx, edi, 0x64))
            case 1
                void* eax_23 = sub_4b8c10(&data_5b1d6c, 0x65)
                
                if (*(eax_23 + 0x10) != 1)
                    sub_44e4d0(eax_23, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                *arg10 = result
            case 2
                int32_t esi_1 = arg4
                
                if (esi_1 != 0)
                    result = edi[1]
                    uint32_t result_1 = result
                    uint32_t result_2 = 0
                    
                    if (*(result + 4) s> 0)
                        int32_t ecx = 0
                        int32_t var_10c_1 = 0
                        
                        while (true)
                            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_128_1)(struct 
                                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                            void** edi_2 = *result + ecx
                            int32_t var_14_1 = 0
                            int32_t var_128_2 =
                                `eh vector constructor iterator'(&var_68, 4, 0x10, sub_44f290)
                            void* eax_10 = sub_45f3b0(*edi_2, &var_68)
                            void* edi_3 = eax_10
                            
                            if (edi_3 != 0)
                                if (edi_3 != 1)
                                    int32_t esi_2 = 0
                                    
                                    if (edi_3 s<= 0)
                                    label_45f73d:
                                        int32_t ecx_10 = *arg7
                                        
                                        if (ecx_10 s>= 0x200)
                                            sub_44e4d0(eax_10, &data_5559b1, 
                                                "numMapsToMerge < MAX_STATES", 
                                                "c:\ax2017\engine\ui2.cpp", 0xa2d, "UI2MergeAttribute")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        
                                        *(arg8 + (ecx_10 << 2)) = &edi_2[1]
                                        *arg7 += 1
                                        *(arg9 + (*arg7 << 2) - 4) = 0x3f800000
                                    else
                                        while (true)
                                            char* eax_16 = var_68[esi_2]
                                            char* const ecx_9 = &data_5559b1
                                            
                                            if (eax_16 != 0)
                                                ecx_9 = eax_16
                                            
                                            eax_10 =
                                                sub_45d510(arg5, *(arg5 + 0x754), ecx_9, var_ec, arg4)
                                            
                                            if (eax_10 == 0)
                                                break
                                            
                                            esi_2 += 1
                                            
                                            if (esi_2 s>= edi_3)
                                                goto label_45f73d
                                    
                                    esi_1 = arg4
                                else
                                    void* eax_12 =
                                        sub_45d510(arg5, *(arg5 + 0x754), *edi_2, var_ec, esi_1)
                                    
                                    if (eax_12 != 0)
                                        int32_t edx_3 = *arg7
                                        
                                        if (edx_3 s>= 0x200)
                                            sub_44e4d0(eax_12, &data_5559b1, 
                                                "numMapsToMerge < MAX_STATES", 
                                                "c:\ax2017\engine\ui2.cpp", 0xa18, "UI2MergeAttribute")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        
                                        int32_t xmm0_1 = (zx.o(0)).d
                                        *(arg8 + (edx_3 << 2)) = &edi_2[1]
                                        int32_t ecx_8 = *arg7 + 1
                                        *arg7 = ecx_8
                                        int32_t xmm1_1 = *(eax_12 + 0x10)
                                        
                                        if (not(0 f> xmm1_1))
                                            xmm0_1 = _mm_min_ss(0x3f800000, xmm1_1)
                                        
                                        *(arg9 + (ecx_8 << 2) - 4) = xmm0_1
                            
                            int32_t var_14_2 = 0xffffffff
                            `eh vector vbase constructor iterator'(&var_68, 4, 0x10, sub_44f380)
                            result = result_2 + 1
                            ecx = var_10c_1 + 0xc
                            result_2 = result
                            var_10c_1 = ecx
                            
                            if (result s>= *(result_1 + 4))
                                break
                            
                            result = result_1
            case 3
                int32_t var_14_7 = 8
                sub_460d80(&arg10[0xf], 
                    sub_45e620(arg5, edi[1], &var_88, *(arg5 + 0x754), var_ec, arg4))
                int32_t var_14_8 = 9
                result = `eh vector vbase constructor iterator'(&var_78, 4, 4, sub_44f380)
            case 4
                result = edi[1]
                arg10[0x7f]
                arg10[0x7f] = result
            case 5
                result = edi[1]
                *(arg10 + 4) = *result
                
                if (arg10[3] f< arg10[1] || arg10[4] f< arg10[2])
                    sub_44e4d0(result, &data_5559b1, "RectIsNormalized(props.rect)", 
                        "c:\ax2017\engine\ui2.cpp", 0xaf2, "UI2MergeAttribute")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            case 6
                int128_t xmm1_2 = *edi[1]
                result = 0x3f800000
                *(arg10 + 0x18) = data_571a78
                *(arg10 + 0x28) = xmm1_2
                arg10[0xe] = 0x3f800000
            case 7
                void* eax_42 = sub_4b8c10(&data_5b1d6c, 0x73)
                
                if (*(eax_42 + 0x10) != 1)
                    sub_44e4d0(eax_42, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t ecx_28 = edi[1]
                arg10[0x27] = ecx_28
                int32_t edx_10
                result, edx_10 = sub_4afaf0(ecx_28)
                arg10[0x28] = result
                arg10[0x29] = edx_10
            case 8
                void* eax_43 = sub_4b8c10(&data_5b1d6c, 0x74)
                
                if (*(eax_43 + 0x10) != 1)
                    sub_44e4d0(eax_43, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x2a] = result
            case 9
                void* eax_44 = sub_4b8c10(&data_5b1d6c, 0x75)
                
                if (*(eax_44 + 0x10) != 1)
                    sub_44e4d0(eax_44, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x2b] = result
            case 0xa
                void* eax_45 = sub_4b8c10(&data_5b1d6c, 0x76)
                
                if (*(eax_45 + 0x10) != 1)
                    sub_44e4d0(eax_45, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x2c] = result
            case 0xb
                void* eax_46 = sub_4b8c10(&data_5b1d6c, 0x77)
                
                if (*(eax_46 + 0x10) != 4)
                    sub_44e4d0(eax_46, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT", 
                        "c:\ax2017\engine\ui2.cpp", 0x67d, "AttribAsFloat")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[5] = result
            case 0xc
                void* eax_41 = sub_4b8c10(&data_5b1d6c, 0x78)
                
                if (*(eax_41 + 0x10) != 1)
                    sub_44e4d0(eax_41, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x2e] = result
            case 0xd
                result = edi[1]
                int128_t xmm0_12 = *result
                arg10[0x2e] = 1
                *(arg10 + 0xbc) = xmm0_12
            case 0xe
                void* eax_65 = sub_4b8c10(&data_5b1d6c, 0x7a)
                
                if (*(eax_65 + 0x10) != 1)
                    sub_44e4d0(eax_65, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x33] = result
            case 0xf
                void* eax_66 = sub_4b8c10(&data_5b1d6c, 0x7b)
                
                if (*(eax_66 + 0x10) != 1)
                    sub_44e4d0(eax_66, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x34] = result
            case 0x10
                void* eax_77 = sub_4b8c10(&data_5b1d6c, 0x7c)
                
                if (*(eax_77 + 0x10) != 4)
                    sub_44e4d0(eax_77, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT", 
                        "c:\ax2017\engine\ui2.cpp", 0x67d, "AttribAsFloat")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x2d] = result
            case 0x11
                result = sub_4b8c10(&data_5b1d6c, 0x7d)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                *(arg5 + 0xa) = result.b
            case 0x12
                result = sub_4b8c10(&data_5b1d6c, 0x7e)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                *(arg5 + 0xb) = result.b
            case 0x13
                result = sub_4b8c10(&data_5b1d6c, 0x7f)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                *(arg5 + 0xc) = result.b
            case 0x14
                char* const ecx_29 = &data_5559b1
                char* eax_53 = *(arg5 + 0x698)
                
                if (eax_53 != 0)
                    ecx_29 = eax_53
                
                void* eax_54 = sub_45d510(eax_53, *(arg5 + 0x754), ecx_29, var_ec, arg4)
                
                if (eax_54 == 0 || *(eax_54 + 8) != 4)
                    void* eax_55 = sub_4b8c10(&data_5b1d6c, *edi)
                    
                    if (*(eax_55 + 0x10) != 0xf)
                        sub_44e4d0(eax_55, &data_5559b1, 
                            "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                            "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    result = edi[1]
                    arg10[0x3f] = result
                else
                    result = *(eax_54 + 0x14)
                    arg10[0x3f] = result
            case 0x15
                void* eax_52 = sub_4b8c10(&data_5b1d6c, edx)
                
                if (*(eax_52 + 0x10) != 0xf)
                    sub_44e4d0(eax_52, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x3c] = result
            case 0x16
                int32_t* eax_59 = sub_45e620(arg5, edi[1], &var_88, *(arg5 + 0x754), var_ec, arg4)
                int32_t var_14_5 = 5
                int32_t var_84
                
                if (var_84 != 0)
                    sub_44e4d0(eax_59, &data_5559b1, "expr.evalType == UISTATE_VALUE", 
                        "c:\ax2017\engine\ui2.cpp", 0x6b5, "ResultAsColor")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                arg10[0x40] = sub_45d410(&var_88, 0)
                int32_t var_14_6 = 6
                result = `eh vector vbase constructor iterator'(&var_78, 4, 4, sub_44f380)
            case 0x17
                int32_t var_14_9 = 0xa
                sub_460d80(&arg10[0x41], 
                    sub_45e620(arg5, edi[1], &var_88, *(arg5 + 0x754), var_ec, arg4))
                int32_t var_14_10 = 0xb
                result = `eh vector vbase constructor iterator'(&var_78, 4, 4, sub_44f380)
            case 0x18
                void* eax_49 = sub_4b8c10(&data_5b1d6c, edx)
                
                if (*(eax_49 + 0x10) != 0xf)
                    sub_44e4d0(eax_49, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x3d] = result
            case 0x19
                result = sub_4b8c10(&data_5b1d6c, edx)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                arg10[0x3e].b = result.b
            case 0x1a
                void* eax_56 = sub_4b8c10(&data_5b1d6c, 0x86)
                
                if (*(eax_56 + 0x10) != 1)
                    sub_44e4d0(eax_56, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x59] = result
            case 0x1b
                void* eax_57 = sub_4b8c10(&data_5b1d6c, 0x87)
                
                if (*(eax_57 + 0x10) != 4)
                    sub_44e4d0(eax_57, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT", 
                        "c:\ax2017\engine\ui2.cpp", 0x67d, "AttribAsFloat")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x5a] = result
            case 0x1c
                void* eax_50 = sub_4b8c10(&data_5b1d6c, edx)
                
                if (*(eax_50 + 0x10) != 0xf)
                    sub_44e4d0(eax_50, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x3a] = result
            case 0x1d
                void* eax_51 = sub_4b8c10(&data_5b1d6c, edx)
                
                if (*(eax_51 + 0x10) != 0xf)
                    sub_44e4d0(eax_51, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x3b] = result
            case 0x1e
                void* eax_29 = sub_4b8c10(&data_5b1d6c, 0xc8)
                
                if (*(eax_29 + 0x10) != 0xf)
                    sub_44e4d0(eax_29, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x63] = result
            case 0x1f
                sub_45e620(arg5, edi[1], &var_88, *(arg5 + 0x754), var_ec, arg4)
                int32_t var_14_13 = 0xe
                int32_t eax_72 = 0
                
                if (var_88 == 1)
                    eax_72 = var_68[0]
                
                arg10[0x5c] = eax_72
                
                if (eax_72 s>= 0x12b)
                    sub_44e4d0(eax_72, &data_5559b1, "props.dimensions.y < 299", 
                        "c:\ax2017\engine\ui2.cpp", 0xb21, "UI2MergeAttribute")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_479260(arg5)
                int32_t var_14_14 = 0xf
                result = `eh vector vbase constructor iterator'(&var_78, 4, 4, sub_44f380)
            case 0x20
                sub_45e620(arg5, edi[1], &var_88, *(arg5 + 0x754), var_ec, arg4)
                int32_t var_14_15 = 0x10
                int32_t eax_74 = 0
                
                if (var_88 == 1)
                    eax_74 = var_68[0]
                
                arg10[0x5b] = eax_74
                
                if (eax_74 s>= 0x63)
                    sub_44e4d0(eax_74, &data_5559b1, "props.dimensions.x < 99", 
                        "c:\ax2017\engine\ui2.cpp", 0xb2b, "UI2MergeAttribute")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_479260(arg5)
                int32_t var_14_16 = 0x11
                result = `eh vector vbase constructor iterator'(&var_78, 4, 4, sub_44f380)
            case 0x21
                sub_45e620(arg5, edi[1], &var_88, *(arg5 + 0x754), var_ec, arg4)
                int32_t var_14_11 = 0xc
                int32_t eax_70 = 0
                
                if (var_88 == 1)
                    eax_70 = var_68[0]
                
                arg10[0x66] = eax_70
                
                if (eax_70 s>= 0x12b)
                    sub_44e4d0(eax_70, &data_5559b1, "props.numTableItems < 299", 
                        "c:\ax2017\engine\ui2.cpp", 0xb19, "UI2MergeAttribute")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t var_14_12 = 0xd
                result = `eh vector vbase constructor iterator'(&var_78, 4, 4, sub_44f380)
            case 0x22
                int32_t var_e8
                sub_45e620(arg5, edi[1], &var_e8, *(arg5 + 0x754), var_ec, arg4)
                int32_t var_14_17 = 0x12
                int32_t eax_76 = 0
                int32_t var_c8
                
                if (var_e8 == 1)
                    eax_76 = var_c8
                arg10[0x5d] = eax_76
                
                if (eax_76 s>= 0x63)
                    sub_44e4d0(eax_76, &data_5559b1, "props.overrideLastRow < 99", 
                        "c:\ax2017\engine\ui2.cpp", 0xb36, "UI2MergeAttribute")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t var_14_18 = 0x13
                void var_d8
                result = `eh vector vbase constructor iterator'(&var_d8, 4, 4, sub_44f380)
            case 0x23
                int32_t* ecx_16 = edi[1]
                arg10[0x5e] = *ecx_16
                result = ecx_16[1]
                arg10[0x5f] = result
            case 0x24
                int32_t* ecx_17 = edi[1]
                arg10[0x60] = *ecx_17
                result = ecx_17[1]
                arg10[0x61] = result
            case 0x25
                void* eax_26 = sub_4b8c10(&data_5b1d6c, 0xcf)
                
                if (*(eax_26 + 0x10) != 1)
                    sub_44e4d0(eax_26, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x62] = result
            case 0x26
                void* eax_27 = sub_4b8c10(&data_5b1d6c, 0xd0)
                
                if (*(eax_27 + 0x10) != 1)
                    sub_44e4d0(eax_27, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x64] = result
            case 0x27
                void* eax_28 = sub_4b8c10(&data_5b1d6c, 0xd1)
                
                if (*(eax_28 + 0x10) != 0xf)
                    sub_44e4d0(eax_28, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x65] = result
            case 0x28
                if (arg11 == 0)
                    sub_45e620(arg5, edi[1], &var_88, *(arg5 + 0x754), var_ec, arg4)
                    int32_t var_14_3 = 1
                    int32_t eax_31 = var_88
                    
                    if (eax_31 == 3 || eax_31 == 0xa)
                        char* eax_32 = var_78
                        var_ec = eax_32
                        
                        if (eax_32 != 0 && *eax_32 != 0)
                            char* eax_33 = sub_44f000(&var_ec)
                            *(eax_33 + 4) += 1
                    else if (eax_31 == 2)
                        char* var_12c_3
                        var_12c_3.q = _mm_cvtps_pd(var_68[0])
                        sub_44f980(&var_ec, &data_584ae4)
                    else if (eax_31 != 1)
                        sub_44f240(&var_ec, &data_5559b1)
                    else
                        int32_t var_128_7 = var_68[0]
                        sub_44f980(&var_ec, &data_5828f8)
                    
                    var_14_3.b = 2
                    sub_44f510(&arg10[0x81], &var_ec)
                    var_14_3.b = 3
                    
                    if (data_cdf414 != 0)
                        char* eax_34 = var_ec
                        
                        if (eax_34 != 0 && *eax_34 != 0)
                            char* eax_35 = sub_44f000(&var_ec)
                            int32_t temp0_1 = *(eax_35 + 4)
                            *(eax_35 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                    
                    int32_t var_14_4 = 4
                    result = `eh vector vbase constructor iterator'(&var_78, 4, 4, sub_44f380)
            case 0x29
                void* eax_37 = sub_4b8c10(&data_5b1d6c, 0xd3)
                
                if (*(eax_37 + 0x10) != 0xf)
                    sub_44e4d0(eax_37, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x67] = result
            case 0x2a
                result = *edi[1]
                arg10[0x6a] = result
            case 0x2b
                result = *edi[1]
                arg10[0x6b] = result
            case 0x2c
                result = sub_4b8c10(&data_5b1d6c, 0xd6)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                arg10[0x6c].b = result.b
            case 0x2d
                void* eax_78 = sub_4b8c10(&data_5b1d6c, 0xd8)
                
                if (*(eax_78 + 0x10) != 4)
                    sub_44e4d0(eax_78, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT", 
                        "c:\ax2017\engine\ui2.cpp", 0x67d, "AttribAsFloat")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x6e] = result
            case 0x2e
                void* eax_79 = sub_4b8c10(&data_5b1d6c, 0xd9)
                
                if (*(eax_79 + 0x10) != 1)
                    sub_44e4d0(eax_79, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x6f] = result
            case 0x2f
                int32_t* ecx_43 = edi[1]
                arg10[0x70] = *ecx_43
                result = ecx_43[1]
                arg10[0x71] = result
            case 0x30
                result = sub_4b8c10(&data_5b1d6c, 0xdb)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                arg10[0x72].b = result.b
            case 0x31
                result = sub_4b8c10(&data_5b1d6c, 0xdc)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                *(arg10 + 0x1c9) = result.b
            case 0x32
                result = sub_4b8c10(&data_5b1d6c, 0xdd)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                *(arg10 + 0x1b1) = result.b
            case 0x33
                void* eax_81 = sub_4b8c10(&data_5b1d6c, 0xe1)
                
                if (*(eax_81 + 0x10) != 1)
                    sub_44e4d0(eax_81, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x76] = result
            case 0x34
                result = edi[1]
                *(arg10 + 0x1dc) = *result
            case 0x35
                int32_t* ecx_24 = edi[1]
                arg10[0x68] = *ecx_24
                result = ecx_24[1]
                arg10[0x69] = result
            case 0x36
                result = sub_45d3b0(result, edx, edi, 0xec)
                arg10[0x7b] = result
            case 0x37
                void* eax_39 = sub_4b8c10(&data_5b1d6c, 0xee)
                
                if (*(eax_39 + 0x10) != 1)
                    sub_44e4d0(eax_39, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT", 
                        "c:\ax2017\engine\ui2.cpp", 0x66b, "AttribAsInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x7d] = result
            case 0x38
                result = sub_4b8c10(&data_5b1d6c, 0xef)
                
                if (*(result + 0x10) != 0xa)
                    sub_44e4d0(result, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL", 
                        "c:\ax2017\engine\ui2.cpp", 0x65d, "AttribAsBool")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result.b = edi[1] != 0
                arg10[0x7c].b = result.b
            case 0x39
                void* eax_38 = sub_4b8c10(&data_5b1d6c, 0xf0)
                
                if (*(eax_38 + 0x10) != 0xf)
                    sub_44e4d0(eax_38, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x7e] = result
            case 0x3a
                void* eax_47 = sub_4b8c10(&data_5b1d6c, edx)
                
                if (*(eax_47 + 0x10) != 0xf)
                    sub_44e4d0(eax_47, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x36] = result
            case 0x3b
                void* eax_48 = sub_4b8c10(&data_5b1d6c, edx)
                
                if (*(eax_48 + 0x10) != 0xf)
                    sub_44e4d0(eax_48, &data_5559b1, 
                        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR", 
                        "c:\ax2017\engine\ui2.cpp", 0x671, "AttribAsAssetPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                result = edi[1]
                arg10[0x35] = result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
