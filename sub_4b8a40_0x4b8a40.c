// 函数名称: sub_4b8a40
// 虚拟地址: 0x4b8a40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4b8a40(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax = sub_4b8c10(arg3, arg4)
    void* eax = sub_4b8c10(arg3, arg4)
    
    if (*(eax + 0x10) != 8)
        sub_44e4d0(eax, &data_5559b1, "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_STRING", 
            "c:\ax2017\engine\attribmap.cpp", 0x1cc, "AttribMapGetString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edx_1 = *arg2
    int32_t ecx = 0
    
    if (edx_1 s> 0)
        int32_t* eax_1 = arg2[1]
        
        do
            if (*eax_1 == arg4)
                return eax_1[1]
            
            ecx += 1
            eax_1 = &eax_1[2]
        while (ecx s< edx_1)
    
    return sub_4b8850(arg3, arg4) __tailcall
}
