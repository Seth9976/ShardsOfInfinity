// 函数名称: sub_483280
// 虚拟地址: 0x483280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_483280(int32_t arg1, void* arg2, char** arg3, char* arg4, void* arg5)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = _memset(arg4, 0xfa, arg5)
    uint32_t (* eax)[0x4] = _memset(arg4, 0xfa, arg5)
    void* edi = *(arg2 + 0xc)
    
    if (edi != 0)
        sub_51d5b0(arg4, arg3, edi)
        char* var_1c = arg4
        int32_t var_18 = 0
        void* var_14 = edi
        char var_10 = 0
        int32_t var_c = 0
        return sub_483010(&var_1c, arg2, arg3, 0, &var_1c)
    
    sub_44e4d0(eax, &data_5559b1, "pDefMap->definitionSize != 0", "c:\ax2017\engine\definition.cpp", 
        0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
