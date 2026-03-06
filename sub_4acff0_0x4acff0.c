// 函数名称: sub_4acff0
// 虚拟地址: 0x4acff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4acff0()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_54466c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = data_ce19b4
    
    if (ecx != 0)
        result = (*(*ecx + 0x54))(eax_2)
        
        if (result.b != 0)
            void* ecx_1 = *fsbase->ThreadLocalStoragePointer
            
            if (data_e48e50 s> *(ecx_1 + 4))
                __Init_thread_header(&data_e48e50)
                
                if (data_e48e50 == 0xffffffff)
                    int32_t performanceCount
                    QueryPerformanceCounter(&performanceCount)
                    data_e48e58 = performanceCount
                    int32_t var_a4
                    data_e48e5c = var_a4
                    __Init_thread_footer(&data_e48e50)
            
            int32_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            int32_t performanceCount_2 = performanceCount_1
            int32_t var_9c
            uint32_t eax_11 = sub_44eab0(performanceCount_2 - data_e48e58, 
                sbb.d(var_9c, data_e48e5c, performanceCount_2 u< data_e48e58))
            int32_t esi_1 = data_e477ac
            int32_t ecx_3 = data_e477a8
            int32_t edx_2 = esi_1 - ecx_3
            *((esi_1 << 2) + &data_e49a60) = eax_11
            
            if (ecx_3 s> esi_1)
                edx_2 -= 0xffffff80
            
            if (*((ecx_3 << 2) + &data_e49a60) s< eax_11 - 0xc8)
                do
                    ecx_3 = (ecx_3 + 1) & 0x8000007f
                    
                    if (ecx_3 s< 0)
                        ecx_3 = ((ecx_3 - 1) | 0xffffff80) + 1
                    
                    edx_2 -= 1
                    
                    if (edx_2 s<= 2)
                        break
                while (*((ecx_3 << 2) + &data_e49a60) s< eax_11 - 0xc8)
                
                data_e477a8 = ecx_3
            
            void* eax_13 = data_cdf428
            
            if (eax_13 == 0)
                sub_44e4d0(eax_13, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                    "GetGameData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (edx_2 != 0)
                *(eax_13 + 0x30) = _mm_cvtepi32_ps(zx.o(edx_2))
                    / _mm_cvtepi32_ps(zx.o(eax_11 - *((ecx_3 << 2) + &data_e49a60))) * 1000f
            else
                *(eax_13 + 0x30) = edx_2
            
            int32_t eax_15 = (esi_1 + 1) & 0x8000007f
            
            if (eax_15 s< 0)
                eax_15 = ((eax_15 - 1) | 0xffffff80) + 1
            
            int32_t esi_2 = data_ce19c0
            data_e477ac = eax_15
            
            if (esi_2 == 4)
                sub_44e4d0(eax_15, &data_5559b1, "appType != VRAPP_CARDBOARD", 
                    "c:\ax2017\engine\renderer.cpp", 0x3e7, "RendererDrawFrame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char var_89_1 = 0
            
            if (esi_2 != 0)
                int32_t* ecx_7 = data_ce19c8
                
                if (ecx_7 != 0)
                    char eax_20 = (*(*ecx_7 + 0x10))(&data_ce19f4)
                    int32_t ecx_8 = data_ce1a30
                    var_89_1 = eax_20
                    
                    if (eax_20 == 0)
                        ecx_8 = 0
                    
                    data_ce1a30 = ecx_8
                    
                    if (eax_20 != 0)
                        esi_2 = sub_4ab140()
                else
                    var_89_1 = ecx_7.b
            
            _memset(data_ce19c4 + 4, 0, 0x30)
            (*(*data_65ae00 + 0x40))()
            void* ecx_10 = data_65ae00
            int128_t var_48
            
            if (*(ecx_10 + 0x27) != 0 || *(ecx_10 + 0x28) != 0)
                __builtin_memcpy(&var_48, 
                    "\x00\x02\x00\x00\xea\x03\x00\x00\x20\x00\x00\x00\xea\x03\x00\x00\x80\x00\x00\x00\xea\x"
                "03\x00\x00\x05\x00\x00\x00\x00\x02\x00\x00\x01\x00\x00\x00", 
                    0x24)
                sub_4e4c50(&var_48)
                ecx_10 = data_65ae00
            
            void* eax_24 = data_ce19c4
            *(eax_24 + 0x34) = *(eax_24 + 4)
            *(eax_24 + 0x44) = *(eax_24 + 0x14)
            *(eax_24 + 0x54) = *(eax_24 + 0x24)
            
            if (*(ecx_10 + 0x2a) == 0)
                sub_45aba0()
                (*(*data_65ae00 + 0x30))()
                
                if (data_ce19c0 != 0)
                    void* ecx_13 = data_cdf428
                    
                    if (ecx_13 != 0)
                        int32_t ecx_14 = *(ecx_13 + 0x1c)
                        
                        if (((ecx_14 u>> 6).b & 1) != 0 || ((ecx_14 u>> 7).b & 1) != 0
                                || ((ecx_14 u>> 5).b & 1) != 0)
                            float* ecx_16 = &var_48:4
                            int32_t var_6c_1 = 0x40000000
                            int128_t var_84_1 = data_5724f8
                            int32_t var_4c_1 = data_65aec8
                            int128_t xmm0_7 = data_65aeb0
                            int64_t xmm2_1 = _mm_unpacklo_ps(0xc0000000, 0x41000000)
                            int64_t xmm1_5 = data_65aec0
                            float var_88 = 0.0250000004f
                            int64_t var_74_1 = xmm2_1
                            float var_68 = 1f
                            int128_t var_64_1 = xmm0_7
                            int64_t var_54_1 = xmm1_5
                            sub_4a0490(&var_68, &var_88, ecx_16, &var_68)
                            sub_47dd70(ecx_16)
                            
                            if (data_e49a58 s> *(ecx_1 + 4))
                                __Init_thread_header(&data_e49a58)
                                
                                if (data_e49a58 == 0xffffffff)
                                    int32_t var_14_1 = 0
                                    data_e49a5c = sub_48d5b0("sys/sprite_3d_no_zread.material", 5)
                                    int32_t var_14_2 = 0xffffffff
                                    __Init_thread_footer(&data_e49a58)
                            
                            int32_t eax_34 = data_e49a5c
                            *(data_ce19c4 + 0x258) = eax_34
                            
                            if (data_cdf3e9 == 0)
                                sub_44e4d0(eax_34, &data_5559b1, "gDraw3DData.submittingRenderItems", 
                                    "c:\ax2017\engine\draw3d.cpp", 0x31f, "Draw3DSetDrawEyeMask")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            data_65b380 = 3
                            int32_t eax_35 = sub_4ac820()
                            
                            if (data_cdf3e9 == 0)
                                sub_44e4d0(eax_35, &data_5559b1, "gDraw3DData.submittingRenderItems", 
                                    "c:\ax2017\engine\draw3d.cpp", 0x31f, "Draw3DSetDrawEyeMask")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            void* eax_36 = data_ce19c4
                            data_65b380 = 7
                            __builtin_memcpy(eax_36 + 0xa0, 
                                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                            "00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                            "00\x00\x00\x00\x00\x00\x80\x3f\x00", 
                                0x41)
                            *(eax_36 + 0x258) = 0
                            sub_45ae60()
                
                sub_45ad20()
                sub_45a570()
            
            if (var_89_1 != 0)
                sub_4ab770()
            
            if (esi_2 == 3 || esi_2 == 5 || esi_2 == 0)
                sub_4aca30()
            
            sub_45ad80()
            void* eax_37 = data_cdf428
            
            if (eax_37 != 0 && ((*(eax_37 + 0x1c) u>> 6).b & 1) != 0)
                void* eax_40 = data_ce19c4
                *(eax_40 + 0x64) = *(eax_40 + 4)
                *(eax_40 + 0x74) = *(eax_40 + 0x14)
                *(eax_40 + 0x84) = *(eax_40 + 0x24)
            
            result = sub_452df0()
            result[7] &= 0xfffffeff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
