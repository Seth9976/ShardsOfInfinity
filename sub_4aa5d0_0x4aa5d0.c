// 函数名称: sub_4aa5d0
// 虚拟地址: 0x4aa5d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4aa5d0(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544540
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx
    ebx.b = arg2
    int32_t* edi = arg1
    char* eax_3 = edi[8]
    char* const esi = &data_5559b1
    
    if (eax_3 != 0)
        esi = eax_3
    
    char* const eax_4 = &data_5559b1
    char** result
    
    while (true)
        arg1.b = *esi
        char temp0_1 = *eax_4
        bool c_1 = arg1.b u< temp0_1
        
        if (arg1.b == temp0_1)
            if (arg1.b == 0)
                result = nullptr
                break
            
            arg1.b = esi[1]
            char temp1_1 = eax_4[1]
            c_1 = arg1.b u< temp1_1
            
            if (arg1.b == temp1_1)
                esi = &esi[2]
                eax_4 = &eax_4[2]
                
                if (arg1.b != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_4, eax_4, c_1) | 1
        break
    
    if (result != 0)
        char* result_9
        result, result_9 = sub_4aa2b0(edi)
        
        if (result.b != 0 || ebx.b != 0)
        label_4aa65b:
            
            if (data_5b2e40 != 0)
                char* result_7 = edi[8]
                int32_t esi_1 = edi[1]
                char* result_5 = result_9
                result_5 = result_7
                
                if (result_7 != 0 && *result_7 != 0)
                    char* eax_6 = sub_44f000(&result_5)
                    *(eax_6 + 4) += 1
                
                char* result_1
                sub_4a9620(&result_1, esi_1)
                int32_t var_8_1 = 0
                char* result_8 = edi[8]
                result_5 = result_8
                
                if (result_8 != 0 && *result_8 != 0)
                    char* eax_7 = sub_44f000(&result_5)
                    *(eax_7 + 4) += 1
                
                char* result_2
                sub_4a9d10(&result_2)
                var_8_1.b = 1
                char* result_3 = result_2
                result_5 = result_3
                
                if (result_3 != 0 && *result_3 != 0)
                    char* eax_8 = sub_44f000(&result_5)
                    *(eax_8 + 4) += 1
                
                sub_4a6d40()
                char* eax_9 = edi[8]
                char* const edx_1 = &data_5559b1
                char* result_6 = &data_5559b1
                
                if (eax_9 != 0)
                    edx_1 = eax_9
                
                char* result_4 = result_1
                result_5 = edi[1]
                
                if (result_4 != 0)
                    result_6 = result_4
                
                sub_490450(result_4, edx_1, result_6, result_5)
                sub_44f240(&result_5, &data_5559b1)
                result = sub_4a6d40()
                var_8_1.b = 2
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp2_1 = result[1]
                        result[1] = &result[1][0xffffffff]
                        
                        if (temp2_1 == 1)
                            result = sub_45d050(result, &result[3][0x10])
                            result_2 = &data_5559b1
                
                int32_t var_8_2 = 3
                
                if (data_cdf414 != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_1)
                        int32_t temp3_1 = result[1]
                        result[1] = &result[1][0xffffffff]
                        
                        if (temp3_1 == 1)
                            result = sub_45d050(result, &result[3][0x10])
        else
            result, result_9 = sub_4aa7a0(edi)
            
            if (result.b == 0)
                goto label_4aa65b
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
