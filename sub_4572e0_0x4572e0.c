// 函数名称: sub_4572e0
// 虚拟地址: 0x4572e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4572e0()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_ce19c4
    *(eax_2 + 0xe2) = 0
    char const* const var_dc
    int32_t var_d8
    char const* const var_d4_1
    char* ecx
    
    if (data_cdf3e9 == 0)
        int128_t var_50
        int128_t var_40
        int128_t var_3c
        void* const ecx_2
        
        if (data_ce1ac8 == 0)
            float xmm1_6 = data_65ae08
            float xmm0_8 = xmm1_6 f/ data_65ae0c
            float var_44_1 = xmm1_6 + xmm1_6
            float var_48_1 = xmm0_8 + xmm0_8
            var_3c = *sub_45c380(&var_3c:4, &var_50:8, &data_571d90, &var_3c:4)
            int32_t var_2c_1 = data_65ae10
            int32_t var_28_1 = data_65ae14
            sub_456ed0(&var_40:4)
            ecx_2 = 2
        label_4574bf:
            void* eax_9 = ecx_2 * 7
            var_40 = *((eax_9 << 2) + &data_65ae5c)
            int32_t var_28_2 = (&data_65ae74)[eax_9]
            int64_t var_30_2 = *((eax_9 << 2) + &data_65ae6c)
            void var_d0
            int128_t* result = sub_4b7bf0(&var_d0)
            int128_t var_90 = *result
            int128_t var_80 = result[1]
            int128_t var_70 = result[2]
            int128_t var_60 = result[3]
            sub_456df0(&var_90)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        int32_t eax_3 = data_ce1a2c
        float xmm0_4
        float xmm1_4
        float xmm3_4
        float xmm5_4
        
        if (eax_3 != 0x3e8)
            var_50 = *((eax_3 << 4) + &data_ce1a0c)
            float var_44
            xmm3_4 = var_44
            float var_48
            xmm1_4 = var_48
            xmm0_4 = var_50:4.d
            xmm5_4 = var_50.d
        else
            xmm5_4 = (data_ce1a1c f- data_ce1a0c) * 0.5f f+ data_ce1a0c
            xmm0_4 = (data_ce1a20 f- data_ce1a10) * 0.5f f+ data_ce1a10
            xmm1_4 = (data_ce1a24 f- data_ce1a14) * 0.5f f+ data_ce1a14
            xmm3_4 = (data_ce1a28 f- data_ce1a18) * 0.5f f+ data_ce1a18
        
        float var_38_1 = xmm1_4
        var_40.d = xmm5_4
        var_3c.d = xmm0_4
        float var_34_1 = xmm3_4
        int128_t xmm0_6 = var_40
        int64_t xmm2_2 = _mm_unpacklo_ps(data_65ae10, data_65ae14)
        var_40 = xmm0_6
        int64_t var_30_1 = xmm2_2
        sub_456ed0(&var_40)
        eax_2 = data_ce1a2c
        
        if (eax_2 == 0)
            ecx_2 = nullptr
            goto label_4574bf
        
        if (eax_2 == 1)
            ecx_2 = eax_2
            goto label_4574bf
        
        if (eax_2 == 0x3e8)
            ecx_2 = 3
            goto label_4574bf
        
        var_d4_1 = "RenderUseSubmittedCamera"
        var_d8 = 0x3b7
        var_dc = "c:\ax2017\engine\draw3d.cpp"
        ecx = "Halt"
    else
        var_d4_1 = "VRIsDrawingEye"
        var_d8 = 0x1f5
        var_dc = "c:\ax2017\engine\vr.cpp"
        ecx = "!gDraw3DData.submittingRenderItems"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx, var_dc, var_d8, var_d4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
