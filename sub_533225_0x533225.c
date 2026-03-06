// 函数名称: sub_533225
// 虚拟地址: 0x533225
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_533225(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* eax = **(arg1 - 0x14)
    int32_t* eax = **(arg1 - 0x14)
    
    if (*eax != 0xc0000005 && *eax != 0xc000001d)
        return 0
    
    return 1
}
