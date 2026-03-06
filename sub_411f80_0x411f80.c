// 函数名称: sub_411f80
// 虚拟地址: 0x411f80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_411f80()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540e45
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_34 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t xmm0 = sub_4132a0(0.261799395f)
    void* eax_3 = data_65ae00
    data_e477d8 = xmm0
    data_e477e0 = 0x3dcccccd
    data_e477e4 = 0x40400000
    data_e47808 = 0
    data_e4780c = 0x40400000
    uint128_t xmm1 = zx.o(*(eax_3 + 0x18))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    int32_t var_18 = 0xbf800000
    float xmm1_2 = _mm_cvtepi32_ps(xmm1) / xmm0_2
    int128_t xmm0_3 = data_5c779c
    data_e477dc = xmm1_2
    data_e477e8 = xmm0_3
    data_e477f8 = data_5c77ac
    data_e477f8:0xc = 0x40400000
    int64_t var_20 = _mm_unpacklo_ps(0x80000000, 0x80000000)
    void var_30
    data_e477e8:4.o = *sub_413180(&var_30, &data_5718c8, &var_20, &var_30)
    void* eax_6 = sub_457570(&data_e477d8)
    
    if (data_cdf3e9 == 0)
        sub_44e4d0(eax_6, &data_5559b1, "gDraw3DData.submittingRenderItems", 
            "c:\ax2017\engine\draw3d.cpp", 0x307, "Draw3DOverlayColor")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    bool cond:1 = data_65aabc != 0
    data_65b2c8 = data_59dd30
    data_65b2b4 = 1
    data_65ae40 = 0xff000000
    
    if (cond:1)
        sub_44e4d0(0xff000000, &data_5559b1, "gClient == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x87, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_65aab8 != 0)
        sub_44e4d0(0xff000000, &data_5559b1, "gServer == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x88, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    data_65aabc = 0x5baad0
    int32_t var_8_1 = 0
    int32_t result = sub_419af0()
    int32_t var_8_2 = 1
    
    if (data_65aabc == 0)
        sub_44e4d0(result, &data_5559b1, "gClient != NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8e, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_65aab8 == 0)
        data_65aabc = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    sub_44e4d0(result, &data_5559b1, "gServer == NULL", 
        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
