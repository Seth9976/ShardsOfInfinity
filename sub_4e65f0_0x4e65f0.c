// 函数名称: sub_4e65f0
// 虚拟地址: 0x4e65f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4e65f0(void* arg1)
{
    // 第一条实际指令: int32_t* edx = *(arg1 + 4)
    int32_t* edx = *(arg1 + 4)
    
    if (edx != 0)
        (*(*edx + 8))(edx)
        *(arg1 + 4) = 0
}
