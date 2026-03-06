// 函数名称: sub_4fbbc0
// 虚拟地址: 0x4fbbc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float*sub_4fbbc0(float* arg1)
{
    // 第一条实际指令: float xmm2_1 = data_df8480 ^ (data_59e5c0.o).d
    float xmm2_1 = data_df8480 ^ (data_59e5c0.o).d
    float xmm1_1 = data_df8484 ^ (data_59e5c0.o).d
    *(arg1 + 0x10) = zx.o(0)
    arg1[0x14] = 0
    float xmm0 = data_df847c
    arg1[2] = 0x3f800000
    arg1[3] = xmm0
    *(arg1 + 0x20) = data_59e550
    int128_t xmm0_2 = data_571cf8
    *arg1 = xmm2_1 * xmm0
    *(arg1 + 0x30) = xmm0_2
    int128_t xmm0_3 = data_59e550
    arg1[1] = xmm1_1 * xmm0
    *(arg1 + 0x40) = xmm0_3
    return arg1
}
