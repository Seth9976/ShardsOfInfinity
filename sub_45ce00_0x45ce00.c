// 函数名称: sub_45ce00
// 虚拟地址: 0x45ce00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_45ce00(void* arg1))[0x4]
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    uint32_t (* result)[0x4] = sub_45cd70(arg1)
    _memset(result, 0, arg1)
    return result
}
