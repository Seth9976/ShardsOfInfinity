// 函数名称: sub_483940
// 虚拟地址: 0x483940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_483940(int32_t arg1, void* arg2, void* arg3, void* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: void* var_c = arg3
    void* var_c = arg3
    
    if (*(arg4 + 0x10) - 1 u<= 0x10)
        int32_t eax_1
        eax_1.b = 1
        return eax_1
    
    void* eax_2 = arg3 + arg6
    
    if (*(arg4 + 0xc) + arg2 u<= eax_2)
        return sub_483610(eax_2, arg2, arg3, arg4, arg5, arg6)
    
    eax_2.b = 0
    return eax_2
}
