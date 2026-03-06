// 函数名称: sub_48e760
// 虚拟地址: 0x48e760
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_48e760(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542df0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg1 != 0)
        int32_t i = 0
        int32_t i_1 = 0
        
        do
            int32_t eax_5 = *arg1
            int32_t* j = *(eax_5 + (i << 2))
            
            if (j != 0)
                do
                    int32_t* j_1 = j
                    j = j[2]
                    int32_t var_8_1 = 0
                    
                    if (data_cdf414 != 0)
                        char* eax_3 = *j_1
                        
                        if (eax_3 != 0 && *eax_3 != 0)
                            char* eax_4 = sub_44f000(j_1)
                            int32_t temp0_1 = *(eax_4 + 4)
                            *(eax_4 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
                                *j_1 = &data_5559b1
                    
                    int32_t var_8_2 = 0xffffffff
                    sub_45d050(j_1, 0xc)
                while (j != 0)
                
                eax_5 = *arg1
                i = i_1
            
            *(eax_5 + (i << 2)) = 0
            i += 1
            i_1 = i
        while (i u<= arg1[1])
        
        int32_t eax_6 = arg1[1]
        int32_t* ecx_3 = *arg1
        arg1[2] = 0
        result = sub_45d050(ecx_3, (eax_6 << 2) + 4)
        *arg1 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
