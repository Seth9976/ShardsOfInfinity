// 函数名称: sub_47d5b0
// 虚拟地址: 0x47d5b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_47d5b0(int32_t* arg1, float arg2 @ xmm1, float arg3 @ xmm2)
{
    // 第一条实际指令: int32_t* eax = *arg1
    int32_t* eax = *arg1
    
    if (eax == 0)
        sub_4aa5d0(arg1, 0)
        eax = *arg1
        
        if (eax == 0)
            sub_48dac0(arg1)
            eax = *arg1
    
    int32_t* ecx_1 = **eax
    float var_28 = arg2
    int32_t eax_2 = *ecx_1
    double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_59e4f0)
    int32_t eax_4 = ecx_1[1]
    float var_20 = _mm_cvtpd_ps(xmm0_2) f* ecx_1[2] + arg2
    float xmm1_1 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_4 u>> 0x1f << 3) + &data_59e4f0))
        f* ecx_1[2]
    int128_t var_18 = data_59e460
    float var_24 = arg3
    float var_1c = xmm1_1 + arg3
    return sub_47d1f0(&var_18, &var_28, arg1, &var_18, &data_5c77bc, 0)
}
