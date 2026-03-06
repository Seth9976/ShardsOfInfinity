// 函数名称: sub_4d8d60
// 虚拟地址: 0x4d8d60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __stdcallsub_4d8d60(uint128_t arg1)
{
    // 第一条实际指令: void* result = data_ce26e8
    void* result = data_ce26e8
    int32_t xmm0_1 = _mm_bsrli_si128(arg1, 0xc)
    int32_t y = _mm_bsrli_si128(arg1, 4)
    int32_t x = arg1
    int32_t height = xmm0_1 - y
    int32_t width = _mm_bsrli_si128(arg1, 8) - x
    
    if (*(result + 0x419c) == x && *(result + 0x41a0) == y && *(result + 0x41a4) == width
            && *(result + 0x41a8) == height)
        return result
    
    *(result + 0x419c) = x
    *(result + 0x41a0) = y
    *(result + 0x41a4) = width
    *(result + 0x41a8) = height
    return glScissor(x, y, width, height)
}
