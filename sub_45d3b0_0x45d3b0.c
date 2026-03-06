// 函数名称: sub_45d3b0
// 虚拟地址: 0x45d3b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_45d3b0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax = sub_4b8c10(&data_5b1d6c, arg4)
    void* eax = sub_4b8c10(&data_5b1d6c, arg4)
    
    if (*(eax + 0x10) == 8)
        return *(arg3 + 4)
    
    sub_44e4d0(eax, &data_5559b1, 
        "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING", 
        "c:\ax2017\engine\ui2.cpp", 0x677, "AttribAsString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
