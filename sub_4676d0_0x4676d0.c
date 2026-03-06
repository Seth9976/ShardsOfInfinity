// 函数名称: sub_4676d0
// 虚拟地址: 0x4676d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4676d0(void* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_54291b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_254 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = *(arg1 + 0x63c) * 0x208
    int32_t* esi = *(result + arg1 + 0xf8)
    
    if (esi != 0)
        int128_t var_58 = data_5c779c
        int128_t var_48_1 = data_5c77ac
        float var_94 = sub_4145d0(1.57079637f)
        int32_t var_c4_1 = sub_4145b0(1.57079637f)
        float xmm0_5 = var_94
        float xmm2_2[0x4] = xmm0_5 * 0f
        float var_c8_1 = xmm0_5
        int64_t var_d0 = _mm_unpacklo_ps(xmm2_2, xmm2_2)
        float xmm2_4[0x4] = *(arg1 + 0x6cc)
        float xmm1_1 = xmm2_4[0]
        var_58 = var_d0.o
        float xmm3_2 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xff)
        float xmm0_8[0x4] = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xaa)
        var_d0.o = xmm0_8
        float xmm0_10 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0x55)
        float var_100[0x4] = xmm2_4
        float var_258_1 = (xmm0_10 + xmm3_2) * 0.5f
        float var_25c_1 = (xmm1_1 f+ xmm0_8) * 0.5f
        int64_t var_38
        int64_t* eax_4 = sub_466120(&var_38)
        bool cond:0_1 = esi[1] != 2
        float eax_5 = eax_4[1].d
        int64_t var_b8 = *eax_4
        
        if (cond:0_1)
            sub_44e4d0(eax_5, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                "c:\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t var_258_2 = 0
        int32_t var_25c_2 = 0
        void* esi_1 = *sub_4459f0(esi)
        float xmm1_4[0x4] = *(esi_1 + 0x20)
        int64_t xmm0_14 = *(esi_1 + 0x30)
        float xmm2_5 = xmm1_4[0]
        float xmm0_16 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xff)
        float xmm0_18 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0x55)
        int64_t xmm2_7 = (xmm2_5 + xmm0_16) * 0.5f
        float xmm0_22 = (_mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa) f+ xmm0_14:4.d) * 0.5f
        float xmm0_24 = (var_d0.o).d f- var_100[0]
        var_94 = (xmm0_18 f+ xmm0_14.d) * 0.5f
        int64_t* eax_7 = sub_466120(&var_100)
        float var_258_3 = xmm3_2 - xmm0_10
        float var_25c_3 = xmm0_24
        int32_t var_30_2 = eax_7[1].d
        var_38 = *eax_7
        int64_t* eax_9
        int32_t edx_1
        eax_9, edx_1 = sub_466120(&var_d0)
        int32_t esi_2 = *(arg1 + 0x63c) * 0x208
        float xmm1_9[0x4] = ((*eax_9).d f- var_38.d) / (xmm0_16 f- *(esi_1 + 0x20))
        int32_t var_a0_3 = eax_9[1].d
        int64_t xmm4_4 = ((xmm0_24 f- var_38:4.d) / (xmm0_14.d - xmm0_18)) ^ (data_59e5c0.o).q
        int128_t var_78
        int128_t* eax_13
        int128_t var_180
        
        if (*(esi_2 + arg1 + 0xb8) != 3)
            int64_t xmm0_36 = _mm_unpacklo_ps(xmm1_9, xmm4_4)
            int32_t var_30_4 = 0x3f800000
            float xmm1_12[0x4] = xmm1_9 f* xmm2_7.d f+ var_b8.d
            int64_t xmm4_6 = xmm4_4 f* var_94 f+ var_b8:4.d
            var_48_1:0xc.d = xmm0_22 + eax_5
            var_38 = xmm0_36
            var_48_1:4.q = _mm_unpacklo_ps(xmm1_12, xmm4_6)
            void var_1c0
            int128_t* eax_16 = sub_47bdc0(&var_1c0, edx_1, &var_38, &var_1c0)
            var_180 = *eax_16
            int128_t var_170_1 = eax_16[1]
            int128_t var_160_1 = eax_16[2]
            int128_t var_150_1 = eax_16[3]
            void var_200
            int128_t* eax_18 = sub_45c3f0(&var_200, edx_1, &var_58, &var_200)
            var_78 = *eax_18
            int128_t var_68_1 = eax_18[1]
            var_58 = eax_18[2]
            int128_t var_48_2 = eax_18[3]
            void var_240
            eax_13 = sub_45c570(&var_240)
        else
            float xmm1_10 = _mm_min_ss(xmm1_9, xmm4_4)
            var_58.d = xmm1_10
            var_48_1:0xc.d = xmm0_22 * xmm1_10 + eax_5
            var_48_1:4.q =
                _mm_unpacklo_ps(xmm2_7.d * xmm1_10 f+ var_b8.d, var_94 * xmm1_10 f+ var_b8:4.d)
            eax_13 = sub_45c3f0(&var_180, edx_1, &var_58, &var_180)
        bool cond:2_1 = *(esi_2 + arg1 + 0x108) == 0
        var_78 = *eax_13
        int128_t var_68_2 = eax_13[1]
        var_58 = eax_13[2]
        int128_t var_48_3 = eax_13[3]
        
        if (cond:2_1)
            data_65b360.d = 0
        else
            data_65b360.d = *(arg1 + 0x628)
        
        int32_t edx_2 = *(arg1 + 0x63c) * 0x208
        int32_t ecx_4 = *(edx_2 + arg1 + 0x110)
        var_d0.d = _mm_cvtepi32_ps(zx.o(ecx_4.b)) / 255f
        float xmm0_54 = _mm_cvtepi32_ps(zx.o((ecx_4 u>> 8).b))
        bool cond:4_1 = *(edx_2 + arg1 + 0x108) == 0
        var_d0:4.d = xmm0_54 / 255f
        float xmm0_57 = _mm_cvtepi32_ps(zx.o((ecx_4 u>> 0x10).b))
        void* eax_26 = data_cdf428
        float var_c8_2 = xmm0_57 / 255f
        float var_c4_2 = _mm_cvtepi32_ps(zx.o(ecx_4 u>> 0x18)) / 255f f* *(arg1 + 0x750)
        float xmm0_63 = *(eax_26 + 0x2c)
        
        if (not(cond:4_1))
            xmm0_63 = xmm0_63 f- *(arg1 + 0x628)
        
        bool cond:3_1 = data_cdf3e9 == 0
        data_65b360:4 = xmm0_63
        int128_t xmm0_64 = data_65b2b8
        
        if (cond:3_1)
            sub_44e4d0(eax_26, &data_5559b1, "gDraw3DData.submittingRenderItems", 
                "c:\ax2017\engine\draw3d.cpp", 0x2ff, "Draw3DSetMaterialColor")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int128_t xmm0_65 = var_d0.o
        float esi_3 = 0f
        var_94 = 0f
        data_65b2b8 = xmm0_65
        int32_t ecx_6 = *(arg1 + 0x63c)
        float eax_28 = *(ecx_6 * 0x208 + arg1 + 0x104)
        int32_t* var_98
        
        if (eax_28 != 0)
            if (*(eax_28 i+ 4) != 0x1d)
                esi_3 = eax_28
                var_94 = eax_28
            else
                float* var_258_8 = &var_94
                sub_42ce10(&var_98, eax_28, 0x1d)
                int32_t var_14_1 = 0
                int32_t var_14_2 = 0xffffffff
                esi_3 = sub_4a2e30(var_94)
                int32_t* ecx_9 = var_98
                var_94 = esi_3
                
                if (ecx_9 != 0)
                    ecx_9[7] -= 1
                    var_98 = nullptr
                
                ecx_6 = *(arg1 + 0x63c)
        
        int32_t eax_30 = ecx_6 * 0x208
        int32_t* ecx_10 = *(eax_30 + arg1 + 0x10c)
        int32_t* edx_3 = *(eax_30 + arg1 + 0xfc)
        int32_t eax_31 = *(eax_30 + arg1 + 0x100)
        var_98 = edx_3
        var_b8:4.d = ecx_10
        int32_t var_b0_3 = eax_31
        int64_t var_e0_1
        int128_t xmm0_66
        
        if (ecx_10 != 0)
            if (ecx_10[1] != 3)
                sub_44e4d0(eax_31, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "c:\ax2017\engine\texture.h", 0x84, "TextureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_33 = *sub_4459f0(ecx_10)
            var_e0_1:4.d = eax_33
            
            if (eax_33 != 0)
                int32_t* ecx_11 = *(eax_33 + 0x24)
                
                if (ecx_11 != 0)
                    int32_t* edx_4 = var_e0_1:4.d
                    int32_t* ecx_12 = *sub_454030(ecx_11)
                    float xmm4_7 = float.s(edx_4[0xb])
                    int32_t eax_35 = *ecx_12
                    float xmm3_9 = float.s(edx_4[0xc])
                    int32_t eax_37 = ecx_12[1]
                    float xmm1_14 =
                        _mm_cvtpd_ps(float.d(eax_35) f+ *((eax_35 u>> 0x1f << 3) + &data_59e4f0))
                    int32_t eax_39 = *edx_4
                    float xmm2_12 =
                        _mm_cvtpd_ps(float.d(eax_37) f+ *((eax_37 u>> 0x1f << 3) + &data_59e4f0))
                    var_d0.d = xmm4_7 / xmm1_14
                    var_d0:4.d = xmm3_9 / xmm2_12
                    int32_t eax_41 = edx_4[1]
                    float var_c8_3 = (
                        _mm_cvtpd_ps(float.d(eax_39) f+ *((eax_39 u>> 0x1f << 3) + &data_59e4f0))
                        + xmm4_7) / xmm1_14
                    float var_c4_3 = (
                        _mm_cvtpd_ps(float.d(eax_41) f+ *((eax_41 u>> 0x1f << 3) + &data_59e4f0))
                        + xmm3_9) / xmm2_12
                    xmm0_66 = var_d0.o
                else
                    xmm0_66 = data_571d08
            else
                xmm0_66 = data_571d08
            
            edx_3 = var_98
        else
            xmm0_66 = data_571d08
        
        bool cond:5_1 = data_cdf3e9 == 0
        int32_t eax_43 = data_65b2b4
        data_65b370 = xmm0_66
        var_e0_1:4.d = eax_43
        
        if (cond:5_1)
            sub_44e4d0(eax_43, &data_5559b1, "gDraw3DData.submittingRenderItems", 
                "c:\ax2017\engine\draw3d.cpp", 0x2f7, "Draw3DSetSortOverride")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        data_65b2b4 = 1
        int32_t* eax_44
        
        if (edx_3 == 0)
            if (esi[1] != 2)
                sub_44e4d0(esi, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                    "c:\ax2017\engine\assetutils.cpp", 0x30c, "StructureDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            eax_44 = sub_4459f0(esi)
            int32_t* var_a0_5 = eax_44
            int32_t* ecx_16 = *eax_44
            
            if (ecx_16 != 0)
                int32_t i = 0
                
                if (*ecx_16 s> 0)
                    int32_t edi_1 = 0
                    
                    do
                        sub_458650(&var_b8:4, &var_78, ecx_16[1] + edi_1, var_94, &var_b8:4, 2, 0)
                        eax_44 = var_a0_5
                        i += 1
                        edi_1 += 0x124
                        ecx_16 = *eax_44
                    while (i s< *ecx_16)
                
                eax_44 = sub_459190(eax_44, &var_78, esi, nullptr)
        else
            eax_44 = sub_4b6d20(*(arg1 + 0x690))
            
            if (eax_44 != 0)
                eax_44 = sub_459880(eax_44, &var_78, esi, esi_3, ecx_10, eax_44)
        
        if (data_cdf3e9 == 0)
            sub_44e4d0(eax_44, &data_5559b1, "gDraw3DData.submittingRenderItems", 
                "c:\ax2017\engine\draw3d.cpp", 0x2ff, "Draw3DSetMaterialColor")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = var_e0_1:4.d
        data_65b2b4 = result
        data_65b2b8 = xmm0_64
        data_65b360.d = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
