// 函数名称: sub_468680
// 虚拟地址: 0x468680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_468680(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542964
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    fsbase->NtTib.ExceptionList = &ExceptionList
    int64_t var_fc
    
    if (data_cdf420 != 0)
        char* eax_3 = *(arg1 + 0x698)
        char* const ecx = &data_5559b1
        int64_t xmm0_2 = _mm_cvtps_pd(*(arg1 + 0x750))
        
        if (eax_3 != 0)
            ecx = eax_3
        
        var_fc = xmm0_2
        char* const var_100_1 = ecx
        int32_t var_104_1 = *(arg1 + 0x790)
        int32_t var_108_1 = *(arg1 + 0x78c)
        char const* const var_10c_1 = "set layer %d,%d %s %f"
        sub_44e260("set layer %d,%d %s %f")
    
    float xmm0_3 = *(arg1 + 0x750)
    xmm0_3 f- 0
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result:1.b =
        (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2 | (xmm0_3 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        int32_t ecx_1 = *(arg1 + 0x78c)
        int32_t var_54_1 = 0
        
        if (ecx_1 != 0)
            int32_t eax_4 = *(arg1 + 0x790)
            
            if (eax_4 == 0xffffffff)
                var_fc:4.d = "UI2Draw"
                var_fc.d = 0x16af
                char const* const var_100_5 = "c:\ax2017\engine\ui2.cpp"
                sub_44e4d0(eax_4, &data_5559b1, "ui.worldUISublayer != -1", "c:\ax2017\engine\ui2.cpp", 
                    0x5851f0000016af, eax_2)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            var_54_1 = sub_456c40(ecx_1 << 0x10 | eax_4)
        
        int32_t edx_1 = *(arg1 + 0x63c) * 0x208
        int128_t xmm0_4 = *(arg1 + 0x6cc)
        void* ecx_5 = data_cdf424 + 0x28
        int128_t xmm1_1 = *ecx_5
        int32_t edi = *(ecx_5 + 0x10)
        result = *(edx_1 + arg1 + 0xc8)
        int32_t var_3c_1 = edi
        int128_t var_80_1 = xmm1_1
        int128_t var_4c = xmm1_1
        int32_t var_98
        float var_38
        float var_34
        float var_30
        float var_2c
        float var_28
        int32_t edx_3
        void* eax_6
        
        if (result != 1)
            if (result == 3)
                var_28 = 1.68155816e-44f
                void var_c0
                eax_6 = &var_c0
                goto label_4687cf
            
            if (result == 4)
                var_28 = 4.20389539e-45f
                eax_6 = &var_98
                goto label_4687cf
            
            int128_t xmm0_20
            
            if (result != 2)
                xmm0_20 = *ecx_5
                edx_3 = edi
            else
                xmm0_20 = data_571d08
                edx_3 = 0
                *ecx_5 = xmm0_20
                *(ecx_5 + 0x10) = 0
            
            var_38.o = xmm0_20
        else
            var_28 = -nanf
            void var_e8
            eax_6 = &var_e8
        label_4687cf:
            float xmm4_1 = *(arg1 + 0x6cc)
            float xmm2_2 = *(arg1 + 0x6d4) - xmm4_1
            float xmm3_1 = *(arg1 + 0x6d0)
            float xmm1_3 = *(arg1 + 0x6d8) - xmm3_1
            var_fc:4.d = eax_6
            var_38 = *(edx_1 + arg1 + 0xcc) * xmm2_2 + xmm4_1
            var_34 = *(edx_1 + arg1 + 0xd0) * xmm1_3 + xmm3_1
            var_30 = *(edx_1 + arg1 + 0xd4) * xmm2_2 + xmm4_1
            var_2c = *(edx_1 + arg1 + 0xd8) * xmm1_3 + xmm3_1
            var_38.o = var_38.o
            int128_t* eax_7 = sub_468540(eax_6, &var_38, &var_4c)
            xmm1_1 = var_80_1
            ecx_5 = data_cdf424 + 0x28
            edx_3 = eax_7[1].d
            var_38.o = *eax_7
            *ecx_5 = *eax_7
            result = eax_7[1].d
            *(ecx_5 + 0x10) = result
        
        if (((edx_3.b & 4) == 0 || var_34 f<= xmm0_4:0xc.d)
                && ((edx_3.b & 8) == 0 || not(xmm0_4:4.d f> var_2c))
                && ((edx_3.b & 2) == 0 || not(var_38 f> xmm0_4:8.d))
                && ((edx_3.b & 1) == 0 || not(xmm0_4.d f> var_30)))
            int32_t ecx_8 = *(arg1 + 0x63c) * 0x208
            int32_t eax_8 = *(ecx_8 + arg1 + 0x210)
            
            if (eax_8 == 0)
                int32_t eax_20 = *(arg1 + 0x69c) - 1
                
                switch (eax_20)
                    case 0
                        sub_468020(arg1)
                    case 2
                        if (*(ecx_8 + arg1 + 0x1d8) == 0 || *(arg1 + 0x7e9) == 0)
                            sub_4674f0(arg1)
                        else
                            sub_4c5830(arg1 + 0x798)
                    case 4
                        sub_468020(arg1)
                        sub_4674f0(arg1)
                    case 6
                        sub_4676d0(arg1)
                    case 7
                        int32_t ecx_23 = *(arg1 + 0x67c)
                        
                        if (ecx_23 != 0)
                            var_fc:4.d = &data_5c779c
                            sub_4c1b90(eax_20, edx_3, ecx_23)
                    case 8
                        void* eax_21 = sub_495430(*(arg1 + 0x684))
                        
                        if (eax_21 != 0)
                            sub_49ee40(eax_21, &data_5c779c)
                
                goto label_468c1b
            
            var_fc:4.d = arg1
            
            if (eax_8() == 0)
            label_468c1b:
                int32_t i = 0
                
                if (*(arg1 + 0x7f4) s> 0)
                    do
                        void* eax_22 = sub_4627e0(arg1, i)
                        
                        if (*(eax_22 + 0x784) != arg1)
                            var_fc:4.d = "UI2Draw"
                            var_fc.d = 0x173a
                            char const* const var_100_6 = "c:\ax2017\engine\ui2.cpp"
                            sub_44e4d0(eax_22, &data_5559b1, "child.parent == &ui", 
                                "c:\ax2017\engine\ui2.cpp", 0x5851f00000173a, eax_2)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        sub_468680(eax_2)
                        i += 1
                    while (i s< *(arg1 + 0x7f4))
            
            int32_t i_2
            int32_t i_1
            
            if (*(arg1 + 0x69c) == 2 && *(*(arg1 + 0x63c) * 0x208 + arg1 + 0x1a4) != 0)
                i_1 = 0
                void* edi_1 = arg1 + 0xbf8
                i_2 = 0
                
                do
                    int32_t edx_4 = *edi_1
                    
                    if (edx_4 != 0)
                        uint32_t eax_11 = zx.d(edx_4.w)
                        
                        if (eax_11 u>= data_5c99a4
                                || *(eax_11 * 0x1008 + data_5c99a0 + 0x1004) != edx_4)
                            var_fc:4.d = "DataArray<struct UI2>::DataArrayGet"
                            var_fc.d = 0x6d
                            char const* const var_100_4 = "c:\ax2017\engine\dataarray.h"
                            sub_44e4d0(eax_11, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                                "c:\ax2017\engine\dataarray.h", 0x5864c40000006d, eax_2)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        sub_468680(eax_2)
                        i_1 = i_2
                    
                    i_1 += 1
                    edi_1 += 4
                    i_2 = i_1
                while (i_1 s< 5)
            
            void* ecx_11 = *(arg1 + 0x680)
            
            if (ecx_11 != 0)
                sub_49ee40(ecx_11, &data_5c779c)
            
            float xmm0_25 = *(arg1 + 0x750)
            xmm0_25 f- 0
            i_1:1.b = (xmm0_25 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_25, 0f) ? 1 : 0) << 2
                | (xmm0_25 < 0f ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3 && data_e47794 != 0)
                var_fc:4.d = *(arg1 + 0x78c)
                var_fc.d = &data_5828f8
                var_34.o = *(arg1 + 0x6cc)
                sub_44f980(&i_2, &data_5828f8)
                int32_t var_14_1 = 0
                
                if (data_e49070 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                    var_fc:4.d = &data_e49070
                    __Init_thread_header()
                    
                    if (data_e49070 == 0xffffffff)
                        var_14_1.b = 1
                        var_fc:4.d = &data_e49070
                        data_e49074 = sub_48d5b0("sys/debugfont.font", 0x12)
                        var_14_1.b = 0
                        __Init_thread_footer()
                
                int32_t i_3 = i_2
                int32_t i_5 = &data_5559b1
                int32_t* edi_2 = data_e49074
                
                if (i_3 != 0)
                    i_5 = i_3
                
                int32_t eax_15
                int32_t edx_5
                eax_15, edx_5 = sub_4afaf0(5)
                int128_t var_64_1
                var_64_1:8.d = eax_15
                var_64_1:0xc.d = edx_5
                int32_t var_a8
                var_fc:4.d = &var_a8
                var_a8 = 0x3f800000
                int32_t var_9c_1 = 0
                int32_t var_90_1 = 0
                int32_t var_a4_1 = 0
                var_98 = 0x3f800000
                int32_t var_8c_1 = 0
                float var_a0_1 = (var_2c - var_34) f* var_64_1:8.d + var_34
                float var_94_1 = (var_28 - var_30) f* var_64_1:0xc.d + var_30
                int32_t var_88_1 = 0x3f800000
                void var_d0
                var_fc.d = &var_d0
                int32_t var_100_3 = 5
                int32_t var_104_2 = 0xffffffff
                int32_t var_108_2 = 0xffffffff
                sub_4aded0(sub_412bf0(&var_a8, &data_57251c, &var_d0), &var_d0, i_5, edi_2, 0xffffffff, 
                    0xffffffff, 5)
                int32_t var_14_2 = 2
                
                if (data_cdf414 != 0)
                    int32_t i_4 = i_2
                    
                    if (i_4 != 0 && *i_4 != 0)
                        char* eax_18 = sub_44f000(&i_2)
                        int32_t temp1_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                            i_2 = &data_5559b1
                
                int32_t var_14_3 = 0xffffffff
            
            result = data_cdf424
            *(result + 0x28) = var_80_1
            result[0xe] = edi
            
            if (*(arg1 + 0x78c) != 0)
                result = sub_456c40(var_54_1)
        else
            *ecx_5 = xmm1_1
            *(ecx_5 + 0x10) = edi
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
