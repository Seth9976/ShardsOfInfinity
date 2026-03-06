// 函数名称: sub_4472f0
// 虚拟地址: 0x4472f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4472f0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx = *arg2
    int32_t ecx = *arg2
    int32_t* result
    
    if (((ecx & 0x40000) == 0 || (*(arg1 + 0x10))[0xa] == 0)
            && ((ecx & 0x10000) == 0 || (*(arg1 + 0x10))[0xa] == 1)
            && ((ecx & 0x20000) == 0 || (*(arg1 + 0x10))[0xa] == 2)
            && ((ecx & 0x4000) == 0 || (*(arg1 + 0x10))[3] == 3)
            && ((ecx & 0x8000) == 0 || (*(arg1 + 0x10))[3] == 2)
            && ((ecx & 0x1000) == 0 || (*(arg1 + 0x10))[3] == 4)
            && ((ecx & 0x2000) == 0 || (*(arg1 + 0x10))[3] == 1))
        result.b = 1
        return result
    
    result.b = 0
    return result
}
