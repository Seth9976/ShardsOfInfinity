// 函数名称: sub_42cf30
// 虚拟地址: 0x42cf30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_42cf30(int32_t* arg1)
{
    // 第一条实际指令: void* result = *arg1
    void* result = *arg1
    
    if (result != 0)
        *(result + 0x1c) -= 1
        *arg1 = 0
    
    return result
}
