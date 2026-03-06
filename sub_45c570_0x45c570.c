// 函数名称: sub_45c570
// 虚拟地址: 0x45c570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_45c570(int128_t* arg1)
{
    // 第一条实际指令: float var_48[0x10]
    float var_48[0x10]
    int32_t* ecx
    int32_t* edx
    float* eax_1 = sub_45c930(&var_48, edx, ecx, &var_48)
    *arg1 = *eax_1
    arg1[1] = *(eax_1 + 0x10)
    arg1[2] = *(eax_1 + 0x20)
    arg1[3] = *(eax_1 + 0x30)
    return arg1
}
