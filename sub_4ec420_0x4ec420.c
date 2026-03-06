// 函数名称: sub_4ec420
// 虚拟地址: 0x4ec420
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4ec420(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0xc)
    int32_t ecx = *(arg1 + 0xc)
    int32_t edx = *(arg2 + 0xc)
    
    if (ecx s< edx)
        return 0xffffffff
    
    int32_t result
    result.b = ecx s> edx
    return result
}
