// 函数名称: sub_45c850
// 虚拟地址: 0x45c850
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_45c850(float arg1, float arg2, float arg3, float arg4) __pure
{
    // 第一条实际指令: int32_t result_1
    int32_t result_1
    int32_t result = result_1
    
    if (not(arg1 <= 0.999000013f))
        result.b = 0xff
    else if (0.00100000005f <= arg1)
        result.b = (int.d(arg1 * 255f + 0.5f)).b
    else
        result.b = 0
    
    if (not(arg2 <= 0.999000013f))
        result:1.b = 0xff
    else if (0.00100000005f <= arg2)
        result:1.b = (int.d(arg2 * 255f + 0.5f)).b
    else
        result:1.b = 0
    
    if (not(arg3 <= 0.999000013f))
        result:2.b = 0xff
    else if (0.00100000005f <= arg3)
        result:2.b = (int.d(arg3 * 255f + 0.5f)).b
    else
        result:2.b = 0
    
    if (not(arg4 <= 0.999000013f))
        result:3.b = 0xff
        return result
    
    if (0.00100000005f <= arg4)
        result:3.b = (int.d(arg4 * 255f + 0.5f)).b
        return result
    
    result:3.b = 0
    return result
}
