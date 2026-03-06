// 函数名称: sub_483990
// 虚拟地址: 0x483990
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __convention("regparm")sub_483990(int32_t arg1, int32_t* arg2, uint32_t (* arg3)[0x4], uint32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543090
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_68 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx = arg2[1]
    int32_t* lpFileInformation
    
    if (edx u> 0x22)
        lpFileInformation = "AssetTypeGetInfo"
        sub_44e4d0(&ExceptionList, &data_5559b1, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
            "c:\ax2017\engine\assettyperegistry.cpp", 0xb6, lpFileInformation)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx = data_cdf880
    char* const lpFileName_1 = &data_5559b1
    char* const edx_3 = &data_5559b1
    void* eax_6 = *((edx << 5) + ecx + 0x1c)
    char* eax_7 = arg2[8]
    
    if (eax_7 != 0)
        edx_3 = eax_7
    
    char* result_3
    sub_48e4d0(&result_3, edx_3)
    int32_t var_8_1 = 0
    char** eax_8 = sub_4459f0(arg2)
    uint32_t result_4 = *(eax_6 + 0xc)
    
    if (result_4 == 0)
        lpFileInformation = "DefinitionGetSize"
        sub_44e4d0(eax_6, &data_5559b1, "pDefMap->definitionSize != 0", 
            "c:\ax2017\engine\definition.cpp", 0x6d, lpFileInformation)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t var_54 = 0
    int32_t* var_18 = &var_54
    int32_t var_28
    lpFileInformation = &var_28
    var_28 = 0
    uint32_t var_24 = 0
    char var_1c = 1
    sub_483010(eax_6, eax_6, eax_8, 0, lpFileInformation)
    _memset(arg3, 0, 0xa8)
    char* lpFileInformation_3 = result_3
    *arg3 = arg2[1]
    (*arg3)[1] = *(eax_6 + 0x18)
    (*arg3)[2] = *((edx << 5) + ecx + 0x14)
    (*arg3)[3] = arg4
    arg3[1][0] = result_4
    (*arg3)[5] = var_54
    uint32_t eax_17
    
    if (lpFileInformation_3 == 0)
        lpFileInformation_3 = &data_5559b1
    else
        if (*lpFileInformation_3 != 0)
            eax_17 = sub_44f000(&result_3)
            
            if (*(eax_17 + 8) s>= 0x80)
                lpFileInformation = "DefBinWriteMakeAssetEntry"
                sub_44e4d0(eax_17, &data_5559b1, "assetName.Length() < MAX_ASSET_NAME_LEN", 
                    "c:\ax2017\engine\defbin.cpp", 0x45d, lpFileInformation)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            lpFileInformation_3 = result_3
        
        if (lpFileInformation_3 == 0)
            lpFileInformation_3 = &data_5559b1
    
    int32_t edx_6 = arg3 - lpFileInformation_3
    
    do
        eax_17.b = *lpFileInformation_3
        lpFileInformation_3[edx_6 + 0x28] = eax_17.b
        lpFileInformation_3 = &lpFileInformation_3[1]
    while (eax_17.b != 0)
    
    int32_t eax_18 = arg2[1]
    lpFileInformation = lpFileInformation_3
    int32_t* lpFileInformation_1 = arg2[8]
    lpFileInformation = lpFileInformation_1
    
    if (lpFileInformation_1 != 0 && *lpFileInformation_1 != 0)
        char* eax_19 = sub_44f000(&lpFileInformation)
        *(eax_19 + 4) += 1
    
    char* result_1
    sub_4a9620(&result_1, eax_18)
    var_8_1.b = 1
    int32_t eax_20 = arg2[1]
    int32_t* lpFileInformation_2 = arg2[8]
    lpFileInformation = lpFileInformation_2
    
    if (lpFileInformation_2 != 0 && *lpFileInformation_2 != 0)
        char* eax_21 = sub_44f000(&lpFileInformation)
        *(eax_21 + 4) += 1
    
    BOOL result_2
    sub_4a9b60(&result_2, eax_20)
    char* lpFileName_2 = result_1
    char* const lpFileName = &data_5559b1
    
    if (lpFileName_2 != 0)
        lpFileName = lpFileName_2
    
    void var_38
    lpFileInformation = &var_38
    BOOL eax_22 = GetFileAttributesExA(lpFileName, GetFileExInfoStandard, lpFileInformation)
    
    if (eax_22 != 0)
        (*arg3)[6] = var_24
        (*arg3)[7] = result_4
    else
        (*arg3)[6] = eax_22
        (*arg3)[7] = eax_22
    
    BOOL lpFileName_3 = result_2
    
    if (lpFileName_3 != 0)
        lpFileName_1 = lpFileName_3
    
    lpFileInformation = &var_38
    BOOL result = GetFileAttributesExA(lpFileName_1, GetFileExInfoStandard, lpFileInformation)
    
    if (result != 0)
        arg3[2][0] = var_24
        result = result_4
        (*arg3)[9] = result
    else
        arg3[2][0] = result
        (*arg3)[9] = result
    
    var_8_1.b = 2
    
    if (data_cdf414 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                result_2 = &data_5559b1
    
    var_8_1.b = 3
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                result_1 = &data_5559b1
    
    int32_t var_8_2 = 4
    
    if (data_cdf414 != 0)
        result = result_3
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_3)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
