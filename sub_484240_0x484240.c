// 函数名称: sub_484240
// 虚拟地址: 0x484240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_484240(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543100
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t* var_24 = nullptr
    int32_t var_20 = 0
    int32_t var_1c = 0
    int32_t var_8_1 = 0
    sub_429090(&var_24, &var_18)
    char* eax_3 = arg1[8]
    char* const edi = &data_5559b1
    char* edx = &data_5559b1
    
    if (eax_3 != 0)
        edx = eax_3
    
    char* var_14
    sub_4a93d0(&var_14, edx)
    var_8_1.b = 1
    void* eax_4 = *arg1
    
    if (eax_4 == 0 || (*(eax_4 + 8) & 1) != 0)
        sub_44e4d0(eax_4, &data_5559b1, 
            "assetPtr->pAssetData && !TEST_BIT(assetPtr->pAssetData->defFlags, DEF_FLAGS_CONTIGUOUS)", 
            "c:\ax2017\engine\defbin.cpp", 0x53a, "DefBinWriteXbinFile")
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    char* eax_5 = var_14
    char* ecx_2 = &data_5559b1
    
    if (eax_5 != 0)
        ecx_2 = eax_5
    
    int32_t ebx
    ebx.b = sub_484130(eax_5, &var_24, ecx_2, 0)
    
    if (ebx.b == 0)
        char* ecx_3 = var_14
        
        if (ecx_3 != 0)
            edi = ecx_3
        
        char* const var_38_1 = edi
        sub_44e260("Failed to write xbin file: '%s'")
    
    var_8_1.b = 2
    
    if (data_cdf414 != 0)
        char* eax_7 = var_14
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_2 = 3
    sub_429100(&var_24)
    int32_t result
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
