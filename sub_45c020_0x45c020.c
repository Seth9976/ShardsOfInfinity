// 函数名称: sub_45c020
// 虚拟地址: 0x45c020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float (*sub_45c020(float (* arg1)[0x4], int32_t arg2))[0x4]
{
    // 第一条实际指令: *arg1 = __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg2), 0), 0)), data_59e510)
    *arg1 = __divps_xmmps_memps(
        _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg2), 0), 0)), data_59e510)
    return arg1
}
