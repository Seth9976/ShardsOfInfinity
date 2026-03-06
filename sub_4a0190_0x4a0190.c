// 函数名称: sub_4a0190
// 虚拟地址: 0x4a0190
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4a0190(int32_t* arg1, int32_t arg2, float arg3, float arg4)
{
    // 第一条实际指令: arg1[3] = 0x3f800000
    arg1[3] = 0x3f800000
    
    if (not(0f < arg3))
        *arg1 = arg4
        arg1[1] = arg4
        arg1[2] = arg4
        return arg1
    
    int32_t xmm4 = arg2
    
    if (not(xmm4 f< 360f))
        xmm4 = (zx.o(0)).d
    
    float xmm4_1 = xmm4 f/ 60f
    int32_t ecx = int.d(xmm4_1)
    float xmm1_1 = (1f - arg3) * arg4
    float xmm4_2 = xmm4_1 - float.s(ecx)
    float xmm5_1 = (1f - xmm4_2 * arg3) * arg4
    float xmm3_1 = (1f - (1f - xmm4_2) * arg3) * arg4
    
    if (ecx u> 4)
        arg1[1] = xmm1_1
        arg1[2] = xmm5_1
        *arg1 = arg4
        return arg1
    
    switch (ecx)
        case 0
            arg1[1] = xmm3_1
            arg1[2] = xmm1_1
            *arg1 = arg4
            return arg1
        case 1
            *arg1 = xmm5_1
            arg1[1] = arg4
            arg1[2] = xmm1_1
            return arg1
        case 2
            *arg1 = xmm1_1
            arg1[1] = arg4
            arg1[2] = xmm3_1
            return arg1
        case 3
            *arg1 = xmm1_1
            arg1[1] = xmm5_1
            arg1[2] = arg4
            return arg1
        case 4
            *arg1 = xmm3_1
            arg1[1] = xmm1_1
            arg1[2] = arg4
            return arg1
}
