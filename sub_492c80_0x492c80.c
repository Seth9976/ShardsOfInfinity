// 函数名称: sub_492c80
// 虚拟地址: 0x492c80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_492c80(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542df0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = sub_492b50(arg1, arg2)
    sub_44f240(&var_14, "UI2StateOverride")
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0)
        char* ecx_1 = var_14
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            char* eax_3 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    void* esi = data_cdf47c
    *(esi + 0x1c) += 1
    int32_t* ecx_4 = *(esi + 0x10)
    
    if (ecx_4 == 0)
        sub_494310(esi + 0x10)
        ecx_4 = *(esi + 0x10)
    
    *(esi + 0x10) = *ecx_4
    ecx_4[2] = 0
    ecx_4[3] = 0
    ecx_4[4] = 0
    *ecx_4 = &data_5559b1
    ecx_4[1] = 0
    ecx_4[2] = 0
    ecx_4[3] = 0
    result[2] = ecx_4
    sub_44f590(ecx_4, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
