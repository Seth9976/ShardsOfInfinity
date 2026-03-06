// 函数名称: sub_4d5780
// 虚拟地址: 0x4d5780
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4d5780(int32_t arg1, int32_t arg2, float* arg3, void* arg4, void* arg5, int128_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t xmm1 = arg6
    int32_t ebx = 0
    int32_t var_50[0x2]
    int32_t (* esi)[0x2] = &var_50
    int128_t var_a0 = xmm1
    int32_t var_74 = 0
    float* edi = arg3
    int128_t var_60 = xmm1
    float var_48
    int32_t* var_64 = &var_48
    int128_t var_d0
    float var_8c
    int32_t var_88
    int32_t var_84_1
    float var_70
    int32_t var_6c
    
    while (true)
        float var_b4_1 = edi[3]
        float var_b8_1 = edi[2]
        float var_bc_1 = edi[1]
        float var_c0_1 = *edi
        var_d0 = xmm1
        int32_t eax_5 =
            sub_4d54e0(&var_d0, &var_8c, &var_70, var_d0, var_c0_1, var_bc_1, var_b8_1, var_b4_1)
        int32_t var_68_1
        int32_t ecx_1
        
        if (eax_5.b == 0)
            ecx_1 = 8
            *esi = var_70
            (*esi)[1] = var_6c
            var_68_1 = 1
        else
            int32_t xmm0_1 = var_60.d
            int32_t xmm5_1 = var_60:8.d
            int32_t xmm4_1
            int32_t xmm6_1
            
            if (not(xmm5_1 f< xmm0_1))
                xmm4_1 = var_60:0xc.d
                xmm6_1 = var_60:4.d
            
            char const* const var_bc_3
            int32_t var_b8_3
            char const* const var_b4_3
            char* ecx_6
            
            if (xmm5_1 f< xmm0_1 || xmm4_1 f< xmm6_1)
                var_b4_3 = "RectContains"
                var_b8_3 = 0xa4
                var_bc_3 = "c:\ax2017\engine\rect.cpp"
                ecx_6 = "RectIsNormalized(r)"
            label_4d5ba6:
                sub_44e4d0(eax_5, &data_5559b1, ecx_6, var_bc_3, var_b8_3, var_b4_3)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            float xmm3_1 = var_70
            
            if (xmm3_1 f< xmm0_1 || var_6c f< xmm6_1 || xmm5_1 f< xmm3_1 || xmm4_1 f< var_6c)
                var_b4_3 = "ClipRect"
                var_b8_3 = 0xa0
                var_bc_3 = "c:\ax2017\engine\clipping2.cpp"
                ecx_6 = "RectContains(rect, p0)"
                goto label_4d5ba6
            
            float xmm1_1 = var_8c
            
            if (xmm1_1 f< xmm0_1 || var_88 f< xmm6_1 || xmm5_1 f< xmm1_1 || xmm4_1 f< var_88)
                var_b4_3 = "ClipRect"
                var_b8_3 = 0xa1
                var_bc_3 = "c:\ax2017\engine\clipping2.cpp"
                ecx_6 = "RectContains(rect, p1)"
                goto label_4d5ba6
            
            ecx_1 = 0x10
            *esi = xmm3_1
            (*esi)[1] = var_6c
            var_68_1 = 2
            *var_64 = xmm1_1
            var_64[1] = var_88
        
        ebx += var_68_1
        int32_t eax_8 = var_74 + 1
        var_64 += ecx_1
        esi += ecx_1
        edi = &edi[2]
        var_84_1 = ebx
        var_74 = eax_8
        
        if (eax_8 s>= 3)
            break
        
        xmm1 = var_a0
    
    float var_b4_2 = arg3[1]
    float var_b8_2 = *arg3
    float var_bc_2 = arg3[7]
    float var_c0_2 = arg3[6]
    var_d0 = var_a0
    char eax_10 = sub_4d54e0(&var_d0, &var_8c, &var_70, var_d0, var_c0_2, var_bc_2, var_b8_2, var_b4_2)
    (&var_50)[ebx][0] = var_70
    var_4c
    *(&var_4c + (ebx << 3)) = var_6c
    
    if (eax_10 != 0)
        (&var_48)[ebx * 2] = var_8c
        void var_44
        *(&var_44 + (ebx << 3)) = var_88
        ebx += 1
        var_84_1 = ebx
    
    float xmm1_3 = arg3[7] - arg3[1]
    float xmm5_3 = arg3[2] - *arg3
    float xmm6_3 = arg3[3] - arg3[1]
    float xmm7_1 = arg3[6] - *arg3
    float var_7c_1 = xmm1_3
    
    if (ebx s> 1)
        int32_t* ecx_3 = &var_48
        void* edx_4 = arg4 + 0x1c
        int32_t* var_74_1 = &var_48
        void* edi_1 = arg5 + 0xc
        float xmm2_4 = xmm6_3 * xmm6_3 + xmm5_3 * xmm5_3
        int32_t i_1 = ebx - 1
        float xmm2_7 = xmm1_3 * xmm1_3 + xmm7_1 * xmm7_1
        float var_78_1 = var_48
        int32_t i
        
        do
            float xmm2_9 = var_50[0]
            float xmm0_14 = var_50[1]
            *(edx_4 - 0x14) = *ecx_3
            int32_t eax_15 = ecx_3[1]
            ecx_3 = &ecx_3[2]
            *(edx_4 - 0x1c) = xmm2_9
            *(edx_4 - 4) = xmm2_9
            *(edx_4 - 0x18) = xmm0_14
            *edx_4 = xmm0_14
            *(edx_4 - 0x10) = eax_15
            *(edx_4 - 0xc) = *ecx_3
            *(edx_4 - 8) = ecx_3[1]
            float xmm2_11 = xmm0_14 - arg3[1]
            float xmm4_3 = xmm2_9 - *arg3
            float xmm2_12 = var_74_1[1]
            *(edi_1 - 0xc) = (xmm6_3 * xmm2_11 + xmm5_3 * xmm4_3) / xmm2_4
            *(edi_1 - 8) = (xmm1_3 * xmm2_11 + xmm7_1 * xmm4_3) / xmm2_7
            float xmm3_7 = var_78_1 - *arg3
            float xmm2_13 = xmm2_12 - arg3[1]
            float xmm3_9 = var_74_1[3]
            *edi_1 = (xmm2_13 * var_7c_1 + xmm3_7 * xmm7_1) / xmm2_7
            float xmm2_17 = *ecx_3
            *(edi_1 - 4) = (xmm2_13 * xmm6_3 + xmm3_7 * xmm5_3) / xmm2_4
            float xmm3_10 = xmm3_9 - arg3[1]
            var_78_1 = xmm2_17
            float xmm2_18 = xmm2_17 - *arg3
            float xmm2_20 = var_50[0]
            *(edi_1 + 8) = (xmm3_10 * var_7c_1 + xmm2_18 * xmm7_1) / xmm2_7
            float xmm3_14 = var_50[1]
            *(edi_1 + 4) = (xmm3_10 * xmm6_3 + xmm2_18 * xmm5_3) / xmm2_4
            float xmm3_15 = xmm3_14 - arg3[1]
            float xmm2_21 = xmm2_20 - *arg3
            *(edi_1 + 0xc) = (xmm3_15 * xmm6_3 + xmm2_21 * xmm5_3) / xmm2_4
            edi_1 += 0x20
            *(arg5 - arg4 + edx_4) = (xmm3_15 * var_7c_1 + xmm2_21 * xmm7_1) / xmm2_7
            xmm1_3 = var_7c_1
            edx_4 += 0x20
            var_74_1 = ecx_3
            i = i_1
            i_1 -= 1
        while (i != 1)
        ebx = var_84_1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return ebx - 1
}
