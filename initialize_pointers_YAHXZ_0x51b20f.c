// 函数名称: ?initialize_pointers@@YAHXZ
// 虚拟地址: 0x51b20f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?initialize_pointers@@YAHXZ()
{
    // 第一条实际指令: HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
    HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
    data_659ee8 = GetProcAddress(hModule, "FlsAlloc") ^ __security_cookie
    data_659eec = GetProcAddress(hModule, "FlsFree") ^ __security_cookie
    data_659ef0 = GetProcAddress(hModule, "FlsGetValue") ^ __security_cookie
    data_659ef4 = GetProcAddress(hModule, "FlsSetValue") ^ __security_cookie
    data_659ef8 = GetProcAddress(hModule, "InitializeCriticalSectionEx") ^ __security_cookie
    data_659efc = GetProcAddress(hModule, "InitOnceExecuteOnce") ^ __security_cookie
    data_659f00 = GetProcAddress(hModule, "CreateEventExW") ^ __security_cookie
    data_659f04 = GetProcAddress(hModule, "CreateSemaphoreW") ^ __security_cookie
    data_659f08 = GetProcAddress(hModule, "CreateSemaphoreExW") ^ __security_cookie
    data_659f0c = GetProcAddress(hModule, "CreateThreadpoolTimer") ^ __security_cookie
    data_659f10 = GetProcAddress(hModule, "SetThreadpoolTimer") ^ __security_cookie
    data_659f14 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks") ^ __security_cookie
    data_659f18 = GetProcAddress(hModule, "CloseThreadpoolTimer") ^ __security_cookie
    data_659f1c = GetProcAddress(hModule, "CreateThreadpoolWait") ^ __security_cookie
    data_659f20 = GetProcAddress(hModule, "SetThreadpoolWait") ^ __security_cookie
    data_659f24 = GetProcAddress(hModule, "CloseThreadpoolWait") ^ __security_cookie
    data_659f28 = GetProcAddress(hModule, "FlushProcessWriteBuffers") ^ __security_cookie
    data_659f2c = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns") ^ __security_cookie
    data_659f30 = GetProcAddress(hModule, "GetCurrentProcessorNumber") ^ __security_cookie
    data_659f34 = GetProcAddress(hModule, "CreateSymbolicLinkW") ^ __security_cookie
    data_659f38 = GetProcAddress(hModule, "GetCurrentPackageId") ^ __security_cookie
    data_659f3c = GetProcAddress(hModule, "GetTickCount64") ^ __security_cookie
    data_659f40 = GetProcAddress(hModule, "GetFileInformationByHandleEx") ^ __security_cookie
    data_659f44 = GetProcAddress(hModule, "SetFileInformationByHandle") ^ __security_cookie
    data_659f48 = GetProcAddress(hModule, "GetSystemTimePreciseAsFileTime") ^ __security_cookie
    data_659f4c = GetProcAddress(hModule, "InitializeConditionVariable") ^ __security_cookie
    data_659f50 = GetProcAddress(hModule, "WakeConditionVariable") ^ __security_cookie
    data_659f54 = GetProcAddress(hModule, "WakeAllConditionVariable") ^ __security_cookie
    data_659f58 = GetProcAddress(hModule, "SleepConditionVariableCS") ^ __security_cookie
    data_659f5c = GetProcAddress(hModule, "InitializeSRWLock") ^ __security_cookie
    data_659f60 = GetProcAddress(hModule, "AcquireSRWLockExclusive") ^ __security_cookie
    data_659f64 = GetProcAddress(hModule, "TryAcquireSRWLockExclusive") ^ __security_cookie
    data_659f68 = GetProcAddress(hModule, "ReleaseSRWLockExclusive") ^ __security_cookie
    data_659f6c = GetProcAddress(hModule, "SleepConditionVariableSRW") ^ __security_cookie
    data_659f70 = GetProcAddress(hModule, "CreateThreadpoolWork") ^ __security_cookie
    data_659f74 = GetProcAddress(hModule, "SubmitThreadpoolWork") ^ __security_cookie
    data_659f78 = GetProcAddress(hModule, "CloseThreadpoolWork") ^ __security_cookie
    data_659f7c = GetProcAddress(hModule, "CompareStringEx") ^ __security_cookie
    data_659f80 = GetProcAddress(hModule, "GetLocaleInfoEx") ^ __security_cookie
    data_659f84 = GetProcAddress(hModule, "LCMapStringEx") ^ __security_cookie
    return 0
}
