// 函数名称: sub_4f8e70
// 虚拟地址: 0x4f8e70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4f8e70()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_457570(&data_d63bb4)
    
    if (data_cdf3e9 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gDraw3DData.submittingRenderItems", 
            "c:\ax2017\engine\draw3d.cpp", 0x331, "Draw3DAmbientLight")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    data_65b2d8 = data_571934
    int64_t xmm0_1 = _mm_unpacklo_ps(0x80000000, 0x80000000)
    __builtin_strncpy(&data_65b2e8, "333?", 4)
    int64_t var_a4 = xmm0_1
    int32_t var_9c = 0xbf800000
    int32_t eax_4 = sub_456cf0(0xbf800000, &data_571934, &var_a4, 0)
    
    if (data_cdf3e9 == 0)
        sub_44e4d0(eax_4, &data_5559b1, "gDraw3DData.submittingRenderItems", 
            "c:\ax2017\engine\draw3d.cpp", 0x327, "Draw3DLayer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx_1 = data_d63bec
    data_65b35c = 0x3e8
    sub_4b2160(ecx_1, 0)
    int32_t ecx_2 = data_d63bf4
    
    if (ecx_2 != 0)
        sub_4b2160(ecx_2, 0)
    
    int32_t i = 0
    int32_t var_98
    int128_t var_94
    int128_t var_84
    void var_6c
    
    if (data_d64bfc s> 0)
        var_98 = 0xff7f7f7f
        var_98 = var_98
        
        do
            int128_t* eax_7 = sub_4b33b0(&var_6c, *((i << 2) + &data_d63bfc), data_d63bec, &var_6c)
            var_94 = *eax_7
            var_84 = eax_7[1]
            int64_t var_74_1 = eax_7[2].q
            sub_45bf90(&var_94, &var_98)
            i += 1
        while (i s< data_d64bfc)
    
    int32_t edx_3 = data_d63bf0
    
    if (edx_3 != 0xffffffff)
        int128_t* eax_9 = sub_4b33b0(&var_6c, edx_3, data_d63bec, &var_6c)
        var_98 = 0xff7f7f7f
        var_94 = *eax_9
        var_84 = eax_9[1]
        int64_t var_74_2 = eax_9[2].q
        var_98 = var_98
        sub_45bf90(&var_94, &var_98)
    
    int32_t edx_5 = data_d63bf8
    
    if (edx_5 != 0xffffffff)
        int128_t* eax_12 = sub_4b33b0(&var_6c, edx_5, data_d63bf4, &var_6c)
        var_98 = 0xff7f7f7f
        var_94 = *eax_12
        var_84 = eax_12[1]
        int64_t var_74_3 = eax_12[2].q
        var_98 = var_98
        sub_45bf90(&var_94, &var_98)
    
    int32_t i_1 = 0
    
    if (data_d76c30 == 0)
        if (data_ce37a4 s> 0)
            do
                int128_t* eax_17 = sub_4b33b0(&var_6c, (&data_ce27a4)[i_1], data_d63bec, &var_6c)
                var_94 = *eax_17
                var_84 = eax_17[1]
                int64_t var_74_5 = eax_17[2].q
                sub_45bf90(&var_94, &data_571944)
                i_1 += 1
            while (i_1 s< data_ce37a4)
    else if (data_ce37a4 s> 0)
        do
            int128_t* eax_15 = sub_4b33b0(&var_6c, (&data_ce27a4)[i_1], data_d63bec, &var_6c)
            var_94 = *eax_15
            var_84 = eax_15[1]
            int64_t var_74_4 = eax_15[2].q
            sub_45bf90(&var_94, &data_571954)
            i_1 += 1
        while (i_1 s< data_ce37a4)
    
    int128_t var_60
    
    if (data_d76c34 == 1)
        sub_47e890()
        float xmm3_1 = data_d76c20
        float xmm1_1 = data_d76c28
        int32_t xmm2_1 = data_d76c24
        int32_t xmm0_17 = data_d76c2c
        float xmm4_1
        
        if (xmm1_1 <= xmm3_1)
            xmm4_1 = xmm1_1
            xmm1_1 = xmm3_1
        else
            xmm4_1 = xmm3_1
        
        int32_t xmm3_2
        
        if (xmm0_17 f<= xmm2_1)
            xmm3_2 = xmm0_17
            xmm0_17 = xmm2_1
        else
            xmm3_2 = xmm2_1
        
        var_60:0xc.d = xmm4_1
        int64_t var_50
        var_50.d = xmm3_2
        var_50:4.d = xmm1_1
        int32_t var_48_1 = xmm0_17
        sub_47d750(&var_60:0xc, &data_571954, 1f)
        void* eax_18 = data_ce19c4
        __builtin_memcpy(eax_18 + 0xa0, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        *(eax_18 + 0x258) = 0
        sub_45ae60()
    
    void* esi = *fsbase->ThreadLocalStoragePointer
    
    if (data_e49d98 s> *(esi + 4))
        __Init_thread_header(&data_e49d98)
        
        if (data_e49d98 == 0xffffffff)
            int32_t var_8_1 = 0
            data_e49d9c = sub_48d5b0("sys/particle_3d.material", 5)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_e49d98)
    
    if (data_e49da0 s> *(esi + 4))
        __Init_thread_header(&data_e49da0)
        
        if (data_e49da0 == 0xffffffff)
            int32_t var_8_3 = 1
            data_e49da4 = sub_48d5b0("sys/holodeck.texture", 3)
            int32_t var_8_4 = 0xffffffff
            __Init_thread_footer(&data_e49da0)
    
    float var_44[0x4]
    __builtin_memcpy(&var_44, 
        "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x00\x00\x"
    "00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x
            00", 
        0x30)
    float var_64 = 4f
    int32_t var_48_2 = 0
    __builtin_memcpy(&var_94:8, 
        "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x80\x3f\x00\x00\x00\x00", 
        0x20)
    var_60 = data_5724f8
    int64_t var_50_1 = 0
    sub_459e70(0f, &var_44, &var_64, 4)
    float xmm1_2[0x4] = var_44
    int32_t var_b4_6 = data_e49d9c
    float xmm0_21 = _mm_shuffle_ps(xmm1_2, xmm1_2, 0x55)
    int32_t* var_bc = data_e49da4
    int128_t var_24
    float xmm2_4 = (var_24:0xc.d + _mm_shuffle_ps(xmm1_2, xmm1_2, 0xaa)) * 0.5f
    int64_t xmm4_5 = _mm_unpacklo_ps((var_24:4.d f+ xmm1_2) * 0.5f, (var_24:8.d + xmm0_21) * 0.5f)
    sub_457e00(xmm2_4, &var_94:8, &var_44, &data_5c77bc, 0, xmm4_5, xmm2_4, var_bc, &var_64)
    sub_47e890()
    char* const edi = &data_5559b1
    char* eax_26 = *(data_ce27a0 + 0x20)
    
    if (eax_26 != 0)
        edi = eax_26
    
    if (data_e49da8 s> *(esi + 4))
        __Init_thread_header(&data_e49da8)
        
        if (data_e49da8 == 0xffffffff)
            int32_t var_8_5 = 2
            data_e49dac = sub_48d5b0("sys/debugfont.font", 0x12)
            int32_t var_8_6 = 0xffffffff
            __Init_thread_footer(&data_e49da8)
    
    void* eax_29 = data_65ae00
    int32_t* edx_11 = data_e49dac
    var_60:0xc.d = 0
    var_50_1.d = 0
    int32_t var_b8_1 = 0x3fc00000
    var_50_1:4.d = _mm_cvtepi32_ps(zx.o(*(eax_29 + 0x14)))
    int32_t var_48_4 = _mm_cvtepi32_ps(zx.o(*(eax_29 + 0x18)))
    sub_4ae130(&var_60:0xc, edx_11, edi, &var_60:0xc)
    void* result = data_ce19c4
    __builtin_memcpy(result + 0xa0, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
        0x41)
    *(result + 0x258) = 0
    sub_45ae60()
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
