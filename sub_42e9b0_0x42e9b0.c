// 函数名称: sub_42e9b0
// 虚拟地址: 0x42e9b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_42e9b0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    __builtin_memset(&arg1[2], 0, 0x20)
    arg1[0xb] = 0
    *arg1 = 5
    arg1[1] = 9
    
    if (*(arg2 + 0x344) != 0)
        esi = 1
        arg1[2] = **(arg2 + 0x340)
    
    if (*(arg2 + 0x334) != 0)
        arg1[esi + 2] = **(arg2 + 0x330)
        esi += 1
    
    if (*(arg2 + 0x33c) != 0)
        arg1[esi + 2] = **(arg2 + 0x338)
        esi += 1
    
    arg1[0xa] = esi
    return arg1
}
