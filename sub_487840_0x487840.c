// 函数名称: sub_487840
// 虚拟地址: 0x487840
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_487840(int32_t arg1, int32_t arg2, int128_t* arg3, float arg4 @ xmm2, int128_t* arg5, float arg6, float arg7)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    float xmm3_1 = arg6 ^ (data_59e5c0.o).d
    int32_t eax = arg3[5].d
    float xmm4[0x4] = arg3[1]
    int32_t var_20 = eax
    int128_t var_70 = *arg3
    int32_t var_20_1 = eax
    float xmm0_1[0x4] = arg3[1]
    int128_t xmm5 = arg3[2]
    int128_t xmm0_2 = arg3[2]
    int128_t xmm6 = arg3[3]
    int128_t xmm0_3 = arg3[3]
    int128_t xmm7 = arg3[4]
    int128_t xmm0_4 = arg3[4]
    float xmm2_1 = arg7 ^ (data_59e5c0.o).d
    int128_t var_70_1 = *arg3
    int128_t var_70_2 = *arg3
    float xmm0_7[0x4] = arg3[1]
    int128_t xmm0_8 = arg3[2]
    int128_t xmm0_9 = arg3[3]
    int128_t xmm0_10 = arg3[4]
    *arg5 = *arg3
    arg5[1] = arg3[1]
    arg5[2] = arg3[2]
    arg5[3] = arg3[3]
    arg5[4] = arg3[4]
    arg5[5].d = arg3[5].d
    var_70_2:0xc.d = *(arg5 + 0xc)
    var_70_2:4.d = *(arg5 + 4) + xmm2_1
    var_70_2:8.d = *(arg5 + 8)
    float xmm0_21 = xmm4[0] f* arg5[1].d
    var_70_2.d = *arg5 + xmm3_1
    float var_5c = _mm_shuffle_ps(xmm4, xmm4, 0x55) f* *(arg5 + 0x14)
    int32_t var_58 = _mm_shuffle_ps(xmm4, xmm4, 0xaa)
    int32_t xmm4_1 = _mm_shuffle_ps(xmm4, xmm4, 0xff)
    *arg5 = var_70_2
    int32_t var_54 = xmm4_1
    arg5[1] = xmm0_21.o
    arg5[2] = xmm5
    arg5[3] = xmm6
    arg5[4] = xmm7
    arg5[5].d = eax
    var_70_2:0xc.d = *(arg5 + 0xc) * arg4
    var_70_2:8.d = *(arg5 + 8)
    var_70_2:4.d = *(arg5 + 4) * arg4 + 0f
    var_70_2.d = *arg5 * arg4 + 0f
    float xmm0_33 = xmm0_7[0] f* arg5[1].d
    float var_5c_1 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0x55) f* *(arg5 + 0x14)
    int32_t var_58_1 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xaa)
    int32_t xmm1_6 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xff)
    *arg5 = var_70_2
    int32_t var_54_1 = xmm1_6
    arg5[1] = xmm0_33.o
    arg5[2] = xmm0_8
    arg5[3] = xmm0_9
    arg5[4] = xmm0_10
    arg5[5].d = eax
    var_70_2:0xc.d = *(arg5 + 0xc)
    var_70_2:4.d = *(arg5 + 4) + arg7
    var_70_2.d = *arg5 + arg6
    var_70_2:8.d = *(arg5 + 8)
    float xmm0_49 = xmm0_1[0] f* arg5[1].d
    float var_5c_2 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55) f* *(arg5 + 0x14)
    int32_t var_58_2 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xaa)
    int32_t xmm1_10 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff)
    *arg5 = var_70_2
    int32_t var_54_2 = xmm1_10
    arg5[1] = xmm0_49.o
    arg5[2] = xmm0_2
    arg5[3] = xmm0_3
    arg5[4] = xmm0_4
    arg5[5].d = eax
    arg5[1].d = arg3[1].d
    *(arg5 + 0x14) = *(arg3 + 0x14)
    *(arg5 + 0x18) = *(arg3 + 0x18)
    *(arg5 + 0x1c) = *(arg3 + 0x1c)
    return arg5
}
