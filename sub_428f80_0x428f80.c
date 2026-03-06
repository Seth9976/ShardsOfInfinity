// 函数名称: sub_428f80
// 虚拟地址: 0x428f80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_428f80(int32_t arg1)
{
    // 第一条实际指令: sub_45e9a0(&(&data_5bb1f0)[arg1 * 4]:4)
    sub_45e9a0(&(&data_5bb1f0)[arg1 * 4]:4)
    int32_t eax = (&data_5bb1ec)[arg1 * 8]
    (&data_5bb1f0)[arg1 * 4] = (&data_5bb1e4)[arg1 * 4]
    (&data_5bb1f8)[arg1 * 8] = eax
    int32_t eax_1 = (&data_5bb1fc)[arg1 * 8]
    (&data_5bb1ec)[arg1 * 8] = eax_1
    (&data_5bb1e4)[arg1 * 4]:4 = 0
    (&data_5bb1e4)[arg1 * 4].d = 0
    (&data_5bb1fc)[arg1 * 8] = eax_1 + 1
    (&data_5bb1e0)[arg1 * 8] = 0
    return eax_1 + 1
}
