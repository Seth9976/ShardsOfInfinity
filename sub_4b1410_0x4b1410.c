// 函数名称: sub_4b1410
// 虚拟地址: 0x4b1410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4b1410(int32_t* arg1, int32_t* arg2, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_54481c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    float eax_2 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    
    if (*arg2 != 0)
        sub_44e4d0(result, &data_5559b1, "elState.asset == NULL", "c:\ax2017\engine\fabdef.cpp", 0x346, 
            "FabUIDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*esi != 2)
        sub_44e4d0(result, &data_5559b1, "el.type == FAB_UI", "c:\ax2017\engine\fabdef.cpp", 0x347, 
            "FabUIDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (esi[0x1d] != 0)
        void var_110
        int128_t* eax_4 = sub_4b0280(&var_110, arg2, arg1, &var_110)
        int128_t var_e8_1 = *eax_4
        int128_t xmm0_2 = eax_4[1]
        int64_t xmm0_3 = eax_4[2].q
        void var_10c
        int128_t* eax_6 = sub_4b0190(&var_10c, arg2, esi, &var_10c)
        int32_t var_28_1 = eax_6[2].d
        int128_t var_48 = *eax_6
        int128_t var_38 = eax_6[1]
        float var_58[0x4]
        int128_t* eax_9 = sub_4b3c80(&var_58, arg2, &var_48:0xc, &var_58)
        var_48:4.d = 0x3f800000
        var_48 = *eax_9
        uint128_t xmm0_7 = *eax_6
        var_38:8.q = xmm0_7
        int32_t var_28_2 = _mm_bsrli_si128(xmm0_7, 8)
        float var_68[0x4] = var_48
        var_58 = var_38
        sub_4a0490(&arg2[0xf], &var_68, &var_48:4, &arg2[0xf])
        float xmm6_1[0x4] = var_48
        float xmm5_1[0x4] = var_38
        float xmm1_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)
        float xmm2_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa)
        var_68 = xmm6_1
        float xmm6_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff)
        float xmm4_3 = xmm2_2 * xmm1_2 - xmm6_2 f* xmm5_1
        float xmm0_16 = xmm5_1[0] f* xmm5_1
        var_58 = xmm5_1
        float xmm0_20 = xmm5_1[0] * xmm1_2
        float xmm1_5 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0x55) f- data_65ae28:4
        float xmm6_4 = xmm6_2 * xmm2_2 + xmm0_20
        float xmm0_23 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xaa) f- data_65ae28:8
        float xmm5_3 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xff) f- data_65ae28:0xc
        data_cdf404 = 1
        data_cdf40c = 0
        data_cdf408 = (xmm4_3 + xmm4_3) * xmm1_5
            + (xmm2_2 * xmm2_2 - xmm6_2 * xmm6_2 + xmm0_16 - xmm1_2 * xmm1_2) * xmm0_23
            + (xmm6_4 + xmm6_4) * xmm5_3
        sub_47dd70(&var_68)
        
        if (data_e49c88 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e49c88)
            
            if (data_e49c88 == 0xffffffff)
                int32_t var_8_1 = 0
                data_e49c8c = sub_48d5b0("sys/sprite_3d.material", 5)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_e49c88)
        
        int128_t var_24
        void* edx_2 = &var_24:8
        *(data_ce19c4 + 0x258) = data_e49c8c
        int128_t* eax_16 = sub_45c380(&var_58, edx_2, &data_571d90, &var_58)
        int32_t* ecx_6 = arg2[0x18]
        float xmm0_25[0x4] = *eax_16
        var_58 = xmm0_25
        var_38 = xmm0_25
        
        if (ecx_6 == 0)
            ecx_6 = esi[0x1d]
        
        var_24 = *sub_486000(&var_24, edx_2, ecx_6, &var_24)
        float var_164[0x15]
        float* eax_20 = sub_48a790(&var_164, &var_24, &var_38:4, &var_164)
        int128_t xmm0_27 = *eax_20
        int128_t var_b0_1 = *(eax_20 + 0x10)
        int128_t var_a0_1 = *(eax_20 + 0x20)
        int128_t var_90_1 = *(eax_20 + 0x30)
        int128_t xmm0_31 = *(eax_20 + 0x40)
        int32_t var_70_1 = eax_20[0x14]
        float xmm7_1
        
        if (arg2[0x12a] s<= arg2[0x17])
            xmm7_1 = esi[0x1e]
        else
            xmm7_1 = arg2[0x12b]
        
        float xmm0_32 = xmm0_31.d
        float xmm3_7 = xmm0_31:4.d
        float xmm1_7 = xmm0_31:8.d
        float xmm4_8 = xmm0_31:0xc.d
        void* eax_23 = data_cdf424
        float xmm2_5 = (xmm0_32 + xmm1_7) * 0.5f
        int32_t ecx_8 = *(eax_23 + 0x38)
        float xmm5_6 = (xmm3_7 + xmm4_8) * 0.5f
        var_38:4.d = (xmm0_32 - xmm2_5) * xmm7_1 + xmm2_5
        float xmm2_6 = 1f - xmm7_1
        var_38:8.d = (xmm3_7 - xmm5_6) * xmm7_1 + xmm5_6
        var_38:0xc.d = (xmm1_7 - xmm2_5) * xmm7_1 + xmm2_5
        float var_28_3 = (xmm4_8 - xmm5_6) * xmm7_1 + xmm5_6
        float xmm4_12 = xmm0_27:0xc.d
        int128_t var_80_2 = var_38
        int128_t var_c0_1
        var_c0_1:0xc.d = xmm4_12 * xmm7_1
        var_c0_1.d = xmm0_27.d + xmm2_6 * (var_24.d + xmm0_2:0xc.d) * 0.5f * xmm4_12
        var_c0_1:4.d = var_c0_1:4.d + xmm2_6 * (var_24:4.d + xmm0_3:4.d) * 0.5f * xmm4_12
        int128_t xmm0_45 = *(eax_23 + 0x28)
        *(eax_23 + 0x38) = 0xffffffff
        var_38 = xmm0_45
        *(eax_23 + 0x28) = var_58
        int32_t* edx_4 = arg2[0x18]
        
        if (edx_4 == 0)
            edx_4 = esi[0x1d]
        
        sub_4b1380(&arg2[1], edx_4)
        arg2[1]
        sub_4899c0(0x3f800000, eax_2, arg3)
        void* eax_24 = data_cdf424
        *(eax_24 + 0x28) = var_38
        *(eax_24 + 0x38) = ecx_8
        result = data_ce19c4
        __builtin_memcpy(&result[0x28], 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        result[0x96] = 0
        sub_45ae60()
        data_cdf404 = 0
        data_cdf408 = 0
        data_cdf40c = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
