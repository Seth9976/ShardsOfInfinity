// 函数名称: ?denormal_mantissa_mask@floating_point_value@__crt_strtox@@QBE_KXZ
// 虚拟地址: 0x528280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?denormal_mantissa_mask@floating_point_value@__crt_strtox@@QBE_KXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 4) == 0)
    if (*(arg1 + 4) == 0)
        return 0x7fffff
    
    return 0xffffffff
}
