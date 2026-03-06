// 函数名称: sub_413750
// 虚拟地址: 0x413750
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_413750(int32_t arg1, int32_t* arg2, float* arg3, float arg4 @ xmm2, char* arg5)
{
    // 第一条实际指令: float xmm0_1 = data_5b0f3c * arg4
    float xmm0_1 = data_5b0f3c * arg4
    *arg5 = 0
    float xmm1_1 = *arg2 - *arg3
    float xmm2_1 = arg2[1] f- arg3[1]
    float xmm0_5 = sub_412d90(xmm1_1 * xmm1_1 + xmm2_1 * xmm2_1)
    
    if (xmm0_1 <= xmm0_5)
        float xmm0_6 = 1f / xmm0_5
        float var_c = arg3[1] + xmm2_1 * xmm0_6 * xmm0_1
        return *arg3 + xmm1_1 * xmm0_6 * xmm0_1
    
    *arg5 = 1
    arg2[1]
    return *arg2
}
