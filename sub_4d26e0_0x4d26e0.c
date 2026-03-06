// 函数名称: sub_4d26e0
// 虚拟地址: 0x4d26e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4d26e0(char const (** arg1)[0x5])
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5456d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14
    char* ecx_1 = sub_4a52d0(&var_14, arg1)
    int32_t var_8_1 = 0
    char* eax_3 = var_14
    int32_t* result
    
    if (eax_3 == 0 || *eax_3 == 0)
        result = nullptr
    else
        char* var_30 = ecx_1
        int32_t* ecx_2 = &var_30
        var_30 = eax_3
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_4 = sub_44f000(ecx_2)
            *(eax_4 + 4) += 1
        
        result = sub_48d4c0(ecx_2)
        eax_3 = var_14
        
        if (result == 0)
            char* const esi = &data_5559b1
            char* ecx_3 = &data_5559b1
            
            if (eax_3 != 0)
                ecx_3 = eax_3
            
            int32_t eax_6
            char* ecx_4
            eax_6, ecx_4 = sub_495050(ecx_3)
            var_30 = ecx_4
            char* ecx_5 = var_14
            var_30 = ecx_5
            
            if (ecx_5 != 0 && *ecx_5 != 0)
                char* eax_7 = sub_44f000(&var_30)
                *(eax_7 + 4) += 1
            
            sub_48e0c0(eax_6, 0)
            char* eax_8 = var_14
            
            if (eax_8 != 0)
                esi = eax_8
            
            result = sub_48d5b0(esi, eax_6)
            eax_3 = var_14
    
    int32_t var_8_2 = 3
    
    if (data_cdf414 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_10 = sub_44f000(&var_14)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
