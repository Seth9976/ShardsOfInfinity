// 函数名称: sub_543bb1
// 虚拟地址: 0x543bb1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_543bb1(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x1c) & 2
    int32_t result = *(arg1 - 0x1c) & 2
    
    if (result == 0)
        return result
    
    *(arg1 - 0x1c) &= 0xfffffffd
    return sub_44f380(arg1 - 0x18) __tailcall
}
