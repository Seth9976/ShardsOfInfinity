// 函数名称: sub_4e3ba0
// 虚拟地址: 0x4e3ba0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4e3ba0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_545e58
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_2c4 = esi
    int32_t edi
    int32_t var_2c8 = edi
    int32_t var_2cc = eax_2
    int32_t* esp_1 = &var_2cc
    fsbase->NtTib.ExceptionList = &ExceptionList
    float xmm0 = sub_4132a0(0.785398185f)
    int32_t esi_1 = 0
    int32_t xmm0_1 = data_65ae54.d
    int32_t xmm0_2 = data_65ae54:4
    float var_70 = 1f
    char var_44 = 0
    int32_t var_40 = 0x3f800000
    int64_t var_30 = 0
    float var_28 = 0f
    int32_t var_228 = 0
    int32_t* eax_26
    
    while (true)
        void var_80
        *(esp_1 - 4) = &var_80
        float var_3c
        sub_4e3a40(&var_80, &var_3c, esi_1)
        float xmm2_2[0x4] = var_30.d + var_3c
        float var_38
        int64_t xmm1_2 = var_38 f+ var_30:4.d
        float var_34
        float var_240_1 = var_28 + var_34
        *(esp_1 - 4) = &var_80
        int64_t xmm2_3 = _mm_unpacklo_ps(xmm2_2, xmm1_2)
        *(esp_1 - 8) = &var_30
        int64_t var_248 = xmm2_3
        void var_64
        int32_t eax_6 = sub_4d5420(&var_30, &var_248, &var_64)
        *(esp_1 - 0xc) = 0
        *(esp_1 - 0x10) = 3
        *(esp_1 - 0x14) = arg4
        int32_t eax_7 = sub_48f6f0(eax_6, arg3, arg3)
        void* edx_3 = data_ce19c4
        *(arg2 + (esi_1 << 2)) = eax_7
        *(edx_3 + 0x248) += 1
        int32_t eax_9 = *(edx_3 + 0x248)
        *(esp_1 - 4) = 0
        int32_t eax_10 = eax_9 * 5
        *(edx_3 + (eax_10 << 2) + 0x108) = 2
        *(edx_3 + (eax_10 << 2) + 0x110) = eax_7
        *(edx_3 + (eax_10 << 2) + 0x114) = 0
        *(edx_3 + (eax_10 << 2) + 0x118) = 0
        sub_4ac8c0(eax_10, 0, eax_7)
        
        if (data_65b224 != 0)
            data_65b224 = 0
            sub_456ed0(&data_65ae44)
        
        int32_t* ecx_5 = data_ce19b4
        *(esp_1 - 4) = 0xff0000ff
        (*(*ecx_5 + 0x8c))()
        int32_t var_48
        int32_t var_84_1 = var_48
        void var_2c0
        *(esp_1 - 8) = &var_2c0
        int128_t var_60
        int128_t var_9c_1 = var_60
        int64_t var_50
        int64_t var_8c_1 = var_50
        int128_t* eax_13 = sub_4b7bf0()
        int128_t xmm0_7 = *eax_13
        int128_t xmm2_4 = eax_13[2]
        int128_t xmm3_1 = eax_13[3]
        
        if (data_cdf3e9 != 0)
            *(esp_1 - 8) = "Draw3DSetView"
            *(esp_1 - 0xc) = 0x364
            *(esp_1 - 0x10) = "c:\ax2017\engine\draw3d.cpp"
            sub_44e4d0(eax_13, &data_5559b1, "!gDraw3DData.submittingRenderItems")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        data_65b0e4 = eax_13[1]
        data_65b0d4 = xmm0_7
        void var_280
        *(esp_1 - 8) = &var_280
        float xmm0_9 = xmm0 / var_70
        data_65b0f4 = xmm2_4
        float var_238_1 = xmm0 * 2f
        data_65b104 = xmm3_1
        float var_23c = xmm0_9 + xmm0_9
        int128_t var_270 = *sub_45c380(&var_280, &var_23c, &data_571d90)
        int32_t var_260_1 = xmm0_1
        int32_t var_25c_1 = xmm0_2
        sub_456ed0(&var_270)
        int128_t xmm0_14 = data_571934
        *(esp_1 - 8) = &var_2c0
        data_65b2b8 = xmm0_14
        __builtin_memcpy(&data_65aecc, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        data_65af8c = data_65b0d4
        data_65af9c = data_65b0e4
        data_65afac = data_65b0f4
        data_65afbc = data_65b104
        int128_t* eax_17 = sub_45c930(&var_2c0, &data_65aecc, &data_65af8c)
        int128_t* ecx_9 = &data_65b00c
        data_65af0c = *eax_17
        data_65af1c = eax_17[1]
        data_65af2c = eax_17[2]
        int128_t xmm0_22 = eax_17[3]
        void* esp_17
        *esp_17 = &var_2c0
        data_65af3c = xmm0_22
        int128_t* eax_19 = sub_45c930(&var_2c0, &data_65af8c, ecx_9)
        data_65afcc = *eax_19
        data_65afdc = eax_19[1]
        data_65afec = eax_19[2]
        int128_t xmm0_26 = eax_19[3]
        *esp_17 = &var_2c0
        data_65affc = xmm0_26
        int128_t* eax_21 = sub_45c930(&var_2c0, &data_65af0c, ecx_9)
        esp_1 = esp_17 + 4
        data_65af4c = *eax_21
        data_65af5c = eax_21[1]
        data_65af6c = eax_21[2]
        void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        data_65af7c = eax_21[3]
        void* esi_2 = *ThreadLocalStoragePointer
        
        if (data_e49cf0 s> *(esi_2 + 4))
            *(esp_1 - 4) = &data_e49cf0
            __Init_thread_header()
            
            if (data_e49cf0 == 0xffffffff)
                int32_t var_14_1 = 0
                int32_t* eax_23 = sub_48d5b0("sys/editor/video_sphere.structure", 2)
                *(esp_1 - 4) = &data_e49cf0
                data_e49cf4 = eax_23
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer()
        
        int32_t eax_24 = data_e49cf8
        
        if (eax_24 s> *(esi_2 + 4))
            *(esp_1 - 4) = &data_e49cf8
            eax_24 = __Init_thread_header()
            
            if (data_e49cf8 == 0xffffffff)
                int32_t var_14_3 = 1
                int32_t* eax_25 = sub_48d5b0("sys/skybox_equi.material", 5)
                *(esp_1 - 4) = &data_e49cf8
                data_e49cfc = eax_25
                int32_t var_14_4 = 0xffffffff
                eax_24 = __Init_thread_footer()
        
        int32_t* ecx_10 = data_e49cf4
        
        if (ecx_10[1] != 2)
            *(esp_1 - 4) = "StructureDefGet"
            *(esp_1 - 8) = 0x30c
            *(esp_1 - 0xc) = "c:\ax2017\engine\assetutils.cpp"
            sub_44e4d0(eax_24, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_26 = sub_4459f0(ecx_10)
        int32_t** var_224_1 = eax_26
        
        if (*eax_26 == 0)
            *(esp_1 - 4) = "DrawCubemap"
            *(esp_1 - 8) = 0x121
            *(esp_1 - 0xc) = "c:\ax2017\engine\iblimport.cpp"
            sub_44e4d0(eax_26, &data_5559b1, "pDefStructure->pStructureImportData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (data_cdf3e9 != 0)
            break
        
        int32_t ecx_11 = data_ce1af4
        
        if (ecx_11 != 2)
            if (ecx_11 != 0)
                if (ecx_11 == 1)
                    void* eax_27 = data_cdf424
                    
                    if (*(eax_27 + 0x1d) == 0)
                        *(esp_1 - 4) = "SpriteDrawEnd"
                        *(esp_1 - 8) = 0x25d
                        *(esp_1 - 0xc) = "c:\ax2017\engine\sprite.cpp"
                        sub_44e4d0(eax_27, &data_5559b1, "gpSpriteAppData->spritesDrawing")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    *(eax_27 + 0x1d) = 0
                    uint32_t (* eax_28)[0x4] = sub_47c290()
                    
                    if (data_cdf3e9 != 0)
                        *(esp_1 - 4) = "Draw3DBegin"
                        *(esp_1 - 8) = 0xb03
                        *(esp_1 - 0xc) = "c:\ax2017\engine\draw3d.cpp"
                        sub_44e4d0(eax_28, &data_5559b1, "!gDraw3DData.submittingRenderItems")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    eax_26 = var_224_1
                else if (ecx_11 != 2)
                    *(esp_1 - 4) = "DrawModeSet"
                    *(esp_1 - 8) = 0x1f
                    *(esp_1 - 0xc) = "c:\ax2017\engine\drawmode.cpp"
                    sub_44e4d0(eax_26, &data_5559b1, "Halt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            
            data_ce1af4 = 2
        
        int32_t ecx_17 = data_cdf3fc
        int32_t i = 0
        data_cdf3fc = 2
        int32_t* edi_2 = *eax_26
        
        if (*edi_2 s> 0)
            do
                *(esp_1 - 4) = 0x180
                *(esp_1 - 8) = 0
                void var_220
                *(esp_1 - 0xc) = &var_220
                _memset()
                int32_t var_1d8_1 = data_e49cfc
                int32_t var_21c_1 = i * 0x124 + edi_2[1]
                int32_t ecx
                int32_t var_1d4_1 = ecx
                int32_t var_b8_1 = 0x3f800000
                int128_t var_218
                __builtin_memcpy(&var_218, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                        3f", 
                    0x40)
                int128_t var_190_1 = data_571934
                
                if (i == 0)
                    i = sub_454070(&var_220)
                
                sub_454980(&var_220)
                i += 1
                edi_2 = *var_224_1
            while (i s< *edi_2)
        
        data_cdf3fc = ecx_17
        sub_4bd1a0(0)
        void* result = sub_4aced0()
        esi_1 = var_228 + 1
        var_228 = esi_1
        
        if (esi_1 s>= 6)
            fsbase->NtTib.ExceptionList = ExceptionList
            esp_1[1]
            esp_1[2]
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
    
    *(esp_1 - 4) = "DrawModeSet"
    *(esp_1 - 8) = 0xd
    *(esp_1 - 0xc) = "c:\ax2017\engine\drawmode.cpp"
    sub_44e4d0(eax_26, &data_5559b1, "!gDraw3DData.submittingRenderItems")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
