// 函数名称: sub_4a8b60
// 虚拟地址: 0x4a8b60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4a8b60(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5442b1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    int32_t var_18 = 0
    *arg1 = &data_5559b1
    int32_t var_8_1 = 0
    int32_t var_18_1 = 1
    
    if (_strchr(arg2, 0x3a) != 0)
        sub_44f590(arg1, arg2)
    else
        char* var_14
        int32_t var_8_3
        
        if (__strnicmp(arg2, "sys", 3) != 0)
            uint32_t eax_6 = __strnicmp(arg2, "res", 3)
            uint32_t eax_7
            
            if (eax_6 != 0)
                eax_7 = __strnicmp(arg2, "xbin", 4)
            
            if (eax_6 != 0 && eax_7 != 0)
                char* var_30_2 = arg2
                sub_44e260("Non standard asset path %s")
                char* var_38_4 = arg2
                char* var_3c_2 = &data_ce18a0
                int32_t var_8_4 = 5
                sub_44f510(arg1, sub_44f980(&var_14, "%s/%s"))
                var_8_3 = 6
                goto label_4a8ca1
            
            if (data_ce18a0 != 0)
                char* var_34_2 = &data_ce18a0
                int32_t var_8_5 = 3
                sub_44f510(arg1, sub_44f980(&var_14, "%s/%s"))
                var_8_3 = 4
                goto label_4a8ca1
            
            sub_44f590(arg1, arg2)
        else
            char* var_30 = arg2
            int32_t var_34_1 = 0xce1798
            int32_t var_8_2 = 1
            sub_44f510(arg1, sub_44f980(&var_14, "%s/%s"))
            var_8_3 = 2
        label_4a8ca1:
            
            if (data_cdf414 != 0)
                char* eax_10 = var_14
                
                if (eax_10 != 0 && *eax_10 != 0)
                    char* eax_11 = sub_44f000(&var_14)
                    int32_t temp0_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
            
            var_8_3.b = 0
    
    char* esi_1 = nullptr
    
    while (true)
        char* eax_12 = *arg1
        int32_t eax_14
        
        if (eax_12 == 0 || *eax_12 == 0)
            eax_14 = 0
        else
            eax_14 = *(sub_44f000(arg1) + 8)
        
        if (esi_1 s>= eax_14)
            break
        
        char* eax_15 = *arg1
        char* const ecx_7 = &data_5559b1
        
        if (eax_15 != 0)
            ecx_7 = eax_15
        
        if (*(ecx_7 + esi_1) == 0x2f)
            sub_44f740(arg1, esi_1, 0x5c)
        
        esi_1 = &esi_1[1]
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
