// 函数名称: _rand
// 虚拟地址: 0x523846
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_rand()
{
    // 第一条实际指令: int32_t* eax_1 = sub_530312()
    int32_t* eax_1 = sub_530312()
    int32_t ecx_1 = eax_1[6] * 0x343fd + 0x269ec3
    eax_1[6] = ecx_1
    return ecx_1 u>> 0x10 & 0x7fff
}
