// 函数名称: sub_4ab140
// 虚拟地址: 0x4ab140
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_4ab140()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_ec = esi
    int32_t edi
    int32_t var_f0 = edi
    uint32_t result_1
    (*(*data_ce19c8 + 0x14))(&result_1)
    float xmm3 = data_ce1acc.d
    float xmm0 = data_ce1acc:4
    float xmm7 = data_ce1acc:8
    float xmm6 = data_ce1acc:0xc
    float xmm4_1 = xmm0 * xmm0
    float xmm5_1 = xmm3 * xmm3
    float xmm1_1 = xmm0 * xmm3
    float xmm3_2 = xmm7 f* data_ce1acc:0xc
    float xmm6_1 = xmm6 * xmm6
    float xmm0_2 = xmm1_1 - xmm3_2
    float xmm2_1 = xmm7 * xmm7
    float var_90
    float xmm0_4 = var_90 + var_90
    float xmm4_3 = data_ce1acc:4 f* data_ce1acc:0xc
    float xmm3_7 = xmm5_1 + xmm6_1 - xmm4_1 - xmm2_1
    float xmm2_3 = xmm7 f* data_ce1acc.d
    float xmm0_6 = xmm4_3 + xmm2_3
    float var_8c
    float xmm2_5 = var_8c + var_8c
    float var_94
    float xmm3_9 = var_94 + var_94
    float xmm0_12 = xmm3_2 + xmm1_1
    float xmm1_3 = data_ce1acc:8 f* data_ce1acc:4
    float xmm0_14 = xmm6_1 - xmm5_1
    float xmm5_3 = data_ce1acc.d f* data_ce1acc:0xc
    float xmm5_5 = xmm1_3 - xmm5_3
    float xmm0_16 = xmm0_14 + xmm4_1 - xmm2_1
    float xmm6_4 = var_90 * xmm0_16 + xmm0_12 * xmm3_9
    float var_dc = xmm6_4
    float xmm0_22 = xmm5_3 + xmm1_3
    float xmm1_5 = xmm2_3 - xmm4_3
    float xmm4_6 = xmm0_14 - xmm4_1 + xmm2_1
    var_94.q =
        _mm_unpacklo_ps(xmm3_7 * var_94 + xmm0_2 * xmm0_4 + xmm0_6 * xmm2_5, xmm6_4 + xmm5_5 * xmm2_5)
    float var_84
    float xmm2_9 = var_84 + var_84
    float var_80
    float xmm0_25 = var_80 + var_80
    float var_88
    float xmm1_10 = var_88 + var_88
    float var_8c_1 = xmm1_5 * xmm3_9 + xmm0_22 * xmm0_4 + var_8c * xmm4_6
    float xmm6_13 = data_ce1acc:8
    var_88.q = _mm_unpacklo_ps(xmm3_7 * var_88 + xmm0_2 * xmm2_9 + xmm0_6 * xmm0_25, 
        var_84 * xmm0_16 + xmm0_12 * xmm1_10 + xmm5_5 * xmm0_25)
    float xmm7_11 = data_ce1acc:4
    float var_80_1 = xmm1_5 * xmm1_10 + xmm0_22 * xmm2_9 + var_80 * xmm4_6
    uint32_t result = result_1
    float var_7c
    float var_78
    float var_74
    float var_70
    float var_bc =
        var_70 * xmm7_11 + var_78 f* data_ce1acc:0xc + var_7c * xmm6_13 - var_74 f* data_ce1acc.d
    float var_b8_2 =
        var_70 * xmm6_13 + var_74 f* data_ce1acc:0xc + var_78 f* data_ce1acc.d - var_7c * xmm7_11
    float var_b4 =
        var_70 f* data_ce1acc:0xc - var_7c f* data_ce1acc.d - var_78 * xmm7_11 - var_74 * xmm6_13
    var_7c.o =
        (var_70 f* data_ce1acc.d + var_7c f* data_ce1acc:0xc + var_74 * xmm7_11 - var_78 * xmm6_13).o
    float var_6c
    float var_68
    float var_64
    float var_60
    float var_bc_1 =
        var_68 f* data_ce1acc:0xc + var_60 * xmm7_11 + var_6c * xmm6_13 - var_64 f* data_ce1acc.d
    float var_b8_3 =
        var_64 f* data_ce1acc:0xc + var_60 * xmm6_13 + var_68 f* data_ce1acc.d - var_6c * xmm7_11
    float var_b4_1 =
        var_60 f* data_ce1acc:0xc - var_6c f* data_ce1acc.d - var_68 * xmm7_11 - var_64 * xmm6_13
    var_6c.o =
        (var_6c f* data_ce1acc:0xc + var_60 f* data_ce1acc.d + var_64 * xmm7_11 - var_68 * xmm6_13).o
    
    if (result != 3 && result != 0)
        __builtin_memcpy(&data_ce1a30, &result_1, 0x80)
        result = sub_45c2a0(&data_ce1a4c)
        int32_t var_fc
        char const* const var_f8
        char* ecx_1
        
        if (result.b == 0)
            var_f8 = "VRUpdatePose"
            var_fc = 0x180
            ecx_1 = "QuatIsValid(gVR.currentHmdState.eyeOrientation[VR_EYE_LEFT])"
        label_4ab74e:
            sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\engine\vr.cpp", var_fc, var_f8)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = sub_45c2a0(&data_ce1a5c)
        
        if (result.b == 0)
            var_f8 = "VRUpdatePose"
            var_fc = 0x181
            ecx_1 = "QuatIsValid(gVR.currentHmdState.eyeOrientation[VR_EYE_RIGHT])"
            goto label_4ab74e
    
    if (data_ce1ac9 != 0 || data_ce1a6c == 0)
        data_ce1a34 = _mm_unpacklo_ps(0xbd03126f, 0x80000000)
        int64_t xmm1_42 = _mm_unpacklo_ps(0x3d03126f, 0)
        data_ce1a3c = 0x80000000
        result = 0
        data_ce1a40 = xmm1_42
        data_ce1a48 = 0
        __builtin_memcpy(&data_ce1a4c, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
