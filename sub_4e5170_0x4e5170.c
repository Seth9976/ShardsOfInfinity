// 函数名称: sub_4e5170
// 虚拟地址: 0x4e5170
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4e5170(int32_t arg1, char* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545fa3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_49c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = arg3
    void* var_3f8 = esi
    float xmm0 = sub_4132a0(0.785398185f)
    int32_t xmm0_1 = data_65ae54.d
    int32_t xmm0_2 = data_65ae54:4
    float var_1f8 = 0f
    int32_t var_3f4 = *(esi + 0x10)
    int32_t eax_4 = *(esi + 0x18)
    float var_240 = 1f
    char var_214 = 0
    int32_t var_210 = 0x3f800000
    int64_t var_200 = 0
    
    if (eax_4 s> 0x14)
        sub_44e4d0(eax_4, &data_5559b1, "20 >= config.PREFILTER_MIPS", 
            "c:\ax2017\engine\iblimport.cpp", 0x2fd, "HDRCubeToPrefilter")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* var_3f0 = nullptr
    int32_t var_1f4[0x78]
    
    if (eax_4 s> 0)
    label_4e5240:
        int32_t edi_1 = 0
        int32_t var_400_1 = 0
        
        while (true)
            void var_250
            float var_20c
            sub_4e3a40(&var_250, &var_20c, edi_1, &var_250)
            float var_204
            float var_414_1 = var_1f8 + var_204
            float var_208
            int64_t var_41c = _mm_unpacklo_ps(var_200.d + var_20c, var_208 f+ var_200:4.d)
            void var_234
            int128_t* eax_8 = sub_4d5420(&var_200, &var_41c, &var_234, &var_200, &var_250)
            int32_t var_4ac_1 = 0
            void* esi_3 = &var_3f0[*(esi + 0x18) * edi_1]
            int32_t* eax_9 = sub_48f6f0(eax_8, var_3f4, var_3f4, *(var_3f8 + 0x14), 3)
            void* edx_3 = data_ce19c4
            var_1f4[esi_3] = eax_9
            *(edx_3 + 0x248) += 1
            int32_t eax_11 = *(edx_3 + 0x248) * 5
            *(edx_3 + (eax_11 << 2) + 0x108) = 2
            *(edx_3 + (eax_11 << 2) + 0x110) = eax_9
            *(edx_3 + (eax_11 << 2) + 0x114) = 0
            *(edx_3 + (eax_11 << 2) + 0x118) = 0
            sub_4ac8c0(eax_11, 0, eax_9, 0)
            
            if (data_65b224 != 0)
                data_65b224 = 0
                sub_456ed0(&data_65ae44)
            
            (*(*data_ce19b4 + 0x8c))(data_65ae40)
            int32_t var_218
            int32_t var_254_1 = var_218
            int128_t var_230
            int128_t var_26c_1 = var_230
            int64_t var_220
            int64_t var_25c_1 = var_220
            void var_490
            int128_t* eax_14 = sub_4b7bf0(&var_490)
            int128_t xmm0_7 = *eax_14
            int128_t xmm2_4 = eax_14[2]
            int128_t xmm3_1 = eax_14[3]
            
            if (data_cdf3e9 != 0)
                sub_44e4d0(eax_14, &data_5559b1, "!gDraw3DData.submittingRenderItems", 
                    "c:\ax2017\engine\draw3d.cpp", 0x364, "Draw3DSetView")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            data_65b0e4 = eax_14[1]
            data_65b0d4 = xmm0_7
            float xmm0_9 = xmm0 / var_240
            data_65b0f4 = xmm2_4
            float var_40c_1 = xmm0 * 2f
            data_65b104 = xmm3_1
            float var_410 = xmm0_9 + xmm0_9
            void var_450
            int128_t var_440 = *sub_45c380(&var_450, &var_410, &data_571d90, &var_450)
            int32_t var_430_1 = xmm0_1
            int32_t var_42c_1 = xmm0_2
            sub_456ed0(&var_440)
            data_65b2b8 = data_571934
            __builtin_memcpy(&data_65aecc, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x40)
            data_65af8c = data_65b0d4
            data_65af9c = data_65b0e4
            data_65afac = data_65b0f4
            data_65afbc = data_65b104
            float* eax_18 = sub_45c930(&var_490, &data_65aecc, &data_65af8c, &var_490)
            data_65af0c = *eax_18
            data_65af1c = *(eax_18 + 0x10)
            data_65af2c = *(eax_18 + 0x20)
            data_65af3c = *(eax_18 + 0x30)
            float* eax_20 = sub_45c930(&var_490, &data_65af8c, &data_65b00c, &var_490)
            data_65afcc = *eax_20
            data_65afdc = *(eax_20 + 0x10)
            data_65afec = *(eax_20 + 0x20)
            data_65affc = *(eax_20 + 0x30)
            float* eax_22 = sub_45c930(&var_490, &data_65af0c, &data_65b00c, &var_490)
            data_65af4c = *eax_22
            data_65af5c = *(eax_22 + 0x10)
            data_65af6c = *(eax_22 + 0x20)
            data_65af7c = *(eax_22 + 0x30)
            int32_t eax_24 = *(var_3f8 + 0x18) - 1
            float xmm1_8 = _mm_cvtepi32_ps(zx.o(var_3f0))
            void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            float xmm0_32 = _mm_cvtepi32_ps(zx.o(eax_24))
            void* esi_4 = *ThreadLocalStoragePointer
            int32_t eax_25 = data_e49d28
            data_65b29c = xmm1_8 / xmm0_32
            
            if (eax_25 s> *(esi_4 + 4))
                __Init_thread_header(&data_e49d28)
                
                if (data_e49d28 == 0xffffffff)
                    int32_t var_8_1 = 0
                    data_e49d2c = sub_48d5b0("sys/skybox.structure", 2)
                    int32_t var_8_2 = 0xffffffff
                    __Init_thread_footer(&data_e49d28)
            
            int32_t eax_27 = data_e49d30
            
            if (eax_27 s> *(esi_4 + 4))
                eax_27 = __Init_thread_header(&data_e49d30)
                
                if (data_e49d30 == 0xffffffff)
                    int32_t var_8_3 = 1
                    data_e49d34 = sub_48d5b0("sys/pbr/ibl_prefilter.material", 5)
                    int32_t var_8_4 = 0xffffffff
                    eax_27 = __Init_thread_footer(&data_e49d30)
            
            int32_t* ecx_6 = data_e49d2c
            
            if (ecx_6[1] != 2)
                sub_44e4d0(eax_27, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                    "c:\ax2017\engine\assetutils.cpp", 0x30c, "StructureDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t* eax_29 = sub_4459f0(ecx_6)
            int32_t** var_3fc_1 = eax_29
            
            if (*eax_29 == 0)
                sub_44e4d0(eax_29, &data_5559b1, "pDefStructure->pStructureImportData", 
                    "c:\ax2017\engine\iblimport.cpp", 0x32f, "HDRCubeToPrefilter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (data_cdf3e9 != 0)
                sub_44e4d0(eax_29, &data_5559b1, "!gDraw3DData.submittingRenderItems", 
                    "c:\ax2017\engine\drawmode.cpp", 0xd, "DrawModeSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t ecx_7 = data_ce1af4
            
            if (ecx_7 != 2)
                if (ecx_7 != 0)
                    if (ecx_7 == 1)
                        void* eax_30 = data_cdf424
                        
                        if (*(eax_30 + 0x1d) == 0)
                            sub_44e4d0(eax_30, &data_5559b1, "gpSpriteAppData->spritesDrawing", 
                                "c:\ax2017\engine\sprite.cpp", 0x25d, "SpriteDrawEnd")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        *(eax_30 + 0x1d) = 0
                        uint32_t (* eax_31)[0x4] = sub_47c290()
                        
                        if (data_cdf3e9 != 0)
                            sub_44e4d0(eax_31, &data_5559b1, "!gDraw3DData.submittingRenderItems", 
                                "c:\ax2017\engine\draw3d.cpp", 0xb03, "Draw3DBegin")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        eax_29 = var_3fc_1
                    else if (ecx_7 != 2)
                        sub_44e4d0(eax_29, &data_5559b1, "Halt", "c:\ax2017\engine\drawmode.cpp", 0x1f, 
                            "DrawModeSet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                
                data_ce1af4 = 2
            
            int32_t ecx_13 = data_cdf3fc
            int32_t i = 0
            data_cdf3fc = 2
            int32_t* edi_3 = *eax_29
            
            if (*edi_3 s> 0)
                do
                    void var_3ec
                    _memset(&var_3ec, 0, 0x180)
                    int32_t var_3a4_1 = data_e49d34
                    int32_t var_3e8_1 = i * 0x124 + edi_3[1]
                    int32_t var_3a0_1 = arg4
                    int32_t var_284_1 = 0x3f800000
                    int128_t var_3e4
                    __builtin_memcpy(&var_3e4, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "80\x3f", 
                        0x40)
                    int128_t var_35c_1 = data_571934
                    
                    if (i == 0)
                        i = sub_454070(&var_3ec)
                    
                    sub_454980(&var_3ec)
                    i += 1
                    edi_3 = *var_3fc_1
                while (i s< *edi_3)
            
            data_cdf3fc = ecx_13
            sub_4bd1a0(0)
            sub_4aced0()
            esi = var_3f8
            edi_1 = var_400_1 + 1
            var_400_1 = edi_1
            
            if (edi_1 s>= 6)
                int32_t eax_38
                int32_t edx_5
                edx_5:eax_38 = sx.q(var_3f4)
                void* ecx_15 = &var_3f0[1]
                var_3f0 = ecx_15
                eax_4 = (eax_38 - edx_5) s>> 1
                var_3f4 = eax_4
                
                if (ecx_15 s< *(esi + 0x18))
                    goto label_4e5240
                
                break
    
    if (arg2 == 0)
        sub_44e4d0(eax_4, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_3f0, arg2)
    int32_t var_8_5 = 2
    int32_t eax_40
    int32_t ecx_18
    eax_40, ecx_18 = sub_44f620(&var_3f0, "_pre")
    int32_t var_4a0_5 = *(esi + 0x18)
    int32_t* result = sub_4e36d0(eax_40, &var_1f4, ecx_18)
    sub_48e1b0(result)
    sub_48d180(result)
    int32_t var_8_6 = 3
    
    if (data_cdf414 != 0)
        char* eax_41 = var_3f0
        
        if (eax_41 != 0 && *eax_41 != 0)
            char* eax_42 = sub_44f000(&var_3f0)
            int32_t temp0_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
