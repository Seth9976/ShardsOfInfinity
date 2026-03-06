// 函数名称: sub_4ba150
// 虚拟地址: 0x4ba150
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4ba150(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_544b38
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_404 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_38
    int32_t* var_408 = &var_38
    int32_t* result_1
    sub_42ce10(&result_1, *arg1, 2)
    int32_t var_14_1 = 0
    void* eax_4 = *var_38
    
    if (arg1[5] s<= 0)
        sub_44e4d0(eax_4, &data_5559b1, "index >= 0 && index < mSize", "c:\ax2017\engine\xarray.h", 
            0xb5, "XArray<struct Mat4>::operator []")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_5 = *(eax_4 + 8)
    int32_t var_3c = 0
    
    if (eax_5 s> 0)
        void* ecx_1 = nullptr
        int32_t* var_34_1 = arg2
        int128_t* edi_1 = arg1[4]
        var_38 = nullptr
        int32_t* edx_1 = arg2
        int32_t eax_27
        
        do
            float xmm2_1 = *edx_1
            float xmm0_1 = edx_1[3]
            void* esi_2 = *(eax_4 + 0xc) + ecx_1
            float xmm1_3 = edx_1[1]
            float xmm1_5 = edx_1[2]
            uint32_t eax_7
            float xmm0_6[0x4]
            eax_7, xmm0_6 =
                sub_412d90(xmm0_1 * xmm0_1 + xmm2_1 * xmm2_1 + xmm1_3 * xmm1_3 + xmm1_5 * xmm1_5)
            int32_t* edx_2 = var_34_1
            float xmm0_7[0x4] = _mm_shuffle_ps(xmm0_6, xmm0_6, 0)
            *edx_2 = _mm_div_ps(*edx_2, xmm0_7)
            int32_t esi_3 = *(esi_2 + 0x6c)
            
            if (esi_3 s>= var_3c)
                sub_44e4d0(eax_7, &data_5559b1, "pStructBone->parentBoneIndex < i", 
                    "c:\ax2017\engine\animation.cpp", 0x2b0, "AnimationCalcFinalPosition")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int128_t* eax_9
            int128_t var_b8
            
            if (esi_3 != 0xffffffff)
                void var_2b8
                void* eax_11 = &var_2b8
                int128_t* var_408_2 = &var_2b8
                int128_t* eax_13
                
                if (arg2[esi_3 * 0xb + 0xa].b == 0)
                    int128_t* eax_14 = sub_47bdc0(eax_11, edx_2, &edx_2[7], var_408_2)
                    int128_t var_1f8_1 = *eax_14
                    int128_t var_1e8_1 = eax_14[1]
                    int128_t var_1d8_1 = eax_14[2]
                    int128_t var_1c8_1 = eax_14[3]
                    int128_t* eax_16 = sub_47f2c0(&var_b8, edx_2, edx_2, &var_b8)
                    int128_t var_178_1 = *eax_16
                    int128_t var_168_1 = eax_16[1]
                    int128_t var_158_1 = eax_16[2]
                    int128_t var_148_1 = eax_16[3]
                    float var_28_1 = 1f f/ arg2[esi_3 * 0xb + 9]
                    int64_t var_30 =
                        _mm_unpacklo_ps(1f f/ arg2[esi_3 * 0xb + 7], 1f f/ arg2[esi_3 * 0xb + 8])
                    void var_338
                    int128_t* eax_20 = sub_47bdc0(&var_338, edx_2, &var_30, &var_338)
                    int128_t var_f8_1 = *eax_20
                    int128_t var_e8_1 = eax_20[1]
                    int128_t var_d8_1 = eax_20[2]
                    int128_t var_c8_1 = eax_20[3]
                    void var_378
                    int128_t* eax_22 = sub_4bcef0(&var_378, edx_2, &edx_2[4], &var_378)
                    int128_t var_138_1 = *eax_22
                    int128_t var_128_1 = eax_22[1]
                    int128_t var_118_1 = eax_22[2]
                    int128_t var_108_1 = eax_22[3]
                    void var_3b8
                    int128_t* eax_23 = sub_45c570(&var_3b8)
                    int128_t var_1b8_1 = *eax_23
                    int128_t var_1a8_1 = eax_23[1]
                    int128_t var_198_1 = eax_23[2]
                    int128_t var_188_1 = eax_23[3]
                    void var_3f8
                    int128_t* eax_24 = sub_45c570(&var_3f8)
                    int128_t var_238_1 = *eax_24
                    int128_t var_228_1 = eax_24[1]
                    int128_t var_218_1 = eax_24[2]
                    int128_t var_208_1 = eax_24[3]
                    void var_2f8
                    int128_t* eax_25 = sub_45c570(&var_2f8)
                    int128_t var_278_1 = *eax_25
                    int128_t var_268_1 = eax_25[1]
                    int128_t var_258_1 = eax_25[2]
                    eax_13 = &var_2f8
                    int128_t var_248_1 = eax_25[3]
                else
                    int128_t* eax_12 = sub_4b6f80(eax_11, edx_2, edx_2, var_408_2)
                    var_b8 = *eax_12
                    int128_t var_a8_1 = eax_12[1]
                    int128_t var_98_1 = eax_12[2]
                    eax_13 = &var_2b8
                    int128_t var_88_1 = eax_12[3]
                
                eax_9 = sub_45c570(eax_13)
                edx_2 = var_34_1
            else
                eax_9 = sub_4b6f80(&var_b8, edx_2, edx_2, &var_b8)
            edx_1 = &edx_2[0xb]
            int128_t xmm1_10 = eax_9[1]
            ecx_1 = &var_38[0x34]
            int128_t xmm2_4 = eax_9[2]
            var_34_1 = edx_1
            int128_t xmm3_1 = eax_9[3]
            *edi_1 = *eax_9
            eax_27 = var_3c + 1
            var_38 = ecx_1
            edi_1[1] = xmm1_10
            var_3c = eax_27
            edi_1[2] = xmm2_4
            edi_1[3] = xmm3_1
            edi_1 = &edi_1[4]
        while (eax_27 s< eax_5)
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
