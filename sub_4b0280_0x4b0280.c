// 函数名称: sub_4b0280
// 虚拟地址: 0x4b0280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b0280(int32_t arg1, void* arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    void var_f8
    int32_t eax_1 = __security_cookie ^ &var_f8
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t eax_3
    uint128_t xmm0
    int128_t xmm1
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        xmm0 = *(arg3 + 8)
        eax_3 = arg3[0xa]
        xmm1 = *(arg3 + 0x18)
    else
        xmm0 = *(arg2 + 0x484)
        eax_3 = *(arg2 + 0x4a4)
        xmm1 = *(arg2 + 0x494)
    
    void var_50
    int64_t* var_104 = &var_50
    int96_t var_c0 = xmm0.12
    uint128_t var_80 = xmm0
    int128_t var_70 = xmm1
    int64_t* eax_5
    int32_t edx
    eax_5, edx = sub_4b01e0(&var_50, arg2, arg3, var_104)
    int32_t eax_6 = eax_5[1].d
    int64_t xmm0_1 = *eax_5
    void var_40
    int128_t* eax_8 = sub_4b3c80(&var_40, edx, &var_80:0xc, &var_40)
    int32_t ecx_1 = *arg3
    int128_t xmm0_2 = *eax_8
    int128_t var_d0 = xmm0_2
    int128_t var_30 = xmm0_2
    int32_t eax_16
    
    if (ecx_1 s<= 0)
    label_4b06fd:
        eax_16 = eax_5[1].d
        var_80.q = xmm0
        var_80:8.d = _mm_bsrli_si128(xmm0, 8)
        var_70:0xc.q = *eax_5
        var_80 = *eax_8
    else
        int64_t var_90
        
        if (ecx_1 s<= 2)
            int32_t eax_17 = arg3[0xf]
            
            if (eax_17 u> 3)
                char const* const var_104_9 = "ElBox"
                int32_t var_108_4 = 0x162
                char const* const var_10c_2 = "c:\ax2017\engine\fabdef.cpp"
                sub_44e4d0(eax_17, &data_5559b1, "Halt")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int64_t var_134
            int64_t var_128_2
            float var_120_2
            int64_t var_11c_2
            float var_114_2
            int64_t var_110_2
            float var_108_3
            int128_t* var_104_7
            void* eax_23
            int32_t ecx_7
            float esi_1
            
            switch (eax_17)
                case 0
                    goto label_4b06fd
                case 1
                    float xmm3_5 = data_65ae18:4
                    float xmm4_1 = data_65ae18:0xc
                    float xmm2_7 = data_65ae28.d
                    float xmm1_6 = data_65ae18:8
                    int64_t* var_104_3 = &var_50
                    float xmm5_3 = xmm3_5 * xmm4_1 + xmm2_7 * xmm1_6
                    float xmm7_3 = xmm4_1 * xmm1_6 - xmm3_5 * xmm2_7
                    var_90 = xmm5_3 + xmm5_3
                    int64_t* eax_19 = sub_45c220(&var_50, eax_8, &data_65ae18:4, var_104_3)
                    int64_t xmm0_12 = *eax_19
                    float eax_20 = eax_19[1].d
                    int64_t* var_104_4 = &var_30
                    int64_t xmm0_14 = _mm_unpacklo_ps(zx.o(var_90), xmm7_3 + xmm7_3)
                    int64_t xmm0_15 = data_65ae28:4.q
                    float ecx_4 = data_65ae28:0xc
                    var_134 = xmm0
                    esi_1 = _mm_bsrli_si128(xmm0, 8)
                    sub_45af40(&var_134, &var_50, 0, var_134, esi_1, xmm0_15, ecx_4, xmm0_14, 
                        xmm4_1 * xmm4_1 - xmm1_6 * xmm1_6 - xmm3_5 * xmm3_5 + xmm2_7 * xmm2_7, xmm0_12, 
                        eax_20, var_104_4)
                    int32_t var_38_4 = 0xbf800000
                    int32_t var_88_3 = 0xbf800000
                    int128_t* var_104_5 = &var_30
                    eax_23 = &var_50
                case 2
                    var_104_7 = &var_30
                    var_110_2 = 0
                    var_108_3 = 0f
                    var_11c_2 = 0
                    var_114_2 = 1f
                    var_128_2 = data_65ae28:4.q
                    var_120_2 = data_65ae28:0xc
                    ecx_7 = 1
                    goto label_4b0658
                case 3
                    int64_t* eax_27 = sub_45c1a0(&var_50, eax_8, &data_65ae18:4, &var_50)
                    var_104_7 = &var_30
                    var_110_2 = *eax_27
                    var_108_3 = eax_27[1].d
                    var_11c_2 = 0
                    var_114_2 = 1f
                    var_128_2 = data_65ae28:4.q
                    var_120_2 = data_65ae28:0xc
                    ecx_7 = 3
                label_4b0658:
                    var_134 = xmm0
                    esi_1 = _mm_bsrli_si128(xmm0, 8)
                    sub_45af40(&var_134, &var_40, ecx_7, var_134, esi_1, var_128_2, var_120_2, 
                        var_11c_2, var_114_2, var_110_2, var_108_3, var_104_7)
                    int32_t var_48_1 = 0xbf800000
                    int32_t var_88_4 = 0xbf800000
                    int128_t* var_104_8 = &var_30
                    eax_23 = &var_40
            
            var_80.q = xmm0.q
            void* var_108_2 = eax_23
            int128_t* var_10c_1 = &var_d0
            var_90 = _mm_unpacklo_ps(0x80000000, 0x80000000)
            var_80:8.d = esi_1
            eax_16 = eax_6
            var_80 = *sub_413000(&var_d0, &var_90, 0x571898)
            var_70:0xc.q = xmm0_1
        else
            if (ecx_1 != 3)
                goto label_4b06fd
            
            void* eax_10 = *sub_4b6c60(arg3[0x16])
            float var_88_1 = (*(eax_10 + 0x34) f+ *(eax_10 + 0x28)) * 0.5f
            float var_104_2 = &var_50
            var_90 = _mm_unpacklo_ps((*(eax_10 + 0x2c) f+ *(eax_10 + 0x20)) * 0.5f, 
                (*(eax_10 + 0x30) f+ *(eax_10 + 0x24)) * 0.5f)
            float* eax_13 = sub_45c5b0(&var_50, &var_90, &var_30, var_104_2)
            float eax_14 = eax_13[2]
            var_90 = *eax_13
            var_80.q = _mm_unpacklo_ps(var_c0.d f+ var_90.d, var_c0:4.d f+ var_90:4.d)
            var_80:8.d = var_c0:8.d + eax_14
            eax_16 = eax_6
            var_70:0xc.q = xmm0_1
            var_80 = var_d0
    
    int32_t var_5c = eax_16
    *arg4 = var_80
    arg4[1] = var_70
    arg4[2].q = eax_3.q
    @__security_check_cookie@4(eax_1 ^ &var_f8)
    return arg4
}
