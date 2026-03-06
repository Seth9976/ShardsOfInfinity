// 函数名称: sub_46b120
// 虚拟地址: 0x46b120
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_46b120(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5418c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 - 0x64 u> 0x1b)
    label_46b15c:
        void* eax_4 = sub_46af30(arg1)
        
        if (eax_4 != 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4 + 4
        
        if (sub_46ae50(arg1, &var_14) == 1)
            sub_44f2d0(&var_14, var_14)
            int32_t var_8_1 = 0
            void* eax_7 = sub_46ad40(arg1, &var_14)
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0)
                char* ecx_5 = var_14
                
                if (ecx_5 != 0 && *ecx_5 != 0)
                    char* eax_8 = sub_44f000(&var_14)
                    int32_t temp0_1 = *(eax_8 + 4)
                    *(eax_8 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7 + 4
    else
        switch (arg2)
            case 0x65, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 
                    0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c
                goto label_46b15c
    
    int32_t result = sub_45d320(arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
