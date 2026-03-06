// 函数名称: sub_48b0e0
// 虚拟地址: 0x48b0e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_48b0e0(int32_t* arg1, void* arg2))[0x4]
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    uint32_t eax = sub_48abc0(*(arg2 + 0x18))
    void* ecx_1 = *(arg2 + 0x18)
    
    if (eax.b == 0)
        return sub_48ad30(eax, arg1, ecx_1, arg2)
    
    int32_t eax_2 = *(ecx_1 + 0x10)
    
    if (eax_2 == 8)
        int32_t result = *(arg2 + 0x24)
        *arg1 = result
        return result
    
    if (eax_2 - 1 u> 0x10)
        return sub_48b160(arg1, ecx_1)
    
    sub_44e4d0(eax_2 - 1, &data_5559b1, "!DefTypeIsBuiltIn(pField->pSubDefMap)", 
        "c:\ax2017\engine\definition.cpp", 0x15e, "DefinitionFillArrayItemWithDefaults")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
