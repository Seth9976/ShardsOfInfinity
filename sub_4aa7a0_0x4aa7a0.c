// 函数名称: sub_4aa7a0
// 虚拟地址: 0x4aa7a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4aa7a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = arg1[2]
    
    if (eax_3 == 0 || eax_3 == 1)
        char* eax_4 = arg1[3]
        
        if (eax_4 != 0 && *eax_4 != 0)
            sub_44e4d0(eax_4, &data_5559b1, "assetPtr->xbinFilePath.IsEmpty()", 
                "c:\ax2017\engine\defload.cpp", 0x248, "DefinitionLoadPackAsset")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        char* eax_5 = arg1[8]
        char* edx_1 = &data_5559b1
        
        if (eax_5 != 0)
            edx_1 = eax_5
        
        int32_t var_8_1 = 0
        char* const var_14
        sub_44f510(&arg1[3], sub_4a93d0(&var_14, edx_1))
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            char* eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_44f000(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_3 = 0xffffffff
    
    int32_t* var_18
    
    if (sub_484600(&var_18, arg1) == 0)
        arg1[2] = 0
        sub_44f590(&arg1[3], &data_5559b1)
        char** eax_10
        eax_10.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10
    
    int32_t ecx_8 = arg1[1]
    arg1[2] = 2
    void* eax_11 = sub_495000(ecx_8)
    int32_t* edi = var_18
    int32_t edx_5 = *(eax_11 + 4)
    
    if (edx_5 != 0)
        char* eax_12 = arg1[8]
        char* const ecx_9 = &data_5559b1
        
        if (eax_12 != 0)
            ecx_9 = eax_12
        
        eax_11 = edx_5(ecx_9, *edi, eax_2)
    
    if (*arg1 == 0)
        *arg1 = edi
        eax_11.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
    
    sub_44e4d0(eax_11, &data_5559b1, "assetPtr->pAssetData == NULL", "c:\ax2017\engine\defload.cpp", 
        0x25d, "DefinitionLoadPackAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
