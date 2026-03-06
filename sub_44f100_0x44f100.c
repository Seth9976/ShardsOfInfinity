// 函数名称: sub_44f100
// 虚拟地址: 0x44f100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_44f100(int32_t arg1, int32_t arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542268
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax_3 = *arg3
    void* eax_8
    
    if (eax_3 == 0 || *eax_3 == 0)
        eax_8 = sub_44f060(arg3, arg2)
    else
        char* eax_4 = sub_44f000(arg3)
        void* ecx = *(eax_4 + 8)
        
        if (*(eax_4 + 0xc) s>= arg2 + 1 && *(eax_4 + 4) s<= 1)
            *(eax_4 + 8) = arg2
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4
        
        char* esi_1 = *arg3
        char* var_14 = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            char* eax_5 = sub_44f000(&var_14)
            *(eax_5 + 4) += 1
        
        int32_t var_8_1 = 0
        
        if (data_cdf414 != 0)
            char* eax_6 = *arg3
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(arg3)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                    *arg3 = &data_5559b1
        
        eax_8 = sub_44f060(arg3, arg2)
        
        if (arg4 != 0)
            eax_8 = sub_51d5b0(*arg3, esi_1, ecx)
        
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
            eax_8 = sub_44f000(&var_14)
            int32_t temp1_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t eax_9 = sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}
