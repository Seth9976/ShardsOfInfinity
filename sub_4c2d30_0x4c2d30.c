// 函数名称: sub_4c2d30
// 虚拟地址: 0x4c2d30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4c2d30(int32_t arg1, float* arg2, float* arg3, float arg4 @ xmm3, int32_t* arg5)
{
    // 第一条实际指令: float xmm1_3 = (arg5[1] f- arg2[1]) * arg4 + arg2[1]
    float xmm1_3 = (arg5[1] f- arg2[1]) * arg4 + arg2[1]
    *arg3 = (*arg5 - *arg2) * arg4 + *arg2
    arg3[1] = xmm1_3
    float xmm1_7 = (arg5[3] f- arg2[3]) * arg4 + arg2[3]
    arg3[2] = (arg5[2] f- arg2[2]) * arg4 + arg2[2]
    arg3[3] = xmm1_7
    float xmm1_11 = (arg5[5] f- arg2[5]) * arg4 + arg2[5]
    arg3[4] = (arg5[4] f- arg2[4]) * arg4 + arg2[4]
    arg3[5] = xmm1_11
    float xmm1_15 = (arg5[7] f- arg2[7]) * arg4 + arg2[7]
    arg3[6] = (arg5[6] f- arg2[6]) * arg4 + arg2[6]
    arg3[7] = xmm1_15
    float xmm1_19 = (arg5[9] f- arg2[9]) * arg4 + arg2[9]
    arg3[8] = (arg5[8] f- arg2[8]) * arg4 + arg2[8]
    arg3[9] = xmm1_19
    float xmm1_23 = (arg5[0xb] f- arg2[0xb]) * arg4 + arg2[0xb]
    arg3[0xa] = (arg5[0xa] f- arg2[0xa]) * arg4 + arg2[0xa]
    arg3[0xb] = xmm1_23
    float xmm1_27 = (arg5[0xd] f- arg2[0xd]) * arg4 + arg2[0xd]
    arg3[0xc] = (arg5[0xc] f- arg2[0xc]) * arg4 + arg2[0xc]
    arg3[0xd] = xmm1_27
    float xmm1_31 = (arg5[0xf] f- arg2[0xf]) * arg4 + arg2[0xf]
    arg3[0xe] = (arg5[0xe] f- arg2[0xe]) * arg4 + arg2[0xe]
    arg3[0xf] = xmm1_31
    arg3[0x10] = sub_47bf90(&arg2[0x10], &arg5[0x10], arg4)
    arg3[0x11] = sub_47bf90(&arg2[0x11], &arg5[0x11], arg4)
    arg3[0x12] = arg2[0x12]
    int32_t result = arg2[0x13]
    arg3[0x13] = result
    return result
}
