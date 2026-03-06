// 函数名称: sub_48ba60
// 虚拟地址: 0x48ba60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_48ba60(int32_t arg1, char* arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: uint32_t eax = *(arg4 + 0xc)
    uint32_t eax = *(arg4 + 0xc)
    int32_t var_18
    char const* const var_14
    char* ecx
    
    if (eax != 0)
        sub_51d5b0(arg2, arg3, eax)
        char result = sub_48abc0(arg4)
        
        if (result == 0)
            return result
        
        int32_t eax_1 = *(arg4 + 0x10)
        
        if (eax_1 == 8)
            return sub_48b620(arg2, *arg3) __tailcall
        
        eax = eax_1 - 1
        
        if (eax u> 0x10)
            return sub_48ba10(eax, arg4, arg2, nullptr, arg3)
        
        var_14 = "DefinitionDeepCopyReplaceBlock"
        var_18 = 0x344
        ecx = "!DefTypeIsBuiltIn(pDefMap)"
    else
        var_14 = "DefinitionGetSize"
        var_18 = 0x6d
        ecx = "pDefMap->definitionSize != 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\definition.cpp", var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
