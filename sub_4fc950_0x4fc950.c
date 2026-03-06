// 函数名称: sub_4fc950
// 虚拟地址: 0x4fc950
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __fastcallsub_4fc950(float* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int128_t* eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* var_14 = eax_1
    int32_t* var_2c = arg1
    float var_40[0x4]
    float var_28
    
    if (data_d77c72 != 0)
        eax_1 = GetKeyState(0x11)
        int32_t var_58
        
        if ((0x8000 & eax_1.w) != 0)
            if (data_d77c6c != 1)
                char const* const var_54_1 = "OffsetActiveSet"
                var_58 = 0x297
                goto label_4fce18
            
            void* eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_4fbab0(data_d76c6c, nullptr)
            var_28 = *(eax_2 + 0xc) + *arg1
            float var_24_1 = *(eax_2 + 0x10) + arg1[1]
            float var_20_1 = *(eax_2 + 0x14) + *arg1
            float var_1c_1 = *(eax_2 + 0x18) + arg1[1]
            int128_t* eax_4 = sub_47bc00(&var_40, edx_1, &var_28, &var_40)
            float xmm3 = *(eax_2 + 0xc)
            float xmm2 = *(eax_2 + 0x10)
            float xmm1_1 = *(eax_2 + 0x14) - xmm3
            var_28.o = *eax_4
            float xmm7_2 = xmm1_1 f* *(eax_2 + 0x74) + xmm3
            float xmm0_11 = *(eax_2 + 0x18) - xmm2
            float xmm6_2 = *(eax_2 + 0x7c) * xmm1_1 + xmm3
            float xmm0_12[0x4] = *eax_4
            float xmm5_2 = *(eax_2 + 0x78) * xmm0_11 + xmm2
            float xmm4_2 = *(eax_2 + 0x80) * xmm0_11 + xmm2
            float xmm1_3[0x4] = _mm_shuffle_ps(xmm0_12, xmm0_12, 0xaa)
            var_40 = xmm1_3
            float xmm2_1 = xmm1_3[0]
            float xmm3_2 = _mm_shuffle_ps(xmm0_12, xmm0_12, 0x55)
            float xmm1_5 = _mm_shuffle_ps(xmm0_12, xmm0_12, 0xff)
            
            if (not(xmm0_12 f<= xmm7_2))
                var_28 = xmm7_2
                var_40[0] = xmm2_1 f- xmm0_12 + xmm7_2
            else if (not(xmm6_2 <= xmm2_1))
                var_40[0] = xmm6_2
                var_28 = xmm6_2 - (xmm2_1 f- xmm0_12)
            
            if (not(xmm3_2 <= xmm5_2))
                float xmm1_6 = xmm1_5 - xmm3_2
                xmm3_2 = xmm5_2
                xmm1_5 = xmm1_6 + xmm5_2
            else if (not(xmm4_2 <= xmm1_5))
                float xmm2_6 = xmm1_5 - xmm3_2
                xmm1_5 = xmm4_2
                xmm3_2 = xmm4_2 - xmm2_6
            
            float var_1c_2 = xmm1_5
            var_28 = (var_28.o).d
            int32_t var_20_2 = var_40.d
            float var_24_2 = xmm3_2
            *(eax_2 + 0xc) = var_28.o
            float xmm3_4 = *(eax_2 + 0xc)
            float xmm2_7 = *(eax_2 + 0x10)
            float xmm0_20 = *(eax_2 + 0x18) - xmm2_7
            float xmm1_8 = *(eax_2 + 0x14) - xmm3_4
            var_28 = (xmm7_2 - xmm3_4) / xmm1_8
            float var_24_3 = (xmm5_2 - xmm2_7) / xmm0_20
            float var_20_3 = (xmm6_2 - xmm3_4) / xmm1_8
            float var_1c_3 = (xmm4_2 - xmm2_7) / xmm0_20
            *(eax_2 + 0x74) = var_28.o
            @__security_check_cookie@4(var_14 ^ &__saved_ebp)
            return eax_4
        
        if (data_d77c72 != 0)
            eax_1 = GetKeyState(0x11)
            
            if ((0x8000 & eax_1.w) == 0)
                if (data_d77c6c != 1)
                    char const* const var_54_5 = "OffsetActiveSet"
                    var_58 = 0x2a2
                label_4fce18:
                    sub_44e4d0(eax_1, &data_5559b1, "gUI.s.activeSetCount == 1", 
                        "c:\ax2017\engine\editor\uieditor.cpp", var_58, "OffsetActiveSet")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_44e680()
                        noreturn
                    
                    breakpoint
                
                void* eax_5
                int32_t edx_2
                eax_5, edx_2 = sub_4fbab0(data_d76c6c, nullptr)
                float xmm6_5 = *(eax_5 + 0xc)
                float xmm5_5 = *(eax_5 + 0x10)
                float xmm4_6 = *(eax_5 + 0x14) - xmm6_5
                float xmm3_6 = *(eax_5 + 0x18) - xmm5_5
                var_28 = xmm4_6 f* *(eax_5 + 0x74) + xmm6_5 + *arg1
                float var_24_4 = *(eax_5 + 0x78) * xmm3_6 + xmm5_5 + arg1[1]
                float var_20_4 = *(eax_5 + 0x7c) * xmm4_6 + xmm6_5 + *arg1
                float var_1c_4 = *(eax_5 + 0x80) * xmm3_6 + xmm5_5 + arg1[1]
                int128_t* eax_7 = sub_47bc00(&var_40, edx_2, &var_28, &var_40)
                float xmm3_7 = *(eax_5 + 0xc)
                float xmm1_10 = *(eax_5 + 0x14) - xmm3_7
                float xmm4_7 = *(eax_5 + 0x10)
                float xmm5_6[0x4] = *eax_7
                float xmm2_9 = *(eax_5 + 0x18) - xmm4_7
                var_28 = (xmm5_6[0] - xmm3_7) / xmm1_10
                float var_24_5 = (_mm_shuffle_ps(xmm5_6, xmm5_6, 0x55) - xmm4_7) / xmm2_9
                float var_20_5 = (_mm_shuffle_ps(xmm5_6, xmm5_6, 0xaa) - xmm3_7) / xmm1_10
                float var_1c_5 = (_mm_shuffle_ps(xmm5_6, xmm5_6, 0xff) - xmm4_7) / xmm2_9
                *(eax_5 + 0x74) = var_28.o
                float xmm1_11 = *(eax_5 + 0x7c)
                var_28.o = *(eax_5 + 0x74)
                float xmm0_51 = *(eax_5 + 0x74)
                
                if (not(0 f<= xmm0_51))
                    var_28 = 0f
                    float var_20_6 = xmm1_11 - xmm0_51 + 0f
                else if (not(xmm1_11 <= 1f))
                    int32_t var_20_7 = 0x3f800000
                    var_28 = 1f - (xmm1_11 - xmm0_51)
                
                float xmm1_15 = *(eax_5 + 0x78)
                float xmm0_53 = *(eax_5 + 0x80)
                
                if (not(0f <= xmm1_15))
                    int32_t var_24_6 = 0
                    float var_1c_6 = xmm0_53 - xmm1_15 + 0f
                    *(eax_5 + 0x74) = var_28.o
                    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                    return eax_7
                
                if (not(xmm0_53 <= 1f))
                    int32_t var_1c_7 = 0x3f800000
                    float var_24_7 = 1f - (xmm0_53 - xmm1_15)
                
                *(eax_5 + 0x74) = var_28.o
                @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                return eax_7
    
    int32_t i = 0
    
    if (data_d77c6c s> 0)
        do
            void* eax_8
            int32_t edx_3
            eax_8, edx_3 = sub_4fbab0((&data_d76c6c)[i], nullptr)
            var_28 = *var_2c f+ *(eax_8 + 0xc)
            float var_24_8 = *(eax_8 + 0x10) f+ var_2c[1]
            float var_20_8 = *(eax_8 + 0x14) f+ *var_2c
            float var_1c_8 = *(eax_8 + 0x18) f+ var_2c[1]
            eax_1 = sub_47bc00(&var_40, edx_3, &var_28, &var_40)
            i += 1
            *(eax_8 + 0xc) = *eax_1
        while (i s< data_d77c6c)
    
    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
    return eax_1
}
