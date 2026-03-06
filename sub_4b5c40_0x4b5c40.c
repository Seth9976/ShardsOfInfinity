// 函数名称: sub_4b5c40
// 虚拟地址: 0x4b5c40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_4b5c40(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_544a1b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_124 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg4
    int32_t* var_b4 = esi
    float result
    
    if (arg2 != data_e47058)
        float result_2
        int64_t xmm1_2
        float xmm2_2[0x4]
        
        if (arg2 == data_e4705c)
            float xmm3_1 = *(arg3 + 0x44)
            float xmm4_3 = xmm3_1 * 0f * 0.5f
            xmm1_2 = *(arg3 + 0xc) + xmm3_1 * 0.5f
            result_2 = *(arg3 + 0x10) + xmm4_3
            xmm2_2 = xmm4_3 f+ *(arg3 + 8)
        label_4b5d2e:
            result = result_2
            *(esi + 0x14) = _mm_unpacklo_ps(xmm2_2, xmm1_2)
            goto label_4b5d39
        
        if (arg2 == data_e47060)
            float xmm3_4 = *(arg3 + 0x44) * 0f
            xmm2_2 = *(arg3 + 8) + xmm3_4
            xmm1_2 = *(arg3 + 0xc) f+ *(arg3 + 0x44)
            result_2 = *(arg3 + 0x10) + xmm3_4
            goto label_4b5d2e
        
        int32_t* var_b0
        int32_t* var_128_1 = &var_b0
        int32_t* result_1
        sub_42ce10(&result_1, *(arg3 + 4), 2)
        int32_t var_14_1 = 0
        void* eax_4 = *var_b0
        
        if (eax_4 == 0)
        label_4b5db8:
            *esi = data_5c779c
            *(esi + 0x10) = data_5c77ac
        else
            int32_t edx = 0
            
            if (*(eax_4 + 0x10) s<= 0)
                goto label_4b5db8
            
            int32_t i = arg2
            int32_t* eax_6 = *(eax_4 + 0x14) + 0x2c
            
            while (*eax_6 != i)
                edx += 1
                eax_6 = &eax_6[0xe]
                i = arg2
                esi = var_b4
                
                if (edx s>= *(*var_b0 + 0x10))
                    goto label_4b5db8
            
            if (edx == 0xffffffff)
                goto label_4b5db8
            
            void* edx_1 = *var_b0
            int128_t* ecx_8 = *(edx_1 + 0x14) + edx * 0x38
            int32_t* var_ac_1 = ecx_8
            int32_t eax_9
            
            if (*(arg3 + 0x2c) != 0)
                eax_9 = *(ecx_8 + 0x34)
            
            int128_t var_d4
            int128_t var_48
            int32_t eax_16
            
            if (*(arg3 + 0x2c) == 0 || eax_9 s< 0 || eax_9 s>= *(edx_1 + 8))
                eax_16 = *(ecx_8 + 0x18)
                int64_t var_74_2 = ecx_8[1].q
                int128_t var_84_2 = *ecx_8
            else
                sub_4b6f30(*(arg3 + 0x2c) + 0x7c, eax_9)
                void var_a8
                int128_t* eax_12 = sub_4b6f80(&var_a8, edx_1, var_ac_1, &var_a8)
                int128_t var_68 = *eax_12
                int128_t var_58 = eax_12[1]
                var_48 = eax_12[2]
                int128_t var_38_1 = eax_12[3]
                void var_118
                int128_t* eax_13 = sub_45c570(&var_118)
                float xmm3_5[0x4] = *eax_13
                float xmm2_5[0x4] = eax_13[1]
                float xmm1_4[0x4] = eax_13[2]
                int128_t var_38_2 = eax_13[3]
                var_58:0xc.d = xmm3_5
                var_48.d = _mm_shuffle_ps(xmm3_5, xmm3_5, 0x55)
                var_48:4.d = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xaa)
                var_48:0xc.d = _mm_shuffle_ps(xmm2_5, xmm2_5, 0x55)
                var_38_2.d = _mm_shuffle_ps(xmm2_5, xmm2_5, 0xaa)
                var_38_2:8.d = _mm_shuffle_ps(xmm1_4, xmm1_4, 0x55)
                int32_t xmm0_22 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa)
                var_48:8.d = xmm2_5
                var_38_2:4.d = xmm1_4
                var_38_2:0xc.d = xmm0_22
                float* eax_15 = sub_412db0(&var_d4:0xc, &var_68, &var_58:0xc, &var_d4:0xc)
                float xmm2_6[0x4] = *eax_13
                int64_t xmm1_5 = *(eax_13 + 0x1c)
                int128_t xmm0_23 = *eax_15
                float xmm2_7[0x4] = _mm_shuffle_ps(xmm2_6, xmm2_6, 0xff)
                int128_t var_84_1 = xmm0_23
                esi = var_b4
                eax_16 = *(eax_13 + 0x2c)
                int64_t var_74_1 = _mm_unpacklo_ps(xmm2_7, xmm1_5)
            
            int64_t var_c4_1 = *(arg3 + 8)
            int32_t var_6c_1 = eax_16
            int32_t eax_17 = *(arg3 + 0x10)
            var_d4 = *(arg3 + 0x14)
            int32_t var_bc_1 = eax_17
            int128_t xmm0_30 = (*(arg3 + 0x24)).o
            float var_88 = 1f
            var_48 = xmm0_30
            int128_t var_38_3 = var_d4
            sub_4a0490(&var_48, &var_88, esi, &var_48)
        
        result = result_1
        
        if (result != 0)
            *(result i+ 0x1c) -= 1
    else
        *(esi + 0x14) = *(arg3 + 8)
        result = *(arg3 + 0x10)
    label_4b5d39:
        esi[7] = result
        int128_t xmm0_3 = *(arg3 + 0x14)
        *esi = 0x3f800000
        *(esi + 4) = xmm0_3
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
