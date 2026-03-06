// 函数名称: sub_4bcf90
// 虚拟地址: 0x4bcf90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_4bcf90(int32_t arg1, int32_t* arg2, int128_t* arg3, float arg4 @ xmm3, int128_t* arg5)
{
    // 第一条实际指令: float xmm6 = arg2[3]
    float xmm6 = arg2[3]
    float xmm7 = *arg2
    float xmm2[0x4] = *arg5
    float xmm3_1 = _mm_shuffle_ps(xmm2, xmm2, 0xff)
    float xmm4_1 = _mm_shuffle_ps(xmm2, xmm2, 0x55)
    float xmm5_1 = _mm_shuffle_ps(xmm2, xmm2, 0xaa)
    
    if (not(0 f<= xmm7 f* xmm2 + xmm6 * xmm3_1 + arg2[1] f* xmm4_1 + arg2[2] f* xmm5_1))
        xmm2 = xmm2 f* -1f
        xmm4_1 = xmm4_1 * -1f
        xmm5_1 = xmm5_1 * -1f
        xmm3_1 = xmm3_1 * -1f
    
    float var_14 = (xmm3_1 - xmm6) * arg4 + xmm6
    float var_1c = (xmm4_1 f- arg2[1]) * arg4 f+ arg2[1]
    float var_18 = (xmm5_1 f- arg2[2]) * arg4 f+ arg2[2]
    *arg3 = ((xmm2 f- xmm7) * arg4 + xmm7).o
    float xmm0_10 = (*(arg5 + 0x18) f- arg2[6]) * arg4 f+ arg2[6]
    arg3[1].q = _mm_unpacklo_ps((arg5[1].d f- arg2[4]) * arg4 f+ arg2[4], 
        (*(arg5 + 0x14) f- arg2[5]) * arg4 f+ arg2[5])
    *(arg3 + 0x18) = xmm0_10
    float xmm0_14 = (*(arg5 + 0x24) f- arg2[9]) * arg4 f+ arg2[9]
    *(arg3 + 0x1c) = _mm_unpacklo_ps((*(arg5 + 0x1c) f- arg2[7]) * arg4 f+ arg2[7], 
        (arg5[2].d f- arg2[8]) * arg4 f+ arg2[8])
    *(arg3 + 0x24) = xmm0_14
    float result
    result.b = *(arg5 + 0x28)
    
    if (arg2[0xa].b == result.b)
        *(arg3 + 0x28) = result.b
        return result
    
    sub_44e4d0(result, &data_5559b1, "tFirst.propegatesScale == tSecond.propegatesScale", 
        "c:\ax2017\engine\bonetransform.h", 0x40, "BoneTransformLerp")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
