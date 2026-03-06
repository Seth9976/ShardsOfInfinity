// 函数名称: sub_42fe60
// 虚拟地址: 0x42fe60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_42fe60(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx_1 = arg3 << 5
    int32_t ecx_1 = arg3 << 5
    int32_t result
    
    if (*(ecx_1 + arg1 + 4) == 9 && *(ecx_1 + arg1 + 8) == arg2)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
