// 函数名称: sub_4d1c00
// 虚拟地址: 0x4d1c00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4d1c00(char* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_545699
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_5cc = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* param0_12 = data_ce26e4
    
    if (param0_12 != 0)
        char* param0_1 = param0_12[8]
        int32_t esi_1 = param0_12[1]
        char* param0 = arg1
        param0 = param0_1
        
        if (param0_1 != 0 && *param0_1 != 0)
            char* eax_3 = sub_44f000(&param0)
            *(eax_3 + 4) += 1
        
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        sub_4a9620(&result_1, esi_1)
        int32_t var_14_1 = 0
        int32_t eax_4 = param0_12[1]
        int32_t var_5c0
        char* var_558
        char* result_2
        char* esi_2
        
        if (eax_4 == 0x19)
            char* result_3 = result_1
            char* const result_13 = &data_5559b1
            
            if (result_3 != 0)
                result_13 = result_3
            
            void var_130
            int32_t edx_2 = &var_130 - result_13
            
            do
                result_3.b = *result_13
                result_13 = &result_13[1]
                result_13[edx_2 - 1] = result_3.b
            while (result_3.b != 0)
            
            param0 = 0x58
            _memset(&var_5c0, 0, param0)
            int32_t var_5bc_1 = data_ce1c8c
            void* var_5a4_1 = &var_130
            var_5c0 = 0x58
            param0 = &var_5c0
            int32_t var_5a0_1 = 0x104
            char const* const var_5b4_1 = "Particle (*.particle)"
            int32_t var_5a8_1 = 0
            int32_t var_59c_1 = 0
            int32_t var_598_1 = 0
            int32_t var_594_1 = 0
            char const* const var_590_1 = "Save Particle As"
            char const* const var_584_1 = "particle"
            int32_t var_58c_1 = 0x200000a
            result = GetSaveFileNameA(param0)
            
            if (result != 0)
                sub_44f240(&var_558, &var_130)
                var_14_1.b = 1
                char* edx_4 = &data_5559b1
                esi_2 = var_558
                
                if (esi_2 != 0)
                    edx_4 = esi_2
                
                sub_4a8d30(&result_2, edx_4)
                var_14_1.b = 2
                int32_t* edi = *param0_12
                void* eax_7 = *(data_cdf880 + 0x33c)
                int128_t* eax_8 = sub_45cd70(0x10)
                *eax_8 = zx.o(0)
                char* const result_14 = &data_5559b1
                *eax_8 = sub_48bb00(*edi, eax_7)
                *(eax_8 + 0xc) = eax_7
                char* result_4 = result_2
                
                if (result_4 != 0)
                    result_14 = result_4
                
                int32_t* eax_11
                int32_t* param0_7
                eax_11, param0_7 = sub_48d5b0(result_14, 0x19)
                
                if (param0_12 == eax_11)
                    sub_4d2f50()
                    param0_7 = param0_12
                    sub_48d180(param0_7)
                
                char* param0_2 = result_2
                param0 = param0_7
                param0 = param0_2
                
                if (param0_2 != 0 && *param0_2 != 0)
                    char* eax_12 = sub_44f000(&param0)
                    *(eax_12 + 4) += 1
                
                sub_48e0c0(0x19, eax_8)
                sub_4f42d0()
                result = sub_4d18b0(sub_4d5050(eax_11))
                
                if (data_ce19be == 0)
                    result = sub_4f4180()
                
                var_14_1.b = 3
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp3_1 = result[1]
                        result[1] -= 1
                        
                        if (temp3_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_2 = &data_5559b1
                
                var_14_1.b = 4
            label_4d2619:
                
                if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                    result = sub_44f000(&var_558)
                    int32_t temp5_1 = result[1]
                    result[1] -= 1
                    
                    if (temp5_1 == 1)
                        result = sub_45d050(result, &result[3][2])
        else if (eax_4 == 0x1b)
            struct _EXCEPTION_REGISTRATION_RECORD** result_5 = result_1
            char* result_19 = &data_5559b1
            char* result_15 = &data_5559b1
            
            if (result_5 != 0)
                result_15 = result_5
            
            void var_238
            int32_t edx_10 = &var_238 - result_15
            
            do
                result_5.b = *result_15
                result_15 = &result_15[1]
                result_15[edx_10 - 1] = result_5.b
            while (result_5.b != 0)
            
            param0 = 0x58
            _memset(&var_5c0, 0, param0)
            int32_t var_5bc_2 = data_ce1c8c
            void* var_5a4_2 = &var_238
            var_5c0 = 0x58
            param0 = &var_5c0
            int32_t var_5a0_2 = 0x104
            char const* const var_5b4_2 = "Graph (*.graph)"
            int32_t var_5a8_2 = 0
            int32_t var_59c_2 = 0
            int32_t var_598_2 = 0
            int32_t var_594_2 = 0
            char const* const var_590_2 = "Save GRaph As"
            char const* const var_584_2 = "graph"
            int32_t var_58c_2 = 0x200000a
            result = GetSaveFileNameA(param0)
            
            if (result != 0)
                sub_44f240(&var_558, &var_238)
                var_14_1.b = 5
                esi_2 = var_558
                char* edx_12 = &data_5559b1
                
                if (esi_2 != 0)
                    edx_12 = esi_2
                
                sub_4a8d30(&result_2, edx_12)
                var_14_1.b = 6
                int128_t* eax_14 = sub_48bb60(*param0_12, *(data_cdf880 + 0x37c))
                char* result_9 = result_2
                
                if (result_9 != 0)
                    result_19 = result_9
                
                int32_t* param0_3 = sub_48d5b0(result_19, 0x1b)
                sub_48d180(param0_3)
                param0 = param0_3
                char* param0_8 = result_2
                param0 = param0_8
                
                if (param0_8 != 0 && *param0_8 != 0)
                    char* eax_15 = sub_44f000(&param0)
                    *(eax_15 + 4) += 1
                
                sub_48e0c0(0x1b, eax_14)
                sub_4f42d0()
                sub_4d18b0(sub_4d5050(param0_3))
                result = sub_4f4180()
                var_14_1.b = 7
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp1_1 = result[1]
                        result[1] -= 1
                        
                        if (temp1_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_2 = &data_5559b1
                
                var_14_1.b = 8
                goto label_4d2619
        else if (eax_4 == 0x1e)
            struct _EXCEPTION_REGISTRATION_RECORD** result_6 = result_1
            char* result_20 = &data_5559b1
            char* result_16 = &data_5559b1
            
            if (result_6 != 0)
                result_16 = result_6
            
            void var_340
            int32_t edx_18 = &var_340 - result_16
            
            do
                result_6.b = *result_16
                result_16 = &result_16[1]
                result_16[edx_18 - 1] = result_6.b
            while (result_6.b != 0)
            
            param0 = 0x58
            _memset(&var_5c0, 0, param0)
            int32_t var_5bc_3 = data_ce1c8c
            void* var_5a4_3 = &var_340
            var_5c0 = 0x58
            param0 = &var_5c0
            int32_t var_5a0_3 = 0x104
            char const* const var_5b4_3 = "UI (*.ui)"
            int32_t var_5a8_3 = 0
            int32_t var_59c_3 = 0
            int32_t var_598_3 = 0
            int32_t var_594_3 = 0
            char const* const var_590_3 = "Save UI As"
            void* const var_584_3 = &data_589798
            int32_t var_58c_3 = 0x200000a
            result = GetSaveFileNameA(param0)
            
            if (result != 0)
                sub_44f240(&var_558, &var_340)
                var_14_1.b = 9
                esi_2 = var_558
                char* edx_20 = &data_5559b1
                
                if (esi_2 != 0)
                    edx_20 = esi_2
                
                sub_4a8d30(&result_2, edx_20)
                var_14_1.b = 0xa
                int128_t* eax_17 = sub_48bb60(*param0_12, *(data_cdf880 + 0x3dc))
                char* result_10 = result_2
                
                if (result_10 != 0)
                    result_20 = result_10
                
                int32_t* param0_4 = sub_48d5b0(result_20, 0x1e)
                sub_48d180(param0_4)
                param0 = param0_4
                char* param0_9 = result_2
                param0 = param0_9
                
                if (param0_9 != 0 && *param0_9 != 0)
                    char* eax_18 = sub_44f000(&param0)
                    *(eax_18 + 4) += 1
                
                sub_48e0c0(0x1e, eax_17)
                sub_4f42d0()
                sub_4d5050(param0_4)
                sub_4d18b0(sub_4fb550(param0_4))
                result = sub_4f4180()
                var_14_1.b = 0xb
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp2_1 = result[1]
                        result[1] -= 1
                        
                        if (temp2_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_2 = &data_5559b1
                
                var_14_1.b = 0xc
                goto label_4d2619
        else if (eax_4 != 0x22)
            if (eax_4 != 0x20)
                param0 = "EditorSaveAs"
                sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\engine\windows\editorwindow.cpp", 
                    0x15fe, param0)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            struct _EXCEPTION_REGISTRATION_RECORD** result_8 = result_1
            char* result_22 = &data_5559b1
            char* result_18 = &data_5559b1
            
            if (result_8 != 0)
                result_18 = result_8
            
            void var_550
            int32_t edx_34 = &var_550 - result_18
            
            do
                result_8.b = *result_18
                result_18 = &result_18[1]
                result_18[edx_34 - 1] = result_8.b
            while (result_8.b != 0)
            
            param0 = 0x58
            _memset(&var_5c0, 0, param0)
            int32_t var_5bc_5 = data_ce1c8c
            void* var_5a4_5 = &var_550
            var_5c0 = 0x58
            param0 = &var_5c0
            int32_t var_5a0_5 = 0x104
            char const* const var_5b4_5 = "Fab (*.fab)"
            int32_t var_5a8_5 = 0
            int32_t var_59c_5 = 0
            int32_t var_598_5 = 0
            int32_t var_594_5 = 0
            char const* const var_590_5 = "Save Fab As"
            void* const var_584_5 = &data_589798
            int32_t var_58c_5 = 0x200000a
            result = GetSaveFileNameA(param0)
            
            if (result != 0)
                sub_44f240(&var_558, &var_550)
                var_14_1.b = 0x11
                esi_2 = var_558
                char* edx_36 = &data_5559b1
                
                if (esi_2 != 0)
                    edx_36 = esi_2
                
                sub_4a8d30(&result_2, edx_36)
                var_14_1.b = 0x12
                int128_t* eax_23 = sub_48bb60(*param0_12, *(data_cdf880 + 0x41c))
                char* result_12 = result_2
                
                if (result_12 != 0)
                    result_22 = result_12
                
                int32_t* param0_6 = sub_48d5b0(result_22, 0x20)
                sub_48d180(param0_6)
                param0 = param0_6
                char* param0_11 = result_2
                param0 = param0_11
                
                if (param0_11 != 0 && *param0_11 != 0)
                    char* eax_24 = sub_44f000(&param0)
                    *(eax_24 + 4) += 1
                
                sub_48e0c0(0x20, eax_23)
                sub_4f42d0()
                sub_4d5050(param0_6)
                sub_4d18b0(sub_4f4ea0(param0_6))
                result = sub_4f4180()
                var_14_1.b = 0x13
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp6_1 = result[1]
                        result[1] -= 1
                        
                        if (temp6_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_2 = &data_5559b1
                
                var_14_1.b = 0x14
                goto label_4d2619
        else
            struct _EXCEPTION_REGISTRATION_RECORD** result_7 = result_1
            char* result_21 = &data_5559b1
            char* result_17 = &data_5559b1
            
            if (result_7 != 0)
                result_17 = result_7
            
            void var_448
            int32_t edx_26 = &var_448 - result_17
            
            do
                result_7.b = *result_17
                result_17 = &result_17[1]
                result_17[edx_26 - 1] = result_7.b
            while (result_7.b != 0)
            
            param0 = 0x58
            _memset(&var_5c0, 0, param0)
            int32_t var_5bc_4 = data_ce1c8c
            void* var_5a4_4 = &var_448
            var_5c0 = 0x58
            param0 = &var_5c0
            int32_t var_5a0_4 = 0x104
            char const* const var_5b4_4 = "UI2 (*.ui2)"
            int32_t var_5a8_4 = 0
            int32_t var_59c_4 = 0
            int32_t var_598_4 = 0
            int32_t var_594_4 = 0
            char const* const var_590_4 = "Save UI2 As"
            void* const var_584_4 = &data_589798
            int32_t var_58c_4 = 0x200000a
            result = GetSaveFileNameA(param0)
            
            if (result != 0)
                sub_44f240(&var_558, &var_448)
                var_14_1.b = 0xd
                esi_2 = var_558
                char* edx_28 = &data_5559b1
                
                if (esi_2 != 0)
                    edx_28 = esi_2
                
                sub_4a8d30(&result_2, edx_28)
                var_14_1.b = 0xe
                int128_t* eax_20 = sub_48bb60(*param0_12, *(data_cdf880 + 0x45c))
                char* result_11 = result_2
                
                if (result_11 != 0)
                    result_21 = result_11
                
                int32_t* param0_5 = sub_48d5b0(result_21, 0x22)
                sub_48d180(param0_5)
                param0 = param0_5
                char* param0_10 = result_2
                param0 = param0_10
                
                if (param0_10 != 0 && *param0_10 != 0)
                    char* eax_21 = sub_44f000(&param0)
                    *(eax_21 + 4) += 1
                
                sub_48e0c0(0x22, eax_20)
                sub_4f42d0()
                sub_4d5050(param0_5)
                sub_4d18b0(sub_478c90(param0_5))
                result = sub_4f4180()
                var_14_1.b = 0xf
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp4_1 = result[1]
                        result[1] -= 1
                        
                        if (temp4_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_2 = &data_5559b1
                
                var_14_1.b = 0x10
                goto label_4d2619
        int32_t var_14_2 = 0x15
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp0_1 = result[1]
                result[1] -= 1
                
                if (temp0_1 == 1)
                    result = sub_45d050(result, &result[3][2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
