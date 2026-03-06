// 函数名称: sub_48b260
// 虚拟地址: 0x48b260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_48b260(int32_t arg1, void* arg2, int32_t* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    char result = sub_48abc0(*(arg2 + 0x18))
    
    if (result == 0)
        return result
    
    void* edx = *(arg2 + 0x18)
    int32_t eax = *(edx + 0x10)
    
    if (eax == 8)
        return sub_48b200(arg3, *(arg2 + 0x24))
    
    if (eax - 1 u> 0x10)
        return sub_48b560(eax - 1, edx, arg3, arg4)
    
    sub_44e4d0(eax - 1, &data_5559b1, "!DefTypeIsBuiltIn(pField->pSubDefMap)", 
        "c:\ax2017\engine\definition.cpp", 0x191, "DefinitionDeleteVariableArrayField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
