// 函数名称: sub_4850b0
// 虚拟地址: 0x4850b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4850b0(int32_t arg1, int32_t* arg2, int128_t* arg3, int128_t* arg4, float arg5, int32_t* arg6, int32_t arg7, int32_t arg8, int128_t* arg9, int32_t arg10)
{
    // 第一条实际指令: int32_t* ebx = arg5
    int32_t* ebx = arg5
    float xmm5 = *ebx
    float xmm3 = ebx[2]
    float xmm0_1 = ebx[1] f- arg2[1]
    float xmm7 = *arg2
    float xmm6 = arg2[2]
    float xmm2_1 = xmm5 - xmm7
    float xmm1_1 = *(arg3 + 8) f- *arg3
    float xmm4_1 = xmm3 - xmm6
    float xmm0_3 = ebx[3] f- arg2[3]
    float xmm0_4 = *arg6
    int32_t* xmm0_5 = arg6[2]
    float xmm0_6 = arg6[1]
    float xmm0_7 = arg6[3]
    int128_t* eax_1 = arg9
    float xmm0_9 = *(arg3 + 0xc) f- *(arg3 + 4)
    int128_t xmm0_10 = *arg3
    int128_t var_38
    int128_t* esi
    
    if (eax_1 != 0)
        float xmm0_20 = sub_485000(eax_1, arg7, eax_1, *(arg3 + 8), xmm4_1, xmm0_5, xmm7, xmm6, xmm5, 
            xmm3, xmm0_10.d + xmm1_1)
        eax_1 = arg3
        var_38:8.d = xmm0_20
        esi = arg3
        var_38.d = sub_485000(eax_1, arg9, arg7, *eax_1, xmm2_1, xmm0_4, *arg2, arg2[2], *ebx, ebx[2], 
            xmm0_20 - xmm1_1)
    else
        float xmm0_13 = sub_485000(eax_1, 0, arg7, *arg3, xmm2_1, xmm0_4, xmm7, xmm6, xmm5, xmm3, 
            xmm0_10:8.d - xmm1_1)
        esi = arg3
        var_38.d = xmm0_13
        var_38:8.d = sub_485000(eax_1, arg7, 0, *(esi + 8), xmm4_1, xmm0_5, *arg2, arg2[2], *ebx, 
            ebx[2], xmm0_13 + xmm1_1)
    
    float xmm1_9 = ebx[3]
    float xmm4_2 = ebx[1]
    float xmm5_1 = arg2[3]
    float xmm6_1 = arg2[1]
    int32_t xmm0_34
    int32_t xmm1_15
    
    if (arg10 != 0)
        float xmm0_37 = sub_485000(arg3, arg8, arg10, *(arg3 + 0xc), xmm0_3, xmm0_7, xmm6_1, xmm5_1, 
            xmm4_2, xmm1_9, var_38:4.d + xmm0_9)
        var_38:0xc.d = xmm0_37
        xmm0_34 = sub_485000(arg3, arg10, arg8, *(arg3 + 4), xmm0_1, xmm0_6, arg2[1], arg2[3], ebx[1], 
            ebx[3], xmm0_37 - xmm0_9)
        xmm1_15 = var_38:0xc.d
        var_38:4.d = xmm0_34
    else
        float xmm0_29 = sub_485000(eax_1, 0, arg8, *(esi + 4), xmm0_1, xmm0_6, xmm6_1, xmm5_1, xmm4_2, 
            xmm1_9, var_38:0xc.d - xmm0_9)
        var_38:4.d = xmm0_29
        xmm1_15 = sub_485000(arg3, arg8, 0, *(arg3 + 0xc), xmm0_3, xmm0_7, arg2[1], arg2[3], ebx[1], 
            ebx[3], xmm0_29 + xmm0_9)
        xmm0_34 = var_38:4.d
        var_38:0xc.d = xmm1_15
    
    if (not(var_38:8.d f< var_38.d) && not(xmm1_15 f< xmm0_34))
        *arg4 = var_38
        return arg4
    
    *arg4 = data_571cf8
    return arg4
}
