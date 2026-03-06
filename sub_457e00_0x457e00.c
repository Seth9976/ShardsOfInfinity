// 函数名称: sub_457e00
// 虚拟地址: 0x457e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_457e00(int32_t arg1, float* arg2, float* arg3, int32_t* arg4, char arg5, int64_t arg6, float arg7, int32_t* arg8, int32_t* arg9)
{
    // 第一条实际指令: float var_88
    float var_88
    int32_t eax_1 = __security_cookie ^ &var_88
    int32_t* edi = arg8
    int32_t* eax_3 = arg9
    float (* var_80)[0x8] = arg2
    int32_t* var_84 = eax_3
    
    if (edi == 0)
        goto label_457e7e
    
    float* var_94_1 = arg3
    float var_34[0x8]
    
    if (sub_48f8a0(&var_34, arg2, edi, &var_34) != 0)
        var_80 = &var_34
        edi = *(*sub_454030(edi) + 0x24)
    
    if (edi == 0)
        eax_3 = var_84
    label_457e7e:
        void* eax_9 = *(sub_4459f0(eax_3) + 4)
        edi = sub_4b8b40(eax_9, *(eax_9 + 4) + 4, &data_5b6224, 0x53)
        
        if (edi == 0)
            edi = data_dfd4c4
    
    void* eax_12 = *(sub_4459f0(var_84) + 4)
    uint32_t eax_13 = sub_4b8b40(eax_12, *(eax_12 + 4) + 4, &data_5b6224, 0x54)
    char ecx_4 = data_cdf3e8
    uint32_t var_78 = 0
    
    if (data_65b2b4 != 1)
        if (data_cdf404 != 0)
            uint32_t eax_14 = data_cdf40c
            var_88 = data_cdf408
            var_78 = eax_14
            goto label_457f75
        
        float eax_15 = data_65aec8
        int128_t var_70_1 = data_65aeb0
        int64_t xmm0_3 = data_65aec0
        float xmm1_1 = xmm0_3.d
        float xmm2_1 = xmm0_3:4.d
        
        if (ecx_4 != 0)
            float xmm2_2 = xmm2_1 f- data_cdf3f0
            float xmm1_2 = xmm1_1 f- data_cdf3ec
            float xmm0_5 = eax_15 f- data_cdf3f4
            var_88 = xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_5 * xmm0_5
            goto label_457f75
        
        float xmm2_6 = xmm2_1 f- arg6:4.d
        float xmm1_4 = xmm1_1 f- arg6.d
        float xmm0_10 = eax_15 - arg7
        var_88 = xmm2_6 * xmm2_6 + xmm1_4 * xmm1_4 + xmm0_10 * xmm0_10
    label_458111:
        uint32_t (* eax_30)[0x4] = sub_454ae0()
        int128_t xmm0_12 = data_572ac0
        *eax_30 = 1
        (*eax_30)[0x13] = edi
        eax_30[5][0] = eax_13
        *(eax_30 + 8) = xmm0_12
        (*eax_30)[0x12] = var_84
        __builtin_memcpy(&(*eax_30)[6], 
            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
        "3f", 
            0x30)
        (*eax_30)[0x51] = data_cdb38c
        (*eax_30)[0x52] = 1
        (*eax_30)[0x53] = sub_454c70()
        uint32_t eax_34 = sub_454ce0()
        float xmm0_13 = var_88
        eax_30[0x15][0] = eax_34
        (*eax_30)[0x57] = 0
        (*eax_30)[0x55] = xmm0_13
        (*eax_30)[0x56] = var_78
    else
        var_88 = 0f
    label_457f75:
        
        if (ecx_4 == 0)
            goto label_458111
        
        int32_t eax_16 = data_7db388
        
        if (eax_16 == 0 || (&data_65b208)[eax_16 * 0x60] != 1 || data_cdb38c s>= 0x7fff
                || *(eax_16 * 0x180 + 0x65b250) != var_84 || *(eax_16 * 0x180 + 0x65b254) != edi)
            goto label_458111
        
        if (sub_45c0e0(&(&data_65b370)[eax_16 * 0x18]:4, &data_65b2a4) != 0)
            goto label_458111
        
        if (sub_45c0e0(&(&data_65b288)[eax_16 * 0x18], &data_65b2c8) != 0)
            goto label_458111
        
        if (sub_45c0e0(&(&data_65b298)[eax_16 * 0x60], &data_65b2b8) != 0)
            goto label_458111
        
        if (sub_45c0e0(&(&data_65b2a4)[eax_16 * 0x18]:4, &data_65b2d8) != 0)
            goto label_458111
        
        (&data_65b31c)[eax_16 * 0x18]:0xc f- data_65b2e8
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            goto label_458111
        
        if (sub_45cc80(&(&data_65b32c)[eax_16 * 0x18], &data_65b360) != 0)
            goto label_458111
        
        if (sub_45cc80(&(&data_65b33c)[eax_16 * 0x18], &data_65b370) != 0
                || (&data_65b360)[eax_16 * 0x18]:0xc != data_65b380)
            goto label_458111
        
        float xmm0_8 = (&data_65b370)[eax_16 * 0x18].d
        float temp1_1 = data_65b384
        xmm0_8 - temp1_1
        int32_t eax_24
        eax_24:1.b = (xmm0_8 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, temp1_1) ? 1 : 0) << 2
            | (xmm0_8 < temp1_1 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_458111
        
        int32_t eax_25 = sub_454c70()
        
        if ((&data_65b34c)[eax_16 * 0x18]:8 != eax_25)
            goto label_458111
        
        int32_t eax_26 = sub_454ce0()
        
        if ((&data_65b34c)[eax_16 * 0x18]:0xc != eax_26)
            goto label_458111
        
        float xmm0_9 = (&data_65b35c)[eax_16 * 0x60]
        float temp2_1 = var_88
        xmm0_9 - temp2_1
        eax_26:1.b = (xmm0_9 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, temp2_1) ? 1 : 0) << 2
            | (xmm0_9 < temp2_1 ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6 || *(eax_16 * 0x180 + 0x65b254) != edi)
            goto label_458111
        
        data_7db388
        (&data_65b34c)[data_7db388 * 0x18]:4 += 1
    
    int32_t eax_36 = data_cdb38c
    data_cdb38c = eax_36 + 1
    float xmm1_7 = arg3[8] - arg3[2]
    float xmm2_11 = arg3[7] - arg3[1]
    float xmm4_1 = arg3[4] - arg3[1]
    float xmm3_1 = arg3[5] - arg3[2]
    float xmm7_1 = arg3[6] - *arg3
    float xmm6_1 = arg3[3] - *arg3
    int32_t esi_6 = eax_36 * 0xa0
    float xmm5_2 = xmm2_11 * xmm3_1 - xmm1_7 * xmm4_1
    float xmm7_3 = xmm7_1 * xmm4_1 - xmm2_11 * xmm6_1
    float xmm1_9 = xmm1_7 * xmm6_1 - xmm7_1 * xmm3_1
    var_88 = xmm7_3
    float xmm1_14 =
        1f / (sub_412d90(xmm1_9 * xmm1_9 + xmm5_2 * xmm5_2 + xmm7_3 * xmm7_3) + 9.99999975e-06f)
    float xmm1_15 = xmm1_14 * var_88
    int64_t xmm2_15 = _mm_unpacklo_ps(xmm1_14 * xmm5_2, xmm1_14 * xmm1_9)
    *(esi_6 + &data_7db38c) = *arg3
    *(esi_6 + 0x7db394) = arg3[2]
    *(esi_6 + 0x7db398) = xmm2_15
    *(esi_6 + 0x7db3a0) = xmm1_15
    int32_t edx_4 = *arg4
    var_88 = xmm1_15
    *(esi_6 + 0x7db3a4) = (((((edx_4 u>> 0x18 << 8) + zx.d(edx_4.b)) << 8) + zx.d((edx_4 u>> 8).b))
        << 8) + zx.d((edx_4 u>> 0x10).b)
    int32_t ecx_24 = arg4[1]
    *(esi_6 + 0x7db3a8) = (((((ecx_24 u>> 0x18 << 8) + zx.d(ecx_24.b)) << 8) + zx.d((ecx_24 u>> 8).b))
        << 8) + zx.d((ecx_24 u>> 0x10).b)
    *(esi_6 + 0x7db3ac) = *var_80
    *(esi_6 + 0x7db3b0) = (*var_80)[1]
    *(esi_6 + 0x7db3b4) = *(arg3 + 0xc)
    *(esi_6 + 0x7db3bc) = arg3[5]
    float eax_52 = var_88
    *(esi_6 + 0x7db3c0) = xmm2_15
    *(esi_6 + 0x7db3c8) = eax_52
    int32_t ecx_30
    
    if (arg5 == 0)
        int32_t ecx_31 = *arg4
        *(esi_6 + 0x7db3cc) = (((((ecx_31 u>> 0x18 << 8) + zx.d(ecx_31.b)) << 8)
            + zx.d((ecx_31 u>> 8).b)) << 8) + zx.d((ecx_31 u>> 0x10).b)
        ecx_30 = arg4[1]
    else
        int32_t ecx_28 = arg4[2]
        *(esi_6 + 0x7db3cc) = (((((ecx_28 u>> 0x18 << 8) + zx.d(ecx_28.b)) << 8)
            + zx.d((ecx_28 u>> 8).b)) << 8) + zx.d((ecx_28 u>> 0x10).b)
        ecx_30 = arg4[3]
    
    *(esi_6 + 0x7db3d0) = (((((ecx_30 u>> 0x18 << 8) + zx.d(ecx_30.b)) << 8) + zx.d((ecx_30 u>> 8).b))
        << 8) + zx.d((ecx_30 u>> 0x10).b)
    *(esi_6 + 0x7db3d4) = (*var_80)[2]
    *(esi_6 + 0x7db3d8) = (*var_80)[3]
    *(esi_6 + 0x7db3dc) = *(arg3 + 0x18)
    *(esi_6 + 0x7db3e4) = arg3[8]
    float eax_72 = var_88
    *(esi_6 + 0x7db3e8) = xmm2_15
    *(esi_6 + 0x7db3f0) = eax_72
    int32_t ecx_37
    
    if (arg5 == 0)
        int32_t ecx_38 = *arg4
        *(esi_6 + 0x7db3f4) = (((((ecx_38 u>> 0x18 << 8) + zx.d(ecx_38.b)) << 8)
            + zx.d((ecx_38 u>> 8).b)) << 8) + zx.d((ecx_38 u>> 0x10).b)
        ecx_37 = arg4[1]
    else
        int32_t ecx_35 = arg4[4]
        *(esi_6 + 0x7db3f4) = (((((ecx_35 u>> 0x18 << 8) + zx.d(ecx_35.b)) << 8)
            + zx.d((ecx_35 u>> 8).b)) << 8) + zx.d((ecx_35 u>> 0x10).b)
        ecx_37 = arg4[5]
    
    *(esi_6 + 0x7db3f8) = (((((ecx_37 u>> 0x18 << 8) + zx.d(ecx_37.b)) << 8) + zx.d((ecx_37 u>> 8).b))
        << 8) + zx.d((ecx_37 u>> 0x10).b)
    *(esi_6 + 0x7db3fc) = (*var_80)[4]
    *(esi_6 + 0x7db400) = (*var_80)[5]
    *(esi_6 + 0x7db404) = *(arg3 + 0x24)
    *(esi_6 + 0x7db40c) = arg3[0xb]
    float eax_92 = var_88
    *(esi_6 + 0x7db410) = xmm2_15
    *(esi_6 + 0x7db418) = eax_92
    int32_t ecx_44
    
    if (arg5 == 0)
        int32_t ecx_45 = *arg4
        *(esi_6 + 0x7db41c) = (((((ecx_45 u>> 0x18 << 8) + zx.d(ecx_45.b)) << 8)
            + zx.d((ecx_45 u>> 8).b)) << 8) + zx.d((ecx_45 u>> 0x10).b)
        ecx_44 = arg4[1]
    else
        int32_t ecx_42 = arg4[6]
        *(esi_6 + 0x7db41c) = (((((ecx_42 u>> 0x18 << 8) + zx.d(ecx_42.b)) << 8)
            + zx.d((ecx_42 u>> 8).b)) << 8) + zx.d((ecx_42 u>> 0x10).b)
        ecx_44 = arg4[7]
    
    *(esi_6 + 0x7db420) = (((((ecx_44 u>> 0x18 << 8) + zx.d(ecx_44.b)) << 8) + zx.d((ecx_44 u>> 8).b))
        << 8) + zx.d((ecx_44 u>> 0x10).b)
    *(esi_6 + 0x7db424) = (*var_80)[6]
    float result = (*var_80)[7]
    *(esi_6 + 0x7db428) = result
    @__security_check_cookie@4(eax_1 ^ &var_88)
    return result
}
