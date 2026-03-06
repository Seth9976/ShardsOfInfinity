// 函数名称: sub_436340
// 虚拟地址: 0x436340
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __fastcallsub_436340(int32_t* arg1, int32_t* arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = __ehhandler$___std_fs_remove@4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_ac = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_cdf3e9 == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gDraw3DData.submittingRenderItems", 
            "c:\ax2017\engine\draw3d.cpp", 0x327, "Draw3DLayer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edi = data_65b35c
    data_65b35c = 0x2de60000
    float xmm0 = *arg2
    float xmm2 = arg2[1]
    float xmm1_1 = *arg1 - xmm0
    float xmm0_2 = arg1[1] f- xmm2
    float xmm0_5 = sub_412d90(xmm0_2 * xmm0_2 + xmm1_1 * xmm1_1)
    float xmm1_4 = xmm2 f- arg1[1]
    float xmm2_2 = xmm0 f- *arg1
    int32_t* var_30
    int32_t* var_b0 = &var_30
    float xmm1_7 = 1f / (sub_412d90(xmm1_4 * xmm1_4 + xmm2_2 * xmm2_2) + 9.99999975e-06f)
    float xmm0_12 = xmm2_2 * xmm1_7
    float xmm2_5 = xmm2_2 * 0.5f f+ *arg1
    float xmm0_14 = xmm1_4 * xmm1_7
    float xmm3_2 = xmm1_4 * 0.5f f+ arg1[1]
    int32_t* var_2c
    sub_42ce10(&var_2c, data_dfc820, 0x1d)
    int32_t var_14_1 = 0
    int32_t* eax_4 = sub_4a2e30(var_30)
    int32_t var_14_2 = 0xffffffff
    int32_t* ecx_2 = var_2c
    var_30 = eax_4
    
    if (ecx_2 != 0)
        ecx_2[7] -= 1
        var_2c = nullptr
    
    int32_t* esi_1 = data_dfc7d4
    int32_t* eax_5 = *esi_1
    
    if (eax_5 == 0)
        sub_4aa5d0(esi_1, 0)
        eax_5 = *esi_1
        
        if (eax_5 == 0)
            sub_48dac0(esi_1)
            eax_5 = *esi_1
    
    float xmm2_6[0x4] = data_57252c
    int32_t* ecx_5 = **eax_5
    int32_t var_84 = 0
    int32_t var_80 = 0
    int32_t eax_7 = *ecx_5
    float xmm2_7 = _mm_shuffle_ps(xmm2_6, xmm2_6, 0xaa)
    int32_t var_94 = 0
    int32_t var_88 = 0
    int32_t var_7c = 0x3f800000
    double xmm0_17[0x2] = _mm_cvtepi32_pd(zx.q(eax_7)) f+ *((eax_7 u>> 0x1f << 3) + &data_59e4f0)
    int32_t eax_9 = ecx_5[1]
    float xmm4_1 = xmm0_5 / (_mm_cvtpd_ps(xmm0_17) f* ecx_5[2])
    double xmm0_20[0x2] = _mm_cvtepi32_pd(zx.q(eax_9)) f+ *((eax_9 u>> 0x1f << 3) + &data_59e4f0)
    int128_t xmm1_10 = data_57251c
    int32_t var_58 = 0x3f800000
    int128_t var_78 = xmm1_10
    float xmm3_4 = arg3 / (_mm_cvtpd_ps(xmm0_20) f* ecx_5[2])
    float var_90 = xmm0_14
    int32_t xmm1_12 = xmm0_14 ^ (data_59e5c0.o).d
    var_78.d = xmm4_1 f* xmm1_10
    var_78:0xc.d = xmm4_1 f* var_78:0xc.d
    float xmm0_28 = xmm3_4 f* var_78:4.d
    xmm2_6[2] = xmm4_1 * xmm2_7
    float var_9c = xmm0_12
    var_78:4.d = xmm0_28
    float xmm3_5 = xmm3_4 * xmm2_6[3]
    xmm2_6[0] = xmm3_4 * xmm2_6[0]
    int32_t var_98 = xmm1_12
    xmm2_6[3] = xmm3_5
    float var_8c = xmm0_12
    sub_412bf0(&var_78, &var_9c, &var_78, &var_78)
    float xmm0_32 = xmm2_5 f+ var_78:8.d
    int32_t* var_b0_2 = var_30
    float xmm2_10 = xmm3_2 + xmm2_6[1]
    int32_t* ecx_7 = data_dfc7d4
    int32_t var_44 = 0xffffffff
    int32_t var_40_1 = 0
    var_78:8.d = xmm0_32
    int128_t xmm0_33 = data_59e460
    xmm2_6[1] = xmm2_10
    int128_t var_54 = xmm0_33
    float result = sub_47d3c0(&var_54, &var_78, ecx_7, &var_54, &var_44, var_b0_2)
    
    if (data_cdf3e9 != 0)
        data_65b35c = edi
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_44e4d0(result, &data_5559b1, "gDraw3DData.submittingRenderItems", 
        "c:\ax2017\engine\draw3d.cpp", 0x327, "Draw3DLayer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
