// 函数名称: ?is_stream_flushable_or_commitable@@YA_NJ@Z
// 虚拟地址: 0x529cd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t?is_stream_flushable_or_commitable@@YA_NJ@Z(int32_t arg1) __pure
{
    // 第一条实际指令: uint8_t eax = arg1.b & 3
    uint8_t eax = arg1.b & 3
    
    if (eax == 2 && (arg1.b & 0xc0) != 0)
        return eax - 1
    
    return (arg1 u>> 0xb).b & 1
}
