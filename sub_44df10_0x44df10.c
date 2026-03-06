// 函数名称: sub_44df10
// 虚拟地址: 0x44df10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44df10(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    sub_44e450("creating minidump")
    char* eax_2 = sub_44ebe0()
    sub_48c200(eax_2)
    SYSTEMTIME systemTime
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = GetSystemTime(&systemTime)
    int32_t esi = 0
    void fileName
    HANDLE eax_10
    
    while (true)
        int32_t var_13c_1 = esi
        uint32_t wSecond = zx.d(systemTime.wSecond)
        uint32_t wMinute = zx.d(systemTime.wMinute)
        uint32_t wHour = zx.d(systemTime.wHour)
        uint32_t wDay = zx.d(systemTime.wDay)
        uint32_t wMonth = zx.d(systemTime.wMonth)
        uint32_t wYear = zx.d(systemTime.wYear)
        char* var_158_1 = eax_2
        sub_412bd0(&fileName, edx, ecx_1, &fileName, "%sminidump_%4d%02d%02d_%02d%02d%02d_%02d.dmp")
        eax_10, ecx_1, edx = CreateFileA(&fileName, 0x40000000, FILE_SHARE_READ, nullptr, 
            CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr)
        
        if (eax_10 != 0xffffffff)
            break
        
        esi += 1
        
        if (esi s>= 0xa)
            sub_44e450("Can't create minidump file handle")
            break
    
    struct MINIDUMP_EXCEPTION_INFORMATION ExceptionParam
    ExceptionParam.ThreadId = GetCurrentThreadId()
    ExceptionParam.ExceptionPointers = arg1
    ExceptionParam.ClientPointers = 0
    BOOL eax_15 = MiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(), eax_10, MiniDumpNormal, 
        &ExceptionParam, nullptr, nullptr)
    CloseHandle(eax_10)
    char const* const eax_16 = "wrote minidump file %s"
    
    if (eax_15 == 0)
        eax_16 = "saved to write minidump file %s"
    
    void* var_13c_3 = &fileName
    int32_t result = sub_44e450(eax_16)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
