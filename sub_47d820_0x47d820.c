// 函数名称: sub_47d820
// 虚拟地址: 0x47d820
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_47d820(int32_t arg1, int32_t* arg2, int32_t* arg3, float* arg4, int128_t* arg5, int128_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm6 = *arg2
    float xmm4 = arg2[3]
    float xmm5 = arg2[5]
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    float xmm2_1 = xmm6 * *arg4
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    float xmm3_1 = arg2[1] f* arg4[1]
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    float xmm7_1 = xmm4 * *arg4
    float xmm6_1 = xmm6 * arg4[2]
    float xmm4_1 = xmm4 * arg4[2]
    float xmm2_3 = xmm2_1 + xmm3_1 f+ arg2[2]
    float xmm2_4 = arg2[4]
    float xmm2_5 = xmm2_4 * arg4[1]
    float var_30 = xmm2_3
    float xmm1_2 = xmm7_1 + xmm2_5 + xmm5
    float var_2c = xmm1_2
    float xmm1_5 = xmm6_1 + xmm3_1 f+ arg2[2]
    float xmm3_4 = xmm4_1 + xmm2_5 + xmm5
    float var_28 = xmm1_5
    float xmm1_7 = arg2[1] f* arg4[3]
    xmm1_2 - xmm3_4
    float xmm6_3 = xmm2_4 * arg4[3]
    float* eax_3
    eax_3:1.b = (xmm1_2 == xmm3_4 ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, xmm3_4) ? 1 : 0) << 2
        | (xmm1_2 < xmm3_4 ? 1 : 0)
    float var_24 = xmm3_4
    float xmm6_5 = xmm6_3 + xmm7_1 + xmm5
    float var_20 = xmm1_7 + xmm6_1 f+ arg2[2]
    float var_14 = xmm6_5
    float var_1c = xmm6_3 + xmm4_1 + xmm5
    float xmm0_6 = xmm1_7 + xmm2_1 f+ arg2[2]
    float var_18 = xmm0_6
    bool p_1 = unimplemented  {test ah, 0x44}
    float var_40
    
    if (not(p_1))
        xmm2_3 - xmm0_6
        eax_3:1.b = (xmm2_3 == xmm0_6 ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, xmm0_6) ? 1 : 0) << 2
            | (xmm2_3 < xmm0_6 ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (not(p_3))
            void* ecx = data_cdf424
            int32_t var_284_1 = 0
            int32_t* var_288_1 = arg7
            var_40 = xmm2_3
            int32_t esi = *(ecx + 0x38)
            int128_t* var_28c_1 = arg6
            var_20.o = *(ecx + 0x28)
            float var_3c = xmm1_2
            *(ecx + 0x28) = *arg5
            int32_t eax_4 = arg5[1].d
            *(ecx + 0x38) = eax_4
            float var_38_1 = xmm1_5
            float var_34 = xmm6_5
            sub_47d1f0(eax_4, &var_40, arg3)
            void* eax_5 = data_cdf424
            *(eax_5 + 0x28) = var_20.o
            *(eax_5 + 0x38) = esi
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_5
    
    if (arg5[1].d != 0xffffffff)
        char const* const var_284_3 = "DrawImageClippedFull"
        int32_t var_288_3 = 0x510
        char const* const var_28c_3 = "c:\ax2017\engine\sprite.cpp"
        sub_44e4d0(eax_3, &data_5559b1, "clipRect.regions == -1")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* var_290_1 = (*arg5).d
    void var_250
    void var_150
    float i_2
    int32_t* ecx_5
    i_2, ecx_5 = sub_4d5780(&var_150, arg2, &var_30, &var_150, &var_250, arg3)
    float i_1 = i_2
    
    if (i_1 s> 0)
        void var_148
        void* esi_1 = &var_148
        void var_23c
        void* edi_1 = &var_23c
        float i
        
        do
            int64_t xmm2_7 = *(edi_1 + 8)
            float xmm1_11[0x4] = *(edi_1 - 8)
            float xmm4_2[0x4] = *arg6
            float xmm3_5[0x4] = *(arg6 + 8)
            void* eax_8 = data_cdf424
            float xmm5_2[0x4] = _mm_unpacklo_ps(*(edi_1 - 0x10), *edi_1)
            float xmm0_13 = *(esi_1 - 8)
            int64_t xmm1_12 = _mm_unpacklo_ps(xmm1_11, xmm2_7)
            float xmm2_8 = *(eax_8 + 0x20)
            float xmm5_3[0x4] = _mm_unpacklo_ps(xmm5_2, xmm1_12)
            float xmm1_13 = *(eax_8 + 0x24)
            float xmm4_3[0x4] = _mm_shuffle_ps(xmm4_2, xmm4_2, 0)
            float xmm3_7[0x4] = _mm_sub_ps(_mm_shuffle_ps(xmm3_5, xmm3_5, 0), xmm4_3)
            var_30 = xmm0_13 + xmm2_8
            float xmm0_16 = *(esi_1 - 4) + xmm1_13
            int32_t var_284_2 = 0
            float xmm5_4[0x4] = _mm_mul_ps(xmm5_3, xmm3_7)
            float var_2c_1 = xmm0_16
            float xmm0_18 = xmm2_8 f+ *esi_1
            float xmm5_5[0x4] = _mm_add_ps(xmm5_4, xmm4_3)
            float var_28_1 = xmm0_18
            float xmm0_20 = *(esi_1 + 4) + xmm1_13
            float var_50 = xmm5_5
            float xmm5_6[0x4] = _mm_shuffle_ps(xmm5_5, xmm5_5, 0xe5)
            int32_t var_48_1 = xmm5_6
            float xmm5_7[0x4] = _mm_unpackhi_ps(xmm5_6, xmm5_6)
            var_40 = xmm5_7
            float var_24_1 = xmm0_20
            float xmm0_22 = *(esi_1 + 8) + xmm2_8
            int32_t var_38_2 = _mm_unpackhi_ps(xmm5_7, xmm5_7)
            float var_20_1 = xmm0_22
            float var_1c_1 = *(esi_1 + 0xc) + xmm1_13
            float var_18_1 = *(esi_1 + 0x10) + xmm2_8
            float var_14_1 = *(esi_1 + 0x14) + xmm1_13
            i_2, ecx_5 = sub_47c490(eax_8, &var_50, &var_30, arg7, ecx_5, arg3)
            edi_1 += 0x20
            esi_1 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i_2
}
