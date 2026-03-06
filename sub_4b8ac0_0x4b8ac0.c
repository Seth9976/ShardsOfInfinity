// 函数名称: sub_4b8ac0
// 虚拟地址: 0x4b8ac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4b8ac0(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t eax = sub_4b8c10(arg3, arg5)
    
    if (eax != arg4)
        sub_44e4d0(eax, &data_5559b1, "AttribTagGetDefMap(pAttribTable, tag) == pDefMap", 
            "c:\ax2017\engine\attribmap.cpp", 0x1da, "AttribMapGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edx_1 = *arg2
    int32_t ecx = 0
    
    if (edx_1 s> 0)
        int32_t* eax_1 = arg2[1]
        
        do
            if (*eax_1 == arg5)
                return eax_1[1]
            
            ecx += 1
            eax_1 = &eax_1[2]
        while (ecx s< edx_1)
    
    return sub_4b8850(arg3, arg5)
}
