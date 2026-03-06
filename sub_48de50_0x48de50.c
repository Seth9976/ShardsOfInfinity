// 函数名称: sub_48de50
// 虚拟地址: 0x48de50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_48de50(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5433a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 1
    char* const result_5 = &data_5559b1
    char* result_1
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_5 = result_3
    
    int32_t* eax_3 = sub_48d5b0(result_5, arg3)
    int32_t eax_4 = eax_3[2]
    
    if (eax_4 == 3)
        sub_44e4d0(eax_4, &data_5559b1, "pAsset->assetLocation != ASSET_LOCATION_MEMORY", 
            "c:\ax2017\engine\assetcatalog.cpp", 0x15c, "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (eax_4 == 4)
        sub_48d180(eax_3)
    
    char* result_2
    char* result_4 = result_2
    char* const result_6 = &data_5559b1
    
    if (result_4 != 0)
        result_6 = result_4
    
    char* const eax_5 = &data_5559b1
    int32_t eax_7
    char edx_1
    
    while (true)
        edx_1 = *result_6
        char temp0_1 = *eax_5
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                eax_7 = 0
                break
            
            edx_1 = result_6[1]
            char temp1_1 = eax_5[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                result_6 = &result_6[2]
                eax_5 = &eax_5[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_7 = 0
                break
        
        eax_7 = sbb.d(eax_5, eax_5, c_1) | 1
        break
    
    if (eax_7 == 0)
        sub_44e4d0(eax_7, &data_5559b1, "xbinFilePath != """, "c:\ax2017\engine\assetcatalog.cpp", 
            0x164, "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* eax_8 = eax_3[3]
    char* const ecx_1 = &data_5559b1
    
    if (eax_8 != 0)
        ecx_1 = eax_8
    
    char* const eax_9 = &data_5559b1
    int32_t eax_11
    
    while (true)
        edx_1 = *ecx_1
        char temp2_1 = *eax_9
        bool c_2 = edx_1 u< temp2_1
        
        if (edx_1 == temp2_1)
            if (edx_1 == 0)
                eax_11 = 0
                break
            
            edx_1 = ecx_1[1]
            char temp3_1 = eax_9[1]
            c_2 = edx_1 u< temp3_1
            
            if (edx_1 == temp3_1)
                ecx_1 = &ecx_1[2]
                eax_9 = &eax_9[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_11 = 0
                break
        
        eax_11 = sbb.d(eax_9, eax_9, c_2) | 1
        break
    
    if (eax_11 != 0)
        eax_11 = sub_44f3f0(&eax_3[3], &result_2)
        
        if (eax_11.b == 0)
            sub_44e4d0(eax_11, &data_5559b1, 
                "pAsset->xbinFilePath == "" || pAsset->xbinFilePath == xbinFilePath", 
                "c:\ax2017\engine\assetcatalog.cpp", 0x167, "AssetCatalogNewPackAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    if (*eax_3 != 0)
        sub_44e4d0(eax_11, &data_5559b1, "pAsset->pAssetData == NULL", 
            "c:\ax2017\engine\assetcatalog.cpp", 0x16a, "AssetCatalogNewPackAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    eax_3[2] = 2
    sub_44f510(&eax_3[3], &result_2)
    eax_3[5] = arg4
    char* result = arg5
    eax_3[4] = arg2
    eax_3[6] = result
    var_8_1.b = 2
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                result_1 = &data_5559b1
    
    int32_t var_8_2 = 3
    
    if (data_cdf414 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_2)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
