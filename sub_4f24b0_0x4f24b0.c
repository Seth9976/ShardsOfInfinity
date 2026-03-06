// 函数名称: sub_4f24b0
// 虚拟地址: 0x4f24b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4f24b0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t result = *(sub_4f24f0(ecx) + 0xc)
    
    if (result != 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "pDefMap->definitionSize != 0", "c:\ax2017\engine\definition.cpp", 
        0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
