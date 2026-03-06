// 函数名称: sub_4a9200
// 虚拟地址: 0x4a9200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4a9200(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544341
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    char* var_38 = 0x2e
    int32_t var_18 = 0
    void* eax_3
    char* ecx
    eax_3, ecx = _strrchr(arg2, var_38.b)
    
    if (eax_3 != 0)
        var_38 = ".xpack"
        eax_3, ecx = __stricmp(eax_3, var_38)
        
        if (eax_3 == 0)
            var_38 = "DefLoadRelativeXbinPathFromAssetPath"
            sub_44e4d0(eax_3, &data_5559b1, "!AssetPathIsXPack(assetPath)", 
                "c:\ax2017\engine\defload.cpp", 0xae, var_38)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    var_38 = ecx
    
    if (arg2 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_38, arg2)
    char* var_14
    sub_48e630(&var_14)
    int32_t var_8_1 = 1
    char* esi_1 = nullptr
    char* eax_4 = var_14
    char* const edi = &data_5559b1
    
    while (true)
        int32_t ecx_4
        
        if (eax_4 == 0 || *eax_4 == 0)
            ecx_4 = 0
        else
            ecx_4 = *(sub_44f000(&var_14) + 8)
            eax_4 = var_14
        
        if (esi_1 s>= ecx_4)
            break
        
        char* ecx_5 = &data_5559b1
        
        if (eax_4 != 0)
            ecx_5 = eax_4
        
        if (*(ecx_5 + esi_1) == 0x3a)
            var_38 = 0x5f
            sub_44f740(&var_14, esi_1, var_38.b)
            eax_4 = var_14
        
        esi_1 = &esi_1[1]
    
    char const* const ecx_7
    
    if (data_65acf3 != 0)
        ecx_7 = "xbin/ios/"
    else if (data_65acf2 == 0)
        ecx_7 = "xbin/"
    else
        ecx_7 = "xbin/web/"
    
    var_8_1.b = 1
    
    if (eax_4 != 0)
        edi = eax_4
    
    var_38 = edi
    char const* const var_3c_3 = ecx_7
    sub_44f980(arg1, "%s%s.xbin")
    int32_t var_18_1 = 1
    int32_t var_8_2 = 8
    
    if (data_cdf414 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
