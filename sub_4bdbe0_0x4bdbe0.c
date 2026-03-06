// 函数名称: sub_4bdbe0
// 虚拟地址: 0x4bdbe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4bdbe0(char arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg1
    int32_t result
    
    if (_isdigit(ebx.b) == 0 && (ebx - 0x61).b u> 5)
        ebx.b -= 0x41
        
        if (ebx.b u> 5)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
