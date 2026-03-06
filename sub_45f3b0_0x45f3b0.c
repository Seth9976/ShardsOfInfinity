// 函数名称: sub_45f3b0
// 虚拟地址: 0x45f3b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_45f3b0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542778
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = arg1
    int32_t result = 0
    void* i = _strchr(esi, 0x2e)
    void* i_1 = i
    
    if (i != 0)
        int32_t* ecx = arg2
        
        do
            result += 1
            
            if (esi == 0)
                sub_44e4d0(i, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x9a, 
                    "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char* const var_14 = &data_5559b1
            sub_44f690(&var_14, esi, i - esi)
            int32_t var_8_1 = 0
            char* const ecx_3 = &data_5559b1
            char* edx = *ecx
            char* const eax_4 = &data_5559b1
            char* const esi_1 = var_14
            
            if (edx != 0)
                ecx_3 = edx
            
            if (esi_1 != 0)
                eax_4 = esi_1
            
            if (ecx_3 != eax_4)
                if (data_cdf414 != 0 && edx != 0 && *edx != 0)
                    char* eax_5 = sub_44f000(ecx)
                    int32_t temp1_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
                
                *ecx = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_6 = sub_44f000(ecx)
                    *(eax_6 + 4) += 1
            
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_7 = sub_44f000(&var_14)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_14 = &data_5559b1
            
            esi = i_1 + 1
            int32_t var_8_3 = 0xffffffff
            
            if (result == 0x10)
                goto label_45f4ff
            
            i = _strchr(esi, 0x2e)
            ecx = &ecx[1]
            i_1 = i
        while (i != 0)
    
    char** ecx_9 = &arg2[result]
    result += 1
    sub_44f590(ecx_9, esi)
    label_45f4ff:
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
