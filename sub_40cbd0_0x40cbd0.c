// 函数名称: sub_40cbd0
// 虚拟地址: 0x40cbd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_40cbd0()
{
    // 第一条实际指令: int32_t eax_2 = data_ce1af8
    int32_t eax_2 = data_ce1af8
    
    if (eax_2 s< 0x20)
        *((eax_2 << 2) + &data_ce1b08) = &data_5b1d6c
        data_ce1af8 = eax_2 + 1
        return eax_2 + 1
    
    sub_44e4d0(eax_2, &data_5559b1, "gAttribTableLookupCount < MAX_NUM_ATTRIB_TABLES", 
        "c:\ax2017\engine\attribmapregistry.cpp", 0x23, "RegisterAttribTableBeforeMain")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
