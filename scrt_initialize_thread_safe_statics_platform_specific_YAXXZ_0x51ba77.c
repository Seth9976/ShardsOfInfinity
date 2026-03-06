// 函数名称: ?__scrt_initialize_thread_safe_statics_platform_specific@@YAXXZ
// 虚拟地址: 0x51ba77
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?__scrt_initialize_thread_safe_statics_platform_specific@@YAXXZ()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545c80
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    InitializeCriticalSectionAndSpinCount(&data_659fac, 0xfa0)
    HMODULE hModule = GetModuleHandleW(u"api-ms-win-core-synch-l1-2-0.dll")
    
    if (hModule != 0)
    label_51bad8:
        int32_t eax_5 = GetProcAddress(hModule, "InitializeConditionVariable")
        int32_t eax_6 = GetProcAddress(hModule, "SleepConditionVariableCS")
        int32_t eax_7 = GetProcAddress(hModule, "WakeAllConditionVariable")
        int32_t result
        
        if (eax_5 != 0 && eax_6 != 0 && eax_7 != 0)
            data_659fc8 = 0
            eax_5(0x659fc4)
            data_659fcc = __crt_fast_encode_pointer<void (__cdecl**)()>(eax_6)
            result = __crt_fast_encode_pointer<void (__cdecl**)()>(eax_7)
            data_659fd0 = result
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        result = CreateEventW(nullptr, 1, 0, nullptr)
        data_659fc8 = result
        
        if (result != 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    else
        hModule = GetModuleHandleW(u"kernel32.dll")
        
        if (hModule != 0)
            goto label_51bad8
    
    ___scrt_fastfail(7)
    breakpoint
}
