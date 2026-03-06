// 函数名称: sub_454070
// 虚拟地址: 0x454070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_454070(void* arg1)
{
    // 第一条实际指令: float xmm0 = data_65aecc
    float xmm0 = data_65aecc
    int32_t ebx
    int32_t var_58 = ebx
    int32_t esi
    int32_t var_5c = esi
    int32_t edi
    int32_t var_60 = edi
    float temp0 = *(arg1 + 8)
    xmm0 - temp0
    int32_t eax
    eax:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
        | (xmm0 < temp0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
    label_4541f0:
        float xmm1_1[0x4] = data_65b0d4
        float xmm3_1[0x4] = data_65b0e4
        float xmm4_1[0x4] = data_65b0f4
        data_65aecc.o = *(arg1 + 8)
        data_65aedc = *(arg1 + 0x18)
        data_65aeec = *(arg1 + 0x28)
        int128_t xmm0_20 = *(arg1 + 0x38)
        data_65af8c = xmm1_1
        data_65aefc = xmm0_20
        int128_t xmm0_21 = data_65b104
        data_65af9c = xmm3_1
        data_65afbc = xmm0_21
        data_65afac = xmm4_1
        float xmm2_1 = *(arg1 + 0x168)
        float xmm0_23 = xmm2_1 * _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
        float xmm3_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        float xmm4_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa)
        data_65af8c:8 = xmm0_23
        data_65b2a0 = xmm2_1
        data_65af9c:8 = xmm2_1 * xmm3_2
        data_65afac:8 = xmm2_1 * xmm4_2
        float var_48[0x10]
        float* eax_2 = sub_45c930(&var_48, &data_65aecc, &data_65af8c, &var_48)
        data_65af0c = *eax_2
        data_65af1c = *(eax_2 + 0x10)
        data_65af2c = *(eax_2 + 0x20)
        data_65af3c = *(eax_2 + 0x30)
        float* eax_4 = sub_45c930(&var_48, &data_65af8c, &data_65b00c, &var_48)
        data_65afcc = *eax_4
        data_65afdc = *(eax_4 + 0x10)
        data_65afec = *(eax_4 + 0x20)
        data_65affc = *(eax_4 + 0x30)
        float* eax_6 = sub_45c930(&var_48, &data_65af0c, &data_65b00c, &var_48)
        data_65af4c = *eax_6
        data_65af5c = *(eax_6 + 0x10)
        data_65af6c = *(eax_6 + 0x20)
        data_65af7c = *(eax_6 + 0x30)
    else
        float xmm0_1 = data_65aed0
        float temp1_1 = *(arg1 + 0xc)
        xmm0_1 - temp1_1
        eax:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
            | (xmm0_1 < temp1_1 ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_4541f0
        
        float xmm0_2 = data_65aed4
        float temp2_1 = *(arg1 + 0x10)
        xmm0_2 - temp2_1
        eax:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
            | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_4541f0
        
        float xmm0_3 = data_65aed8
        float temp3_1 = *(arg1 + 0x14)
        xmm0_3 - temp3_1
        eax:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
            | (xmm0_3 < temp3_1 ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_4541f0
        
        float xmm0_4 = data_65aedc.d
        float temp4_1 = *(arg1 + 0x18)
        xmm0_4 - temp4_1
        eax:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2
            | (xmm0_4 < temp4_1 ? 1 : 0)
        bool p_9 = unimplemented  {test ah, 0x44}
        
        if (p_9)
            goto label_4541f0
        
        float xmm0_5 = data_65aedc:4
        float temp5_1 = *(arg1 + 0x1c)
        xmm0_5 - temp5_1
        eax:1.b = (xmm0_5 == temp5_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, temp5_1) ? 1 : 0) << 2
            | (xmm0_5 < temp5_1 ? 1 : 0)
        bool p_11 = unimplemented  {test ah, 0x44}
        
        if (p_11)
            goto label_4541f0
        
        float xmm0_6 = data_65aedc:8
        float temp7_1 = *(arg1 + 0x20)
        xmm0_6 - temp7_1
        eax:1.b = (xmm0_6 == temp7_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, temp7_1) ? 1 : 0) << 2
            | (xmm0_6 < temp7_1 ? 1 : 0)
        bool p_13 = unimplemented  {test ah, 0x44}
        
        if (p_13)
            goto label_4541f0
        
        float xmm0_7 = data_65aedc:0xc
        float temp8_1 = *(arg1 + 0x24)
        xmm0_7 - temp8_1
        eax:1.b = (xmm0_7 == temp8_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, temp8_1) ? 1 : 0) << 2
            | (xmm0_7 < temp8_1 ? 1 : 0)
        bool p_15 = unimplemented  {test ah, 0x44}
        
        if (p_15)
            goto label_4541f0
        
        float xmm0_8 = data_65aeec.d
        float temp9_1 = *(arg1 + 0x28)
        xmm0_8 - temp9_1
        eax:1.b = (xmm0_8 == temp9_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, temp9_1) ? 1 : 0) << 2
            | (xmm0_8 < temp9_1 ? 1 : 0)
        bool p_17 = unimplemented  {test ah, 0x44}
        
        if (p_17)
            goto label_4541f0
        
        float xmm0_9 = data_65aeec:4
        float temp10_1 = *(arg1 + 0x2c)
        xmm0_9 - temp10_1
        eax:1.b = (xmm0_9 == temp10_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, temp10_1) ? 1 : 0) << 2
            | (xmm0_9 < temp10_1 ? 1 : 0)
        bool p_19 = unimplemented  {test ah, 0x44}
        
        if (p_19)
            goto label_4541f0
        
        float xmm0_10 = data_65aeec:8
        float temp11_1 = *(arg1 + 0x30)
        xmm0_10 - temp11_1
        eax:1.b = (xmm0_10 == temp11_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, temp11_1) ? 1 : 0) << 2
            | (xmm0_10 < temp11_1 ? 1 : 0)
        bool p_21 = unimplemented  {test ah, 0x44}
        
        if (p_21)
            goto label_4541f0
        
        float xmm0_11 = data_65aeec:0xc
        float temp12_1 = *(arg1 + 0x34)
        xmm0_11 - temp12_1
        eax:1.b = (xmm0_11 == temp12_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, temp12_1) ? 1 : 0) << 2
            | (xmm0_11 < temp12_1 ? 1 : 0)
        bool p_23 = unimplemented  {test ah, 0x44}
        
        if (p_23)
            goto label_4541f0
        
        float xmm0_12 = data_65aefc.d
        float temp13_1 = *(arg1 + 0x38)
        xmm0_12 - temp13_1
        eax:1.b = (xmm0_12 == temp13_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, temp13_1) ? 1 : 0) << 2
            | (xmm0_12 < temp13_1 ? 1 : 0)
        bool p_25 = unimplemented  {test ah, 0x44}
        
        if (p_25)
            goto label_4541f0
        
        float xmm0_13 = data_65aefc:4
        float temp14_1 = *(arg1 + 0x3c)
        xmm0_13 - temp14_1
        eax:1.b = (xmm0_13 == temp14_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, temp14_1) ? 1 : 0) << 2
            | (xmm0_13 < temp14_1 ? 1 : 0)
        bool p_27 = unimplemented  {test ah, 0x44}
        
        if (p_27)
            goto label_4541f0
        
        float xmm0_14 = data_65aefc:8
        float temp15_1 = *(arg1 + 0x40)
        xmm0_14 - temp15_1
        eax:1.b = (xmm0_14 == temp15_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_14, temp15_1) ? 1 : 0) << 2
            | (xmm0_14 < temp15_1 ? 1 : 0)
        bool p_29 = unimplemented  {test ah, 0x44}
        
        if (p_29)
            goto label_4541f0
        
        float xmm0_15 = data_65aefc:0xc
        float temp16_1 = *(arg1 + 0x44)
        xmm0_15 - temp16_1
        eax:1.b = (xmm0_15 == temp16_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_15, temp16_1) ? 1 : 0) << 2
            | (xmm0_15 < temp16_1 ? 1 : 0)
        bool p_31 = unimplemented  {test ah, 0x44}
        
        if (p_31)
            goto label_4541f0
        
        float xmm0_16 = data_65b2a0
        float temp17_1 = *(arg1 + 0x168)
        xmm0_16 - temp17_1
        eax:1.b = (xmm0_16 == temp17_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_16, temp17_1) ? 1 : 0) << 2
            | (xmm0_16 < temp17_1 ? 1 : 0)
        bool p_33 = unimplemented  {test ah, 0x44}
        
        if (p_33)
            goto label_4541f0
    
    data_65b264 = *(arg1 + 0x48)
    void* eax_9
    int32_t edx
    eax_9, edx = sub_4b3f40(sub_4b3e00(*(arg1 + 0x48)))
    data_65b21c = eax_9
    void* esi_1 = arg1 + 0x4c
    int32_t eax_11
    
    for (int32_t i = 0; i s< 8; )
        eax_11 = *esi_1
        
        if (eax_11 != 0)
            *(&data_65b21c - arg1 + esi_1) = eax_11
            sub_4b4dc0(eax_11, i + 0x53, data_65b21c, *esi_1)
        
        i += 1
        esi_1 += 4
    
    char const* const var_6c
    int32_t var_68
    char const* const var_64_5
    char* ecx_3
    
    if (*(arg1 + 0x6c) == 0)
    label_45443c:
        data_65b1c8 = *(arg1 + 0x80)
        data_65b20c = *(arg1 + 0x90)
        data_65b1b4 = *(arg1 + 0xa0)
        data_65b1c4 = *(arg1 + 0x120)
        float xmm0_44 = *(arg1 + 0x120)
        xmm0_44 - 1f
        eax_11:1.b = (xmm0_44 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_44, 1f) ? 1 : 0) << 2
            | (xmm0_44 < 1f ? 1 : 0)
        bool p_35 = unimplemented  {test ah, 0x44}
        
        if (p_35)
            int32_t* ecx_8 = data_ce19b4
            data_65b1d8 = *(arg1 + 0x124)
            data_65b1e8 = *(arg1 + 0x134)
            data_65b174 = *(arg1 + 0xb0)
            data_65b184 = *(arg1 + 0xc0)
            data_65b194 = *(arg1 + 0xd0)
            data_65b1a4 = *(arg1 + 0xe0)
            data_65b144 = *(arg1 + 0xf0)
            data_65b154 = *(arg1 + 0x100)
            data_65b164 = *(arg1 + 0x110)
            data_65b208 = *(arg1 + 0x160)
            data_65b220 = arg1
            return (*(*ecx_8 + 0x40))(&data_65aecc)
        
        var_64_5 = "RenderStateSetMaterial"
        var_68 = 0xd7
        var_6c = "c:\ax2017\engine\draw3d.cpp"
        ecx_3 = "renderItem.diffuseAmbientRatio != 1.0f"
    else
        int128_t xmm0_38 = *(arg1 + 0x6c)
        int32_t* esi_2 = xmm0_38
        data_65b288 = xmm0_38
        eax_11 = *(arg1 + 0x7c)
        data_65b298 = eax_11
        
        if (esi_2[1] == 0x21)
            int32_t* eax_12 = *esi_2
            
            if (eax_12 == 0)
                edx.b = 0
                sub_4aa5d0(esi_2, edx.b)
                eax_12 = *esi_2
                
                if (eax_12 == 0)
                    sub_48dac0(esi_2)
                    eax_12 = *esi_2
            
            void* esi_3 = *eax_12
            sub_4b4dc0(sub_4b4dc0(eax_12, 0x58, data_65b21c, *(esi_3 + 0x28)), 0x59, data_65b21c, 
                *(esi_3 + 0x2c))
            data_65b1f8 = data_65b288:4.o
            goto label_45443c
        
        var_64_5 = "IBLDefGet"
        var_68 = 0x20
        var_6c = "c:\ax2017\engine\ibldef.cpp"
        ecx_3 = "assetPtr->assetType == ASSET_TYPE_IBL"
    
    sub_44e4d0(eax_11, &data_5559b1, ecx_3, var_6c, var_68, var_64_5)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
