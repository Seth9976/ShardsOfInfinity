// 函数名称: sub_42c000
// 虚拟地址: 0x42c000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_42c000(int32_t arg1, int128_t* arg2, int128_t* arg3, float arg4 @ xmm3, int128_t* arg5, float* arg6, char* arg7, char arg8, float arg9)
{
    // 第一条实际指令: float xmm0 = arg9
    float xmm0 = arg9
    int32_t xmm3 = (zx.o(0)).d
    xmm0 f- 0
    arg1:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        void* eax = data_65ac30
        char const* const var_74
        int32_t var_70
        char const* const var_6c
        char* ecx
        
        if (eax == 0)
            var_6c = "GetLocalSettings"
            var_70 = 0x23d
            var_74 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
            ecx = "gGameSettings.localSettings"
        label_42c15a:
            sub_44e4d0(eax, &data_5559b1, ecx, var_74, var_70, var_6c)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_1 = *(eax + 8)
        
        if (eax_1 == 0)
            xmm0 = 2f
        else
            if (eax_1 == 1)
                xmm0 = 4f
                goto label_42c077
            
            eax = eax_1 - 2
            
            if (eax_1 != 2)
                var_6c = "MoveToSCurve"
                var_70 = 0x43
                var_74 = "c:\ax2017\jams\shards\code\cardmotion.cpp"
                ecx = "Halt"
                goto label_42c15a
            
            xmm0 = 10f
        
    label_42c077:
        
        if (arg8 != 0)
            xmm0 = 4f
    
    float xmm0_2 = xmm0 * arg4 + *arg6
    *arg6 = xmm0_2
    
    if (not(xmm0_2 < 1f))
        int128_t xmm0_3 = *arg2
        int32_t ecx_1 = arg2[5].d
        *arg7 = 1
        *arg5 = xmm0_3
        arg5[1] = arg2[1]
        arg5[2] = arg2[2]
        arg5[3] = arg2[3]
        arg5[4] = arg2[4]
        arg5[5].d = ecx_1
        return arg5
    
    float xmm0_8 = xmm0_2 - 0f
    *arg7 = 0
    
    if (not(0 f>= xmm0_8))
        if (xmm0_8 < 1f)
            xmm3 = sub_4145f0(4, xmm0_8, (zx.o(0)).d, 1f)
        else
            xmm3 = 0x3f800000
    
    void var_5c
    int128_t* eax_8 = sub_419d90(&var_5c, arg2, arg3, xmm3, &var_5c)
    int32_t ecx_3 = eax_8[5].d
    *arg5 = *eax_8
    arg5[1] = eax_8[1]
    arg5[2] = eax_8[2]
    arg5[3] = eax_8[3]
    arg5[4] = eax_8[4]
    arg5[5].d = ecx_3
    return arg5
}
