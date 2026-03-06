// 函数名称: sub_41b670
// 虚拟地址: 0x41b670
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_41b670(uint32_t arg1)
{
    // 第一条实际指令: uint32_t var_4 = arg1
    uint32_t var_4 = arg1
    
    if (arg1 s< 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "(n & 0x80000000) == 0", "c:\ax2017\engine\mathfunctions.cpp", 
            0xba, "CeilingPowerOf2")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (arg1 u>= 1 && (arg1 == 1 || (arg1 & (arg1 - 1)) == 0))
        return arg1
    
    if (arg1 == 0)
        return 0
    
    int32_t eax_4 = 0
    
    while (arg1 u> 1)
        arg1 u>>= 1
        eax_4 += 1
    
    return (1 << eax_4.b) * 2
}
