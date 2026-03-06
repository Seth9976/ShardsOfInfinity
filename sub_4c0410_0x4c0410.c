// 函数名称: sub_4c0410
// 虚拟地址: 0x4c0410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4c0410(int32_t* arg1, int32_t* arg2)
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
    sub_4bd940(&var_24, arg2)
    int32_t var_8_1 = 1
    int32_t eax_3 = var_24
    void* var_20
    char* var_1c
    char* eax_5
    
    if (eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
        int32_t edi_1 = 1
        
        if (__strnicmp(*(var_20 + 4), "linear", *(var_20 + 8)) != 0
                && __strnicmp(*(var_20 + 4), "wave", *(var_20 + 8)) == 0)
            edi_1 = 0x18
        
        void* eax_11 = sub_4bd420(*arg2)
        int32_t var_14_2 = 1
        *eax_11 = 0xc
        *(eax_11 + 4) = edi_1
        arg1[2] = &data_5559b1
        *arg1 = 3
        arg1[1] = eax_11
        int32_t var_8_3 = 3
        
        if (data_cdf414 != 0)
            eax_5 = var_1c
        label_4c0521:
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_12 = sub_44f000(&var_1c)
                int32_t temp0_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
    else
        *arg1 = eax_3
        arg1[1] = var_20
        eax_5 = var_1c
        arg1[2] = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_44f000(&arg1[2])
            *(eax_6 + 4) += 1
            eax_5 = var_1c
        
        int32_t var_14_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cdf414 != 0)
            goto label_4c0521
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
