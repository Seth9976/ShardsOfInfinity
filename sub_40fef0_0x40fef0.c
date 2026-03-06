// 函数名称: sub_40fef0
// 虚拟地址: 0x40fef0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_40fef0()
{
    // 第一条实际指令: int32_t eax_2 = data_cdf478
    int32_t eax_2 = data_cdf478
    
    if (eax_2 s< 0x100)
        *((eax_2 << 2) + &data_cdf480) = &data_5b8278
        data_cdf478 = eax_2 + 1
        return eax_2 + 1
    
    sub_44e4d0(eax_2, &data_5559b1, "gDefTypeLookupCount < MAX_NUM_DEF_TYPES", 
        "c:\ax2017\engine\deftyperegistry.cpp", 0x2a, "RegisterDefMapBeforeMain")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
