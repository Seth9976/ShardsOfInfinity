// 函数名称: sub_5425c8
// 虚拟地址: 0x5425c8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_5425c8(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x78) & 2
    int32_t result = *(arg1 - 0x78) & 2
    
    if (result == 0)
        return result
    
    *(arg1 - 0x78) &= 0xfffffffd
    return boost::exception::~exception(*(arg1 - 0x7c)) __tailcall
}
