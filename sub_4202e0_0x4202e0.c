// 函数名称: sub_4202e0
// 虚拟地址: 0x4202e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4202e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5414e0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = *arg1
    
    if (result u> 4)
        sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
            0xa20, "GameDialogAddFriendResponse")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* result_2
    int32_t* result_3
    int32_t* result_4
    int32_t* result_5
    int32_t** ecx_10
    
    switch (result)
        case 1
            void* eax_5 = data_5bb2c0
            void* ecx_33 = &data_5559b1
            
            if (eax_5 != 0)
                ecx_33 = eax_5
            
            void* var_2c_15 = ecx_33
            int32_t* result_1
            sub_44f980(&result_1, "%s was not found.")
            int32_t var_8_7 = 0x18
            sub_44f240(&result_4, &data_5559b1)
            var_8_7.b = 0x19
            sub_44f240(&result_3, &data_5559b1)
            var_8_7.b = 0x1a
            sub_44f240(&result_2, "Add Friend")
            var_8_7.b = 0x1b
            data_5bb260 = 0x1b
            sub_44f510(&data_5bb2a0, &result_2)
            sub_44f510(&data_5bb2a4, &result_1)
            sub_44f510(&data_5bb2a8, &result_3)
            result = sub_44f510(&data_5bb2ac, &result_4)
            data_5bb2b0 = 0
            data_5bb2b4 = 0
            var_8_7.b = 0x1c
            
            if (data_cdf414 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_2)
                    int32_t temp4_1 = result[1]
                    result[1] -= 1
                    
                    if (temp4_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            var_8_7.b = 0x1d
            
            if (data_cdf414 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_3)
                    int32_t temp8_1 = result[1]
                    result[1] -= 1
                    
                    if (temp8_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            var_8_7.b = 0x1e
            
            if (data_cdf414 != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_4)
                    int32_t temp11_1 = result[1]
                    result[1] -= 1
                    
                    if (temp11_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            int32_t var_8_8 = 0x1f
            
            if (data_cdf414 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    ecx_10 = &result_1
                    goto label_420483
        case 2
            sub_44f980(&result_5, "You cannot add yourself as a friend.")
            int32_t var_8_5 = 0x10
            sub_44f240(&result_4, &data_5559b1)
            var_8_5.b = 0x11
            sub_44f240(&result_3, &data_5559b1)
            var_8_5.b = 0x12
            sub_44f240(&result_2, "Add Friend")
            var_8_5.b = 0x13
            data_5bb260 = 0x1b
            sub_44f510(&data_5bb2a0, &result_2)
            sub_44f510(&data_5bb2a4, &result_5)
            sub_44f510(&data_5bb2a8, &result_3)
            result = sub_44f510(&data_5bb2ac, &result_4)
            data_5bb2b0 = 0
            data_5bb2b4 = 0
            var_8_5.b = 0x14
            
            if (data_cdf414 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_2)
                    int32_t temp0_1 = result[1]
                    result[1] -= 1
                    
                    if (temp0_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            var_8_5.b = 0x15
            
            if (data_cdf414 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_3)
                    int32_t temp3_1 = result[1]
                    result[1] -= 1
                    
                    if (temp3_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            var_8_5.b = 0x16
            
            if (data_cdf414 != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_4)
                    int32_t temp7_1 = result[1]
                    result[1] -= 1
                    
                    if (temp7_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            int32_t var_8_6 = 0x17
            goto label_4205fe
        case 3
            void* eax_3 = data_5bb2c0
            void* ecx = &data_5559b1
            
            if (eax_3 != 0)
                ecx = eax_3
            
            void* var_2c_1 = ecx
            sub_44f980(&result_2, 
                "%s could not be added because they have removed you from their friend list.  Have them "
            "re-add you as a friend.")
            int32_t var_8_1 = 0
            sub_44f240(&result_3, &data_5559b1)
            var_8_1.b = 1
            sub_44f240(&result_4, &data_5559b1)
            var_8_1.b = 2
            sub_44f240(&result_5, "Add Friend")
            var_8_1.b = 3
            data_5bb260 = 0x1b
            sub_44f510(&data_5bb2a0, &result_5)
            sub_44f510(&data_5bb2a4, &result_2)
            sub_44f510(&data_5bb2a8, &result_4)
            result = sub_44f510(&data_5bb2ac, &result_3)
            data_5bb2b0 = 0
            data_5bb2b4 = 0
            var_8_1.b = 4
            
            if (data_cdf414 != 0)
                result = result_5
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_5)
                    int32_t temp1_1 = result[1]
                    result[1] -= 1
                    
                    if (temp1_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            var_8_1.b = 5
            
            if (data_cdf414 != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_4)
                    int32_t temp5_1 = result[1]
                    result[1] -= 1
                    
                    if (temp5_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            var_8_1.b = 6
            
            if (data_cdf414 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_3)
                    int32_t temp9_1 = result[1]
                    result[1] -= 1
                    
                    if (temp9_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            int32_t var_8_2 = 7
            
            if (data_cdf414 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    ecx_10 = &result_2
                    goto label_420483
        case 4
            void* eax_4 = data_5bb2c0
            void* ecx_14 = &data_5559b1
            
            if (eax_4 != 0)
                ecx_14 = eax_4
            
            void* var_2c_6 = ecx_14
            sub_44f980(&result_5, "You are already friends with %s.")
            int32_t var_8_3 = 8
            sub_44f240(&result_4, &data_5559b1)
            var_8_3.b = 9
            sub_44f240(&result_3, &data_5559b1)
            var_8_3.b = 0xa
            sub_44f240(&result_2, "Add Friend")
            var_8_3.b = 0xb
            data_5bb260 = 0x1b
            sub_44f510(&data_5bb2a0, &result_2)
            sub_44f510(&data_5bb2a4, &result_5)
            sub_44f510(&data_5bb2a8, &result_3)
            result = sub_44f510(&data_5bb2ac, &result_4)
            data_5bb2b0 = 0
            data_5bb2b4 = 0
            var_8_3.b = 0xc
            
            if (data_cdf414 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_2)
                    int32_t temp2_1 = result[1]
                    result[1] -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            var_8_3.b = 0xd
            
            if (data_cdf414 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_3)
                    int32_t temp6_1 = result[1]
                    result[1] -= 1
                    
                    if (temp6_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            var_8_3.b = 0xe
            
            if (data_cdf414 != 0)
                result = result_4
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_4)
                    int32_t temp10_1 = result[1]
                    result[1] -= 1
                    
                    if (temp10_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
            
            int32_t var_8_4 = 0xf
        label_4205fe:
            
            if (data_cdf414 != 0)
                result = result_5
                
                if (result != 0 && *result != 0)
                    ecx_10 = &result_5
                label_420483:
                    result = sub_44f000(ecx_10)
                    int32_t temp12_1 = result[1]
                    result[1] -= 1
                    
                    if (temp12_1 == 1)
                        result = sub_45d050(result, result[3] + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
