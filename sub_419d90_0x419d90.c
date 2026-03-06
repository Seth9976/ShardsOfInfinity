// 函数名称: sub_419d90
// 虚拟地址: 0x419d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_419d90(int32_t arg1, int32_t* arg2, int128_t* arg3, float arg4 @ xmm3, int128_t* arg5)
{
    // 第一条实际指令: int32_t eax = arg3[5].d
    int32_t eax = arg3[5].d
    float xmm2_1 = *arg2 f- *arg3
    *arg5 = *arg3
    float xmm1 = arg2[1]
    arg5[1] = arg3[1]
    float xmm1_1 = xmm1 f- *(arg3 + 4)
    arg5[2] = arg3[2]
    arg5[3] = arg3[3]
    float xmm2_3 = xmm2_1 * arg4 f+ *arg3
    arg5[4] = arg3[4]
    arg5[5].d = eax
    float xmm0_6 = arg2[2] f- *(arg3 + 8)
    *arg5 = xmm2_3
    float xmm2_5 = arg2[6] f- *(arg3 + 0x18)
    float xmm0_8 = xmm0_6 * arg4 f+ *(arg3 + 8)
    *(arg5 + 4) = xmm1_1 * arg4 f+ *(arg3 + 4)
    float xmm1_4 = arg2[7]
    *(arg5 + 8) = xmm0_8
    float xmm0_12 = (arg2[3] f- *(arg3 + 0xc)) * arg4 f+ *(arg3 + 0xc)
    float xmm1_7 = (xmm1_4 f- *(arg3 + 0x1c)) * arg4 f+ *(arg3 + 0x1c)
    *(arg5 + 0x18) = xmm2_5 * arg4 f+ *(arg3 + 0x18)
    *(arg5 + 0xc) = xmm0_12
    float xmm0_14 = arg2[4] f- arg3[1].d
    *(arg5 + 0x1c) = xmm1_7
    arg5[1].d = xmm0_14 * arg4 f+ arg3[1].d
    *(arg5 + 0x14) = (arg2[5] f- *(arg3 + 0x14)) * arg4 f+ *(arg3 + 0x14)
    float var_1c = (arg2[0x11] f- *(arg3 + 0x44)) * arg4 f+ *(arg3 + 0x44)
    float var_18 = (arg2[0x12] f- *(arg3 + 0x48)) * arg4 f+ *(arg3 + 0x48)
    float var_14 = (arg2[0x13] f- *(arg3 + 0x4c)) * arg4 f+ *(arg3 + 0x4c)
    arg5[4] = ((arg2[0x10] f- arg3[4].d) * arg4 f+ arg3[4].d).o
    float var_1c_1 = (arg2[9] f- *(arg3 + 0x24)) * arg4 f+ *(arg3 + 0x24)
    float var_18_1 = (arg2[0xa] f- *(arg3 + 0x28)) * arg4 f+ *(arg3 + 0x28)
    float var_14_1 = (arg2[0xb] f- *(arg3 + 0x2c)) * arg4 f+ *(arg3 + 0x2c)
    arg5[2] = ((arg2[8] f- arg3[2].d) * arg4 f+ arg3[2].d).o
    float var_1c_2 = (arg2[0xd] f- *(arg3 + 0x34)) * arg4 f+ *(arg3 + 0x34)
    float var_18_2 = (arg2[0xe] f- *(arg3 + 0x38)) * arg4 f+ *(arg3 + 0x38)
    float var_14_2 = (arg2[0xf] f- *(arg3 + 0x3c)) * arg4 f+ *(arg3 + 0x3c)
    arg5[3] = ((arg2[0xc] f- arg3[3].d) * arg4 f+ arg3[3].d).o
    
    if (not(arg4 < 1f))
        arg5[5].d = arg2[0x14]
        return arg5
    
    int32_t ecx_1 = eax
    
    if (ecx_1 s<= arg2[0x14])
        ecx_1 = arg2[0x14]
    
    arg5[5].d = ecx_1
    return arg5
}
