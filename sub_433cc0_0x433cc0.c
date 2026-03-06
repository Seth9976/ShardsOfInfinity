// 函数名称: sub_433cc0
// 虚拟地址: 0x433cc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_433cc0(int32_t arg1, float* arg2, int128_t* arg3, float arg4 @ xmm3, int128_t* arg5, float* arg6, float arg7)
{
    // 第一条实际指令: int32_t xmm1 = (zx.o(0)).d
    int32_t xmm1 = (zx.o(0)).d
    arg4 f- 0
    arg1:1.b = (arg4 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg4, 0f) ? 1 : 0) << 2 | (arg4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        int32_t ecx = arg3[5].d
        *arg5 = *arg3
        arg5[1] = arg3[1]
        arg5[2] = arg3[2]
        arg5[3] = arg3[3]
        arg5[4] = arg3[4]
        arg5[5].d = ecx
        return arg5
    
    float xmm0_6 = arg7 - 0f
    float xmm2
    
    if (0 f< xmm0_6)
        xmm2 = 1f
        
        if (not(xmm0_6 >= 1f))
            xmm2 = sub_4145f0(4, xmm0_6, 1.20000005f, xmm2)
            xmm1 = (zx.o(0)).d
    else
        xmm2 = 1.20000005f
    
    int128_t xmm0_8 = *arg3
    float xmm3 = arg4 - 0f
    int128_t xmm0_9 = arg3[1]
    int128_t xmm0_10 = arg3[2]
    int128_t xmm0_11 = arg3[3]
    int128_t xmm0_12 = arg3[4]
    int32_t esi_1 = arg3[5].d
    float xmm0_13
    
    if (not(0f < xmm3))
        xmm0_13 = 1f
    else if (xmm3 < 1f)
        xmm0_13 = sub_4145f0(4, xmm3, 1f, xmm2)
        xmm1 = (zx.o(0)).d
    else
        xmm0_13 = xmm2
    
    float xmm2_2 = xmm2 / 1.20000005f
    
    if (not(0f >= xmm3))
        if (xmm3 < 1f)
            xmm1 = sub_4145f0(4, xmm3, xmm1, xmm2_2)
        else
            xmm1 = xmm2_2
    
    float xmm4 = *arg2
    float xmm2_3 = arg2[1]
    int128_t var_ac
    var_ac:0xc.d = xmm0_13 f* xmm0_8:0xc.d
    var_ac:4.d = arg6[1] f* xmm1 + xmm2_3 + (xmm0_8:4.d - xmm2_3) * xmm0_13
    var_ac.d = xmm4 + (xmm0_8.d - xmm4) * xmm0_13 + *arg6 f* xmm1
    *arg5 = var_ac
    arg5[1] = xmm0_9
    arg5[2] = xmm0_10
    arg5[3] = xmm0_11
    arg5[4] = xmm0_12
    arg5[5].d = esi_1
    return arg5
}
