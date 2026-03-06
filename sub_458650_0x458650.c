// 函数名称: sub_458650
// 虚拟地址: 0x458650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_458650(int32_t arg1, int128_t* arg2, float arg3 @ ecx, uint32_t arg4, int32_t arg5, int32_t arg6, uint32_t arg7)
{
    // 第一条实际指令: uint32_t ebx = arg4
    uint32_t ebx = arg4
    float eax = arg3
    
    if (*(eax i+ 0xc) != 0)
        if (ebx == 0)
            ebx = data_dff648
            
            if (arg7 == 0)
                ebx = data_dff644
        else if ((*(sub_452df0() + 0x1c) & 0x1000) != 0)
            ebx = data_dff644
        
        uint32_t (* esi_1)[0x4] = sub_454ae0()
        int32_t edx = 0
        *esi_1 = 0
        (*esi_1)[1] = eax
        *(esi_1 + 8) = *arg2
        *(esi_1 + 0x18) = arg2[1]
        *(esi_1 + 0x28) = arg2[2]
        int128_t xmm0_4 = arg2[3]
        (*esi_1)[0x12] = ebx
        *(esi_1 + 0x38) = xmm0_4
        
        if (arg6 s> 0)
            uint32_t* edi_1 = &(*esi_1)[0x13]
            
            do
                int32_t eax_4 = *(arg5 + (edx << 2))
                edi_1 = &edi_1[1]
                edx += 1
                edi_1[-1] = eax_4
            while (edx s< arg6)
        
        esi_1[0x16][0] = arg7
        (*esi_1)[0x53] = sub_454c70()
        uint32_t eax_7 = sub_454ce0()
        uint32_t ecx_3 = (*esi_1)[0x12]
        esi_1[0x15][0] = eax_7
        void* eax_9 = sub_4b3f40(sub_4b3e00(ecx_3))
        int32_t var_8_1 = *(eax i+ 0x24)
        void* eax_12 = sub_4b3f40(sub_4b3e00((*esi_1)[0x12]))
        int32_t* ecx_7 = *eax_12
        
        if (ecx_7[1] != 4)
            sub_44e4d0(eax_12, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_SHADER", 
                "c:\ax2017\engine\shader.cpp", 0x8a, "ShaderGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (*(sub_4459f0(ecx_7) + 0x28) == 1)
            var_8_1 = *(eax i+ 0x2c)
        
        uint32_t eax_16 = (*(*data_ce19b4 + 0x6c))(var_8_1, eax_9)
        (*esi_1)[0x57] = eax_16
        
        if (data_65b2b4 == 1)
            (*esi_1)[0x55] = 0
            return eax_16
        
        float xmm6_2 = *(eax i+ 0x114) f+ *(eax i+ 0x108)
        float xmm5_2 = *(eax i+ 0x11c) f+ *(eax i+ 0x110)
        float xmm2_3 = (*(eax i+ 0x118) f+ *(eax i+ 0x10c)) * 0.5f
        eax = data_65aec8
        float xmm6_3 = xmm6_2 * 0.5f
        float xmm5_3 = xmm5_2 * 0.5f
        int128_t var_2c_1 = data_65aeb0
        int64_t xmm0_18 = data_65aec0
        float xmm2_5 =
            xmm0_18.d - (*(arg2 + 4) * xmm2_3 + *arg2 * xmm6_3 + *(arg2 + 8) * xmm5_3 f+ *(arg2 + 0xc))
        float xmm0_20 = xmm0_18:4.d - (arg2[1].d f* xmm6_3 + *(arg2 + 0x14) * xmm2_3
            + *(arg2 + 0x18) * xmm5_3 f+ *(arg2 + 0x1c))
        float xmm1_7 = eax - (arg2[2].d f* xmm6_3 + *(arg2 + 0x24) * xmm2_3
            + *(arg2 + 0x28) * xmm5_3 f+ *(arg2 + 0x2c))
        (*esi_1)[0x55] = xmm2_5 * xmm2_5 + xmm0_20 * xmm0_20 + xmm1_7 * xmm1_7
    
    return eax
}
