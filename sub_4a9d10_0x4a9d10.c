// 函数名称: sub_4a9d10
// 虚拟地址: 0x4a9d10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4a9d10(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543491
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    char* const esi = &data_5559b1
    char* arg_4
    char* eax_3 = arg_4
    
    if (eax_3 != 0)
        esi = eax_3
    
    void* eax_4 = _strrchr(esi, 0x2f)
    
    if (eax_4 == 0)
        char* eax_5 = arg_4
        char* const ecx = &data_5559b1
        
        if (eax_5 != 0)
            ecx = eax_5
        
        eax_4 = _strrchr(ecx, 0x5c)
        
        if (eax_4 == 0)
            sub_44e4d0(eax_4, &data_5559b1, "end", "c:\ax2017\engine\defload.cpp", 0x167, 
                "DirectoryPathFromAssetPath")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    sub_44f320(arg1, esi, eax_4 - esi + 1)
    int32_t var_14_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0)
        char* eax_8 = arg_4
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_44f000(&arg_4)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
