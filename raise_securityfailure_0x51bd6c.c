// 函数名称: ___raise_securityfailure
// 虚拟地址: 0x51bd6c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void___raise_securityfailure(EXCEPTION_POINTERS* arg1) __noreturn
{
    // 第一条实际指令: SetUnhandledExceptionFilter(0)
    SetUnhandledExceptionFilter(0)
    UnhandledExceptionFilter(arg1)
    TerminateProcess(GetCurrentProcess(), 0xc0000409)
    noreturn
}
