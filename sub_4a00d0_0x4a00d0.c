// 函数名称: sub_4a00d0
// 虚拟地址: 0x4a00d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4a00d0(int32_t* arg1, float arg2, float arg3, float arg4)
{
    // 第一条实际指令: float xmm0_1 = _mm_min_ss(arg2, arg3)
    float xmm0_1 = _mm_min_ss(arg2, arg3)
    
    if (not(arg4 > xmm0_1))
        xmm0_1 = arg4
    
    float xmm3_1 = _mm_max_ss(arg2, arg3)
    
    if (not(xmm3_1 > arg4))
        xmm3_1 = arg4
    
    float xmm5_1 = xmm3_1 - xmm0_1
    arg1[2] = xmm3_1
    
    if (not(0 f< xmm5_1))
        *arg1 = 0
        arg1[1] = 0
        return arg1
    
    arg1[1] = xmm5_1 / xmm3_1
    float xmm1_2
    
    if (not(arg2 < xmm3_1))
        xmm1_2 = (arg3 - arg4) / xmm5_1
    else if (arg3 < xmm3_1)
        xmm1_2 = (arg2 - arg3) / xmm5_1 + 4f
    else
        xmm1_2 = (arg4 - arg2) / xmm5_1 + 2f
    
    float xmm1_6 = xmm1_2 * 60f
    *arg1 = xmm1_6
    
    if (not(0f <= xmm1_6))
        *arg1 = xmm1_6 + 360f
    
    return arg1
}
