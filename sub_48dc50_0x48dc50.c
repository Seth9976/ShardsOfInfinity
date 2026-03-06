// 函数名称: sub_48dc50
// 虚拟地址: 0x48dc50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48dc50(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543370
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_cdf454
    *(eax_3 + 0x1c) += 1
    int32_t var_28 = *(eax_3 + 0x1c)
    char* var_18
    sub_44f980(&var_18, "!Mem\%d")
    int32_t var_8_1 = 0
    char* eax_4 = var_18
    char* edx = &data_5559b1
    
    if (eax_4 != 0)
        edx = eax_4
    
    char* const var_14
    sub_48e330(eax_4, edx, &var_14, arg1)
    var_8_1.b = 1
    char* const ecx_1 = &data_5559b1
    char* const eax_5 = var_14
    
    if (eax_5 != 0)
        ecx_1 = eax_5
    
    int32_t* result = sub_48d5b0(ecx_1, arg1)
    
    if (*result != 0)
        sub_44e4d0(result, &data_5559b1, "pAsset->pAssetData == NULL", 
            "c:\ax2017\engine\assetcatalog.cpp", 0x13c, "AssetCatalogNewMemoryAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    *result = arg2
    result[2] = 3
    sub_44f590(&result[3], &data_5559b1)
    var_8_1.b = 2
    
    if (data_cdf414 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_2 = 3
    
    if (data_cdf414 != 0)
        char* eax_8 = var_18
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_44f000(&var_18)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
