// 函数名称: sub_48bb90
// 虚拟地址: 0x48bb90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48bb90(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t ecx = *(arg1 + 0xc)
    
    if (ecx != 0)
        int32_t* result = sub_45cd70(ecx)
        sub_48b160(result, arg1)
        return result
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "pDefMap->definitionSize != 0", "c:\ax2017\engine\definition.cpp", 
        0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
