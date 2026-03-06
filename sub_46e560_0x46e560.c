// 函数名称: sub_46e560
// 虚拟地址: 0x46e560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_46e560(void* arg1)
{
    // 第一条实际指令: void* i = *(arg1 + 0x784)
    void* i = *(arg1 + 0x784)
    *(arg1 + 0x64c) = 0
    *(arg1 + 0x650) = 0
    *(arg1 + 0x750) = 0x3f800000
    
    for (; i != 0; i = *(i + 0x784))
        *(i + 0x64c) = 0
        *(i + 0x650) = 0
        *(i + 0x750) = 0x3f800000
    
    return i
}
