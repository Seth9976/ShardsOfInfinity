// 函数名称: sub_432570
// 虚拟地址: 0x432570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __fastcallsub_432570(int32_t* arg1)
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
    int32_t eax_2 = *ecx_1
    double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_59e4f0)
    int32_t eax_4 = ecx_1[1]
    float result = _mm_cvtpd_ps(xmm0_2) f* ecx_1[2]
    float var_c = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_4 u>> 0x1f << 3) + &data_59e4f0))
        f* ecx_1[2]
    return result
}
