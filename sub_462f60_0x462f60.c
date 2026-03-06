// 函数名称: sub_462f60
// 虚拟地址: 0x462f60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct InputHitResult::UI2HitResult::VTable** __convention("regparm")sub_462f60(int32_t arg1, void* arg2, struct InputHitResult::UI2HitResult::VTable** arg3, int32_t arg4, int32_t* arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_2c = data_5c7c20
    struct InputHitResult::UI2HitResult::VTable** result = arg3
    int32_t var_28 = data_5c7c24
    float xmm0 = *(arg2 + 0x750)
    xmm0 - 1f
    int32_t var_24 = data_5c7c28
    int32_t var_20 = data_5c7c2c
    struct InputHitResult::UI2HitResult::VTable** result_1 = result
    struct InputHitResult::UI2HitResult::VTable* const var_30 =
        &UI2HitResult::`vftable'{for `InputHitResult'}
    int32_t eax_5
    eax_5:1.b =
        (xmm0 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 1f) ? 1 : 0) << 2 | (xmm0 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        *result = &UI2HitResult::`vftable'{for `InputHitResult'}
        result[1] = data_5c7c20
        result[2] = data_5c7c24
        result[3] = data_5c7c28
        result[4] = data_5c7c2c
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return result
    
    int32_t edx = *(arg2 + 0x63c) * 0x208
    float xmm0_1 = *(edx + arg2 + 0x24)
    xmm0_1 - 0f
    eax_5:1.b =
        (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2 | (xmm0_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    char const* const var_84_1
    int32_t var_80_1
    char const* const var_7c_1
    char* ecx_6
    
    if (not(p_3))
        var_7c_1 = "UI2HitTest"
        var_80_1 = 0xea4
        ecx_6 = "ui.current().alpha != 0"
    label_4634e1:
        var_84_1 = "c:\ax2017\engine\ui2.cpp"
    label_4634eb:
        sub_44e4d0(eax_5, &data_5559b1, ecx_6, var_84_1, var_80_1, var_7c_1)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    eax_5 = *(edx + arg2 + 0xc8)
    
    if (eax_5 u> 4)
        var_7c_1 = "UI2HitTest"
        var_80_1 = 0xebb
        ecx_6 = "Halt"
        goto label_4634e1
    
    int128_t var_68
    int32_t var_50
    float var_1c
    
    switch (eax_5)
        case 0
            arg3.b = arg6
        case 1, 3, 4
            int128_t* eax_8 = sub_462ec0(&var_68, edx, arg2, &var_68)
            float xmm1_1[0x4] = *(edx + arg2 + 0x1ec)
            float xmm2_1 = *(arg2 + 0x6e8)
            var_68 = *eax_8
            var_1c = xmm1_1[0] * xmm2_1
            float var_18_1 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55) * xmm2_1
            float var_14_1 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa) * xmm2_1
            float var_10_1 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff) * xmm2_1
            var_68 = *sub_47beb0(&var_50, &var_1c, &var_68, &var_50)
            eax_5 = sub_4144c0(&var_68, arg5)
            arg3 = zx.d(arg6)
            
            if (eax_5.b == 0)
                arg3 = 1
            
            arg6 = arg3.b
        case 2
            arg3.b = 0
            arg6 = 0
    
    if (*(arg2 + 0x69c) == 3
            && (*(arg2 + 0x6d4) f< *(arg2 + 0x6cc) || not(*(arg2 + 0x6d8) f>= *(arg2 + 0x6d0))))
        var_7c_1 = "RectContains"
        var_80_1 = 0xa4
        var_84_1 = "c:\ax2017\engine\rect.cpp"
        ecx_6 = "RectIsNormalized(r)"
        goto label_4634eb
    
    if (arg3.b == 0)
        float xmm2_2 = *(arg2 + 0x6e8)
        float xmm1_4[0x4] = *(*(arg2 + 0x63c) * 0x208 + arg2 + 0x1ec)
        var_1c = xmm1_4[0] * xmm2_2
        float var_18_2 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0x55) * xmm2_2
        float var_14_2 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa) * xmm2_2
        float var_10_2 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xff) * xmm2_2
        int128_t* eax_13 = sub_47beb0(&var_50, &var_1c, arg2 + 0x6cc, &var_50)
        int32_t ecx_11 = *(arg2 + 0x63c) * 0x208
        var_68 = *eax_13
        eax_5 = *(ecx_11 + arg2 + 0x204)
        
        if (eax_5 u> 6)
            var_7c_1 = "UI2AcceptsHover"
            var_80_1 = 0xe37
            ecx_6 = "Halt"
            goto label_4634e1
        
        switch (eax_5)
            case 0
                int32_t eax_14 = *(arg2 + 0x69c)
                bool cond:1_1
                
                if (eax_14 == 2)
                    cond:1_1 = *(ecx_11 + arg2 + 0x1a0) == 0
                label_4632b9:
                    
                    if (not(cond:1_1))
                        goto label_4632c4
                else
                    if (eax_14 == 3)
                        cond:1_1 = *(ecx_11 + arg2 + 0x1d8) == 0
                        goto label_4632b9
                    
                    if (eax_14 == 5)
                        goto label_4632c4
            case 1, 2, 3, 5, 6
            label_4632c4:
                
                if (sub_4144c0(&var_68, arg5) != 0)
                    var_2c = *(arg2 + 0x1004)
                    var_28 = arg4
                    int32_t eax_34 = *(*(arg2 + 0x63c) * 0x208 + arg2 + 0xe0)
                    
                    if (eax_34 == 0)
                        eax_34 = *(arg2 + 0x78c)
                    
                    var_24 = eax_34
                    
                    if (sub_462e50(arg2) == 0 || data_5c99ec == 0)
                        if (sub_462db0(arg2) == 0)
                            var_20 = 3
                        else
                            int32_t ecx_23
                            ecx_23.b = *(*(arg2 + 0x63c) * 0x208 + arg2 + 0x204) == 6
                            var_20 = ecx_23 + 1
                    else
                        var_20 = 4
    
    int32_t var_4c
    int32_t var_48
    int32_t var_44
    int32_t var_40
    
    if (*(*(arg2 + 0x63c) * 0x208 + arg2 + 0x204) != 4)
        int32_t i = 0
        
        if (*(arg2 + 0x7f4) s> 0)
            do
                sub_4627e0(arg2, i)
                sub_462f60(arg4 << 8 | i, arg5, arg6.d)
                int32_t eax_23 = (*var_50)()
                int32_t eax_24 = (*data_5c7c1c)()
                char eax_25
                
                if (eax_23 == eax_24)
                    eax_25 = eax_23(&var_50, &data_5c7c1c)
                
                if (eax_23 != eax_24 || eax_25 == 0)
                    int32_t eax_27 = var_30->vFunc_0()
                    int32_t eax_28 = (*data_5c7c1c)()
                    char eax_29
                    
                    if (eax_27 == eax_28)
                        eax_29 = eax_27(&var_30, &data_5c7c1c)
                    
                    int32_t ecx_19
                    
                    if (eax_27 != eax_28 || eax_29 == 0)
                        ecx_19 = var_44
                        
                        if (ecx_19 u>= var_24)
                            goto label_46336f
                    else
                        ecx_19 = var_44
                    label_46336f:
                        var_2c = var_4c
                        var_28 = var_48
                        var_24 = ecx_19
                        var_20 = var_40
                
                i += 1
            while (i s< *(arg2 + 0x7f4))
            
            result = result_1
    
    if (*(arg2 + 0x69c) == 2 && *(*(arg2 + 0x63c) * 0x208 + arg2 + 0x1a4) != 0)
        int32_t edi_1 = 0
        void* esi_1 = arg2 + 0xbf8
        
        while (true)
            int32_t edx_9 = *esi_1
            
            if (edx_9 != 0)
                uint32_t eax_42 = zx.d(edx_9.w)
                void* ecx_26
                
                if (eax_42 u< data_5c99a4)
                    ecx_26 = eax_42 * 0x1008 + data_5c99a0
                
                if (eax_42 u>= data_5c99a4 || *(ecx_26 + 0x1004) != edx_9)
                    sub_44e4d0(eax_42, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (ecx_26 != 0)
                    sub_462f60(arg4 << 8 | edi_1, arg5, arg6.d)
                    int32_t eax_47 = (*var_50)()
                    int32_t eax_48 = (*data_5c7c1c)()
                    char eax_49
                    
                    if (eax_47 == eax_48)
                        eax_49 = eax_47(&var_50, &data_5c7c1c)
                    
                    if (eax_47 != eax_48 || eax_49 == 0)
                        int32_t eax_51 = var_30->vFunc_0()
                        int32_t eax_52 = (*data_5c7c1c)()
                        char eax_53
                        
                        if (eax_51 == eax_52)
                            eax_53 = eax_51(&var_30, &data_5c7c1c)
                        
                        int32_t ecx_29
                        
                        if (eax_51 != eax_52 || eax_53 == 0)
                            ecx_29 = var_44
                            
                            if (ecx_29 u>= var_24)
                                goto label_46347f
                        else
                            ecx_29 = var_44
                        label_46347f:
                            var_2c = var_4c
                            var_28 = var_48
                            var_24 = ecx_29
                            var_20 = var_40
                    
                    edi_1 += 1
                    esi_1 += 4
                    
                    if (edi_1 s< 5)
                        continue
            
            result = result_1
            break
    
    result[1] = var_2c
    result[2] = var_28
    result[3] = var_24
    result[4] = var_20
    *result = &UI2HitResult::`vftable'{for `InputHitResult'}
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
