// 函数名称: sub_4e5e00
// 虚拟地址: 0x4e5e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4e5e00()
{
    // 第一条实际指令: WSADATA wSAData
    WSADATA wSAData
    int32_t eax_1 = __security_cookie ^ &wSAData
    int32_t result = WSAStartup(0x202, &wSAData)
    
    if (result == 0)
        @__security_check_cookie@4(eax_1 ^ &wSAData)
        return result
    
    sub_44e4d0(result, "WSAStartup failed", "HaltMsg", "c:\ax2017\engine\windows\windowsnetwork.cpp", 
        0x2a, "WinsockNetworkInterface::NetworkInterfaceInitForApp")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
