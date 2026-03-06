// 函数名称: sub_4660e0
// 虚拟地址: 0x4660e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4660e0(void* arg1)
{
    // 第一条实际指令: void* i = *(arg1 + 0x784)
    void* i = *(arg1 + 0x784)
    *(arg1 + 0x654) = 2
    
    for (; i != 0; i = *(i + 0x784))
        *(i + 0x654) = 2
    
    return i
}
