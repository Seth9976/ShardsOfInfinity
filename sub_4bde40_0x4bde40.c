// 函数名称: sub_4bde40
// 虚拟地址: 0x4bde40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4bde40(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544ce1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    int32_t var_24
    sub_4bda40(&ExceptionList, arg2, &var_24, sub_4bdbc0)
    int32_t var_8_1 = 1
    int32_t edi = var_24
    char* var_1c
    char* eax_5
    int32_t var_20
    
    if (edi == 2 || edi == 3 || edi == 4)
        sub_4bd480(arg2)
        arg1[1] = var_20
        eax_5 = var_1c
        *arg1 = edi
        arg1[2] = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_8 = sub_44f000(&arg1[2])
            *(eax_8 + 4) += 1
            eax_5 = var_1c
        
        int32_t var_14_2 = 1
        int32_t var_8_3 = 3
    else
        arg1[1] = var_20
        eax_5 = var_1c
        *arg1 = edi
        arg1[2] = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_44f000(&arg1[2])
            *(eax_6 + 4) += 1
            eax_5 = var_1c
        
        int32_t var_14_1 = 1
        int32_t var_8_2 = 2
    
    if (data_cdf414 != 0 && eax_5 != 0 && *eax_5 != 0)
        char* eax_9 = sub_44f000(&var_1c)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
