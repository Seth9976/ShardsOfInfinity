// 函数名称: sub_42e940
// 虚拟地址: 0x42e940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_42e940(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: __builtin_memset(&arg1[3], 0, 0x1c)
    __builtin_memset(&arg1[3], 0, 0x1c)
    arg1[0xb] = 0
    int32_t* ecx_1 = *(arg2 + 0x330)
    arg1[1] = 9
    *arg1 = 4
    arg1[2] = *ecx_1
    arg1[0xa] = 1
    return arg1
}
