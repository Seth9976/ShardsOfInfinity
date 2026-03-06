// 函数名称: sub_434ab0
// 虚拟地址: 0x434ab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_434ab0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg2 s> 0)
        do
            if (*(arg3 + (result << 2)) == arg4)
                result.b = 1
                return result
            
            result += 1
        while (result s< arg2)
    
    result.b = 0
    return result
}
