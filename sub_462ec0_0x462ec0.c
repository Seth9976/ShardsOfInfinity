// 函数名称: sub_462ec0
// 虚拟地址: 0x462ec0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_462ec0(int32_t arg1, int32_t, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t eax = *(arg3 + 0x63c) * 0x208
    int32_t eax = *(arg3 + 0x63c) * 0x208
    float xmm4 = *(arg3 + 0x6cc)
    float xmm3 = *(arg3 + 0x6d0)
    float xmm2_1 = *(arg3 + 0x6d4) - xmm4
    float xmm1_1 = *(arg3 + 0x6d8) - xmm3
    float var_10 = *(eax + arg3 + 0xd0) * xmm1_1 + xmm3
    float var_c = *(eax + arg3 + 0xd4) * xmm2_1 + xmm4
    float var_8 = *(eax + arg3 + 0xd8) * xmm1_1 + xmm3
    *arg4 = (xmm2_1 f* *(eax + arg3 + 0xcc) + xmm4).o
    return arg4
}
