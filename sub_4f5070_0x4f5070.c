// 函数名称: sub_4f5070
// 虚拟地址: 0x4f5070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4f5070(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int64_t xmm1 = 0x3f8000003f800000
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t eax_3 = *arg3 - 1
    float ebx = arg3[4]
    int64_t var_80 = *(arg3 + 8)
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int64_t var_70
    int64_t var_64
    int32_t eax_14
    
    if (eax_3 u> 1)
    label_4f5392:
        var_70 = *(arg3 + 8)
        float var_68_2 = ebx
        eax_14 = arg3[7]
        var_64 = *(arg3 + 0x14)
        int64_t var_58_2 = xmm1
    else
        int32_t eax_4 = arg3[0xf]
        float edi = data_65ae28:0xc
        
        if (eax_4 u> 3)
            char const* const var_ac_9 = "ElTransform"
            int32_t var_b0_5 = 0x19a
            char const* const var_b4_3 = "c:\ax2017\engine\editor\fabeditor.cpp"
            sub_44e4d0(eax_4, &data_5559b1, "Halt")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int64_t var_dc_2
        float var_d4_2
        int64_t var_d0_2
        float var_c8_2
        int64_t var_c4_2
        int64_t var_b8_2
        float var_b0_3
        void* var_ac_6
        void var_4c
        int128_t var_30
        int64_t var_20
        float eax_18
        int32_t ecx_2
        
        switch (eax_4)
            case 0
                goto label_4f5392
            case 1
                float xmm3_1 = data_65ae18:4
                float xmm4_1 = data_65ae18:0xc
                float xmm2_1 = data_65ae28.d
                float xmm1_1 = data_65ae18:8
                float xmm5_3 = xmm3_1 * xmm4_1 + xmm2_1 * xmm1_1
                float xmm7_3 = xmm4_1 * xmm1_1 - xmm3_1 * xmm2_1
                var_20 = xmm5_3 + xmm5_3
                int64_t* eax_6 = sub_45c220(&var_30, arg3, &data_65ae18:4, &var_30)
                int64_t xmm0_5 = *eax_6
                float eax_7 = eax_6[1].d
                int64_t xmm0_7 = _mm_unpacklo_ps(zx.o(var_20), xmm7_3 + xmm7_3)
                sub_45af40(ebx, &var_30:4, 0, *(arg3 + 8), ebx, data_65ae28:4.q, edi, xmm0_7, 
                    xmm4_1 * xmm4_1 - xmm1_1 * xmm1_1 - xmm3_1 * xmm3_1 + xmm2_1 * xmm2_1, xmm0_5, 
                    eax_7, &var_4c)
                int32_t var_38_2 = 0xbf800000
                int32_t var_18_1 = 0xbf800000
                var_70 = var_80
                void* var_ac_3 = &var_4c
                int64_t xmm0_11 = _mm_unpacklo_ps(0x80000000, 0x80000000)
                void* var_b0_2 = &var_30:4
                float var_68 = ebx
                void var_40
                void* var_b4_1 = &var_40
                var_20 = xmm0_11
                int128_t* eax_11
                int32_t edx_3
                eax_11, edx_3 = sub_413000(&var_40, &var_20, 0x571898)
                var_30 = *eax_11
                int64_t* eax_13
                int80_t st0_1
                st0_1, eax_13 = sub_4fb390(&var_80, edx_3, &var_30, &var_80)
                eax_14 = eax_13[1].d
                var_64 = *eax_13
                int64_t var_58 = xmm1
            case 2
                var_ac_6 = &var_4c
                var_b8_2 = 0
                var_b0_3 = 0f
                var_c4_2 = 0
                int32_t var_bc_3 = 0x3f800000
                var_d0_2 = data_65ae28:4.q
                var_c8_2 = edi
                eax_18 = ebx
                var_dc_2 = *(arg3 + 8)
                var_d4_2 = eax_18
                ecx_2 = 1
                goto label_4f529f
            case 3
                int64_t* eax_16 = sub_45c1a0(&var_30, arg3, &data_65ae18:4, &var_30)
                var_ac_6 = &var_4c
                var_b8_2 = *eax_16
                var_b0_3 = eax_16[1].d
                var_c4_2 = 0
                int32_t var_bc_2 = 0x3f800000
                var_d0_2 = data_65ae28:4.q
                var_c8_2 = edi
                eax_18 = ebx
                var_dc_2 = *(arg3 + 8)
                var_d4_2 = eax_18
                ecx_2 = 3
            label_4f529f:
                void var_3c
                sub_45af40(eax_18, &var_3c, ecx_2, var_dc_2, var_d4_2, var_d0_2, var_c8_2, var_c4_2, 
                    1f, var_b8_2, var_b0_3, var_ac_6)
                int32_t var_28_1 = 0xbf800000
                int32_t var_18_2 = 0xbf800000
                var_70 = var_80
                void* var_ac_7 = &var_4c
                void* var_b0_4 = &var_3c
                float var_68_1 = ebx
                void var_98
                void* var_b4_2 = &var_98
                var_20 = _mm_unpacklo_ps(0x80000000, 0x80000000)
                int128_t* eax_20
                int32_t edx_6
                eax_20, edx_6 = sub_413000(&var_98, &var_20, 0x571898)
                var_30 = *eax_20
                int64_t* eax_22
                int80_t st0_2
                st0_2, eax_22 = sub_4fb390(&var_80, edx_6, &var_30, &var_80)
                eax_14 = eax_22[1].d
                var_64 = *eax_22
                int64_t var_58_1 = xmm1
    
    int32_t var_5c = eax_14
    *arg4 = var_70.o
    arg4[1] = var_64:4.o
    arg4[2].d = 0x3f800000
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
