// 函数名称: sub_4125c0
// 虚拟地址: 0x4125c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4125c0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540ec5
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44e450("app pause")
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    bool cond:0 = data_65aabc != 0
    data_65aac0 = performanceCount
    int32_t var_14
    data_65aac4 = var_14
    data_65aac8:4 = 0
    
    if (cond:0)
        sub_44e4d0(var_14, &data_5559b1, "gClient == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x87, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_65aab8 != 0)
        sub_44e4d0(var_14, &data_5559b1, "gServer == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x88, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    data_65aabc = 0x5baad0
    int32_t var_8_1 = 0
    int32_t ecx
    ecx.b = 1
    void* result = sub_415330(ecx, 0)
    int32_t var_8_2 = 1
    
    if (data_65aabc == 0)
        sub_44e4d0(result, &data_5559b1, "gClient != NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8e, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_65aab8 == 0)
        data_65aabc = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_44e4d0(result, &data_5559b1, "gServer == NULL", 
        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
