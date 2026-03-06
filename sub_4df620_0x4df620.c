// 函数名称: sub_4df620
// 虚拟地址: 0x4df620
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4df620(int32_t arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t performanceCount_1
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int32_t performanceCount_4 = arg2[1].d
    int32_t var_3c = 0x400
    int32_t var_38 = 0x1800
    int32_t performanceCount = performanceCount_4
    uint32_t eax = sub_4dd730(0x400, performanceCount_4)
    uint32_t var_34 = eax
    char const* const var_ac
    int32_t var_a8
    char const* const var_a4_1
    char* ecx
    
    if (eax != 0x1000)
        var_a4_1 = "ProcessCylinderCubeMap"
        var_a8 = 0x4d8
        var_ac = "c:\ax2017\engine\textureimport.cpp"
        ecx = "processedImage.pitch == imageWidth * (int)sizeof(uint32)"
    label_4df9a8:
        sub_44e4d0(eax, &data_5559b1, ecx, var_ac, var_a8, var_a4_1)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    void* eax_2 = sub_45cd70(sub_4dd7f0(eax, 0x1800, 0x400, performanceCount_4))
    int32_t i = 0
    void* var_40_1 = eax_2
    
    do
        void* ecx_4 = (i << 0x16) + eax_2
        int32_t j = 0
        void* var_68_1 = ecx_4
        int32_t j_1 = 0
        
        do
            int32_t k = 0
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(j))
            void* var_70_1 = ecx_4
            int128_t xmm0_6 = (xmm0_2 + xmm0_2) * 0.0009765625f - 1f + 0.00048828125f
            int32_t var_4c_1 = xmm0_6
            
            do
                float xmm2_2 = _mm_cvtepi32_ps(zx.o(k))
                int128_t xmm2_7 = ((xmm2_2 + xmm2_2) * 0.0009765625f - 1f + 0.00048828125f) ^ 0x80000000
                int128_t xmm1_1
                float xmm3_2
                
                if (i == 0)
                    xmm2_7 ^= 0x80000000
                    xmm3_2 = xmm0_6.d ^ 0x80000000
                    xmm1_1 = 0x3f800000
                else if (i != 1)
                    xmm1_1 = xmm2_7
                    
                    if (i == 2)
                        xmm2_7 = 0x3f800000
                        xmm3_2 = xmm0_6.d ^ 0x80000000
                    else if (i != 3)
                        if (i != 4)
                            xmm0_6 ^= 0x80000000
                            xmm3_2 = -1f
                        else
                            xmm3_2 = 1f
                        
                        xmm2_7 = xmm0_6
                    else
                        xmm1_1 ^= 0x80000000
                        xmm3_2 = xmm0_6.d ^ 0x80000000
                        xmm2_7 = 0xbf800000
                else
                    xmm1_1 = 0xbf800000
                    xmm3_2 = xmm0_6.d ^ 0x80000000
                
                float xmm0_11
                eax, xmm0_11 = sub_412d90(xmm1_1.d f* xmm1_1 + xmm2_7.d f* xmm2_7 + xmm3_2 * xmm3_2)
                
                if (xmm0_11 <= 9.99999975e-06f)
                    var_a4_1 = "Norm"
                    var_a8 = 0x12e
                    var_ac = "c:\ax2017\engine\vec3.cpp"
                    ecx = "length > EPSILON"
                    goto label_4df9a8
                
                float xmm1_6 = 1f / xmm0_11
                float xmm0_13 = xmm3_2 * xmm1_6
                float xmm3_7[0x4] = xmm1_1 * xmm1_6
                int64_t xmm2_9 = xmm2_7 * xmm1_6
                float var_84_2 = xmm3_7
                int64_t var_80_1 = _mm_unpacklo_ps(xmm3_7, xmm2_9)
                float var_88_2 = xmm2_9
                int64_t var_80_2 = _mm_cvtps_pd(xmm2_9)
                unimplemented  {fld st0, qword [esp+0x20]}
                int64_t var_80_3 = _mm_cvtps_pd(xmm3_7)
                unimplemented  {fld st0, qword [esp+0x20]}
                sub_53c570()
                double var_80_4 = fconvert.d(unimplemented  {fstp qword [esp+0x20], st0})
                unimplemented  {fstp qword [esp+0x20], st0}
                int16_t top = top - 1
                var_80_4.d = 1f - (_mm_cvtpd_ps(zx.o(var_80_4)) + 3.14159274f) / 6.28318548f
                float xmm0_22 = sub_412d90(var_88_2 * var_88_2 + var_84_2 * var_84_2)
                float xmm2_10
                
                if (9.99999975e-06f <= xmm0_22)
                    xmm2_10 = 0.5f - xmm0_13 / xmm0_22
                else if (xmm0_13 f<= 0)
                    xmm2_10 = 1f
                else
                    xmm2_10 = -1f
                
                uint32_t* ecx_6 = var_70_1
                k += 1
                xmm0_6 = var_4c_1
                *ecx_6 = sub_4df1a0(arg2, var_80_4.d, xmm2_10)
                var_70_1 = &ecx_6[1]
            while (k s< 0x400)
            
            j = j_1 + 1
            ecx_4 = var_68_1 + 0x1000
            j_1 = j
            var_68_1 = ecx_4
        while (j s< 0x400)
        
        eax_2 = var_40_1
        i += 1
    while (i s< 6)
    
    int32_t eax_5 = *arg2
    
    if (eax_5 != 0)
        _aligned_free_base(eax_5)
    
    int32_t performanceCount_2 = performanceCount
    *arg2 = var_40_1.o
    arg2[1].d = performanceCount_2
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_3 = performanceCount
    int32_t var_5c
    int32_t var_44
    uint32_t var_ac_1 = sub_44eab0(performanceCount_3 - performanceCount_1, 
        sbb.d(var_5c, var_44, performanceCount_3 u< performanceCount_1))
    return sub_44e260("ProcessCylinderCubeMap time %d ms")
}
