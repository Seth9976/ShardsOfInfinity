// 函数名称: sub_48d5b0
// 虚拟地址: 0x48d5b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48d5b0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543338
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48d080()
    void* eax_3
    char* ecx_1
    eax_3, ecx_1 = sub_48e2c0(arg1)
    char* var_30
    
    if (eax_3.b == 0)
        var_30 = "AssetPtrFromPath"
        sub_44e4d0(eax_3, &data_5559b1, "AssetPathIsValid(assetPath)", 
            "c:\ax2017\engine\assetcatalog.cpp", 0x9c, var_30)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*arg1 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    var_30 = ecx_1
    int32_t* eax_5 = sub_48d4c0(sub_44f2d0(&var_30, arg1))
    
    if (eax_5 == 0)
        int32_t eax_6 = sub_495050(arg1)
        
        if (eax_6 != arg2)
            var_30 = "AssetPtrFromPath"
            sub_44e4d0(eax_6, &data_5559b1, "AssetTypeFromPath(assetPath) == assetType", 
                "c:\ax2017\engine\assetcatalog.cpp", 0xab, var_30)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* esi_1 = data_cdf454
        int32_t* edx = *(esi_1 + 0xc)
        *(esi_1 + 0x18) += 1
        int32_t* var_18_1 = edx
        
        if (edx == 0)
            sub_48e950(esi_1 + 0xc)
            edx = *(esi_1 + 0xc)
            var_18_1 = edx
        
        *(esi_1 + 0xc) = *edx
        *edx = 0
        edx[2] = 0
        edx[4] = 0
        edx[5] = 0
        edx[6] = 0
        edx[7] = 0
        edx[3] = &data_5559b1
        edx[8] = &data_5559b1
        var_30 = &data_5559b1
        edx[1] = arg2
        var_30 = sub_44f590(&edx[3], var_30)
        sub_44f2d0(&var_30, arg1)
        char* const var_14
        var_30 = sub_48e630(&var_14)
        int32_t var_8_1 = 0
        sub_44f510(&edx[8], var_30)
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            char* eax_9 = var_14
            
            if (eax_9 != 0 && *eax_9 != 0)
                char* eax_10 = sub_44f000(&var_14)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_3 = 0xffffffff
        var_30 = &edx[8]
        var_18_1[2] = 0
        void* eax_11 = sub_48e840(var_30)
        
        if (eax_11 != 0)
            var_30 = "AssetPtrFromPath"
            sub_44e4d0(eax_11, &data_5559b1, 
                "gpAssetAppData->pathToAssetMap.GetAt(pAssetNew->assetPath) == NULL", 
                "c:\ax2017\engine\assetcatalog.cpp", 0xb3, var_30)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        char* eax_12 = var_18_1[8]
        char* const ecx_15 = &data_5559b1
        int32_t* esi_3 = data_cdf454
        
        if (eax_12 != 0)
            ecx_15 = eax_12
        
        int32_t eax_13 = sub_4950a0(ecx_15, 0)
        int32_t** ecx_18 = (esi_3[1] & eax_13) << 2
        int32_t* esi_4 = *(ecx_18 + *esi_3)
        
        if (esi_4 != 0)
            char* edi_1 = var_18_1[8]
            
            while (true)
                char* eax_15 = *esi_4
                char* const ecx_19 = &data_5559b1
                
                if (eax_15 != 0)
                    ecx_19 = eax_15
                
                char* const eax_16 = &data_5559b1
                
                if (edi_1 != 0)
                    eax_16 = edi_1
                
                int32_t eax_18
                
                while (true)
                    char edx_3 = *eax_16
                    char temp1_1 = *ecx_19
                    bool c_1 = edx_3 u< temp1_1
                    
                    if (edx_3 == temp1_1)
                        if (edx_3 == 0)
                            eax_18 = 0
                            break
                        
                        edx_3 = eax_16[1]
                        char temp2_1 = ecx_19[1]
                        c_1 = edx_3 u< temp2_1
                        
                        if (edx_3 == temp2_1)
                            eax_16 = &eax_16[2]
                            ecx_19 = &ecx_19[2]
                            
                            if (edx_3 != 0)
                                continue
                            
                            eax_18 = 0
                            break
                    
                    eax_18 = sbb.d(eax_16, eax_16, c_1) | 1
                    break
                
                if (eax_18 == 0)
                    esi_4[1] = var_18_1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return var_18_1
                
                esi_4 = esi_4[2]
                
                if (esi_4 == 0)
                    break
        
        int32_t** eax_19 = sub_45cfa0(0xc)
        eax_19[3] += 1
        int32_t* esi_5 = *eax_19
        
        if (esi_5 == 0)
            sub_45ce30(eax_19)
            esi_5 = *eax_19
        
        *eax_19 = *esi_5
        char* eax_21 = var_18_1[8]
        *esi_5 = eax_21
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_44f000(esi_5)
            *(eax_22 + 4) += 1
        
        esi_5[1] = var_18_1
        esi_5[2] = *(ecx_18 + *esi_3)
        *(ecx_18 + *esi_3) = esi_5
        esi_3[2] += 1
        eax_5 = var_18_1
    else if (eax_5[1] != arg2)
        var_30 = "AssetPtrFromPath"
        sub_44e4d0(eax_5, &data_5559b1, "pAssetExisting->assetType == assetType", 
            "c:\ax2017\engine\assetcatalog.cpp", 0xa7, var_30)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5
}
