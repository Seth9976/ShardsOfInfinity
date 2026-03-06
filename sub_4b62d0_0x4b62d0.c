// 函数名称: sub_4b62d0
// 虚拟地址: 0x4b62d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4b62d0(int32_t* arg1)
{
    // 第一条实际指令: arg1[0x1a]
    arg1[0x1a]
    int32_t* eax = sub_4b5660()
    int32_t* ecx_1 = arg1[0xb]
    
    if (ecx_1 != 0)
        eax = sub_4b90e0(ecx_1)
    
    void** ecx_2 = data_cdf428
    
    if (ecx_2 != 0)
        return sub_4b6e20(*ecx_2, arg1)
    
    sub_44e4d0(eax, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
