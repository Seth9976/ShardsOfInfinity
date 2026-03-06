// 函数名称: sub_4ac9f0
// 虚拟地址: 0x4ac9f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4ac9f0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_1 = data_ce19c4
    void* eax_1 = data_ce19c4
    *(eax_1 + 0x248) = 0
    *(eax_1 + 0xec) = 2
    *(eax_1 + 0xfc) = arg1
    *(eax_1 + 0x100) = arg2
    *(eax_1 + 0x104) = 1
    return sub_4ac8c0(eax_1, arg2, arg1, 1)
}
