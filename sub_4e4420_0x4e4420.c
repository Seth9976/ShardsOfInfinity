// 函数名称: sub_4e4420
// 虚拟地址: 0x4e4420
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4e4420(int32_t arg1, char* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545ed3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_348 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = arg3
    void* var_234 = edi
    float xmm0 = sub_4132a0(0.785398185f)
    void* eax_3 = nullptr
    void* i = nullptr
    float xmm2 = 1f
    int32_t xmm0_1 = data_65ae54.d
    int32_t xmm0_2 = data_65ae54:4
    float var_84 = 1f
    char var_58 = 0
    int32_t var_54 = 0x3f800000
    int64_t var_44 = 0
    float var_3c = 0f
    char* i_1 = nullptr
    int32_t var_2c[0x6]
    
    do
        if (i u> 5)
            sub_44e4d0(eax_3, &data_5559b1, "Halt", "c:\ax2017\engine\iblimport.cpp", 0x228, 
                "HDRCubeToIrradiance")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_4
        int64_t xmm0_4
        float xmm1_1
        float xmm3_1
        
        switch (i)
            case nullptr
                xmm1_1 = -0f
                eax_4 = 0x80000000
                xmm2 = -1f
                xmm3_1 = -0f
                xmm0_4 = _mm_unpacklo_ps(0xbf800000, 0x80000000)
            case 1
                xmm1_1 = (zx.o(0)).d
                eax_4 = 0x80000000
                xmm3_1 = (zx.o(0)).d
                xmm0_4 = _mm_unpacklo_ps(0xbf800000, 0x80000000)
            case 2
                xmm2 = -0f
                xmm1_1 = -1f
                eax_4 = 0xbf800000
                xmm3_1 = -0f
                xmm0_4 = _mm_unpacklo_ps(0x80000000, 0x80000000)
            case 3
                xmm0_4 = 0
                xmm1_1 = 1f
                eax_4 = 0x3f800000
                xmm2 = (zx.o(0)).d
                xmm3_1 = (zx.o(0)).d
            case 4
                int64_t xmm0_5 = 0
                xmm2 = xmm0_5:4.d
                xmm3_1 = 1f
                eax_4 = 0x80000000
                xmm0_4 = _mm_unpacklo_ps(0xbf800000, 0x80000000)
                xmm1_1 = xmm0_5.d
            case 5
                xmm1_1 = -0f
                xmm3_1 = -1f
                eax_4 = 0x80000000
                xmm2 = -0f
                xmm0_4 = _mm_unpacklo_ps(0xbf800000, 0x80000000)
        
        float xmm1_2[0x4] = xmm1_1 f+ var_44.d
        int64_t xmm2_1 = xmm2 f+ var_44:4.d
        int32_t var_30_1 = eax_4
        int64_t var_38 = xmm0_4
        float var_244_1 = xmm3_1 + var_3c
        int64_t var_24c = _mm_unpacklo_ps(xmm1_2, xmm2_1)
        void var_78
        int128_t* eax_7 = sub_4d5420(&var_44, &var_24c, &var_78, &var_44, &var_38)
        int32_t ecx_1 = *(edi + 8)
        int32_t var_354_1 = 0
        int32_t* eax_8 = sub_48f6f0(eax_7, ecx_1, ecx_1, *(edi + 0xc), 3)
        void* edx_2 = data_ce19c4
        var_2c[i] = eax_8
        *(edx_2 + 0x248) += 1
        int32_t eax_10 = *(edx_2 + 0x248) * 5
        *(edx_2 + (eax_10 << 2) + 0x108) = 2
        *(edx_2 + (eax_10 << 2) + 0x110) = eax_8
        *(edx_2 + (eax_10 << 2) + 0x114) = 0
        *(edx_2 + (eax_10 << 2) + 0x118) = 0
        sub_4ac8c0(eax_10, 0, eax_8, 0)
        
        if (data_65b224 != 0)
            data_65b224 = 0
            sub_456ed0(&data_65ae44)
        
        (*(*data_ce19b4 + 0x8c))(0xffff0000)
        int32_t var_5c
        int32_t var_8c_1 = var_5c
        int128_t var_74
        int128_t var_a4_1 = var_74
        int64_t var_64
        int64_t var_94_1 = var_64
        void var_33c
        int128_t* eax_13 = sub_4b7bf0(&var_33c)
        int128_t var_2ec = *eax_13
        int128_t var_2dc_1 = eax_13[1]
        int128_t var_2cc_1 = eax_13[2]
        int128_t var_2bc_1 = eax_13[3]
        sub_456df0(&var_2ec)
        float xmm0_12 = xmm0 / var_84
        float var_23c_1 = xmm0 * 2f
        float var_240 = xmm0_12 + xmm0_12
        void var_2fc
        int128_t var_2ac = *sub_45c380(&var_2fc, &var_240, &data_571d90, &var_2fc)
        int32_t var_29c_1 = xmm0_1
        int32_t var_298_1 = xmm0_2
        sub_456ed0(&var_2ac)
        data_65b2b8 = data_571934
        __builtin_memcpy(&data_65aecc, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        data_65af8c = data_65b0d4
        data_65af9c = data_65b0e4
        data_65afac = data_65b0f4
        data_65afbc = data_65b104
        float* eax_17 = sub_45c930(&var_33c, &data_65aecc, &data_65af8c, &var_33c)
        data_65af0c = *eax_17
        data_65af1c = *(eax_17 + 0x10)
        data_65af2c = *(eax_17 + 0x20)
        data_65af3c = *(eax_17 + 0x30)
        float* eax_19 = sub_45c930(&var_33c, &data_65af8c, &data_65b00c, &var_33c)
        data_65afcc = *eax_19
        data_65afdc = *(eax_19 + 0x10)
        data_65afec = *(eax_19 + 0x20)
        data_65affc = *(eax_19 + 0x30)
        float* eax_21 = sub_45c930(&var_33c, &data_65af0c, &data_65b00c, &var_33c)
        data_65af4c = *eax_21
        data_65af5c = *(eax_21 + 0x10)
        data_65af6c = *(eax_21 + 0x20)
        void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        data_65af7c = *(eax_21 + 0x30)
        void* esi = *ThreadLocalStoragePointer
        
        if (data_e49d00 s> *(esi + 4))
            __Init_thread_header(&data_e49d00)
            
            if (data_e49d00 == 0xffffffff)
                int32_t var_8_1 = 0
                data_e49d04 = sub_48d5b0("sys/skybox.structure", 2)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_e49d00)
        
        int32_t eax_24 = data_e49d08
        
        if (eax_24 s> *(esi + 4))
            eax_24 = __Init_thread_header(&data_e49d08)
            
            if (data_e49d08 == 0xffffffff)
                int32_t var_8_3 = 1
                data_e49d0c = sub_48d5b0("sys/pbr/ibl_irradiance.material", 5)
                int32_t var_8_4 = 0xffffffff
                eax_24 = __Init_thread_footer(&data_e49d08)
        
        int32_t* ecx_6 = data_e49d04
        
        if (ecx_6[1] != 2)
            sub_44e4d0(eax_24, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                "c:\ax2017\engine\assetutils.cpp", 0x30c, "StructureDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* eax_26 = sub_4459f0(ecx_6)
        int32_t** var_22c_1 = eax_26
        
        if (*eax_26 == 0)
            sub_44e4d0(eax_26, &data_5559b1, "pDefStructure->pStructureImportData", 
                "c:\ax2017\engine\iblimport.cpp", 0x24c, "HDRCubeToIrradiance")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_4bd1a0(2)
        int32_t eax_27 = data_cdf3fc
        int32_t j = 0
        data_cdf3fc = 2
        int32_t* edi_2 = *eax_26
        
        if (*edi_2 s> 0)
            do
                void var_224
                _memset(&var_224, 0, 0x180)
                int32_t var_1dc_1 = data_e49d0c
                int32_t var_220_1 = j * 0x124 + edi_2[1]
                int32_t var_1d8_1 = arg4
                int32_t var_bc_1 = 0x3f800000
                int128_t var_21c
                __builtin_memcpy(&var_21c, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                        3f", 
                    0x40)
                int128_t var_194_1 = data_571934
                
                if (j == 0)
                    j = sub_454070(&var_224)
                
                sub_454980(&var_224)
                j += 1
                edi_2 = *var_22c_1
            while (j s< *edi_2)
        
        data_cdf3fc = eax_27
        sub_4bd1a0(0)
        eax_3 = sub_4aced0()
        i = &i_1[1]
        xmm2 = 1f
        edi = var_234
        i_1 = i
    while (i s< 6)
    
    if (arg2 == 0)
        sub_44e4d0(arg2, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&i_1, arg2)
    int32_t var_8_5 = 2
    int32_t eax_34
    int32_t ecx_11
    eax_34, ecx_11 = sub_44f620(&i_1, "_irr")
    int32_t var_34c_3 = 1
    int32_t* result = sub_4e36d0(eax_34, &var_2c, ecx_11)
    sub_48e1b0(result)
    sub_48d180(result)
    int32_t var_8_6 = 3
    
    if (data_cdf414 != 0)
        char* i_2 = i_1
        
        if (i_2 != 0 && *i_2 != 0)
            char* eax_35 = sub_44f000(&i_1)
            int32_t temp0_1 = *(eax_35 + 4)
            *(eax_35 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
