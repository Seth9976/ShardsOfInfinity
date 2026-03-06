// 函数名称: sub_47deb0
// 虚拟地址: 0x47deb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_47deb0(float* arg1)
{
    // 第一条实际指令: void var_48
    void var_48
    int32_t edx
    int128_t* eax_1 = sub_45c3f0(&var_48, edx, arg1, &var_48)
    int128_t xmm1 = eax_1[1]
    int128_t xmm2 = eax_1[2]
    int128_t xmm3 = eax_1[3]
    void* eax_2 = data_ce19c4
    *(eax_2 + 0xa0) = *eax_1
    *(eax_2 + 0xe0) = 1
    *(eax_2 + 0xb0) = xmm1
    *(eax_2 + 0xc0) = xmm2
    *(eax_2 + 0xd0) = xmm3
    return sub_45ade0(&arg1[5])
}
