// 函数名称: sub_4924a0
// 虚拟地址: 0x4924a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_4924a0(void* arg1, void* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: if (arg4 == 0)
    if (arg4 == 0)
        *arg3 = 0
        arg3[1] = 0
        return 
    
    int32_t ecx = *(arg4 + 0xc)
    *(arg4 + 0x10) = 0
    
    if (ecx == 0)
        *arg3 = 0
        arg3[1] = 0
        return 
    
    void* eax = *(arg2 + 0xc)
    
    if (*(eax + 0x10) != 0x13)
        sub_44e4d0(eax, &data_5559b1, "pField->pDefMap->defType == DT_ATTRIB_MAP", 
            "c:\ax2017\engine\defparsetree.cpp", 0x372, "DefParseReadAttribMap")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_1 = *(arg2 + 0x1c)
    arg3[1] = sub_45cd70(ecx << 3)
    int32_t edi_1 = 0
    int32_t* i = *(arg4 + 4)
    
    while (i != 0)
        int32_t* ecx_2 = *i
        int32_t eax_2 = arg3[1]
        i = i[1]
        int32_t* var_14_1 = ecx_2
        
        if (sub_4920f0(eax_2, eax_2 + (edi_1 << 3), eax_1, ecx_2).b != 0)
            edi_1 += 1
    
    *arg3 = edi_1
    
    if (edi_1 != 0)
        return 
    
    arg1 = arg3[1]
    
    if (arg1 != 0)
        _aligned_free_base(arg1)
        arg3[1] = edi_1
        return 
    
    arg3[1] = 0
}
