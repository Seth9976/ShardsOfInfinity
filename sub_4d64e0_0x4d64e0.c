// 函数名称: sub_4d64e0
// 虚拟地址: 0x4d64e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4d64e0(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x54)
    int32_t* esi = *(arg1 + 0x54)
    
    if (esi == 0)
        return 
    
    ov_clear(esi)
    
    if (esi != 0)
        sub_45d050(esi, 0x2e0)
    
    *(arg1 + 0x54) = 0
}
