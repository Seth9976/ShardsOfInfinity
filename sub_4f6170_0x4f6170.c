// 函数名称: sub_4f6170
// 虚拟地址: 0x4f6170
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HWND __convention("regparm")sub_4f6170(int32_t arg1, int32_t* arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm6 = *arg2
    float xmm7 = arg2[1]
    float xmm0 = arg2[2]
    float xmm5 = arg2[3]
    float xmm4_1 = xmm6 * xmm7
    float xmm1_1 = xmm0 * xmm5
    float xmm2_1 = xmm4_1 - xmm1_1
    float xmm3_1 = xmm7 * xmm7
    float xmm1_3 = xmm5 * xmm5
    float xmm2_2 = xmm2_1 + xmm2_1
    float xmm2_4 = xmm0 * xmm0
    float xmm0_2 = xmm6 * xmm6
    float xmm4_5 = xmm3_1 - xmm2_4 + xmm1_3 - xmm0_2
    float xmm4_7 = xmm5 * xmm6 + xmm0 * xmm7
    float xmm0_8 = xmm4_7 + xmm4_7
    float xmm0_12 = xmm0_2 + xmm1_3 - xmm2_4 - xmm3_1
    float xmm0_14 = xmm1_1 + xmm4_1
    float xmm0_15 = xmm0_14 + xmm0_14
    float xmm0_18 = xmm0 * xmm6 - xmm5 * xmm7
    float xmm0_19 = xmm0_18 + xmm0_18
    int64_t xmm0_20 = 0
    int16_t eax_3 = GetKeyState(0x57)
    HWND eax_5
    
    if ((0x8000 & eax_3) != 0 && *(data_65ae04 + 0x18) != 0)
        eax_5 = GetFocus()
    
    float var_2c
    float var_28
    float var_24_1
    
    if ((0x8000 & eax_3) != 0 && *(data_65ae04 + 0x18) != 0 && (eax_5 == data_ce1790 || eax_5 == 0)
            && (*(data_cdf450 + 0xc) & 2) != 0 && *(data_65ae04 + 0x18) != 0)
        var_24_1 = xmm2_2 f+ xmm0_20.d
        var_2c = xmm4_5 f+ xmm0_20:4.d
        var_28 = xmm0_8 + 0f
    else
        var_28 = 0f
        var_2c = xmm0_20:4.d
        var_24_1 = xmm0_20.d
    
    if ((0x8000 & GetKeyState(0x53)) != 0 && *(data_65ae04 + 0x18) != 0)
        HWND eax_10 = GetFocus()
        
        if ((eax_10 == data_ce1790 || eax_10 == 0) && (*(data_cdf450 + 0xc) & 2) != 0
                && *(data_65ae04 + 0x18) != 0)
            var_24_1 = var_24_1 - xmm2_2
            var_2c = var_2c - xmm4_5
            var_28 = var_28 - xmm0_8
    
    if ((0x8000 & GetKeyState(0x41)) != 0 && *(data_65ae04 + 0x18) != 0)
        HWND eax_15 = GetFocus()
        
        if ((eax_15 == data_ce1790 || eax_15 == 0) && (*(data_cdf450 + 0xc) & 2) != 0
                && *(data_65ae04 + 0x18) != 0)
            var_24_1 = var_24_1 - xmm0_12
            var_2c = var_2c - xmm0_15
            var_28 = var_28 - xmm0_19
    
    int16_t eax_18 = GetKeyState(0x44)
    HWND eax_20
    
    if ((0x8000 & eax_18) != 0 && *(data_65ae04 + 0x18) != 0)
        eax_20 = GetFocus()
    
    float xmm0_44
    float xmm1_4
    
    if ((0x8000 & eax_18) != 0 && *(data_65ae04 + 0x18) != 0 && (eax_20 == data_ce1790 || eax_20 == 0)
            && (*(data_cdf450 + 0xc) & 2) != 0)
        xmm1_4 = var_28
        
        if (*(data_65ae04 + 0x18) == 0)
            xmm0_44 = var_2c
        else
            xmm1_4 = xmm1_4 + xmm0_19
            var_24_1 = xmm0_12 + var_24_1
            xmm0_44 = var_2c + xmm0_15
            var_28 = xmm1_4
            var_2c = xmm0_44
    else
        xmm1_4 = var_28
        xmm0_44 = var_2c
    
    float xmm3_5 = xmm0_44 * xmm0_44 + var_24_1 * var_24_1 + xmm1_4 * xmm1_4
    
    if (not(xmm3_5 <= 9.99999975e-06f))
        float var_30_2 = 0.100000001f
        int16_t eax_23 = GetKeyState(0xa0)
        HWND eax_25
        
        if ((0x8000 & eax_23) != 0 && *(data_65ae04 + 0x18) != 0)
            eax_25 = GetFocus()
        
        if ((0x8000 & eax_23) != 0 && *(data_65ae04 + 0x18) != 0
            && (eax_25 == data_ce1790 || eax_25 == 0))
        label_4f64f6:
            
            if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_65ae04 + 0x18) != 0)
                HWND eax_31 = GetFocus()
                
                if (eax_31 == data_ce1790 || eax_31 == 0)
                    var_30_2 = 0.00400000019f
        else if ((0x8000 & GetKeyState(0xa1)) != 0 && *(data_65ae04 + 0x18) != 0)
            HWND eax_28 = GetFocus()
            
            if (eax_28 == data_ce1790 || eax_28 == 0)
                goto label_4f64f6
        
        int16_t eax_32 = GetKeyState(0xa0)
        HWND eax_34
        
        if ((0x8000 & eax_32) != 0 && *(data_65ae04 + 0x18) != 0)
            eax_34 = GetFocus()
        
        if ((0x8000 & eax_32) != 0 && *(data_65ae04 + 0x18) != 0
                && (eax_34 == data_ce1790 || eax_34 == 0))
            var_30_2 = var_30_2 * 10f
        else if ((0x8000 & GetKeyState(0xa1)) != 0 && *(data_65ae04 + 0x18) != 0)
            HWND eax_37 = GetFocus()
            
            if (eax_37 == data_ce1790 || eax_37 == 0)
                var_30_2 = var_30_2 * 10f
        
        if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_65ae04 + 0x18) != 0)
            HWND eax_40 = GetFocus()
            
            if (eax_40 == data_ce1790 || eax_40 == 0)
                var_30_2 = var_30_2 * 0.100000001f
        
        float xmm1_5 = 1f / (sub_412d90(xmm3_5) + 9.99999975e-06f)
        float xmm3_9 = var_28 * xmm1_5 * var_30_2 f+ arg3[2]
        float xmm0_58 = *arg3 + var_24_1 * xmm1_5 * var_30_2
        arg3[1] = var_2c * xmm1_5 * var_30_2 f+ arg3[1]
        arg3[2] = xmm3_9
        *arg3 = xmm0_58
    
    float var_28_1 = 0.00999999978f
    int16_t eax_41 = GetKeyState(0xa0)
    HWND eax_43
    
    if ((0x8000 & eax_41) != 0 && *(data_65ae04 + 0x18) != 0)
        eax_43 = GetFocus()
    
    if ((0x8000 & eax_41) != 0 && *(data_65ae04 + 0x18) != 0 && (eax_43 == data_ce1790 || eax_43 == 0))
    label_4f668f:
        
        if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_65ae04 + 0x18) != 0)
            HWND eax_49 = GetFocus()
            
            if (eax_49 == data_ce1790 || eax_49 == 0)
                var_28_1 = 0.00039999999f
    else if ((0x8000 & GetKeyState(0xa1)) != 0 && *(data_65ae04 + 0x18) != 0)
        HWND eax_46 = GetFocus()
        
        if (eax_46 == data_ce1790 || eax_46 == 0)
            goto label_4f668f
    
    int16_t eax_50 = GetKeyState(0xa0)
    HWND eax_52
    
    if ((0x8000 & eax_50) != 0 && *(data_65ae04 + 0x18) != 0)
        eax_52 = GetFocus()
    
    if ((0x8000 & eax_50) != 0 && *(data_65ae04 + 0x18) != 0 && (eax_52 == data_ce1790 || eax_52 == 0))
        var_28_1 = var_28_1 * 10f
    else if ((0x8000 & GetKeyState(0xa1)) != 0 && *(data_65ae04 + 0x18) != 0)
        HWND eax_55 = GetFocus()
        
        if (eax_55 == data_ce1790 || eax_55 == 0)
            var_28_1 = var_28_1 * 10f
    
    if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_65ae04 + 0x18) != 0)
        HWND eax_58 = GetFocus()
        
        if (eax_58 == data_ce1790 || eax_58 == 0)
            var_28_1 = var_28_1 * 0.100000001f
    
    float var_24_2 = 0f
    
    if ((0x8000 & GetKeyState(0x28)) != 0 && *(data_65ae04 + 0x18) != 0)
        HWND eax_61 = GetFocus()
        
        if (eax_61 == data_ce1790 || eax_61 == 0)
            var_24_2 = -1f
    
    HWND eax_62
    float xmm0_64
    
    if ((0x8000 & GetKeyState(0x26).w) == 0 || data_65ae04->__offset(0x18).b == 0)
        xmm0_64 = var_24_2
    else
        eax_62 = GetFocus()
        
        if (eax_62 == data_ce1790 || eax_62 == 0)
            xmm0_64 = var_24_2 + 1f
        else
            xmm0_64 = var_24_2
    
    xmm0_64 f- 0
    eax_62:1.b = (xmm0_64 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_64, 0f) ? 1 : 0) << 2
        | (xmm0_64 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int64_t var_1c
    float* ebx_1
    
    if (not(p_1))
        ebx_1 = arg4
    else
        float xmm0_66 = xmm0_64 * var_28_1 * 0.5f
        float xmm0_67 = sub_4145d0(xmm0_66)
        float xmm0_68 = xmm0_67 * 0f
        float xmm0_70 = sub_4145b0(xmm0_66)
        ebx_1 = arg4
        float xmm6_1 = *ebx_1
        float xmm7_1 = ebx_1[3]
        float xmm4_11 = ebx_1[2]
        float xmm3_11 = ebx_1[1] * xmm0_68
        float xmm2_10 = xmm4_11 * xmm0_68
        float xmm7_2 = xmm7_1 * xmm0_68
        float var_14_1 = xmm0_70 * xmm7_1 - xmm6_1 * xmm0_67 - xmm3_11 - xmm2_10
        float xmm6_2 = xmm6_1 * xmm0_68
        float xmm2_11 = ebx_1[1]
        var_1c.d = xmm0_70 * xmm2_11 + xmm7_2 + xmm4_11 * xmm0_67 - xmm6_2
        var_1c:4.d = xmm0_70 * xmm4_11 + xmm7_2 + xmm6_2 - xmm2_11 * xmm0_67
        *ebx_1 = (xmm0_70 * xmm6_1 + xmm7_1 * xmm0_67 + xmm3_11 - xmm2_10).o
    
    float var_24_4 = 0f
    
    if ((0x8000 & GetKeyState(0x25)) != 0 && *(data_65ae04 + 0x18) != 0)
        HWND eax_65 = GetFocus()
        
        if (eax_65 == data_ce1790 || eax_65 == 0)
            var_24_4 = 1f
    
    HWND result
    float xmm0_79
    
    if ((0x8000 & GetKeyState(0x27).w) == 0 || data_65ae04->__offset(0x18).b == 0)
        xmm0_79 = var_24_4
    else
        result = GetFocus()
        
        if (result == data_ce1790 || result == 0)
            xmm0_79 = var_24_4 - 1f
        else
            xmm0_79 = var_24_4
    
    xmm0_79 f- 0
    result:1.b = (xmm0_79 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_79, 0f) ? 1 : 0) << 2
        | (xmm0_79 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm0_81 = xmm0_79 * var_28_1 * 0.5f
        float xmm0_82 = sub_4145d0(xmm0_81)
        float xmm0_83 = xmm0_82 * 0f
        float xmm0_85
        result, xmm0_85 = sub_4145b0(xmm0_81)
        float xmm7_3 = *ebx_1
        float xmm4_12 = ebx_1[1]
        float xmm6_3 = ebx_1[2]
        float xmm2_14 = xmm7_3 * xmm0_83
        float xmm0_87 = xmm4_12 * xmm0_83
        float xmm2_16 = ebx_1[3] * xmm0_83
        float xmm3_18 = xmm6_3 * xmm0_83
        float var_14_2 = xmm0_85 * ebx_1[3] - xmm2_14 - xmm0_87 - xmm0_82 * xmm6_3
        var_1c.d = xmm0_85 * xmm4_12 + xmm2_16 + xmm0_82 * xmm7_3 - xmm3_18
        var_1c:4.d = xmm0_85 * xmm6_3 + xmm0_82 * ebx_1[3] + xmm0_87 - xmm2_14
        *ebx_1 = (xmm0_85 * xmm7_3 + xmm2_16 + xmm3_18 - xmm0_82 * xmm4_12).o
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
