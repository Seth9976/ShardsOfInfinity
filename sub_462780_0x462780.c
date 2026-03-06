// 函数名称: sub_462780
// 虚拟地址: 0x462780
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_462780(void* arg1)
{
    // 第一条实际指令: int32_t i = *(arg1 + 0x7f4)
    int32_t i = *(arg1 + 0x7f4)
    
    if (i s>= *(arg1 + 0xff8))
        *(arg1 + 0xff8) = i
        return 
    
    void* esi_1 = arg1 + 0x7f8 + (i << 2)
    
    do
        sub_45e9a0(esi_1)
        *esi_1 = 0
        i += 1
        esi_1 += 4
    while (i s< *(arg1 + 0xff8))
    
    *(arg1 + 0xff8) = *(arg1 + 0x7f4)
}
