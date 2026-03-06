// 函数名称: sub_492570
// 虚拟地址: 0x492570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_492570(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: char* ebx = arg4
    char* ebx = arg4
    *(ebx + 0xc) = arg2
    void* ecx = arg2[3]
    void* eax = *(ecx + 0x10)
    uint32_t eax_1 = sub_48ac30(ecx)
    
    if (eax_1.b != 0)
        return sub_491920(eax_1, arg2[3], *arg2 + arg3, arg2, ebx)
    
    if (eax == 5)
        return sub_491f90(eax, arg2, arg3, ebx)
    
    if (eax == 0x11)
        return sub_491da0(eax, arg2, arg3, ebx)
    
    if (eax == 0x13)
        return sub_4924a0(eax, arg2, *arg2 + arg3, *(ebx + 8))
    
    if (eax == 0x14)
        int32_t var_14_4 = *(ebx + 8)
        return sub_492280(eax, *arg2 + arg3, arg3, arg2)
    
    char const* const var_1c
    int32_t var_18_2
    char const* const var_14_5
    void* eax_8
    char* ecx_10
    
    if (eax == 0xc)
        sub_491640(ebx, *arg2 + arg3)
        eax_8 = *arg2
        int32_t* esi_1 = arg2[4]
        char* ecx_9 = *(arg3 + eax_8)
        
        if (ecx_9 != 0)
            int32_t eax_9 = sub_4950a0(ecx_9, 0)
            *(esi_1 + arg3) = eax_9
            return eax_9
        
        var_14_5 = "DefinitionSetHashFromName"
        var_18_2 = 0xc2
        var_1c = "c:\ax2017\engine\definition.cpp"
        ecx_10 = "name"
    else if (eax != 0xb)
        void* edx_9 = arg2[3]
        eax_8 = *(edx_9 + 0x10) - 1
        
        if (eax_8 u> 0x10)
            return sub_492980(eax_8, edx_9, *arg2 + arg3, *(ebx + 8), 0)
        
        var_14_5 = "DefParseReadFieldType"
        var_18_2 = 0x3f2
        var_1c = "c:\ax2017\engine\defparsetree.cpp"
        ecx_10 = "!DefTypeIsBuiltIn(pField->pDefMap)"
    else
        void* eax_11 = *arg2 + arg3
        
        if (*(ebx + 8) == 0)
            *eax_11 = 0
            return eax_11
        
        eax_8 = arg2[6]
        int32_t ecx_11 = *(eax_8 + 0xc)
        
        if (ecx_11 != 0)
            int32_t* eax_12 = sub_45cd70(ecx_11)
            *eax_11 = eax_12
            return sub_492980(eax_12, arg2[6], eax_12, *(ebx + 8), 0)
        
        var_14_5 = "DefinitionGetSize"
        var_18_2 = 0x6d
        var_1c = "c:\ax2017\engine\definition.cpp"
        ecx_10 = "pDefMap->definitionSize != 0"
    
    sub_44e4d0(eax_8, &data_5559b1, ecx_10, var_1c, var_18_2, var_14_5)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
