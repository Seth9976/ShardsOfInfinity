// 函数名称: sub_46f6c0
// 虚拟地址: 0x46f6c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_46f6c0(void* arg1)
{
    // 第一条实际指令: int32_t xmm1[0x4] = __paddd_xmmdq_memdq(data_59dfc0, data_59e130)
    int32_t xmm1[0x4] = __paddd_xmmdq_memdq(data_59dfc0, data_59e130)
    int32_t xmm0_1 = _mm_bsrli_si128(xmm1, 4)
    *(xmm1 + &data_e46ee8) = 0
    int32_t xmm0_3 = _mm_bsrli_si128(xmm1, 8)
    int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
    *(xmm0_1 + &data_e46ee8) = 0
    *(xmm0_3 + &data_e46ee8) = 0
    *(xmm1_1 + &data_e46ee8) = 0
    int32_t result = *(arg1 + 0x79c)
    *(arg1 + 0x7a4) = result
    *(arg1 + 0x7e9) = 0
    return result
}
