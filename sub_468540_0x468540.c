// 函数名称: sub_468540
// 虚拟地址: 0x468540
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_468540(int32_t arg1, int128_t* arg2, int128_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t ecx = arg2[1].d
    int32_t ecx = arg2[1].d
    int32_t ebx = arg3[1].d
    
    if (ebx == 0)
        *arg4 = *arg2
        arg4[1].d = ecx
        return arg4
    
    if (ecx == 0)
        *arg4 = *arg3
        arg4[1].d = ebx
        return arg4
    
    int32_t var_20
    
    if (ebx == ecx)
        int32_t* eax_3 = sub_47bd20(&var_20, arg2, arg3, &var_20)
        int32_t ecx_3 = arg3[1].d
        *arg4 = *eax_3
        arg4[1].d = ecx_3
        return arg4
    
    int32_t xmm3 = *arg3
    int32_t xmm0_3 = *arg2
    int32_t eax_6 = ecx & 2
    
    if ((ebx.b & 2) == 0)
        if (eax_6 == 0)
            xmm3 = (zx.o(0)).d
        else
            xmm3 = xmm0_3
    else if (eax_6 != 0 && not(xmm0_3 f> xmm3))
        xmm3 = xmm0_3
    
    int32_t xmm2 = *(arg3 + 8)
    int32_t xmm0_4 = *(arg2 + 8)
    int32_t eax_8 = ecx & 1
    
    if ((ebx.b & 1) == 0)
        if (eax_8 == 0)
            xmm2 = (zx.o(0)).d
        else
            xmm2 = xmm0_4
    else if (eax_8 != 0 && not(xmm2 f> xmm0_4))
        xmm2 = xmm0_4
    
    int32_t xmm1 = *(arg3 + 4)
    int32_t xmm0_5 = *(arg2 + 4)
    int32_t eax_10 = ecx & 4
    
    if ((ebx.b & 4) == 0)
        if (eax_10 == 0)
            xmm1 = (zx.o(0)).d
        else
            xmm1 = xmm0_5
    else if (eax_10 != 0 && not(xmm1 f> xmm0_5))
        xmm1 = xmm0_5
    
    int32_t xmm0_6 = *(arg3 + 0xc)
    int32_t xmm4 = *(arg2 + 0xc)
    int32_t eax_12 = ecx & 8
    
    if ((ebx.b & 8) == 0)
        if (eax_12 != 0)
            xmm0_6 = xmm4
        else
            xmm0_6 = (zx.o(0)).d
    else if (eax_12 != 0 && not(xmm4 f> xmm0_6))
        xmm0_6 = xmm4
    
    var_20 = xmm3
    int32_t var_1c = xmm1
    int32_t var_18 = xmm2
    int32_t var_14 = xmm0_6
    *arg4 = var_20.o
    arg4[1].d = ecx | ebx
    return arg4
}
