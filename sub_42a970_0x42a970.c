// 函数名称: sub_42a970
// 虚拟地址: 0x42a970
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_42a970(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541a81
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = arg1
    int32_t var_18 = 0
    void* eax_3 = sub_42aaa0(*(data_65ac38 + 0xb24))
    char* var_30 = arg2
    int32_t var_34 = *(eax_3 + 0x23c)
    char* var_14
    sub_44f980(&var_14, "gamelocal_%d_%d.bin")
    int32_t var_8_1 = 1
    char* eax_4 = var_14
    var_30 = eax_4
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_44f000(&var_30)
        *(eax_5 + 4) += 1
    
    sub_48c750(arg1, 0)
    int32_t var_18_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
