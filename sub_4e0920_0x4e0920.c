// 函数名称: sub_4e0920
// 虚拟地址: 0x4e0920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4e0920(void* arg1)
{
    // 第一条实际指令: char* edx = *(arg1 + 8)
    char* edx = *(arg1 + 8)
    
    while (true)
        char result = *edx
        
        if (result != 0x20 && result != 9 && result != 0xd && result != 0xa)
            return result
        
        if (result == 0xa)
            *(arg1 + 0x118) += 1
        
        edx = &edx[1]
        *(arg1 + 8) = edx
}
