// 函数名称: sub_4bd940
// 虚拟地址: 0x4bd940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4bd940(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544c51
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    char* esi = arg2[1]
    
    if (_isalpha(*esi) == 0 && *esi != 0x5f)
        arg1[2] = &data_5559b1
        *arg1 = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    while (true)
        char eax_6 = esi[1]
        esi = &esi[1]
        
        if (_isalpha(eax_6) == 0)
            int32_t eax_7
            eax_7.b = *esi
            
            if (eax_7.b != 0x5f && _isdigit(eax_7.b) == 0)
                break
    
    int32_t edi_1 = arg2[1]
    void* eax_10 = sub_4bd420(*arg2)
    *eax_10 = 0xa
    *(eax_10 + 4) = edi_1
    *(eax_10 + 8) = esi - edi_1
    arg2[1] = esi
    sub_4bd480(arg2)
    *arg1 = 3
    arg1[1] = eax_10
    arg1[2] = &data_5559b1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
