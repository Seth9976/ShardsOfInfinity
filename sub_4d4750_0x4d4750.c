// 函数名称: sub_4d4750
// 虚拟地址: 0x4d4750
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4d4750()
{
    // 第一条实际指令: int32_t* eax = sub_45cfa0(0x1c)
    int32_t* eax = sub_45cfa0(0x1c)
    eax[3] += 1
    int32_t* ecx = *eax
    
    if (ecx == 0)
        sub_45ce30(eax)
        ecx = *eax
    
    int32_t result = *ecx
    *eax = result
    *ecx = 0
    data_ce271c = 0x43c80000
    data_ce2720 = 0x44160000
    data_ce26e0 = ecx
    __builtin_memcpy(&ecx[1], 
        "\x05\x00\x00\x00\x07\x00\x00\x00\x06\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00", 
        0x18)
    return result
}
