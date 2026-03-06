// 函数名称: sub_411cd0
// 虚拟地址: 0x411cd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_411cd0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540e25
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_65aabc != 0)
        sub_44e4d0(eax_3, &data_5559b1, "gClient == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x87, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_65aab8 != 0)
        sub_44e4d0(eax_3, &data_5559b1, "gServer == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x88, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    data_65aabc = 0x5baad0
    int32_t var_8_1 = 0
    int32_t eax_4 = sub_41a3f0()
    int32_t var_8_2 = 1
    
    if (data_65aabc == 0)
        sub_44e4d0(eax_4, &data_5559b1, "gClient != NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8e, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_65aab8 != 0)
        sub_44e4d0(eax_4, &data_5559b1, "gServer == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_18 = 0x5bb130
    data_65aabc = 0
    data_65aab8 = 0x5bb130
    int32_t eax_5 = sub_44e260(0x5558ec)
    int32_t var_8_3 = 2
    
    if (data_65aabc != 0)
        sub_44e4d0(eax_5, &data_5559b1, "gClient == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x9c, "ExitServer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_65aab8 == 0)
        sub_44e4d0(eax_5, &data_5559b1, "gServer != NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x9d, "ExitServer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_8_4 = 0xffffffff
    int32_t* ecx = data_65ac30
    data_65aab8 = 0
    
    if (ecx != 0)
        data_dfc524
        sub_48b5b0(ecx)
        data_65ac30 = 0
    
    int32_t* ecx_1 = data_65ac34
    
    if (ecx_1 != 0)
        data_dfc52c
        sub_48b5b0(ecx_1)
        data_65ac34 = 0
    
    int32_t result = data_65ac38
    
    if (result != 0)
        int32_t var_8_5 = 3
        `eh vector vbase constructor iterator'(result, 0x2c8, 4, sub_429de0)
        int32_t var_8_6 = 0xffffffff
        result = sub_45d050(data_65ac38, 0xb30)
        data_65ac38 = 0
    
    int32_t* ecx_3 = data_65ac3c
    
    if (ecx_3 != 0)
        data_dfc564
        result = sub_48b5b0(ecx_3)
        data_65ac3c = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
