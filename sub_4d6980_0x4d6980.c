// 函数名称: sub_4d6980
// 虚拟地址: 0x4d6980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4d6980(int32_t arg1)
{
    // 第一条实际指令: void* result = data_ce26e8
    void* result = data_ce26e8
    
    if (*(result + 0x4090) != arg1)
        *(result + 0x4090) = arg1
        (*__glewBindBuffer)(0x8892, arg1)
        result = data_ce19c4
        *(result + 0x10) += 1
    
    return result
}
