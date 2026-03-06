// 函数名称: sub_4a5910
// 虚拟地址: 0x4a5910
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4a5910(char const (** arg1)[0x5])
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542ff8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14
    char** result
    int32_t xmm0[0x4]
    result, xmm0 = sub_4a52d0(&var_14, arg1)
    int32_t var_8_1 = 0
    char* esi = var_14
    
    if (esi != 0)
        result.b = *esi
        
        if (result.b != 0 && result.b != 0x21)
            void* var_28 = &data_592b68
            int32_t xmm0_1[0x4]
            result, xmm0_1 = _strstr(xmm0, esi, var_28)
            
            if (result == 0)
                var_28 = &data_592b6c
                void* ecx_1
                result, ecx_1 = _strstr(xmm0_1, esi, var_28)
                
                if (result == 0)
                    void* eax_3 = var_14
                    var_28 = ecx_1
                    void** ecx_2 = &var_28
                    var_28 = eax_3
                    
                    if (eax_3 != 0 && *eax_3 != 0)
                        char* eax_4 = sub_44f000(ecx_2)
                        *(eax_4 + 4) += 1
                    
                    void* eax_5 = sub_48d4c0(ecx_2)
                    
                    if (eax_5 == 0)
                    label_4a59c3:
                        void* eax_6 = var_14
                        void* esi_1 = &data_5559b1
                        void* ecx_3 = &data_5559b1
                        
                        if (eax_6 != 0)
                            ecx_3 = eax_6
                        
                        int32_t eax_7
                        void* ecx_4
                        eax_7, ecx_4 = sub_495050(ecx_3)
                        
                        if (data_ce19bc == 0)
                            void* eax_9 = var_14
                            var_28 = ecx_4
                            var_28 = eax_9
                            
                            if (eax_9 != 0 && *eax_9 != 0)
                                char* eax_10 = sub_44f000(&var_28)
                                *(eax_10 + 4) += 1
                            
                            result = sub_48e0c0(eax_7, 0)
                        else
                            void* edx_1 = var_14
                            
                            if (edx_1 != 0)
                                esi_1 = edx_1
                            
                            result = sub_4aa5d0(sub_48d5b0(esi_1, eax_7), 0)
                    else
                        result = *(eax_5 + 8)
                        
                        if (result != 1 && result != 2)
                            goto label_4a59c3
            
            esi = var_14
    
    int32_t var_8_2 = 4
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        result = sub_44f000(&var_14)
        int32_t temp0_1 = result[1]
        result[1] = &result[1][0xffffffff]
        
        if (temp0_1 == 1)
            result = sub_45d050(result, &result[3][0x10])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
