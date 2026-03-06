// 函数名称: sub_51b9e7
// 虚拟地址: 0x51b9e7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_51b9e7(void* arg1 @ ebp)
{
    // 第一条实际指令: *(arg1 - 0x20) = *(arg1 - 0x14)
    *(arg1 - 0x20) = *(arg1 - 0x14)
    *(arg1 - 0x24) = **(arg1 - 0x20)
    
    if (**(arg1 - 0x24) == 0xe06d7363)
        sub_52f140()
        noreturn
    
    *(arg1 - 0x28) = 0
    return *(arg1 - 0x28)
}
