// 函数名称: sub_48cd00
// 虚拟地址: 0x48cd00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_48cd00(char arg1)
{
    // 第一条实际指令: void* result
    void* result
    
    if ((*(data_cdf450 + 0xc) & 1 << arg1) != 0 && *(data_65ae04 + 0x18) != 0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
