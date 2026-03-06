// 函数名称: sub_45d980
// 虚拟地址: 0x45d980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_45d980(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, char* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_54270c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_26c = arg3
    int32_t* var_274 = arg3
    int32_t var_270 = 0
    int32_t eax_5 = *arg2 - 1
    char* var_258 = arg5
    char* var_25c
    void var_184
    void var_124
    void var_c4
    void var_64
    int32_t* result
    
    switch (eax_5)
        case 0, 1, 2, 4, 0xb
            sub_45d720(arg3, arg2)
        label_45db1d:
            result = arg3
        label_45db22:
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
        case 6
            arg2[4]
            var_25c = sub_45d980(arg4, arg5, arg6, eax_2)
            int32_t var_8_1 = 0
            arg2[3]
            int32_t* eax_7 = sub_45d980(arg4, var_258, arg6)
            var_8_1.b = 1
            int32_t xmm0_1 = (zx.o(0)).d
            char* ecx_2 = var_25c
            var_25c = nullptr
            int32_t edx_4 = *ecx_2
            
            if (edx_4 == 2)
                xmm0_1 = *(ecx_2 + 0x20)
            else if (edx_4 == 1)
                xmm0_1 = _mm_cvtepi32_ps(zx.o(*(ecx_2 + 0x20)))
            
            int32_t ecx_3 = *eax_7
            
            if (ecx_3 == 2)
                var_25c = eax_7[8]
            else if (ecx_3 == 1)
                var_25c = _mm_cvtepi32_ps(zx.o(eax_7[8]))
            
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_2)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
            `eh vector constructor iterator'(&arg3[4], 4, 4, sub_44f290)
            char* xmm0_5 = var_25c
            arg3[1] = 0
            *arg3 = 5
            arg3[8] = xmm0_5
            arg3[9] = xmm0_1
            var_8_1.b = 2
            `eh vector vbase constructor iterator'(&var_184, 4, 4, sub_44f380)
            int32_t var_8_2 = 3
        label_45db08:
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_3)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
            int32_t var_288_2 = 4
            int32_t var_28c_2 = 4
            `eh vector vbase constructor iterator'(&var_c4, 4, 4, sub_44f380)
            goto label_45db1d
        case 7
            arg2[5]
            var_25c = sub_45d980(arg4, arg5, arg6, eax_2)
            int32_t var_8_3 = 4
            arg2[4]
            int32_t* eax_11 = sub_45d980(arg4, var_258, arg6)
            var_8_3.b = 5
            arg2[3]
            int32_t* eax_12 = sub_45d980(arg4, var_258, arg6)
            var_8_3.b = 6
            int32_t xmm0_7 = (zx.o(0)).d
            char* eax_13 = var_25c
            var_25c = nullptr
            int32_t edx_8 = *eax_13
            
            if (edx_8 == 2)
                var_258 = *(eax_13 + 0x20)
            else if (edx_8 != 1)
                var_258 = nullptr
            else
                var_258 = _mm_cvtepi32_ps(zx.o(*(eax_13 + 0x20)))
            
            int32_t edx_9 = *eax_11
            
            if (edx_9 == 2)
                xmm0_7 = eax_11[8]
            else if (edx_9 == 1)
                xmm0_7 = _mm_cvtepi32_ps(zx.o(eax_11[8]))
            
            int32_t eax_15 = *eax_12
            
            if (eax_15 == 2)
                var_25c = eax_12[8]
            else if (eax_15 == 1)
                var_25c = _mm_cvtepi32_ps(zx.o(eax_12[8]))
            
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_5)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
            `eh vector constructor iterator'(&arg3[4], 4, 4, sub_44f290)
            char* xmm0_11 = var_25c
            arg3[1] = 0
            *arg3 = 6
            arg3[8] = xmm0_11
            arg3[9] = xmm0_7
            arg3[0xa] = var_258
            var_8_3.b = 7
            `eh vector vbase constructor iterator'(&var_184, 4, 4, sub_44f380)
            var_8_3.b = 8
            `eh vector vbase constructor iterator'(&var_c4, 4, 4, sub_44f380)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_6)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
            int32_t var_288_4 = 4
            int32_t var_8_4 = 9
            int32_t var_28c_4 = 4
            `eh vector vbase constructor iterator'(&var_124, 4, 4, sub_44f380)
            goto label_45db1d
        case 8
            arg2[6]
            var_25c = sub_45d980(arg4, arg5, arg6, eax_2)
            int32_t var_8_5 = 0xa
            arg2[5]
            int32_t* eax_18 = sub_45d980(arg4, var_258, arg6)
            var_8_5.b = 0xb
            arg2[4]
            int32_t* eax_19 = sub_45d980(arg4, var_258, arg6)
            var_8_5.b = 0xc
            arg2[3]
            int32_t* eax_20 = sub_45d980(arg4, var_258, arg6)
            var_8_5.b = 0xd
            int32_t xmm0_14 = (zx.o(0)).d
            char* eax_21 = var_25c
            var_25c = nullptr
            int32_t ecx_8 = *eax_21
            int32_t var_268_1
            
            if (ecx_8 == 2)
                var_268_1 = *(eax_21 + 0x20)
            else if (ecx_8 != 1)
                var_268_1 = 0
            else
                var_268_1 = _mm_cvtepi32_ps(zx.o(*(eax_21 + 0x20)))
            
            int32_t eax_22 = *eax_18
            
            if (eax_22 == 2)
                var_258 = eax_18[8]
            else if (eax_22 != 1)
                var_258 = nullptr
            else
                var_258 = _mm_cvtepi32_ps(zx.o(eax_18[8]))
            
            int32_t eax_23 = *eax_19
            
            if (eax_23 == 2)
                xmm0_14 = eax_19[8]
            else if (eax_23 == 1)
                xmm0_14 = _mm_cvtepi32_ps(zx.o(eax_19[8]))
            
            int32_t eax_24 = *eax_20
            
            if (eax_24 == 2)
                var_25c = eax_20[8]
            else if (eax_24 == 1)
                var_25c = _mm_cvtepi32_ps(zx.o(eax_20[8]))
            
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_8)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
            `eh vector constructor iterator'(&arg3[4], 4, 4, sub_44f290)
            char* xmm0_18 = var_25c
            arg3[1] = 0
            *arg3 = 7
            arg3[8] = xmm0_18
            arg3[9] = xmm0_14
            arg3[0xa] = var_258
            arg3[0xb] = var_268_1
            var_8_5.b = 0xe
            `eh vector vbase constructor iterator'(&var_184, 4, 4, sub_44f380)
            var_8_5.b = 0xf
            `eh vector vbase constructor iterator'(&var_c4, 4, 4, sub_44f380)
            var_8_5.b = 0x10
            `eh vector vbase constructor iterator'(&var_124, 4, 4, sub_44f380)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_9)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
            int32_t var_288_6 = 4
            int32_t var_8_6 = 0x11
            int32_t var_28c_6 = 4
            `eh vector vbase constructor iterator'(&var_64, 4, 4, sub_44f380)
            goto label_45db1d
        case 9
            char** eax_26 = sub_45d6c0(&var_25c, &arg2[1])
            char* const ecx_12 = &data_5559b1
            int32_t var_8_7 = 0x12
            char* esi_1 = var_25c
            
            if (esi_1 != 0)
                ecx_12 = esi_1
            
            void* eax_27 = sub_45d510(eax_26, arg4, ecx_12, var_258, arg6)
            int32_t var_8_8
            
            if (eax_27 == 0)
                if (sub_45d570(var_258, arg6) != 0)
                    char* eax_37 = &data_5559b1
                    
                    if (esi_1 != 0)
                        eax_37 = esi_1
                    
                    char* var_284_15 = eax_37
                    int32_t* eax_38 = sub_44f980(&var_258, "[%s]")
                    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_16)(struct 
                        _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                    var_8_7.b = 0x15
                    `eh vector constructor iterator'(&arg3[4], 4, 4, sub_44f290)
                    int32_t var_270_1 = 0x100
                    arg3[1] = 0
                    *arg3 = 0xa
                    sub_44f510(&arg3[4], eax_38)
                    int32_t var_8_9 = 0x16
                    
                    if (data_cdf414 != 0)
                        char* eax_40 = var_258
                        
                        if (eax_40 != 0 && *eax_40 != 0)
                            char* eax_41 = sub_44f000(&var_258)
                            int32_t temp3_1 = *(eax_41 + 4)
                            *(eax_41 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_45d050(eax_41, *(eax_41 + 0xc) + 0x10)
                                var_258 = &data_5559b1
                    
                    int32_t var_8_10 = 0x17
                    
                    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                        char* eax_42 = sub_44f000(&var_25c)
                        int32_t temp4_1 = *(eax_42 + 4)
                        *(eax_42 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                    
                    result = arg3
                    goto label_45db22
                
                sub_45d230(arg3, 0x5c9940)
                int32_t var_8_11 = 0x18
            else
                switch (*(eax_27 + 8))
                    case 0
                        sub_44e4d0(eax_27, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x7c0, 
                            "UI2StateToEvalResult")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    case 1
                        int32_t edi_1 = *(eax_27 + 0x14)
                        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_11)(struct 
                            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                        `eh vector constructor iterator'(&arg3[4], 4, 4, sub_44f290)
                        arg3[1] = 0
                        *arg3 = 1
                        arg3[8] = edi_1
                        var_8_8 = 0x13
                    case 2
                        int32_t xmm0_22 = *(eax_27 + 0x14)
                        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_12)(struct 
                            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                        `eh vector constructor iterator'(&arg3[4], 4, 4, sub_44f290)
                        arg3[1] = 0
                        *arg3 = 2
                        arg3[8] = xmm0_22
                        var_8_8 = 0x13
                    case 3
                        sub_45d630(arg3, eax_27 + 0xc)
                        var_8_8 = 0x13
                    case 8
                        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_13)(struct 
                            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                        `eh vector constructor iterator'(&arg3[4], 4, 4, sub_44f290)
                        arg3[1] = 0
                        *arg3 = 8
                        arg3[8] = *(eax_27 + 0x14)
                        var_8_8 = 0x13
                    default
                        sub_44e4d0(eax_27, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x7ca, 
                            "UI2StateToEvalResult")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
            
            if (data_cdf414 == 0)
                goto label_45db1d
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_35 = sub_44f000(&var_25c)
                int32_t temp2_1 = *(eax_35 + 4)
                *(eax_35 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
            
            goto label_45db1d
        case 0xa
            arg2[3]
            sub_45d980(arg4, arg5, arg6, eax_2)
            int32_t var_8_14 = 0x22
            arg2[4]
            sub_45d980(arg4, var_258, arg6)
            var_8_14.b = 0x23
            int32_t var_1f4
            int32_t eax_49 = var_1f4
            void* eax_9
            void var_244
            void var_1e4
            
            if (eax_49 == 9 || eax_49 == 0xa)
                void var_254
                sub_45d230(arg3, &var_254)
                var_8_14.b = 0x24
                `eh vector vbase constructor iterator'(&var_244, 4, 4, sub_44f380)
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_25)(struct 
                    _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                int32_t var_288_12 = 4
                int32_t var_8_16 = 0x25
                eax_9 = &var_1e4
                int32_t var_28c_11 = 4
            else
                sub_45d230(arg3, &var_1f4)
                var_8_14.b = 0x26
                `eh vector vbase constructor iterator'(&var_244, 4, 4, sub_44f380)
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_23)(struct 
                    _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                int32_t var_288_11 = 4
                int32_t var_8_15 = 0x27
                eax_9 = &var_1e4
                int32_t var_28c_10 = 4
            `eh vector vbase constructor iterator'(eax_9, 4, 4, sub_44f380)
            goto label_45db1d
        case 0xc
            arg2[3]
            sub_45d980(arg4, arg5, arg6, eax_2)
            int32_t var_8_12 = 0x1a
            arg2[4]
            sub_45d980(arg4, var_258, arg6)
            var_8_12.b = 0x1b
            arg2[5]
            sub_45d980(arg4, var_258, arg6)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_284_19)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
            var_8_12.b = 0x1c
            `eh vector constructor iterator'(&var_64, 4, 4, sub_44f290)
            var_8_12.b = 0x1d
            int32_t var_174
            int32_t var_6c_1 = var_174
            int32_t var_70_1 = 1
            int32_t var_d4
            int32_t var_74 = var_d4
            int32_t var_134
            
            if (var_d4 != var_134)
                sub_44e4d0(var_d4, &data_5559b1, "first.stateType == second.stateType", 
                    "c:\ax2017\engine\ui2.cpp", 0x81c, "UI2ExpressionEval")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int128_t var_114
            int128_t var_b4
            
            if (var_d4 == 7)
                int128_t var_54_1 = var_b4
                int128_t var_44_1 = var_114
            else
                if (var_d4 != 8)
                    sub_44e4d0(var_d4 - 8, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x828, 
                        "UI2ExpressionEval")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int128_t var_54
                var_54.d = var_b4.d
                var_54:4.d = var_114.d
            sub_45d230(arg3, &var_74)
            var_8_12.b = 0x1e
            `eh vector vbase constructor iterator'(&var_64, 4, 4, sub_44f380)
            var_8_12.b = 0x1f
            `eh vector vbase constructor iterator'(&var_184, 4, 4, sub_44f380)
            var_8_12.b = 0x20
            `eh vector vbase constructor iterator'(&var_124, 4, 4, sub_44f380)
            int32_t var_8_13 = 0x21
            goto label_45db08
    
    sub_44e4d0(eax_5, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x83f, "UI2ExpressionEval")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
