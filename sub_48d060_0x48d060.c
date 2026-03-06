// 函数名称: sub_48d060
// 虚拟地址: 0x48d060
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_48d060(void* arg1, int32_t arg2)
{
    // 第一条实际指令: while (*(arg1 + 4) != 0)
    while (*(arg1 + 4) != 0)
        if (*arg1 == arg2)
            return *(arg1 + 4)
        
        arg1 += 8
    
    return &data_5559b1
}
