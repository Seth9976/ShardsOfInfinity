// 函数名称: sub_46b290
// 虚拟地址: 0x46b290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_46b290(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t* ecx = __alloca_probe(0x1058)
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    bool cond:0 = data_5cea36 == 0
    data_64f849 = 1
    float* var_1058 = ecx
    int128_t* result
    float var_1054
    float var_1050[0x4]
    int128_t var_1038
    float var_1028
    
    if (cond:0)
    label_46b7c6:
        int32_t var_1c_7 = data_5cea2c
        int32_t ecx_11 = data_5cd9fc
        int32_t* var_20_1 = &data_5cda2c
        float* var_24_1 = &var_1054
        var_1054 = 0f
        int32_t var_1018[0x3fd]
        result = sub_46ab50(&var_1054, &var_1018, ecx_11, var_24_1, var_20_1, var_1c_7)
        int32_t edi_1 = 0
        
        if (var_1054 s> 0)
            BOOL eax_22
            
            while (true)
                int32_t ecx_12 = var_1018[edi_1]
                int32_t var_20_2
                char const* const var_1c_10
                char* ecx_18
                
                if (ecx_12 == 0)
                    var_1c_10 = "DataArray<struct UI2>::DataArrayGet"
                    var_20_2 = 0x6c
                    ecx_18 = "id != DATAID_NULL"
                else
                    uint32_t edx_3 = zx.d(ecx_12.w)
                    
                    if (edx_3 u< data_5c99a4)
                        result = edx_3 * 0x1008 + data_5c99a0
                        
                        if (*(result + 0x1004) == ecx_12)
                            char* esi_3 = edx_3 * 0x1008 + data_5c99a0
                            int32_t eax_18 = *(esi_3 + 0x63c) * 0x208
                            var_1028 = *(eax_18 + esi_3 + 0x14) + *var_1058
                            float var_1024_4 = *(eax_18 + esi_3 + 0x18) + var_1058[1]
                            float var_1020_4 = *(eax_18 + esi_3 + 0x1c) + *var_1058
                            float var_101c_4 = *(eax_18 + esi_3 + 0x20) + var_1058[1]
                            int128_t* var_1c_9 = &var_1050
                            var_1050 = *sub_47bc00(&var_1038, edx_3, &var_1028, &var_1038)
                            result = sub_46b230(&var_1050, 0x71, esi_3, var_1c_9)
                            edi_1 += 1
                            
                            if (edi_1 s< var_1054)
                                continue
                            
                            @__security_check_cookie@4(arg1 ^ &__saved_ebp)
                            return result
                    
                    var_1c_10 = "DataArray<struct UI2>::DataArrayGet"
                    var_20_2 = 0x6d
                    ecx_18 = "DataArrayTryToGet(id) != NULL"
                
                sub_44e4d0(result, &data_5559b1, ecx_18, "c:\ax2017\engine\dataarray.h", var_20_2, 
                    var_1c_10)
                eax_22 = IsDebuggerPresent()
                break
            
            if (eax_22 == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    else
        int16_t eax_2 = GetKeyState(0x11)
        HWND eax_4
        
        if ((0x8000 & eax_2) != 0 && *(data_65ae04 + 0x18) != 0)
            eax_4 = GetFocus()
        
        float* eax_10
        
        if ((0x8000 & eax_2) != 0 && *(data_65ae04 + 0x18) != 0 && (eax_4 == data_ce1790 || eax_4 == 0))
            if (data_5cea2c != 1)
                sub_44e4d0(eax_4, &data_5559b1, "gUI2Editor.s.activeSetCount == 1", 
                    "c:\ax2017\engine\ui2.cpp", 0x1ced, "UI2OffsetActiveSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char* eax_5
            int32_t edx
            eax_5, edx = sub_469160(data_5cda2c)
            int128_t* var_1c_2 = &var_1050
            int32_t ecx_2 = *(eax_5 + 0x63c) * 0x208
            var_1028 = *ecx f+ *(ecx_2 + eax_5 + 0x14)
            float var_1024_1 = *(ecx_2 + eax_5 + 0x18) f+ ecx[1]
            float var_1020_1 = *(ecx_2 + eax_5 + 0x1c) f+ *ecx
            float var_101c_1 = *(ecx_2 + eax_5 + 0x20) f+ ecx[1]
            int128_t xmm5_1 = *sub_47bc00(&var_1050, edx, &var_1028, var_1c_2)
            var_1038 = xmm5_1
            int32_t eax_8 = *(eax_5 + 0x63c) * 0x208
            var_1028.o = xmm5_1
            float xmm3_1 = *(eax_8 + eax_5 + 0x14)
            float xmm2_1 = *(eax_8 + eax_5 + 0x18)
            float xmm1_2 = *(eax_8 + eax_5 + 0x1c) - xmm3_1
            float xmm0_10 = *(eax_8 + eax_5 + 0x20) - xmm2_1
            float xmm5_4 = *(eax_8 + eax_5 + 0xd4) * xmm1_2 + xmm3_1
            float xmm6_3 = xmm1_2 f* *(eax_8 + eax_5 + 0xcc) + xmm3_1
            float xmm0_11[0x4] = var_1028.o
            float xmm4_3 = *(eax_8 + eax_5 + 0xd0) * xmm0_10 + xmm2_1
            float xmm3_4 = *(eax_8 + eax_5 + 0xd8) * xmm0_10 + xmm2_1
            float xmm1_4[0x4] = _mm_shuffle_ps(xmm0_11, xmm0_11, 0xaa)
            var_1050 = xmm1_4
            float xmm2_2 = xmm1_4[0]
            float xmm7_2 = _mm_shuffle_ps(xmm0_11, xmm0_11, 0x55)
            float xmm1_6 = _mm_shuffle_ps(xmm0_11, xmm0_11, 0xff)
            float xmm5_5
            int32_t xmm6_4
            
            if (not(xmm0_11 f<= xmm6_3))
                xmm5_5 = xmm6_3
                xmm6_4 = xmm2_2 f- xmm0_11 + xmm6_3
            else if (xmm5_4 <= xmm2_2)
                xmm5_5 = (var_1028.o).d
                xmm6_4 = var_1050.d
            else
                xmm6_4 = xmm5_4
                xmm5_5 = xmm5_4 - (xmm2_2 f- xmm0_11)
            
            if (not(xmm7_2 <= xmm4_3))
                float xmm1_7 = xmm1_6 - xmm7_2
                xmm7_2 = xmm4_3
                xmm1_6 = xmm1_7 + xmm4_3
            else if (not(xmm3_4 <= xmm1_6))
                float xmm2_7 = xmm1_6 - xmm7_2
                xmm1_6 = xmm3_4
                xmm7_2 = xmm3_4 - xmm2_7
            
            var_1038.d = xmm5_5
            var_1038:4.d = xmm7_2
            var_1038:8.d = xmm6_4
            var_1038:0xc.d = xmm1_6
            sub_46b230(&var_1038, 0x71, eax_5, &var_1038)
            float xmm0_15 = var_1038.d
            eax_10 = &var_1028
            float xmm2_9 = var_1038:8.d - xmm0_15
            float xmm1_8 = var_1038:4.d
            float xmm3_6 = var_1038:0xc.d - xmm1_8
            var_1028 = (xmm6_3 - xmm0_15) / xmm2_9
            float var_1024_2 = (xmm4_3 - xmm1_8) / xmm3_6
            float var_1020_2 = (xmm5_4 - xmm0_15) / xmm2_9
            float var_101c_2 = (xmm3_4 - xmm1_8) / xmm3_6
            result = sub_46b230(eax_10, 0x79, eax_5, eax_10)
        else
            if (data_5cea36 == 0)
                goto label_46b7c6
            
            HWND eax_11 = GetKeyState(0x11)
            
            if ((0x8000 & eax_11.w) != 0)
                eax_11 = data_65ae04
                
                if (eax_11->__offset(0x18).b == 0)
                    goto label_46b5cb
                
                eax_11 = GetFocus()
                
                if (eax_11 == data_ce1790 || eax_11 == 0)
                    goto label_46b7c6
            
        label_46b5cb:
            
            if (data_5cea2c != 1)
                sub_44e4d0(eax_11, &data_5559b1, "gUI2Editor.s.activeSetCount == 1", 
                    "c:\ax2017\engine\ui2.cpp", 0x1cf9, "UI2OffsetActiveSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char* eax_12
            int32_t edx_1
            eax_12, edx_1 = sub_469160(data_5cda2c)
            int128_t* var_1c_5 = &var_1050
            int32_t ecx_6 = *(eax_12 + 0x63c) * 0x208
            float xmm6_5 = *(ecx_6 + eax_12 + 0x14)
            float xmm5_6 = *(ecx_6 + eax_12 + 0x18)
            float xmm4_14 = *(ecx_6 + eax_12 + 0x1c) - xmm6_5
            float xmm3_8 = *(ecx_6 + eax_12 + 0x20) - xmm5_6
            var_1028 = xmm4_14 f* *(ecx_6 + eax_12 + 0xcc) + xmm6_5 f+ *ecx
            float var_1024_3 = *(ecx_6 + eax_12 + 0xd0) * xmm3_8 + xmm5_6 f+ ecx[1]
            float var_1020_3 = *(ecx_6 + eax_12 + 0xd4) * xmm4_14 + xmm6_5 f+ *ecx
            float var_101c_3 = *(ecx_6 + eax_12 + 0xd8) * xmm3_8 + xmm5_6 f+ ecx[1]
            float xmm3_9[0x4] = *sub_47bc00(&var_1050, edx_1, &var_1028, var_1c_5)
            int32_t eax_15 = *(eax_12 + 0x63c) * 0x208
            float xmm5_7 = xmm3_9[0]
            float xmm4_16 = _mm_shuffle_ps(xmm3_9, xmm3_9, 0xaa)
            float xmm2_11 = _mm_shuffle_ps(xmm3_9, xmm3_9, 0x55)
            float xmm3_10 = _mm_shuffle_ps(xmm3_9, xmm3_9, 0xff)
            float xmm1_9 = *(eax_15 + eax_12 + 0x14)
            float xmm0_36 = *(eax_15 + eax_12 + 0x1c) - xmm1_9
            float xmm1_10 = *(eax_15 + eax_12 + 0x18)
            float xmm5_9 = (xmm5_7 - xmm1_9) / xmm0_36
            float xmm4_18 = (xmm4_16 - xmm1_9) / xmm0_36
            float xmm7_4 = xmm5_9
            float xmm0_38 = *(eax_15 + eax_12 + 0x20) - xmm1_10
            var_1054 = xmm5_9
            float xmm1_11 = xmm4_18
            float xmm2_13[0x4] = (xmm2_11 - xmm1_10) / xmm0_38
            float xmm3_12 = (xmm3_10 - xmm1_10) / xmm0_38
            var_1050 = xmm2_13
            float xmm6_6 = xmm2_13[0]
            float xmm0_39 = xmm3_12
            
            if (not(0f <= xmm7_4))
                xmm7_4 = (zx.o(0)).d
                xmm1_11 = xmm1_11 - var_1054 + 0f
            else if (not(xmm4_18 <= 1f))
                xmm1_11 = 1f
                xmm7_4 = 1f - (xmm4_18 - var_1054)
            
            float xmm4_20 = var_1050.d
            
            if (not(0 f<= xmm4_20))
                xmm6_6 = (zx.o(0)).d
                xmm0_39 = xmm3_12 - xmm4_20 + 0f
            else if (not(xmm3_12 <= 1f))
                xmm0_39 = 1f
                xmm6_6 = 1f - (xmm3_12 - xmm4_20)
            
            var_1038.d = xmm7_4
            eax_10 = &var_1038
            var_1038:4.d = xmm6_6
            var_1038:8.d = xmm1_11
            var_1038:0xc.d = xmm0_39
            result = sub_46b230(eax_10, 0x79, eax_12, eax_10)
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
