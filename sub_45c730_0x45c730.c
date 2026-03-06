// 函数名称: sub_45c730
// 虚拟地址: 0x45c730
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_45c730(int128_t* arg1, int64_t* arg2)
{
    // 第一条实际指令: int32_t xmm0 = *(arg1 + 8)
    int32_t xmm0 = *(arg1 + 8)
    *arg2 = _mm_unpacklo_ps(*arg1, *(arg1 + 4))
    arg2[1].d = xmm0
    int32_t xmm0_1 = *(arg1 + 8)
    *(arg2 + 0xc) = _mm_unpacklo_ps(*(arg1 + 0xc), *(arg1 + 4))
    *(arg2 + 0x14) = xmm0_1
    int32_t xmm0_2 = *(arg1 + 8)
    arg2[3] = _mm_unpacklo_ps(*arg1, arg1[1].d)
    arg2[4].d = xmm0_2
    int32_t xmm0_3 = *(arg1 + 8)
    *(arg2 + 0x24) = _mm_unpacklo_ps(*(arg1 + 0xc), arg1[1].d)
    *(arg2 + 0x2c) = xmm0_3
    int32_t xmm0_4 = *(arg1 + 0x14)
    arg2[6] = _mm_unpacklo_ps(*arg1, *(arg1 + 4))
    arg2[7].d = xmm0_4
    int32_t xmm0_5 = *(arg1 + 0x14)
    *(arg2 + 0x3c) = _mm_unpacklo_ps(*(arg1 + 0xc), *(arg1 + 4))
    *(arg2 + 0x44) = xmm0_5
    int32_t xmm0_6 = *(arg1 + 0x14)
    arg2[9] = _mm_unpacklo_ps(*arg1, arg1[1].d)
    arg2[0xa].d = xmm0_6
    int32_t result = *(arg1 + 0x14)
    *(arg2 + 0x54) = _mm_unpacklo_ps(*(arg1 + 0xc), arg1[1].d)
    *(arg2 + 0x5c) = result
    return result
}
