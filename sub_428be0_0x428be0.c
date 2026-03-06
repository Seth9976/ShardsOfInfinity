// 函数名称: sub_428be0
// 虚拟地址: 0x428be0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_428be0(int32_t* arg1, char arg2, int32_t arg3 @ xmm1)
{
    // 第一条实际指令: int32_t ecx = *arg1
    int32_t ecx = *arg1
    
    if (ecx == 0)
        return 
    
    void* eax_1 = data_65ae00
    int32_t var_2c = 0
    int32_t var_28_1 = 0
    int32_t var_1c = 0
    uint128_t xmm1 = zx.o(*(eax_1 + 0x18))
    int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x14)))
    int32_t var_18_1 = 0
    int32_t xmm1_1 = _mm_cvtepi32_ps(xmm1)
    int32_t var_24_1 = xmm2_2
    int32_t var_20_1 = xmm1_1
    int32_t var_14_1 = xmm2_2
    int32_t var_10_1 = xmm1_1
    int32_t* ebx_1 = **(sub_428b70(ecx) + 4)
    
    if (arg1[1] == 0 && *arg1 != 0x1e)
        sub_462b10(&var_2c, &arg1[1], "dialog (retired)", ebx_1, &var_2c, &var_1c, 0x32c8, nullptr, 1)
        int32_t var_58_1 = 0xffffffff
        sub_469930(arg1[1])
        sub_466e80(arg1[1], 0x447a0000)
    
    int32_t ecx_3 = *arg1
    int32_t eax_5
    
    if (ecx_3 != 0x1e)
        eax_5 = *(sub_428b70(ecx_3) + 0xc)
    else
        eax_5 = 0x2af8
    
    sub_462b10(&var_2c, &arg1[1], "dialog", ebx_1, &var_2c, &var_1c, eax_5, nullptr, 1)
    
    if (arg2 != 0)
        int32_t var_40_1 = 0xffffffff
        sub_469930(arg1[1])
    
    TEB* fsbase
    void* ebx_2 = *fsbase->ThreadLocalStoragePointer
    
    if (data_e48138 s> *(ebx_2 + 4))
        __Init_thread_header(&data_e48138)
        
        if (data_e48138 == 0xffffffff)
            int32_t eax_10 = data_cdf41c
            data_e48140 = eax_10
            data_cdf41c = eax_10 + 1
            int32_t eax_12 = data_cdf418
            data_e4813c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e4814c = "gfxHigh"
            data_e48148 = eax_12
            data_cdf418 = &data_e4813c
            __Init_thread_footer(&data_e48138)
    
    if (data_e48150 s> *(ebx_2 + 4))
        __Init_thread_header(&data_e48150)
        
        if (data_e48150 == 0xffffffff)
            int32_t eax_14 = data_cdf41c
            data_e48158 = eax_14
            data_cdf41c = eax_14 + 1
            int32_t eax_16 = data_cdf418
            data_e48154 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
            data_e48164 = "gfxLow"
            data_e48160 = eax_16
            data_cdf418 = &data_e48154
            __Init_thread_footer(&data_e48150)
    
    void* eax_17 = data_65ac30
    char const* const var_48_2
    int32_t var_44
    char const* const var_40_2
    char* ecx_5
    
    if (eax_17 == 0)
        var_40_2 = "GetLocalSettings"
        var_44 = 0x23d
        var_48_2 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx_5 = "gGameSettings.localSettings"
    label_428e76:
        sub_44e4d0(eax_17, &data_5559b1, ecx_5, var_48_2, var_44, var_40_2)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    *(eax_17 + 0xc)
    int32_t var_40_3 = 0xffffffff
    sub_469930(arg1[1])
    eax_17 = data_65aabc
    
    if (eax_17 == 0)
        var_40_2 = "GetClient"
        var_44 = 0x74
        var_48_2 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_5 = "gClient"
        goto label_428e76
    
    if (*(eax_17 + 0x65c) != 0)
        int32_t var_40_4 = 0xffffffff
        sub_469930(arg1[1])
    
    eax_17 = *(sub_428b70(*arg1) + 8)
    
    if (eax_17 == 0)
        var_40_2 = "GetDlgUpdate"
        var_44 = 0x14a1
        var_48_2 = "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp"
        ecx_5 = "def.updateFn"
        goto label_428e76
    
    eax_17(arg1[1])
    sub_466e80(arg1[1], arg3)
}
