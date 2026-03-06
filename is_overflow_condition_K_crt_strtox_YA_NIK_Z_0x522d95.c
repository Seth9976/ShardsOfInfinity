// 函数名称: ??$is_overflow_condition@K@__crt_strtox@@YA_NIK@Z
// 虚拟地址: 0x522d95
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$is_overflow_condition@K@__crt_strtox@@YA_NIK@Z(char arg1, int32_t arg2) __pure
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if ((arg1 & 4) == 0)
        bool cond:0_1
        
        if ((arg1 & 1) != 0)
            if ((arg1 & 2) == 0)
                cond:0_1 = arg2 u> 0x7fffffff
            else
                cond:0_1 = arg2 u> 0x80000000
        
        if ((arg1 & 1) == 0 || not(cond:0_1))
            result.b = 0
            return result
    
    result.b = 1
    return result
}
