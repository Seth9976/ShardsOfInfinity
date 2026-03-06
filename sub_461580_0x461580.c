// 函数名称: sub_461580
// 虚拟地址: 0x461580
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_461580(void* arg1, int32_t* arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: int32_t xmm3 = (zx.o(0)).d
    int32_t xmm3 = (zx.o(0)).d
    int32_t xmm0 = (zx.o(0)).d
    float xmm5 = arg2[1]
    float xmm4 = arg2[2]
    xmm5 f- 0
    int32_t eax
    eax:1.b = (xmm5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5, 0f) ? 1 : 0) << 2 | (xmm5 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        float xmm2_1 = (arg3 - xmm4) / xmm5
        
        if (not(0 f> xmm2_1))
            xmm0 = _mm_min_ss(0x3f800000, xmm2_1)
    else if (not(arg3 < xmm4))
        xmm0 = 0x3f800000
    
    int32_t ecx = arg2[3]
    float xmm0_1 = xmm0 f- 0f
    int32_t xmm5_1
    
    if (not(0 f< xmm0_1))
        xmm5_1 = (zx.o(0)).d
    else if (xmm0_1 < 1f)
        xmm5_1 = sub_4145f0(ecx, xmm0_1, (zx.o(0)).d, 1f)
        xmm3 = (zx.o(0)).d
    else if (ecx == 0xa || ecx == 0xc || ecx == 0xb || ecx == 0xd || ecx == 0xe || ecx == 0xf
            || ecx == 0x13)
        xmm5_1 = (zx.o(0)).d
    else
        xmm5_1 = 0x3f800000
    
    uint32_t eax_2 = *arg2 - 0x69
    
    if (eax_2 u<= 0x6f)
        eax_2 = zx.d(lookup_table_4619dc[eax_2])
        
        switch (eax_2)
            case 0
                return eax_2
            case 1
                int32_t eax_3 = *(arg1 + 0x644) * 0x208
                int32_t ecx_1 = *(arg1 + 0x640) * 0x208
                float var_10_1 = (*(ecx_1 + arg1 + 0x18) f- *(eax_3 + arg1 + 0x18)) f* xmm5_1 f+
                    *(eax_3 + arg1 + 0x18)
                float var_c_1 = (*(ecx_1 + arg1 + 0x1c) f- *(eax_3 + arg1 + 0x1c)) f* xmm5_1 f+
                    *(eax_3 + arg1 + 0x1c)
                float var_8_1 = (*(ecx_1 + arg1 + 0x20) f- *(eax_3 + arg1 + 0x20)) f* xmm5_1 f+
                    *(eax_3 + arg1 + 0x20)
                *(*(arg1 + 0x63c) * 0x208 + arg1 + 0x14) = (
                    (*(ecx_1 + arg1 + 0x14) f- *(eax_3 + arg1 + 0x14)) f* xmm5_1 f+
                    *(eax_3 + arg1 + 0x14)).o
                int32_t eax_5 = *(arg1 + 0x644) * 0x208
                int32_t ecx_2 = *(arg1 + 0x640) * 0x208
                float xmm0_20 = *(eax_5 + arg1 + 0xb0)
                float xmm0_21 = *(eax_5 + arg1 + 0xb4)
                int32_t eax_6 = *(arg1 + 0x63c) * 0x208
                float xmm1_4 = (*(ecx_2 + arg1 + 0xb4) - xmm0_21) f* xmm5_1
                *(eax_6 + arg1 + 0xb0) = (*(ecx_2 + arg1 + 0xb0) - xmm0_20) f* xmm5_1 + xmm0_20
                *(eax_6 + arg1 + 0xb4) = xmm1_4 + xmm0_21
                int32_t ecx_3 = *(arg1 + 0x63c) * 0x208
                int128_t xmm0_22 = *(*(arg1 + 0x640) * 0x208 + arg1 + 0x38)
                *(ecx_3 + arg1 + 0x28) = *(*(arg1 + 0x644) * 0x208 + arg1 + 0x38)
                *(ecx_3 + arg1 + 0x38) = xmm0_22
                *(ecx_3 + arg1 + 0x48) = xmm5_1
                return xmm5_1
            case 2
                if (not(0 f> xmm5_1))
                    xmm3 = _mm_min_ss(0x3f800000, xmm5_1)
                
                float xmm1_9 = *(*(arg1 + 0x644) * 0x208 + arg1 + 0x24)
                int32_t eax_24 = *(arg1 + 0x63c) * 0x208
                *(eax_24 + arg1 + 0x24) =
                    (*(*(arg1 + 0x640) * 0x208 + arg1 + 0x24) - xmm1_9) f* xmm3 + xmm1_9
                return eax_24
            case 3
                int32_t ecx_4 = *(arg1 + 0x640) * 0x208
                int32_t eax_9 = *(arg1 + 0x644) * 0x208
                float xmm1_7 = *(eax_9 + arg1 + 0xcc)
                float xmm2_7 = *(eax_9 + arg1 + 0xd0)
                float xmm3_1 = *(eax_9 + arg1 + 0xd4)
                float xmm4_1 = *(eax_9 + arg1 + 0xd8)
                int32_t eax_10 = *(arg1 + 0x63c) * 0x208
                float var_10_2 = (*(ecx_4 + arg1 + 0xd0) - xmm2_7) f* xmm5_1 + xmm2_7
                float var_c_2 = (*(ecx_4 + arg1 + 0xd4) - xmm3_1) f* xmm5_1 + xmm3_1
                float var_8_2 = (*(ecx_4 + arg1 + 0xd8) - xmm4_1) f* xmm5_1 + xmm4_1
                *(eax_10 + arg1 + 0xcc) = ((*(ecx_4 + arg1 + 0xcc) - xmm1_7) f* xmm5_1 + xmm1_7).o
                return eax_10
            case 4
                int32_t edx_2 = *(*(arg1 + 0x644) * 0x208 + arg1 + 0xdc)
                float xmm0_46 =
                    _mm_cvtepi32_ps(zx.o(*(*(arg1 + 0x640) * 0x208 + arg1 + 0xdc) - edx_2)) f* xmm5_1
                float xmm0_47
                
                if (0 f<= xmm0_46)
                    xmm0_47 = xmm0_46 + 0.5f
                else
                    xmm0_47 = xmm0_46 - 0.5f
                
                int32_t eax_21 = *(arg1 + 0x63c) * 0x208
                *(eax_21 + arg1 + 0xdc) = int.d(xmm0_47) + edx_2
                return eax_21
            case 5
                if (not(0 f> xmm5_1))
                    xmm3 = _mm_min_ss(0x3f800000, xmm5_1)
                
                char* eax_13 = sub_47bf90(arg1 + 0x110 + *(arg1 + 0x644) * 0x208, 
                    arg1 + 0x110 + *(arg1 + 0x640) * 0x208, xmm3)
                *(*(arg1 + 0x63c) * 0x208 + arg1 + 0x110) = eax_13
                return eax_13
            case 6
                float xmm1_8 = *(*(arg1 + 0x644) * 0x208 + arg1 + 0x1c8)
                int32_t eax_16 = *(arg1 + 0x63c) * 0x208
                *(eax_16 + arg1 + 0x1c8) =
                    (*(*(arg1 + 0x640) * 0x208 + arg1 + 0x1c8) - xmm1_8) f* xmm5_1 + xmm1_8
                return eax_16
    
    sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0xc22, "UI2ApplyTransition")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
