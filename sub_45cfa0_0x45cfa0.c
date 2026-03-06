// 函数名称: sub_45cfa0
// 虚拟地址: 0x45cfa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_45cfa0(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = data_cdf414
    int32_t esi = data_cdf414
    
    if (esi == 0)
        sub_45cec0()
        esi = data_cdf414
    
    for (int32_t i = 0; i s< 7; i += 1)
        if (arg1 s<= 1 << (i.b + 4))
            return esi + i * 0x14
    
    return esi + 0x8c
}
