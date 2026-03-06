// 函数名称: sub_4de010
// 虚拟地址: 0x4de010
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4de010(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t edx = arg2[4]
    
    if (edx != 1 && edx != 4)
        int32_t var_44_1 = arg3
        char const* const var_48_1 = "unsupported format for sanding %s"
        int32_t eax_2 = sub_44e260("unsupported format for sanding %s")
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_2
    
    int32_t eax_3 = sub_4dd730(arg2[1], edx)
    
    if (arg2[3] != eax_3)
        char const* const var_44_2 = "SandImageBuffer"
        int32_t var_48_2 = 0x66
        char const* const var_4c_1 = "c:\ax2017\engine\textureimport.cpp"
        sub_44e4d0(eax_3, &data_5559b1, 
            "sourceImage->pitch == TextureFormatPitch(sourceImage->width, sourceImage->format)")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edx_1 = arg2[2]
    int32_t ecx_3 = 0
    int32_t* eax_4 = *arg2
    int32_t edi = arg2[1]
    int32_t* var_14 = eax_4
    int32_t var_c = edx_1
    int32_t var_10 = 0
    
    if (edx_1 s> 0)
        do
            if (edi s> 0)
                int32_t ebx = 1
                eax_4 = &var_14[ecx_3 * edi]
                int32_t* var_18_1 = eax_4
                
                do
                    float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_4 + 3))) / 255f
                    xmm0_3 f- 0
                    uint32_t eax_7
                    eax_7:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
                        | (xmm0_3 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    int32_t* eax_71
                    
                    if (p_2)
                        eax_71 = var_18_1
                    else
                        int96_t xmm0_4 = (data_59e430).12
                        int32_t esi_2 = 0
                        float xmm0_7
                        float xmm1_2
                        float xmm2_2
                        float xmm3_3
                        
                        if (ebx - 2 s>= 0 && ebx - 2 s< edi && ecx_3 - 1 s>= 0 && ecx_3 - 1 s< edx_1)
                            int32_t edx_2 = var_14[(ecx_3 - 1) * edi + ebx - 2]
                            xmm1_2 = _mm_cvtepi32_ps(zx.o((edx_2 u>> 0x10).b))
                            xmm2_2 = _mm_cvtepi32_ps(zx.o((edx_2 u>> 8).b))
                            xmm0_7 = _mm_cvtepi32_ps(zx.o(edx_2 u>> 0x18)) / 255f
                            xmm3_3 = _mm_cvtepi32_ps(zx.o(edx_2.b)) / 255f
                        
                        float xmm1_4
                        float xmm2_4
                        float xmm3_4
                        
                        if (ebx - 2 s< 0 || ebx - 2 s>= edi || ecx_3 - 1 s< 0 || ecx_3 - 1 s>= edx_1
                                || 0.00392156886f >= xmm0_7)
                            xmm3_4 = xmm0_4:8.d
                            xmm2_4 = xmm0_4:4.d
                            xmm1_4 = xmm0_4.d
                        else
                            xmm1_4 = xmm1_2 / 255f + 0f
                            esi_2 = 1
                            xmm2_4 = xmm2_2 / 255f + 0f
                            xmm3_4 = xmm3_3 + 0f
                        
                        int32_t edx_7 = var_c
                        int32_t ecx_8 = ebx - 2
                        int32_t eax_16 = var_10
                        
                        if (ecx_8 s>= 0 && ecx_8 s< edi && eax_16 s>= 0 && eax_16 s< edx_7)
                            int32_t edx_5 = var_18_1[-1]
                            ecx_8 = ebx - 2
                            float xmm4_2 = _mm_cvtepi32_ps(zx.o((edx_5 u>> 0x10).b))
                            float xmm6_2 = _mm_cvtepi32_ps(zx.o((edx_5 u>> 8).b))
                            edx_7 = var_c
                            float xmm0_10 = _mm_cvtepi32_ps(zx.o(edx_5 u>> 0x18)) / 255f
                            eax_16 = var_10
                            float xmm7_3 = _mm_cvtepi32_ps(zx.o(edx_5.b)) / 255f
                            
                            if (not(0.00392156886f >= xmm0_10))
                                xmm1_4 = xmm1_4 + xmm4_2 / 255f
                                esi_2 += 1
                                xmm2_4 = xmm2_4 + xmm6_2 / 255f
                                xmm3_4 = xmm3_4 + xmm7_3
                        
                        if (ecx_8 s>= 0 && ecx_8 s< edi && eax_16 + 1 s>= 0 && eax_16 + 1 s< edx_7)
                            int32_t edx_8 = var_14[(eax_16 + 1) * edi + ecx_8]
                            float xmm4_5 = _mm_cvtepi32_ps(zx.o((edx_8 u>> 0x10).b))
                            float xmm6_5 = _mm_cvtepi32_ps(zx.o((edx_8 u>> 8).b))
                            float xmm0_13 = _mm_cvtepi32_ps(zx.o(edx_8 u>> 0x18)) / 255f
                            float xmm7_6 = _mm_cvtepi32_ps(zx.o(edx_8.b)) / 255f
                            
                            if (not(0.00392156886f >= xmm0_13))
                                xmm1_4 = xmm1_4 + xmm4_5 / 255f
                                esi_2 += 1
                                xmm2_4 = xmm2_4 + xmm6_5 / 255f
                                xmm3_4 = xmm3_4 + xmm7_6
                        
                        int32_t edx_12 = var_c
                        int32_t ecx_14 = ebx - 1
                        
                        if (ecx_14 s>= 0)
                            if (ecx_14 s< edi && ecx_3 - 1 s>= 0 && ecx_3 - 1 s< edx_12)
                                int32_t edx_10 = var_14[(ecx_3 - 1) * edi + ecx_14]
                                ecx_14 = ebx - 1
                                float xmm4_8 = _mm_cvtepi32_ps(zx.o((edx_10 u>> 0x10).b))
                                float xmm6_8 = _mm_cvtepi32_ps(zx.o((edx_10 u>> 8).b))
                                edx_12 = var_c
                                float xmm0_16 = _mm_cvtepi32_ps(zx.o(edx_10 u>> 0x18)) / 255f
                                float xmm7_9 = _mm_cvtepi32_ps(zx.o(edx_10.b)) / 255f
                                
                                if (not(0.00392156886f >= xmm0_16))
                                    xmm1_4 = xmm1_4 + xmm4_8 / 255f
                                    esi_2 += 1
                                    xmm2_4 = xmm2_4 + xmm6_8 / 255f
                                    xmm3_4 = xmm3_4 + xmm7_9
                            
                            if (ecx_14 s>= 0 && ecx_14 s< edi && eax_16 + 1 s>= 0
                                    && eax_16 + 1 s< edx_12)
                                int32_t edx_13 = var_14[(eax_16 + 1) * edi + ecx_14]
                                float xmm4_11 = _mm_cvtepi32_ps(zx.o((edx_13 u>> 0x10).b))
                                float xmm6_11 = _mm_cvtepi32_ps(zx.o((edx_13 u>> 8).b))
                                float xmm0_19 = _mm_cvtepi32_ps(zx.o(edx_13 u>> 0x18)) / 255f
                                float xmm7_12 = _mm_cvtepi32_ps(zx.o(edx_13.b)) / 255f
                                
                                if (not(0.00392156886f >= xmm0_19))
                                    xmm1_4 = xmm1_4 + xmm4_11 / 255f
                                    esi_2 += 1
                                    xmm2_4 = xmm2_4 + xmm6_11 / 255f
                                    xmm3_4 = xmm3_4 + xmm7_12
                        
                        if (ebx s>= 0)
                            int32_t ecx_21 = var_c
                            
                            if (ebx s< edi)
                                if (ecx_3 - 1 s>= 0 && ecx_3 - 1 s< ecx_21)
                                    int32_t edx_15 = var_14[(ecx_3 - 1) * edi + ebx]
                                    ecx_21 = var_c
                                    float xmm4_14 = _mm_cvtepi32_ps(zx.o((edx_15 u>> 0x10).b))
                                    float xmm6_14 = _mm_cvtepi32_ps(zx.o((edx_15 u>> 8).b))
                                    float xmm0_22 = _mm_cvtepi32_ps(zx.o(edx_15 u>> 0x18)) / 255f
                                    float xmm7_15 = _mm_cvtepi32_ps(zx.o(edx_15.b)) / 255f
                                    
                                    if (not(0.00392156886f >= xmm0_22))
                                        xmm1_4 = xmm1_4 + xmm4_14 / 255f
                                        esi_2 += 1
                                        xmm2_4 = xmm2_4 + xmm6_14 / 255f
                                        xmm3_4 = xmm3_4 + xmm7_15
                                
                                if (ebx s< edi && var_10 s>= 0 && var_10 s< ecx_21)
                                    int32_t edx_17 = var_18_1[1]
                                    float xmm4_17 = _mm_cvtepi32_ps(zx.o((edx_17 u>> 0x10).b))
                                    float xmm6_17 = _mm_cvtepi32_ps(zx.o((edx_17 u>> 8).b))
                                    float xmm0_25 = _mm_cvtepi32_ps(zx.o(edx_17 u>> 0x18)) / 255f
                                    float xmm7_18 = _mm_cvtepi32_ps(zx.o(edx_17.b)) / 255f
                                    
                                    if (not(0.00392156886f >= xmm0_25))
                                        xmm1_4 = xmm1_4 + xmm4_17 / 255f
                                        esi_2 += 1
                                        xmm2_4 = xmm2_4 + xmm6_17 / 255f
                                        xmm3_4 = xmm3_4 + xmm7_18
                        
                        if (ebx s< 0 || ebx s< 0)
                            edx_1 = var_c
                        else
                            edx_1 = var_c
                            
                            if (ebx s< edi && eax_16 + 1 s>= 0 && eax_16 + 1 s< edx_1)
                                int32_t edx_19 = var_14[(eax_16 + 1) * edi + ebx]
                                float xmm4_20 = _mm_cvtepi32_ps(zx.o((edx_19 u>> 0x10).b))
                                float xmm6_20 = _mm_cvtepi32_ps(zx.o((edx_19 u>> 8).b))
                                edx_1 = var_c
                                float xmm0_28 = _mm_cvtepi32_ps(zx.o(edx_19 u>> 0x18)) / 255f
                                float xmm7_21 = _mm_cvtepi32_ps(zx.o(edx_19.b)) / 255f
                                
                                if (not(0.00392156886f >= xmm0_28))
                                    xmm1_4 = xmm1_4 + xmm4_20 / 255f
                                    esi_2 += 1
                                    xmm2_4 = xmm2_4 + xmm6_20 / 255f
                                    xmm3_4 = xmm3_4 + xmm7_21
                        
                        if (esi_2 != 0)
                            float xmm0_30 = _mm_cvtepi32_ps(zx.o(esi_2))
                            int96_t var_30_1
                            var_30_1:0xc.d = 0x3b808081
                            var_30_1.d = xmm1_4 / xmm0_30
                            var_30_1:4.d = xmm2_4 / xmm0_30
                            var_30_1:8.d = xmm3_4 / xmm0_30
                            float var_4c
                            float var_48
                            float var_44
                            int32_t eax_72 = sub_45c850(var_30_1.d, var_4c, var_48, var_44)
                            ecx_3 = var_10
                            eax_71 = var_18_1
                            *eax_71 = (((((eax_72 u>> 0x18 << 8) + zx.d(eax_72.b)) << 8)
                                + zx.d((eax_72 u>> 8).b)) << 8) + zx.d((eax_72 u>> 0x10).b)
                            edx_1 = var_c
                        else
                            void* esi_3 = data_65ae00
                            eax_71 = var_18_1
                            *eax_71 = ((((zx.d(*(esi_3 + 0x2c)) + 0x100) << 8) + zx.d(*(esi_3 + 0x2d)))
                                << 8) + zx.d(*(esi_3 + 0x2e))
                            ecx_3 = var_10
                    
                    eax_4 = &eax_71[1]
                    ebx += 1
                    var_18_1 = eax_4
                while (ebx s<= edi)
            
            ecx_3 += 1
            var_10 = ecx_3
        while (ecx_3 s< edx_1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_4
}
