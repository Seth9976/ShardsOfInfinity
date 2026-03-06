// 函数名称: sub_48bb00
// 虚拟地址: 0x48bb00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_48bb00(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg2 + 0xc)
    int32_t ecx = *(arg2 + 0xc)
    
    if (ecx != 0)
        char* result = sub_45cd70(ecx)
        sub_48ba60(result, result, arg1, arg2)
        return result
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "pDefMap->definitionSize != 0", "c:\ax2017\engine\definition.cpp", 
        0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
