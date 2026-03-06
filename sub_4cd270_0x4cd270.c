// 函数名称: sub_4cd270
// 虚拟地址: 0x4cd270
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4cd270(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t eax = *arg2
    char* ebx = *arg4
    
    if (eax == 0)
        sub_44e4d0(eax, &data_5559b1, "*pString", "c:\ax2017\engine\definition.cpp", 0x17c, 
            "DefinitionDeleteString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (eax != *(arg3 + 0x24))
        _aligned_free_base(eax)
        *arg2 = 0
    
    sub_48b620(arg2, ebx)
    sub_44f590(arg5, *arg4)
    char* result = *arg5
    char* const result_1 = &data_5559b1
    
    if (result != 0)
        result_1 = result
    
    *arg4 = result_1
    return result
}
