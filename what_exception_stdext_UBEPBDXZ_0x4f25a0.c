// 函数名称: ?what@exception@stdext@@UBEPBDXZ
// 虚拟地址: 0x4f25a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char const* const __fastcall?what@exception@stdext@@UBEPBDXZ(void* arg1)
{
    // 第一条实际指令: char* result = *(arg1 + 4)
    char* result = *(arg1 + 4)
    
    if (result != 0)
        return result
    
    return "Unknown exception"
}
