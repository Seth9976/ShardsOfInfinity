// 函数名称: sub_4bc490
// 虚拟地址: 0x4bc490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __thiscallsub_4bc490(void* arg1, uint32_t (* arg2)[0x4]))[0x4]
{
    // 第一条实际指令: uint32_t (* result)[0x4] = arg2
    uint32_t (* result)[0x4] = arg2
    
    if (result s< 0 || result s> *(arg1 + 8))
        sub_44e4d0(result, &data_5559b1, "size_arg >= 0 && size_arg <= mSizeReserved", 
            "c:\ax2017\engine\xarray.h", 0x62, "XArray<struct Mat4>::SetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    int32_t ecx = *(arg1 + 4)
    void* edi_1 = result - ecx
    
    if (edi_1 s> 0)
        result = _memset((ecx << 6) + *arg1, 0, edi_1 << 6)
        *(arg1 + 4) += edi_1
    else if (edi_1 s< 0)
        *(arg1 + 4) = result
    
    return result
}
