// 函数名称: sub_4d6350
// 虚拟地址: 0x4d6350
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4d6350(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        *(arg1 + 0x2d8) = arg2
        return 0
    
    if (arg3 == 1)
        *(arg1 + 0x2d8) += arg2
        return 0
    
    if (arg3 == 2)
        *(arg1 + 0x2d8) = *(sub_4d6250(arg1) + 0x14) + arg2
        return 0
    
    sub_44e4d0(arg3, &data_5559b1, "Halt", "c:\ax2017\engine\soundogg.cpp", 0x126, "SoundOggSeekFunc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
