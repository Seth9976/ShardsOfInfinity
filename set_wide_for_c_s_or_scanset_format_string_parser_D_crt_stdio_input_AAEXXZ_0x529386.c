// 函数名称: ?set_wide_for_c_s_or_scanset@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ
// 虚拟地址: 0x529386
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?set_wide_for_c_s_or_scanset@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x20)
    int32_t result = *(arg1 + 0x20)
    
    if (result == 2)
        *(arg1 + 0x24) = 0
    
    if (result == 3 || result == 4 || result == 8)
        *(arg1 + 0x24) = 1
    
    return result
}
