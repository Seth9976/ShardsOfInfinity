// 函数名称: sub_48c7f0
// 虚拟地址: 0x48c7f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_48c7f0(PSTR arg1)
{
    // 第一条实际指令: STARTUPINFOA startupInfo
    STARTUPINFOA startupInfo
    startupInfo.cb = 0x44
    startupInfo.lpReserved = 0
    startupInfo.lpDesktop = 0
    startupInfo.lpTitle = 0
    startupInfo.dwX = 0
    startupInfo.dwY = 0
    startupInfo.dwXSize = 0
    startupInfo.dwYSize = 0
    startupInfo.dwXCountChars = 0
    startupInfo.dwYCountChars = 0
    startupInfo.dwFillAttribute = 0
    startupInfo.dwFlags = 0
    startupInfo.wShowWindow = 0
    startupInfo.cbReserved2 = 0
    startupInfo.lpReserved2 = 0
    startupInfo.hStdInput = 0
    startupInfo.hStdOutput = 0
    startupInfo.hStdError = 0
    PROCESS_INFORMATION processInformation
    __builtin_memset(&processInformation, 0, 0x10)
    BOOL eax = CreateProcessA(nullptr, arg1, nullptr, nullptr, 0, CREATE_NO_WINDOW, nullptr, nullptr, 
        &startupInfo, &processInformation)
    
    if (eax != 0)
        WaitForSingleObject(processInformation.hProcess, 0xffffffff)
        CloseHandle(processInformation.hProcess)
        return CloseHandle(processInformation.hThread)
    
    sub_44e4d0(eax, &data_5559b1, "result", "c:\ax2017\engine\xplatformgeneric.cpp", 0x10c, 
        "RunProcess")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
