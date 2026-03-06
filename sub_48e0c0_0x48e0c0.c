// 函数名称: sub_48e0c0
// 虚拟地址: 0x48e0c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_48e0c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5433c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_3 = &data_5559b1
    char** result_1
    char** result_2 = result_1
    
    if (result_2 != 0)
        result_3 = result_2
    
    int32_t* eax_3 = sub_48d5b0(result_3, arg1)
    int32_t* esi = eax_3
    
    if (esi[2] == 4)
        eax_3 = sub_48d180(esi)
    
    if (*esi != 0)
        sub_44e4d0(eax_3, &data_5559b1, "pAsset->pAssetData == NULL", 
            "c:\ax2017\engine\assetcatalog.cpp", 0x17e, "AssetCatalogNewSourceAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    *esi = arg2
    esi[2] = 1
    char** result = sub_44f590(&esi[3], &data_5559b1)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = result[1]
            result[1] = &result[1][0xffffffff]
            
            if (temp0_1 == 1)
                result = sub_45d050(result, &result[3][0x10])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
