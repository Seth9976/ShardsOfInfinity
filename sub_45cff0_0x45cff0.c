// 函数名称: sub_45cff0
// 虚拟地址: 0x45cff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_45cff0(void* arg1))[0x4]
{
    // 第一条实际指令: int32_t* eax = sub_45cfa0(arg1)
    int32_t* eax = sub_45cfa0(arg1)
    eax[3] += 1
    
    if (arg1 s> 0x400 && eax[4] == 0xffffffff)
        uint32_t (* eax_1)[0x4] = sub_45cd70(arg1)
        _memset(eax_1, 0, arg1)
        return eax_1
    
    uint32_t (* edi)[0x4] = *eax
    
    if (edi == 0)
        sub_45ce30(eax)
        edi = *eax
    
    *eax = *edi
    _memset(edi, 0, arg1)
    return edi
}
