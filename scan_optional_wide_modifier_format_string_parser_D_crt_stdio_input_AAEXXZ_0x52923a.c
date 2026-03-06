// 函数名称: ?scan_optional_wide_modifier@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ
// 虚拟地址: 0x52923a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall?scan_optional_wide_modifier@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ(void* arg1)
{
    // 第一条实际指令: char* edx = *(arg1 + 8)
    char* edx = *(arg1 + 8)
    void* result
    result.b = *edx
    
    if (result.b == 0x77)
        result = &edx[1]
        *(arg1 + 8) = result
        *(arg1 + 0x24) = 1
    else if (result.b == 0x43 || result.b == 0x53)
        *(arg1 + 0x24) = 1
    
    return result
}
