// 函数名称: sub_482930
// 虚拟地址: 0x482930
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_482930(int32_t arg1, int32_t arg2, int32_t* arg3, uint32_t (* arg4)[0x4])
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (_fseek(*arg3, arg3[1], 0) == 0)
        result = _fread(arg4, arg2, 1, *arg3)
        
        if (result == 1)
            arg3[1] += arg2
            result.b = result.b
            return result
    
    result.b = 0
    return result
}
