// 函数名称: sub_469730
// 虚拟地址: 0x469730
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_469730(void* arg1, int32_t arg2, void* arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t var_8_1 = arg2
    
    if (*(arg3 + 0x788) != 0)
        return 
    
    if (*(arg3 + 4) != 0)
        arg1 = *(arg3 + 0x784)
    
    int32_t var_1c_1
    char const* const ecx
    
    if (*(arg3 + 4) != 0 && *(arg1 + 0x69c) == 2)
        char const* const var_18_1 = "FlattenTreeRec"
        var_1c_1 = 0x1959
        ecx = "el.parent->type != UI_TABLE"
    label_4697d9:
        sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\ui2.cpp", var_1c_1, "FlattenTreeRec")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(arg3 + 0x754) != 0)
        char const* const var_18_3 = "FlattenTreeRec"
        var_1c_1 = 0x195c
        ecx = "el.worldIdx == 0"
        goto label_4697d9
    
    int32_t i = 0
    int32_t eax = *arg4
    int32_t ecx_2 = eax * 2
    *arg4 = eax + 1
    *(arg2 + (ecx_2 << 3)) = arg3
    *(arg2 + (ecx_2 << 3) + 4) = arg5
    
    if (*(arg3 + 0x7f4) s<= 0)
        return 
    
    do
        sub_462970(arg3, i)
        sub_469730(arg4, arg5 + 1)
        i += 1
    while (i s< *(arg3 + 0x7f4))
}
