// 函数名称: sub_4b2bd0
// 虚拟地址: 0x4b2bd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4b2bd0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5448c4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg3
    int32_t* var_c4 = esi
    int32_t* ecx = *esi
    int32_t* i = arg4
    int32_t* i_2 = i
    
    if (ecx != 0)
        if (ecx[1] != 0x20)
            char const* const var_19c_17 = "FabDefGet"
            int32_t var_1a0_9 = 0xe7
            char const* const var_1a4_4 = "c:\ax2017\engine\fabdef.cpp"
            sub_44e4d0(i, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* edx = sub_4459f0(ecx)
        i = nullptr
        int32_t* var_e4_1 = edx
        int32_t* i_1 = nullptr
        
        if (edx[1] s> 0)
            int32_t ecx_1 = 0
            int32_t var_dc_1 = 0
            
            do
                int32_t* edi_1 = *edx + ecx_1
                uint32_t (* ecx_3)[0x4] = sub_4b07c0(esi, i)
                uint32_t edx_2 = (*ecx_3)[0x17]
                uint32_t (* eax_4)[0x4]
                
                if ((*ecx_3)[0x19] s<= edx_2)
                    eax_4.b = edi_1[0xc].b
                else
                    eax_4.b = (*ecx_3)[0x1a].b
                
                if (eax_4.b == 0)
                    if (arg2 == 0)
                    label_4b2cd0:
                        *(ecx_3 + 8) = *(var_c4 + 8)
                        *(ecx_3 + 0x18) = *(var_c4 + 0x18)
                        *(ecx_3 + 0x28) = *(var_c4 + 0x28)
                        *(ecx_3 + 0x38) = *(var_c4 + 0x38)
                        *(ecx_3 + 0x48) = *(var_c4 + 0x48)
                        (*ecx_3)[0x16] = var_c4[0x16]
                        uint32_t eax_11
                        
                        if (ecx_3[0x4c][0] s> edx_2)
                            eax_11 = (*ecx_3)[0x131]
                        
                        if (ecx_3[0x4c][0] s<= edx_2 || eax_11 == 0)
                            int32_t eax_12 = *edi_1
                            
                            if (eax_12 u> 8)
                                char const* const var_19c_16 = "FabDraw"
                                int32_t var_1a0_8 = 0x5e6
                                char const* const var_1a4_3 = "c:\ax2017\engine\fabdef.cpp"
                                sub_44e4d0(eax_12, &data_5559b1, "Halt")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            float var_1a4
                            int128_t var_118
                            int128_t var_78
                            int128_t var_58
                            
                            switch (eax_12)
                                case 1
                                    int32_t* eax_13 = edi_1[0xe]
                                    
                                    if (eax_13 != 0)
                                        void var_18c
                                        int128_t* eax_15 = sub_4b0280(&var_18c, ecx_3, edi_1, &var_18c)
                                        int128_t var_a0 = *eax_15
                                        int128_t var_90_1 = eax_15[1]
                                        int64_t var_80_1 = eax_15[2].q
                                        int128_t* eax_17 =
                                            sub_4b0d20(&var_78, &var_a0, &(*ecx_3)[2], &var_78)
                                        var_58 = *eax_17
                                        int128_t var_48_1 = eax_17[1]
                                        int32_t eax_18 = sub_45c850((*(edi_1 + 0x48)).d, var_1a4)
                                        sub_47dd70(&var_58)
                                        
                                        if (data_e49c90 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                            int32_t* var_19c_3 = &data_e49c90
                                            __Init_thread_header(&data_e49c90)
                                            
                                            if (data_e49c90 == 0xffffffff)
                                                int32_t var_8_1 = 0
                                                int32_t* var_19c_4 = &data_e49c90
                                                data_e49c94 =
                                                    sub_48d5b0("sys/sprite_3d_no_zread.material", 5)
                                                int32_t var_8_2 = 0xffffffff
                                                __Init_thread_footer(&data_e49c90)
                                        
                                        *(data_ce19c4 + 0x258) = data_e49c94
                                        void var_134
                                        int64_t* eax_24 = sub_4b01e0(&var_134, ecx_3, edi_1, &var_134)
                                        int32_t eax_25 = eax_24[1].d
                                        int32_t var_ec = (*eax_24).d
                                        int32_t var_e8_1 = eax_25
                                        int32_t var_c8_1 = 0
                                        var_1a4 = 0f
                                        int32_t var_f0_1 = 0
                                        int128_t* const var_1ac_1 = &data_571d08
                                        void var_144
                                        var_118 = *sub_45c380(&var_144, &var_ec, &data_571d90, &var_144)
                                        int32_t var_f4 = eax_18
                                        sub_47d1f0(&var_f4, &var_118:0xc, eax_13, &data_571d08, 
                                            &var_f4, 0)
                                        void* eax_29 = data_ce19c4
                                        __builtin_memcpy(eax_29 + 0xa0, 
                                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                        "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                                        "3f\x00", 
                                            0x41)
                                        *(eax_29 + 0x258) = 0
                                        sub_45ae60()
                                case 2
                                    sub_4b1410(edi_1, ecx_3, edi_1)
                                case 3
                                    sub_4b0d90(edi_1, ecx_3)
                                case 4
                                    if (data_cdf3e9 == 0)
                                        char const* const var_19c_20 = "Draw3DLayer"
                                        int32_t var_1a0_12 = 0x327
                                        char const* const var_1a4_7 = "c:\ax2017\engine\draw3d.cpp"
                                        sub_44e4d0(eax_12, &data_5559b1, 
                                            "gDraw3DData.submittingRenderItems")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    int32_t esi_5 = data_65b35c
                                    data_65b35c = 0x3e7
                                    uint32_t (* var_19c_15)[0x4] = ecx_3
                                    int32_t* eax_47 = sub_45ba10(edi_1[0xe])
                                    
                                    if (data_cdf3e9 == 0)
                                        char const* const var_19c_19 = "Draw3DLayer"
                                        int32_t var_1a0_11 = 0x327
                                        char const* const var_1a4_6 = "c:\ax2017\engine\draw3d.cpp"
                                        sub_44e4d0(eax_47, &data_5559b1, 
                                            "gDraw3DData.submittingRenderItems")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    data_65b35c = esi_5
                                case 5
                                    sub_4b2070(eax_12, ecx_3, edi_1, arg2, i_2)
                                case 6
                                    sub_4b2240(eax_12, ecx_3, edi_1, i_2)
                                case 7
                                    if (*(data_65ae00 + 0x39) != 0)
                                        void var_188
                                        int128_t* eax_32 = sub_4b0190(&var_188, ecx_3, edi_1, &var_188)
                                        int32_t var_18_1 = eax_32[2].d
                                        int128_t var_38 = *eax_32
                                        int128_t xmm0_16 = eax_32[1]
                                        void var_154
                                        int128_t* eax_35 =
                                            sub_4b3c80(&var_154, ecx_3, &var_38:0xc, &var_154)
                                        int32_t xmm0_17 = *(eax_32 + 0x18)
                                        var_118 = *eax_35
                                        uint32_t* var_1a4_1 = &(*ecx_3)[0xf]
                                        uint128_t xmm0_19 = *eax_32
                                        int64_t var_108_1 = xmm0_19
                                        int32_t var_100_1 = _mm_bsrli_si128(xmm0_19, 8)
                                        int128_t var_c0 = xmm0_17.o
                                        int128_t var_b0_1 = var_118
                                        sub_4a0490(&(*ecx_3)[0xf], &var_c0, &var_38:4)
                                        var_78 = var_38
                                        int128_t var_68_1 = xmm0_16
                                        sub_47dd70(&var_78)
                                        void* eax_38 = data_ce19c4
                                        int32_t var_fc = 0x3f000000
                                        int32_t var_f8_1 = 0x3f000000
                                        *(eax_38 + 0x258) = 0
                                        void var_164
                                        int128_t xmm0_25 =
                                            *sub_45c380(&var_164, &var_fc, &data_571d90, &var_164)
                                        void* ThreadLocalStoragePointer =
                                            fsbase->ThreadLocalStoragePointer
                                        var_118 = xmm0_25
                                        void* esi_4 = *ThreadLocalStoragePointer
                                        int32_t eax_41 = data_e49cb0
                                        
                                        if (eax_41 s> *(esi_4 + 4))
                                            int32_t* var_19c_7 = &data_e49cb0
                                            eax_41 = __Init_thread_header(&data_e49cb0)
                                            
                                            if (data_e49cb0 == 0xffffffff)
                                                int32_t var_8_3 = 1
                                                int32_t* var_19c_8 = &data_e49cb0
                                                data_e49cb4 = sub_48d5b0("sys/editor/camera.texture", 3)
                                                int32_t var_8_4 = 0xffffffff
                                                eax_41 = __Init_thread_footer(&data_e49cb0)
                                        
                                        int32_t var_19c_9 = 0
                                        int32_t* var_1a0_5 = &data_5c77bc
                                        int128_t* const var_1a4_2 = &data_571d08
                                        sub_47d1f0(eax_41, &var_118:0xc, data_e49cb4)
                                        void* eax_43 = data_ce19c4
                                        __builtin_memcpy(eax_43 + 0xa0, 
                                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                        "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                                        "3f\x00", 
                                            0x41)
                                        *(eax_43 + 0x258) = 0
                                        sub_45ae60()
                                        int32_t eax_44 = data_e49cb8
                                        
                                        if (eax_44 s> *(esi_4 + 4))
                                            int32_t* var_19c_10 = &data_e49cb8
                                            eax_44 = __Init_thread_header(&data_e49cb8)
                                            
                                            if (data_e49cb8 == 0xffffffff)
                                                int32_t var_8_5 = 2
                                                int32_t* var_19c_11 = &data_e49cb8
                                                data_e49cbc =
                                                    sub_48d5b0("sys/editor/arrow_widget.structure", 2)
                                                int32_t var_8_6 = 0xffffffff
                                                eax_44 = __Init_thread_footer(&data_e49cb8)
                                        
                                        var_118 = data_59e450
                                        sub_456bf0(&var_118:0xc)
                                        int128_t xmm0_27 = var_38
                                        int32_t ecx_16 = data_e49cbc
                                        int32_t var_19c_12 = 0
                                        var_58 = xmm0_27
                                        int32_t var_1a0_6 = 0
                                        var_1a4 = 0f
                                        int128_t var_48_2 = xmm0_16
                                        var_58.d = fconvert.s(fconvert.d(xmm0_27) * 0.5)
                                        sub_459d40(eax_44, &var_58, ecx_16)
                                        sub_456bf0(&data_571934)
                                case 8
                                    void* eax_46 = sub_495430((*ecx_3)[0x12e])
                                    
                                    if (eax_46 != 0)
                                        sub_49ee40(eax_46, &data_5c779c)
                        else
                            eax_11(edi_1, ecx_3, eax_2)
                        
                        esi = var_c4
                    else if (arg2 != 1)
                        if (arg2 != 2)
                            char const* const var_19c_18 = "SatisfiesDrawStyle"
                            int32_t var_1a0_10 = 0x4e1
                            char const* const var_1a4_5 = "c:\ax2017\engine\fabdef.cpp"
                            sub_44e4d0(arg2 - 2, &data_5559b1, "Halt")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        if (*(edi_1 + 0x32) == (arg2 - 2).b)
                            goto label_4b2cd0
                    else if (*(edi_1 + 0x32) == 0 && *(edi_1 + 0x33) == 0
                            && (*edi_1 != 2 || edi_1[0xd].b != 0))
                        goto label_4b2cd0
                
                edx = var_e4_1
                i = i_1 + 1
                ecx_1 = var_dc_1 + 0xb8
                i_1 = i
                var_dc_1 = ecx_1
            while (i s< edx[1])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return i
}
