// 函数名称: sub_490450
// 虚拟地址: 0x490450
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_490450(int32_t arg1, char* arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543758
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* esi = arg3
    char* var_2c = esi
    int32_t* var_5c
    
    if (data_5b2e40 == 0)
        var_5c = "AssetUtilImportSource"
        sub_44e4d0(&ExceptionList, &data_5559b1, "gCompilingMode", "c:\ax2017\engine\assetutils.cpp", 
            0x179, var_5c)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_40
    var_5c = &var_40
    QueryPerformanceCounter(var_5c)
    int32_t var_48 = var_40
    int32_t var_3c
    int32_t var_44 = var_3c
    
    if (arg4 u> 0x22)
        var_5c = "AssetTypeGetInfo"
        sub_44e4d0(var_3c, &data_5559b1, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
            "c:\ax2017\engine\assettyperegistry.cpp", 0xb6, var_5c)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_7 = data_cdf880 + (arg4 << 5)
    char* eax_8 = *(eax_7 + 0x1c)
    int32_t* eax_9 = sub_48d5b0(arg2, arg4)
    int32_t eax_10 = sub_48d180(eax_9)
    var_5c = eax_9
    
    if (arg2 == 0)
        sub_44e4d0(eax_10, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_5c, arg2)
    char* var_18
    sub_4a9b60(&var_18, arg4)
    int32_t var_8_1 = 0
    char* const var_1c = &data_5559b1
    var_8_1.b = 1
    char* eax_11 = var_18
    char* eax_16
    int32_t* ecx_13
    int32_t** edi_1
    
    if (eax_11 != 0 && *eax_11 != 0)
        var_5c = eax_11
        
        if (GetFileAttributesA(var_5c) == 0xffffffff)
            edi_1 = sub_48fa90(arg4)
        label_4905b7:
            var_5c = esi
            ecx_13 = sub_44f590(&var_1c, var_5c)
            goto label_4905c0
        
        char* eax_13 = var_18
        char* const esi_1 = &data_5559b1
        char* const edx_3 = &data_5559b1
        
        if (eax_13 != 0)
            edx_3 = eax_13
        
        edi_1 = sub_494c50(eax_8, edx_3)
        
        if (edi_1 != 0)
            esi = var_2c
            goto label_4905b7
        
        char* eax_15 = var_18
        
        if (eax_15 != 0)
            esi_1 = eax_15
        
        var_5c = esi_1
        char* var_60_1 = arg2
        sub_44e260("reimport %s failed to read: '%s'")
        int32_t var_8_2 = 3
    else
        char* const esi_2
        
        if (arg4 != 0x18)
            int32_t** eax_21
            int32_t xmm0_2[0x4]
            eax_21, xmm0_2 = sub_494c50(eax_8, esi)
            edi_1 = eax_21
            
            if (edi_1 != 0)
                if (arg4 == 0x19 || arg4 == 5)
                    goto label_4905b7
                
                int32_t* eax_23 = sub_492ea0(edi_1[1], "importSourcePath")
                char* var_20
                char* esi_3
                
                if (eax_23 == 0)
                    sub_44f240(&var_20, &data_5559b1)
                    esi_3 = var_20
                else
                    esi_3 = eax_23[1]
                    var_20 = esi_3
                    
                    if (esi_3 != 0 && *esi_3 != 0)
                        char* eax_24 = sub_44f000(&var_20)
                        *(eax_24 + 4) += 1
                
                var_8_1.b = 6
                var_5c = &var_20
                ecx_13 = sub_44f510(&var_1c, var_5c)
                var_8_1.b = 7
                
                if (data_cdf414 != 0 && esi_3 != 0 && *esi_3 != 0)
                    ecx_13 = &var_20
                    char* eax_25 = sub_44f000(ecx_13)
                    int32_t temp2_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        ecx_13 = sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
                
                var_8_1.b = 1
                esi_2 = var_1c
                
                if (esi_2 == 0 || *esi_2 == 0)
                    goto label_4905c6
                
                var_5c = ecx_13
                var_5c = esi_2
                
                if (*esi_2 != 0)
                    char* eax_26 = sub_44f000(&var_5c)
                    *(eax_26 + 4) += 1
                
                sub_48fc30(&var_20)
                var_8_1.b = 8
                char* eax_27 = var_20
                char* edx_11 = &data_5559b1
                
                if (eax_27 != 0)
                    edx_11 = eax_27
                
                char* var_24
                var_5c = sub_4a8b60(&var_24, edx_11)
                var_8_1.b = 9
                ecx_13 = sub_44f510(&var_1c, var_5c)
                var_8_1.b = 0xa
                
                if (data_cdf414 != 0)
                    char* eax_29 = var_24
                    
                    if (eax_29 != 0 && *eax_29 != 0)
                        ecx_13 = &var_24
                        char* eax_30 = sub_44f000(ecx_13)
                        int32_t temp8_1 = *(eax_30 + 4)
                        *(eax_30 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            ecx_13 = sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
                            var_24 = &data_5559b1
                
                var_8_1.b = 0xb
                
                if (data_cdf414 != 0)
                    char* eax_31 = var_20
                    
                    if (eax_31 != 0 && *eax_31 != 0)
                        ecx_13 = &var_20
                        char* eax_32 = sub_44f000(ecx_13)
                        int32_t temp9_1 = *(eax_32 + 4)
                        *(eax_32 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            ecx_13 = sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
                            var_20 = &data_5559b1
                
                var_8_1.b = 1
                goto label_4905c0
            
            var_5c = "sys\failureasset"
            
            if (_strstr(xmm0_2, esi, var_5c) == 0)
                var_5c = esi
                char* var_60_4 = arg2
                sub_44e260("reimport %s failed to read: '%s'")
            
            int32_t var_8_4 = 5
        else
            var_5c = esi
            sub_44f590(&var_1c, var_5c)
            int32_t** eax_20
            eax_20, ecx_13 = sub_48fa90(arg4)
            edi_1 = eax_20
        label_4905c0:
            esi_2 = var_1c
        label_4905c6:
            
            if (*(eax_7 + 0xc) == 0)
            label_4908e8:
                var_5c = ecx_13
                sub_44f2d0(&var_5c, arg2)
                sub_48e0c0(arg4, edi_1)
                int32_t eax_38 = *(eax_7 + 4)
                
                if (eax_38 != 0)
                    var_5c = *edi_1
                    eax_38(arg2, var_5c, eax_2)
                
                eax_16 = sub_484240(eax_9)
                
                if (eax_16.b != 0)
                    var_5c = sub_45ccc0(&var_48)
                    char* var_60_8 = var_2c
                    sub_44e260("Imported source asset %s %d ms")
                    var_8_1.b = 0x14
                    char* eax_40
                    
                    if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                        eax_40 = sub_44f000(&var_1c)
                        int32_t temp3_1 = *(eax_40 + 4)
                        *(eax_40 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
                    
                    int32_t var_8_8 = 0x15
                    
                    if (data_cdf414 != 0)
                        eax_40 = var_18
                        
                        if (eax_40 != 0 && *eax_40 != 0)
                            eax_40 = sub_44f000(&var_18)
                            int32_t temp5_1 = *(eax_40 + 4)
                            *(eax_40 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
                    
                    eax_40.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_40
                
                var_8_1.b = 0x12
                
                if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != eax_16.b)
                    eax_16 = sub_44f000(&var_1c)
                    int32_t temp4_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                
                int32_t var_8_7 = 0x13
            else if (esi_2 == 0 || *esi_2 == 0)
                sub_48b5e0(edi_1)
                var_5c = arg2
                sub_44e260("reimport failed because no source path: '%s'")
                var_8_1.b = 0xc
                
                if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                    eax_16 = sub_44f000(&var_1c)
                    int32_t temp1_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                
                int32_t var_8_6 = 0xd
            else
                var_5c = esi_2
                uint32_t eax_19
                int32_t* ecx_14
                eax_19, ecx_14 = GetFileAttributesA(var_5c)
                
                if (eax_19 != 0xffffffff)
                    var_5c = ecx_14
                    var_5c = esi_2
                    
                    if (*esi_2 != 0)
                        char* eax_33 = sub_44f000(&var_5c)
                        *(eax_33 + 4) += 1
                    
                    char eax_36
                    eax_36, ecx_13 = (*(eax_7 + 0xc))(arg2, edi_1)
                    
                    if (eax_36 != 0)
                        goto label_4908e8
                    
                    sub_48b5e0(edi_1)
                    var_5c = arg2
                    sub_44e260("reimport failed: '%s'")
                    var_8_1.b = 0x10
                    
                    if (data_cdf414 != 0 && *esi_2 != 0)
                        eax_16 = sub_44f000(&var_1c)
                        int32_t temp7_1 = *(eax_16 + 4)
                        *(eax_16 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                    
                    int32_t var_8_5 = 0x11
                else
                    int32_t xmm0_1[0x4] = sub_48b5e0(edi_1)
                    var_5c = "sys\failureasset"
                    
                    if (_strstr(xmm0_1, var_2c, var_5c) == 0)
                        var_5c = esi_2
                        sub_44e260("reimport failed because file doesn't exist: '%s'")
                    
                    var_8_1.b = 0xe
                    
                    if (data_cdf414 != 0 && *esi_2 != 0)
                        eax_16 = sub_44f000(&var_1c)
                        int32_t temp6_1 = *(eax_16 + 4)
                        *(eax_16 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                    
                    int32_t var_8_3 = 0xf
    
    if (data_cdf414 != 0)
        eax_16 = var_18
        
        if (eax_16 != 0 && *eax_16 != 0)
            eax_16 = sub_44f000(&var_18)
            int32_t temp0_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
    
    eax_16.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16
}
