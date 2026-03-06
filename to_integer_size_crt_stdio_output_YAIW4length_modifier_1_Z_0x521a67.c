// 函数名称: ?to_integer_size@__crt_stdio_output@@YAIW4length_modifier@1@@Z
// 虚拟地址: 0x521a67
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?to_integer_size@__crt_stdio_output@@YAIW4length_modifier@1@@Z(int32_t arg1)
{
    // 第一条实际指令: switch (arg1)
    switch (arg1)
        case 0, 3, 6, 7, 9, 0xa
            return 4
        case 1
            return 1
        case 2
            return 2
        case 4, 5, 0xb
            return 8
    
    return 0
}
