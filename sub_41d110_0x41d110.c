// 函数名称: sub_41d110
// 虚拟地址: 0x41d110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_41d110(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5412a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    int32_t var_18 = 0
    *arg1 = &data_5559b1
    int32_t var_8_1 = 0
    int32_t var_18_1 = 1
    char* var_14
    
    if (arg2 s> 0x15180)
        int32_t var_2c = (arg2 + 0xa8c0) s/ 0x15180
        int32_t var_8_2 = 3
        sub_44f510(arg1, sub_44f980(&var_14, "%d days"))
        int32_t var_8_3 = 4
    else if (arg2 s<= 0xe10)
        int32_t var_2c_4 = arg2 s% 0x3c
        int32_t var_30_1 = arg2 s/ 0x3c
        int32_t var_8_6 = 7
        sub_44f510(arg1, sub_44f980(&var_14, "%02d:%02d"))
        int32_t var_8_7 = 8
    else
        int32_t var_2c_2 = arg2 s/ 0xe10
        int32_t var_8_4 = 5
        sub_44f510(arg1, sub_44f980(&var_14, "%d hours"))
        int32_t var_8_5 = 6
    
    if (data_cdf414 != 0)
        char* eax_19 = var_14
        
        if (eax_19 != 0 && *eax_19 != 0)
            char* eax_20 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
