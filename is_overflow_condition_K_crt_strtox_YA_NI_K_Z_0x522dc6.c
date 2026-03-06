// 函数名称: ??$is_overflow_condition@_K@__crt_strtox@@YA_NI_K@Z
// 虚拟地址: 0x522dc6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$is_overflow_condition@_K@__crt_strtox@@YA_NI_K@Z(char arg1, int32_t arg2, int32_t arg3) __pure
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if ((arg1 & 4) == 0)
        if ((arg1 & 1) == 0)
            result.b = 0
            return result
        
        bool cond:2_1
        
        if ((arg1 & 2) == 0)
            if (arg3 u< 0x7fffffff)
                result.b = 0
                return result
            
            if (arg3 u<= 0x7fffffff)
                cond:2_1 = arg2 u> 0xffffffff
            label_522df0:
                
                if (not(cond:2_1))
                    result.b = 0
                    return result
        else
            if (arg3 u< 0x80000000)
                result.b = 0
                return result
            
            if (arg3 u<= 0x80000000)
                cond:2_1 = arg2 u> 0
                goto label_522df0
    
    result.b = 1
    return result
}
