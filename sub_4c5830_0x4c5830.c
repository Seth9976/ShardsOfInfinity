// 函数名称: sub_4c5830
// 虚拟地址: 0x4c5830
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4c5830(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_94 = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1[0x14].b == 0)
        int32_t* ecx = arg1[0xb]
        
        if (ecx != 0)
            sub_4c6310(result, &data_57251c, ecx, arg1[4], arg1[5], arg1[6], arg1[7], &data_5c77bc, 1)
        
        float xmm3_3 = arg1[5] f+ arg1[9]
        char* eax_3 = *arg1
        char* const ecx_1 = &data_5559b1
        int32_t var_98_1 = arg1[0x15]
        float xmm2_3 = arg1[8] f+ arg1[4]
        float xmm0_3 = arg1[7] f+ xmm3_3
        
        if (eax_3 != 0)
            ecx_1 = eax_3
        
        char* const var_9c_1 = ecx_1
        float var_24_1 = xmm3_3
        float xmm1_3 = arg1[6] f+ xmm2_3
        float var_28 = xmm2_3
        float var_1c_1 = xmm0_3
        float var_20_1 = xmm1_3
        int32_t* eax_6 =
            sub_4ae200(&var_28, arg1[0xc], ecx_1, &var_28, &arg1[0xd], &arg1[0xf], arg1[0xe], var_98_1)
        int32_t* ecx_2 = arg1[0xc]
        
        if (ecx_2[1] != 0x12)
            sub_44e4d0(eax_6, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FONT", 
                "c:\ax2017\engine\assetutils.cpp", 0x2e0, "FontGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* eax_7 = sub_4459f0(ecx_2)
        void* esi_1 = arg1[1]
        void* ecx_3 = arg1[3]
        float xmm1_4 = arg1[0xe]
        int32_t edx_3
        edx_3:result = sx.q(esi_1 - ecx_3)
        float var_2c_1 = xmm1_4 + xmm1_4
        void* ebx_3 = (result ^ edx_3) - edx_3
        
        if (esi_1 s>= ecx_3)
            esi_1 = ecx_3
        
        if (ebx_3 s> 0)
            void* var_98_2 = esi_1
            var_2c_1 = xmm1_4
            var_28 = sub_4c55f0(arg1)
            float xmm0_9 = arg1[9] f+ arg1[5]
            void* var_98_3 = esi_1 + ebx_3
            float var_18 = xmm0_9
            float var_24_2 = xmm0_9
            int32_t var_20_2 = sub_4c55f0(arg1)
            float var_1c_2 = _mm_cvtepi32_ps(zx.o(*eax_7)) f* arg1[0xe] + var_18
            
            if (arg1[1] == esi_1)
                var_28 = var_28 + var_2c_1
            
            sub_47d680(&var_28, &arg1[0x11])
            void* var_98_4 = esi_1
            int32_t xmm0_17 = sub_4c55f0(arg1)
            var_18 = &data_5559b1
            int32_t var_8_1 = 0
            char* const ecx_8 = &data_5559b1
            char* eax_12 = *arg1
            
            if (eax_12 != 0)
                ecx_8 = eax_12
            
            sub_44f690(&var_18, esi_1 + ecx_8, ebx_3)
            int32_t xmm0_18 = arg1[0xe]
            float esi_2 = var_18
            int32_t var_5c = xmm0_18
            int32_t var_4c_1 = xmm0_18
            float ebx_4 = &data_5559b1
            int32_t var_54_1 = xmm0_17
            
            if (esi_2 != 0)
                ebx_4 = esi_2
            
            int32_t var_50_1 = 0
            int32_t var_44_1 = 0
            int32_t var_58_1 = 0
            int32_t var_40_1 = 0
            float var_48_1 = xmm3_3
            int32_t var_3c_1 = 0x3f800000
            void var_80
            void* var_9c_4 = &var_80
            result = sub_4aded0(sub_412bf0(&var_5c, &data_57251c, &var_80, &var_5c), &var_80, ebx_4, 
                arg1[0xc], arg1[0x10], 0xffffffff, 1)
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                result = sub_44f000(&var_18)
                int32_t temp0_1 = result[1]
                result[1] -= 1
                
                if (temp0_1 == 1)
                    result = sub_45d050(result, &result[3][2])
            
            int32_t var_8_3 = 0xffffffff
        
        float xmm0_21 = arg1[2]
        
        if (not(xmm0_21 <= 1f))
            xmm0_21 = xmm0_21 - 1f
            arg1[2] = xmm0_21
        
        if (*(arg1 + 0x51) != 0 && not(0.5f <= xmm0_21))
            int32_t var_98_7 = arg1[1]
            float xmm0_22 = sub_4c55f0(arg1)
            float xmm4_1 = arg1[0xe]
            var_28 = xmm0_22
            float xmm2_7 = _mm_cvtepi32_ps(zx.o(*eax_7)) * xmm4_1 * 0.075000003f
            float xmm2_8
            
            if (0 f<= xmm2_7)
                xmm2_8 = xmm2_7 + 0.5f
            else
                xmm2_8 = xmm2_7 - 0.5f
            
            float var_20_3 = xmm0_22 + var_2c_1
            float xmm1_8 = arg1[9] f* xmm4_1 f+ arg1[5] + _mm_cvtepi32_ps(zx.o(int.d(xmm2_8)))
            float var_24_3 = xmm1_8
            float var_1c_3 = _mm_cvtepi32_ps(zx.o(eax_7[1])) * xmm4_1 + xmm1_8
            result = sub_47d680(&var_28, &arg1[0xd])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
