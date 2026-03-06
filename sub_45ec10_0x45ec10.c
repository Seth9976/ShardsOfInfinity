// 函数名称: sub_45ec10
// 虚拟地址: 0x45ec10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_45ec10(uint32_t arg1))[0x4]
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x7f4)
    int32_t eax = *(arg1 + 0x7f4)
    int32_t var_c
    char const* const ecx
    
    if (eax s< 0x100)
        if (eax == *(arg1 + 0xff8))
            uint32_t (* result)[0x4] = sub_45e790(arg1)
            *(arg1 + (*(arg1 + 0x7f4) << 2) + 0x7f8) = (*result)[0x401]
            *(arg1 + 0x7f4) += 1
            *(arg1 + 0xff8) = *(arg1 + 0x7f4)
            return result
        
        char const* const var_8_1 = "UI2AllocChild"
        var_c = 0x917
        ecx = "parent.numChildren == parent.numTotalChildren"
    else
        char const* const var_8 = "UI2AllocChild"
        var_c = 0x916
        ecx = "parent.numChildren < MAX_CHILDREN"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\ui2.cpp", var_c, "UI2AllocChild")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
