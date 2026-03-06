// 函数名称: sub_495490
// 虚拟地址: 0x495490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_495490(void* arg1)
{
    // 第一条实际指令: void* esi = nullptr
    void* esi = nullptr
    
    while (true)
        if (esi != 0)
            esi = *(esi + 0x2fc)
        else
            esi = *(arg1 + 0x2d0)
        
        if (esi == 0)
            break
        
        sub_495490()
    
    sub_49fa50(arg1 + 0x2d0)
    void* result = *(arg1 + 0x2e4)
    *(result + 0x14) -= 1
    return result
}
