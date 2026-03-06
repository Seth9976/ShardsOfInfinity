// 函数名称: sub_48e630
// 虚拟地址: 0x48e630
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48e630(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543491
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    char* arg_4
    char* eax_3 = arg_4
    *arg1 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_44f000(arg1)
        *(eax_4 + 4) += 1
        eax_3 = arg_4
    
    int32_t var_14_1 = 1
    char* esi = nullptr
    
    while (true)
        int32_t ecx_1
        
        if (eax_3 == 0 || *eax_3 == 0)
            ecx_1 = 0
        else
            ecx_1 = *(sub_44f000(&arg_4) + 8)
            eax_3 = arg_4
        
        if (esi s>= ecx_1)
            break
        
        char* ecx_2 = *arg1
        char* const eax_6 = &data_5559b1
        
        if (ecx_2 != 0)
            eax_6 = ecx_2
        
        if (*(eax_6 + esi) != 0x5c)
            char* eax_7 = &data_5559b1
            
            if (ecx_2 != 0)
                eax_7 = ecx_2
            
            if (_isupper(*(eax_7 + esi)) != 0)
                char* eax_10 = *arg1
                char* const ecx_4 = &data_5559b1
                
                if (eax_10 != 0)
                    ecx_4 = eax_10
                
                sub_44f740(arg1, esi, _tolower(sx.d(*(ecx_4 + esi))))
            
            eax_3 = arg_4
            esi = &esi[1]
        else
            sub_44f740(arg1, esi, 0x2f)
            eax_3 = arg_4
            esi = &esi[1]
    
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_13 = sub_44f000(&arg_4)
        int32_t temp0_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
