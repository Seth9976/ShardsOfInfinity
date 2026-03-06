// 函数名称: sub_4b5510
// 虚拟地址: 0x4b5510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4b5510()
{
    // 第一条实际指令: int32_t* eax = data_cdf428
    int32_t* eax = data_cdf428
    
    if (eax != 0)
        return *eax
    
    sub_44e4d0(eax, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
