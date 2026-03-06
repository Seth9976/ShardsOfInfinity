// 函数名称: ___acrt_fenv_get_common_round_control
// 虚拟地址: 0x53a989
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_fenv_get_common_round_control(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t result = arg1 u>> 0xe & 0x300
    int32_t result = arg1 u>> 0xe & 0x300
    
    if (result == (arg1 u>> 0x16 & 0x300))
        return result
    
    return 0xffffffff
}
