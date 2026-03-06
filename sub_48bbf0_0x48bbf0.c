// 函数名称: sub_48bbf0
// 虚拟地址: 0x48bbf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __fastcallsub_48bbf0(void* arg1)
{
    // 第一条实际指令: int128_t* result = sub_45cd70(0x10)
    int128_t* result = sub_45cd70(0x10)
    *result = zx.o(0)
    int32_t ecx = *(arg1 + 0xc)
    
    if (ecx != 0)
        int32_t* eax = sub_45cd70(ecx)
        sub_48b160(eax, arg1)
        *result = eax
        *(result + 0xc) = arg1
        return result
    
    sub_44e4d0(result, &data_5559b1, "pDefMap->definitionSize != 0", "c:\ax2017\engine\definition.cpp", 
        0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
