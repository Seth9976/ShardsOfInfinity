// 函数名称: sub_4ec6e0
// 虚拟地址: 0x4ec6e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4ec6e0(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_546298
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const edi = arg1
    char* const esi = &data_5559b1
    char* const var_14 = &data_5559b1
    int32_t var_8_1 = 0
    void* eax_3 = _strrchr(edi, 0x2a)
    char* const ecx = &data_5559b1
    uint32_t result
    void* ebx
    
    if (eax_3 == 0 || *(eax_3 + 1) == 0)
    label_4ec7c1:
        char* eax_11 = *(arg2 + 0x20)
        
        if (eax_11 != 0)
            ecx = eax_11
        
        ebx.b = sub_4ec630(edi, ecx).b
    else
        char* const edx = edi
        void* eax_5
        
        do
            eax_5.b = *edx
            edx = &edx[1]
        while (eax_5.b != 0)
        char* eax_7 = *(arg2 + 0x20)
        
        if (eax_7 != 0)
            ecx = eax_7
        
        void* eax_8
        
        do
            eax_8.b = *ecx
            ecx = &ecx[1]
        while (eax_8.b != 0)
        char* const eax_9 = &data_5559b1
        
        if (*(arg2 + 0x20) != 0)
            eax_9 = *(arg2 + 0x20)
        
        result = __stricmp(ecx - &ecx[1] - (edx - &edx[1] - (eax_3 - edi + 1)) + eax_9, eax_3 + 1)
        esi = var_14
        
        if (result == 0)
            sub_44f690(&var_14, edi, eax_3 - edi + 1)
            esi = var_14
            ecx = &data_5559b1
            edi = &data_5559b1
            
            if (esi != 0)
                edi = esi
            
            goto label_4ec7c1
        
        ebx.b = 0
    
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        result = sub_44f000(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
