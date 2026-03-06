// 函数名称: sub_4c6620
// 虚拟地址: 0x4c6620
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4c6620()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5451b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_4c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t var_20
    int32_t var_28 = var_20
    sub_44e260("CreateXPack: scanning...")
    sub_4a5d10()
    sub_44e260("CreateXPack: compiling...")
    void** edi = nullptr
    void** var_38 = nullptr
    int32_t var_34 = 0
    int32_t var_30 = 0
    int32_t var_8_1 = 0
    int32_t i = 0
    int32_t* eax_5 = data_cdf454
    int32_t* eax_6 = *eax_5
    int32_t i_2
    
    do
        i_2 = *eax_6
        
        if (i_2 != 0)
            break
        
        i += 1
        eax_6 = &eax_6[1]
    while (i u<= eax_5[1])
    
    int32_t i_1 = i_2
    char* const ebx = &data_5559b1
    
    if (i_2 != 0)
        do
            int32_t* esi_1 = sub_48e8d0(&i_1)[1]
            int32_t eax_8 = esi_1[2]
            
            if (eax_8 != 3 && eax_8 != 4 && eax_8 != 0)
                if (esi_1[1] == 0)
                    sub_44e4d0(eax_8, &data_5559b1, "assetPtr->assetType != ASSET_TYPE_INVALID", 
                        "c:\ax2017\engine\windows\editorwindow.cpp", 0x11b, "CreateXPack")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                char eax_9
                
                if (*esi_1 == 0)
                    eax_9 = sub_48da50(eax_8, 0, esi_1, 0)
                
                if (*esi_1 != 0 || eax_9 != 0)
                    char* eax_11 = esi_1[8]
                    char* const ecx_2 = &data_5559b1
                    
                    if (eax_11 != 0)
                        ecx_2 = eax_11
                    
                    char* const var_50_3 = ecx_2
                    sub_44e260("-----------------------------CreateXPack: adding %s")
                    void** eax_12 = sub_45cfa0(0xc)
                    eax_12[3] += 1
                    void** ecx_3 = *eax_12
                    
                    if (ecx_3 == 0)
                        sub_45ce30(eax_12)
                        ecx_3 = *eax_12
                    
                    *eax_12 = *ecx_3
                    *ecx_3 = esi_1
                    ecx_3[1] = 0
                    ecx_3[2] = edi
                    
                    if (edi == 0)
                        var_38 = ecx_3
                    else
                        edi[1] = ecx_3
                    
                    var_30 += 1
                    edi = ecx_3
                    void** var_34_1 = edi
                    ebx = &data_5559b1
                else
                    char* eax_10 = esi_1[8]
                    char* const ecx_1 = &data_5559b1
                    
                    if (eax_10 != 0)
                        ecx_1 = eax_10
                    
                    char* const var_50_2 = ecx_1
                    sub_44e260("can't compile %s")
        while (i_1 != 0)
    
    sub_44e260("CreateXPack: writing...")
    int32_t var_50_4 = *(data_65ae00 + 4)
    char* const var_14
    sub_44f980(&var_14, "XBin\%s")
    var_8_1.b = 1
    char* const eax_15 = var_14
    
    if (eax_15 != 0)
        ebx = eax_15
    
    void* eax_16 = _strrchr(ebx, 0x2e)
    
    if (eax_16 != 0)
        eax_16 = __stricmp(eax_16, ".zip")
        
        if (eax_16 == 0)
            sub_484200()
            noreturn
    
    if (sub_484130(eax_16, &var_38, ebx, 1) == 0)
        MessageBoxA(data_ce1c8c, "Failed to write xpack file", "Error", MB_OK)
    
    uint32_t var_50_5 = sub_45ccc0(&performanceCount_1)
    sub_44e260("CreateXPack: done (%d ms)")
    var_8_1.b = 2
    
    if (data_cdf414 != 0)
        char* eax_19 = var_14
        
        if (eax_19 != 0 && *eax_19 != 0)
            char* eax_20 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_2 = 3
    int32_t result = sub_429100(&var_38)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
