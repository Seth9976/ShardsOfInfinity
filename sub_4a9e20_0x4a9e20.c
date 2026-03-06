// 函数名称: sub_4a9e20
// 虚拟地址: 0x4a9e20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4a9e20(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544461
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_18 = arg1
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    char* arg_4
    char* eax_3 = arg_4
    
    if (eax_3 == 0 || *eax_3 == 0)
    label_4a9f2a:
        *arg1 = eax_3
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_7 = sub_44f000(arg1)
            *(eax_7 + 4) += 1
            eax_3 = arg_4
        
        int32_t var_14_3 = 1
        int32_t var_8_4 = 2
    label_4a9f50:
        
        if (data_cdf414 != 0)
            goto label_4a9f59
    else
        int32_t edx_1 = *(sub_44f000(&arg_4) + 8)
        eax_3 = arg_4
        
        if (edx_1 s<= 1)
            goto label_4a9f2a
        
        void* edx_2 = edx_1 - 1
        char* const esi_1 = &data_5559b1
        char* const ecx_1 = &data_5559b1
        
        if (eax_3 != 0)
            ecx_1 = eax_3
        
        char* const ecx_2
        
        if (*(ecx_1 + edx_2) != 0x2f)
            ecx_2 = &data_5559b1
            
            if (eax_3 != 0)
                ecx_2 = eax_3
        
        if (*(ecx_1 + edx_2) == 0x2f || *(ecx_2 + edx_2) == 0x5c)
            edx_2 -= 1
        
        if (edx_2 s< 0)
        label_4a9ecf:
            *arg1 = eax_3
            
            if (eax_3 != 0 && *eax_3 != 0)
                char* eax_5 = sub_44f000(arg1)
                *(eax_5 + 4) += 1
                eax_3 = arg_4
            
            int32_t var_14_1 = 1
            int32_t var_8_2 = 4
            goto label_4a9f50
        
        while (true)
            char* const ecx_3 = &data_5559b1
            
            if (eax_3 != 0)
                ecx_3 = eax_3
            
            if (*(ecx_3 + edx_2) == 0x2f)
                break
            
            char* ecx_4 = &data_5559b1
            
            if (eax_3 != 0)
                ecx_4 = eax_3
            
            if (*(ecx_4 + edx_2) == 0x5c)
                break
            
            void* temp1_1 = edx_2
            edx_2 -= 1
            
            if (temp1_1 - 1 s< 0)
                goto label_4a9ecf
        
        *arg1 = &data_5559b1
        
        if (eax_3 != 0)
            esi_1 = eax_3
        
        sub_44f690(arg1, esi_1, edx_2 + 1)
        int32_t var_14_2 = 1
        int32_t var_8_3 = 3
        
        if (data_cdf414 != 0)
            eax_3 = arg_4
        label_4a9f59:
            
            if (eax_3 != 0 && *eax_3 != 0)
                char* eax_8 = sub_44f000(&arg_4)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
