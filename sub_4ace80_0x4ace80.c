// 函数名称: sub_4ace80
// 虚拟地址: 0x4ace80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4ace80(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = data_ce19c4
    void* esi = data_ce19c4
    *(esi + 0x248) += 1
    int32_t eax_1 = *(esi + 0x248) * 5
    *(esi + (eax_1 << 2) + 0x108) = 2
    *(esi + (eax_1 << 2) + 0x110) = arg1
    *(esi + (eax_1 << 2) + 0x114) = arg2
    *(esi + (eax_1 << 2) + 0x118) = 0
    return sub_4ac8c0(eax_1, arg2, arg1, 0)
}
