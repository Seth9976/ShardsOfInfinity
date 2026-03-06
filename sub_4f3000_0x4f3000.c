// 函数名称: sub_4f3000
// 虚拟地址: 0x4f3000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4f3000()
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_copy_file@12
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t __saved_ebp
    int32_t var_a8 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_e49d38 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        int32_t* var_ac_1 = &data_e49d38
        __Init_thread_header()
        
        if (data_e49d38 == 0xffffffff)
            int32_t var_8_1 = 0
            int32_t* var_ac_2 = &data_e49d38
            data_e49d3c = sub_48d5b0("sys/DebugFont.font", 0x12)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer()
    
    void* eax_6 = sub_495430(data_ce2764)
    int32_t var_90
    
    if (eax_6 != 0)
        int128_t var_80
        
        if (data_ce26f8 != 1)
            float xmm1_2 = *(eax_6 + 0x40)
            float xmm3_1 = *(eax_6 + 0x44)
            float var_78_1 = xmm1_2 - 3f
            float var_70_1 = xmm1_2 + 3f
            float var_74_1 = xmm3_1 - 3f
            float var_6c_2 = xmm3_1 + 3f
            sub_47d750(&var_80:8, &data_571950, 1f)
        else
            int64_t xmm0_1 = _mm_unpacklo_ps(0xbd4ccccd, 0xbd4ccccd)
            int64_t xmm1_1 = _mm_unpacklo_ps(0x3d4ccccd, 0x3d4ccccd)
            var_90 = 0xbd4ccccd
            int32_t var_48_1 = 0xbd4ccccd
            int32_t var_6c_1 = 0x3d4ccccd
            int32_t var_3c_1 = 0x3d4ccccd
            var_80 = xmm0_1.o
            void* var_ac_3 = eax_6
            int32_t var_70
            var_70.q = xmm1_1
            sub_455000(&var_80, eax_6 + 0x2c)
    
    if (data_ce26f8 == 1)
        sub_47e890()
    
    float xmm0_8 = data_ce2794
    float xmm1_4 = data_5b0f3c
    char* const edi = &data_5559b1
    xmm0_8 - xmm1_4
    int32_t var_60 = 0
    eax_6:1.b = (xmm0_8 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, xmm1_4) ? 1 : 0) << 2
        | (xmm0_8 < xmm1_4 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    char* const var_b0
    void var_8c
    int32_t var_5c
    int64_t var_50
    int64_t var_44
    char* const var_14
    
    if (p_1)
        var_b0 = _mm_cvtps_pd(xmm0_8 / xmm1_4)
        char const* const var_b4_1 = "Time dilation %g"
        sub_44f980(&var_14, "Time dilation %g")
        int32_t var_8_3 = 1
        char* const eax_7 = var_14
        var_5c = 0x3f800000
        
        if (eax_7 != 0)
            edi = eax_7
        
        var_50.d = 0
        var_44.d = 0
        int32_t var_58_1 = 0
        var_50:4.d = 0x3f800000
        var_44:4.d = 0
        int32_t var_54_1 = 0x43fa0000
        int32_t var_48_2 = 0x40400000
        int32_t var_3c_2 = 0x3f800000
        int32_t var_b4_2 = 1
        int32_t var_b8_2 = 0xffffffff
        int32_t var_bc_2 = 0xffffffff
        sub_4aded0(sub_412bf0(&var_5c, &data_57251c, &var_8c, &var_5c), &var_8c, edi, data_e49d3c, 
            0xffffffff, 0xffffffff, 1)
        int32_t var_8_4 = 2
        
        if (data_cdf414 != 0)
            char* eax_10 = var_14
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_44f000(&var_14)
                int32_t temp0_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_5 = 0xffffffff
    
    void* edx_19 = data_ce2758
    char* const var_24
    char* const result_2
    char* result_3
    char* const var_18
    
    if (edx_19 != 0)
        if (*(edx_19 + 4) == 2)
            void* var_ac_4 = edx_19
            sub_490250(&var_18, edx_19)
            int32_t var_8_6 = 3
            char* const ecx_10 = &data_5559b1
            char* const eax_12 = var_18
            
            if (eax_12 != 0)
                ecx_10 = eax_12
            
            var_b0 = ecx_10
            void* const var_b4_3 = &data_5742d0
            sub_44f980(&var_14, &data_5742d0)
            var_8_6.b = 4
            char* const ecx_11 = &data_5559b1
            char* const eax_13 = var_14
            
            if (eax_13 != 0)
                ecx_11 = eax_13
            
            int32_t var_bc_3 = 1
            int32_t var_c0_2 = 0xffffffff
            sub_4ae0b0(eax_13, data_e49d3c, ecx_11, 0xffffffff, 1)
            var_8_6.b = 5
            
            if (data_cdf414 != 0)
                char* const eax_14 = var_14
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_44f000(&var_14)
                    int32_t temp1_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_14 = &data_5559b1
            
            var_8_6.b = 3
            int32_t* eax_16 = sub_490e40(data_ce2758)
            void* ecx_15 = *eax_16
            
            if (ecx_15 != 0)
                int32_t edx_8 = *(ecx_15 + 0x40)
                
                if (edx_8 s> 0)
                    var_14 = &data_5559b1
                    var_8_6.b = 6
                    int32_t eax_17 = data_ce2784
                    char* result_4
                    
                    if (eax_17 == 0xffffffff)
                        char const* const var_ac_6 = "not playing animation"
                        char** var_ac_7 = sub_44f980(&result_3, "not playing animation")
                        var_8_6.b = 9
                        result_4 = sub_44f510(&var_14)
                        var_8_6.b = 0xa
                        
                        if (data_cdf414 != 0)
                            result_4 = result_3
                            
                            if (result_4 != 0 && *result_4 != 0)
                                result_4 = sub_44f000(&result_3)
                                int32_t temp5_1 = *(result_4 + 4)
                                *(result_4 + 4) -= 1
                                
                                if (temp5_1 == 1)
                                    result_4 = sub_45d050(result_4, *(result_4 + 0xc) + 0x10)
                                    result_3 = &data_5559b1
                    else
                        if (eax_17 s>= edx_8)
                            char const* const var_ac_13 = "ControlsHolodeckDrawOverlay"
                            var_b0 = 0x2d8
                            char const* const var_b4_10 = "c:\ax2017\engine\editor\editorcontrols.cpp"
                            sub_44e4d0(eax_17, &data_5559b1, 
                                "gControlsData.structureAnimClipIndex < "
                            "defStructure->pStructureImportData->numAnimClips", 
                                "c:\ax2017\engine\editor\editorcontrols.cpp", 0x2d8, 
                                "ControlsHolodeckDrawOverlay")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        int32_t ecx_16 = data_ce2780
                        var_24 = *(ecx_15 + 0x44)
                        void* eax_20 = sub_4b6d20(ecx_16)
                        void* eax_21
                        
                        if (eax_20 != 0)
                            eax_21 = *(eax_20 + 0x2c)
                        
                        int32_t edx_9
                        float xmm0_13[0x2]
                        
                        if (eax_20 == 0 || eax_21 == 0 || *(eax_21 + 0xc) == 0)
                            edx_9 = data_ce2784
                            xmm0_13 = (zx.o(0)).q
                        else
                            int32_t* eax_22 = *(eax_21 + 4)
                            
                            if (eax_22 == 0)
                                char const* const var_ac_14 = "XList<struct AnimSet *>::GetHead"
                                var_b0 = 0x53
                                char const* const var_b4_11 = "c:\ax2017\engine\xlist.h"
                                sub_44e4d0(eax_22, &data_5559b1, "mpHead != NULL", 
                                    "c:\ax2017\engine\xlist.h", 0x53, 
                                    "XList<struct AnimSet *>::GetHead")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            void* eax_23 = *eax_22
                            int32_t* eax_24 = sub_490e40(data_ce2758)
                            edx_9 = data_ce2784
                            void* eax_25 = *eax_24
                            
                            if (edx_9 s>= *(eax_25 + 0x40))
                                char const* const var_ac_15 = "GetAnimationTime"
                                var_b0 = 0x2a2
                                char const* const var_b4_12 =
                                    "c:\ax2017\engine\editor\editorcontrols.cpp"
                                sub_44e4d0(eax_25, &data_5559b1, 
                                    "gControlsData.structureAnimClipIndex < "
                                "defStructure->pStructureImportData->numAnimClips", 
                                    "c:\ax2017\engine\editor\editorcontrols.cpp", 0x2a2, 
                                    "GetAnimationTime")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            xmm0_13 =
                                _mm_cvtepi32_ps(zx.o(**(*(eax_25 + 0x44) + edx_9 * 0xc + 8) - 1)) f*
                                *(eax_23 + 4)
                        
                        void* eax_31 = *eax_16
                        char* const ecx_19 = var_24
                        var_b0 = _mm_cvtps_pd(xmm0_13)
                        int32_t var_b4_4 = *(eax_31 + 0x40)
                        int32_t var_b8_4 = edx_9 + 1
                        int32_t var_bc_4 = *(ecx_19 + eax_17 * 0xc + 4)
                        char const* const var_c0_3 = "clip %s (%d of %d) frame %f"
                        char** var_ac_5 = sub_44f980(&result_2, "clip %s (%d of %d) frame %f")
                        var_8_6.b = 7
                        result_4 = sub_44f510(&var_14)
                        var_8_6.b = 8
                        
                        if (data_cdf414 != 0)
                            result_4 = result_2
                            
                            if (result_4 != 0 && *result_4 != 0)
                                result_4 = sub_44f000(&result_2)
                                int32_t temp10_1 = *(result_4 + 4)
                                *(result_4 + 4) -= 1
                                
                                if (temp10_1 == 1)
                                    result_4 = sub_45d050(result_4, *(result_4 + 0xc) + 0x10)
                                    result_2 = &data_5559b1
                    
                    var_8_6.b = 6
                    char* const ecx_26 = &data_5559b1
                    char* const esi_1 = var_14
                    
                    if (esi_1 != 0)
                        ecx_26 = esi_1
                    
                    int32_t var_ac_8 = 1
                    var_b0 = 0xffffffff
                    sub_4ae0b0(result_4, data_e49d3c, ecx_26, 0xffffffff, 1)
                    var_8_6.b = 0xb
                    
                    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                        char* eax_36 = sub_44f000(&var_14)
                        int32_t temp8_1 = *(eax_36 + 4)
                        *(eax_36 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_45d050(eax_36, *(eax_36 + 0xc) + 0x10)
                            var_14 = &data_5559b1
            
            int32_t var_8_7 = 0xc
            
            if (data_cdf414 != 0)
                char* eax_37 = var_18
                
                if (eax_37 != 0 && *eax_37 != 0)
                    char* eax_38 = sub_44f000(&var_18)
                    int32_t temp3_1 = *(eax_38 + 4)
                    *(eax_38 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
                        var_18 = &data_5559b1
            
            int32_t var_8_8 = 0xffffffff
            edx_19 = data_ce2758
        
        if (edx_19 != 0 && *(edx_19 + 4) == 0x19)
            void* var_ac_9 = edx_19
            sub_490250(&var_14, edx_19)
            int32_t var_8_9 = 0xd
            char* const ecx_32 = &data_5559b1
            char* const eax_39 = var_14
            
            if (eax_39 != 0)
                ecx_32 = eax_39
            
            var_b0 = ecx_32
            void* const var_b4_5 = &data_5742d0
            sub_44f980(&var_18, &data_5742d0)
            var_8_9.b = 0xe
            char* const ecx_33 = &data_5559b1
            char* const eax_40 = var_18
            
            if (eax_40 != 0)
                ecx_33 = eax_40
            
            int32_t var_bc_5 = 1
            int32_t var_c0_4 = 0xffffffff
            sub_4ae0b0(eax_40, data_e49d3c, ecx_33, 0xffffffff, 1)
            var_8_9.b = 0xf
            
            if (data_cdf414 != 0)
                char* const eax_41 = var_18
                
                if (eax_41 != 0 && *eax_41 != 0)
                    char* eax_42 = sub_44f000(&var_18)
                    int32_t temp2_1 = *(eax_42 + 4)
                    *(eax_42 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                        var_18 = &data_5559b1
            
            int32_t var_8_10 = 0x10
            
            if (data_cdf414 != 0)
                char* const eax_43 = var_14
                
                if (eax_43 != 0 && *eax_43 != 0)
                    char* eax_44 = sub_44f000(&var_14)
                    int32_t temp4_1 = *(eax_44 + 4)
                    *(eax_44 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_45d050(eax_44, *(eax_44 + 0xc) + 0x10)
                        var_14 = &data_5559b1
            
            int32_t var_8_11 = 0xffffffff
    
    char* result = sub_4c0f50(data_ce275c)
    
    if (result != 0)
        int32_t* ecx_39 = *result
        
        if (ecx_39[1] != 0x18)
            char const* const var_ac_16 = "FlanimGetDef"
            var_b0 = 0x2e6
            char const* const var_b4_13 = "c:\ax2017\engine\assetutils.cpp"
            sub_44e4d0(result, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
                "c:\ax2017\engine\assetutils.cpp", 0x2e6, "FlanimGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* eax_45 = sub_4459f0(ecx_39)
        char* const edi_1 = &data_5559b1
        var_14 = eax_45
        var_24 = &data_5559b1
        int32_t ecx_40 = 0
        int32_t var_8_12 = 0x11
        char* const var_30_2 = 0xffffffff
        var_18 = nullptr
        
        if (eax_45[1] s> 0)
            int32_t var_2c_2 = 0
            
            while (true)
                char** eax_47 = *eax_45 + ecx_40
                void var_9c
                int32_t var_68
                int32_t var_64
                
                if (sub_4c4480(eax_47, *eax_47, *result, &var_64, &var_68, &var_9c) != 0
                        && *(result + 0xc) == var_64 && *(result + 0x10) == var_68)
                    char* var_ac_11 = *eax_47
                    sub_44f590(&var_24)
                    edi_1 = var_24
                    var_30_2 = var_18
                    break
                
                int32_t* edx_26 = var_14
                void* eax_52 = &var_18[1]
                ecx_40 = var_2c_2 + 0x10
                var_18 = eax_52
                var_2c_2 = ecx_40
                
                if (eax_52 s>= edx_26[1])
                    break
                
                eax_45 = edx_26
        
        void* edx_27 = *result
        void* var_ac_12 = edx_27
        sub_490250(&result_2, edx_27)
        var_8_12.b = 0x12
        char* const result_5 = result_2
        char* const edx_28 = &data_5559b1
        char* const result_8 = &data_5559b1
        
        if (edi_1 != 0)
            edx_28 = edi_1
        
        if (result_5 != 0)
            result_8 = result_5
        
        var_b0 = *(var_14 + 4)
        void* var_b4_7 = &var_30_2[1]
        char* const var_b8_6 = edx_28
        char* const result_11 = result_8
        char const* const var_c0_5 = "%s -- action %s (%d of %d)"
        sub_44f980(&result_3, "%s -- action %s (%d of %d)")
        var_8_12.b = 0x13
        char* result_9 = &data_5559b1
        char* result_6 = result_3
        var_5c = 0x3f800000
        
        if (result_6 != 0)
            result_9 = result_6
        
        var_50.d = 0
        var_44.d = 0
        int32_t var_58_2 = 0
        var_50:4.d = 0x3f800000
        var_44:4.d = 0
        int32_t var_54_2 = 0x41200000
        int32_t var_48_3 = 0x40400000
        int32_t var_3c_3 = 0x3f800000
        int32_t var_b4_8 = 1
        int32_t var_b8_7 = 0xffffffff
        int32_t var_bc_6 = 0xffffffff
        sub_4aded0(sub_412bf0(&var_5c, &data_57251c, &var_8c, &var_5c), &var_8c, result_9, data_e49d3c, 
            0xffffffff, 0xffffffff, 1)
        int32_t var_98
        sub_4c1f90(&var_98, *(result + 0x10), *(result + 0xc), *(result + 4), &var_98)
        
        if (result[0x8d] == 0)
            var_60 = var_90
        
        int64_t var_b0_1 =
            _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(result + 0x10) - 1)) f* *(result + 0x14) f/ data_5b0f3c)
        var_b8_7.q = _mm_cvtps_pd(var_60)
        int32_t var_bc_7 = var_98
        char const* const var_c0_7 = "Frame %d %0.3f FPS %0.1f"
        char* result_1
        sub_44f980(&result_1, "Frame %d %0.3f FPS %0.1f")
        var_8_12.b = 0x14
        char* result_10 = &data_5559b1
        char* result_7 = result_1
        var_5c = 0x3f800000
        
        if (result_7 != 0)
            result_10 = result_7
        
        var_50.d = 0
        var_44.d = 0
        int32_t var_58_3 = 0
        var_50:4.d = 0x3f800000
        var_44:4.d = 0
        int32_t var_54_3 = 0x41200000
        int32_t var_48_4 = 0x41a00000
        int32_t var_3c_4 = 0x3f800000
        int32_t var_b4_9 = 1
        int32_t var_b8_8 = 0xffffffff
        int32_t var_bc_8 = 0xffffffff
        result = sub_4aded0(sub_412bf0(&var_5c, &data_57251c, &var_8c, &var_5c), &var_8c, result_10, 
            data_e49d3c, 0xffffffff, 0xffffffff, 1)
        var_8_12.b = 0x15
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp6_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp6_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5559b1
        
        var_8_12.b = 0x16
        
        if (data_cdf414 != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_3)
                int32_t temp7_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp7_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_3 = &data_5559b1
        
        var_8_12.b = 0x17
        
        if (data_cdf414 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_2)
                int32_t temp9_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp9_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_2 = &data_5559b1
        
        int32_t var_8_13 = 0x18
        
        if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
            result = sub_44f000(&var_24)
            int32_t temp11_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp11_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
        
        int32_t var_8_14 = 0xffffffff
    
    if (data_ce26f8 == 1)
        result = data_ce19c4
        __builtin_memcpy(&result[0xa0], 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        *(result + 0x258) = 0
        sub_45ae60()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
