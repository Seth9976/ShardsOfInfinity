// 函数名称: sub_4c32b0
// 虚拟地址: 0x4c32b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4c32b0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edx_2 = arg2 * 0x30 + *arg3
    int32_t* edx_2 = arg2 * 0x30 + *arg3
    
    if (arg4 == 0)
        edx_2[1]
        return *edx_2
    
    if (arg4 == 1)
        edx_2[3]
        return edx_2[2]
    
    if (arg4 == 2)
        edx_2[5]
        return edx_2[4]
    
    if (arg4 == 3)
        edx_2[7]
        return edx_2[6]
    
    sub_44e4d0(arg4, &data_5559b1, "Halt", "c:\ax2017\engine\flanim.cpp", 0x554, 
        "FlanimCompressGetVec2")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
