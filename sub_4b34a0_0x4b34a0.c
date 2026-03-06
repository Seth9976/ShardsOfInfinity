// 函数名称: sub_4b34a0
// 虚拟地址: 0x4b34a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4b34a0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_3 = sub_4b3c10(arg1)
    int32_t* ecx = *eax_3
    
    if (ecx[1] != 0x20)
        sub_44e4d0(eax_3, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
            "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_4 = sub_4459f0(ecx)
    int32_t result = 0xffffffff
    int32_t i = 0
    int32_t* var_74 = eax_4
    int32_t result_1 = 0xffffffff
    int32_t var_5c = 0x461c4000
    
    if (eax_4[1] s> 0)
        int32_t edi_1 = 0
        
        do
            if (*(edi_1 + *eax_4 + 0x31) == 0)
                void var_e8
                int128_t* eax_7 = sub_4b33b0(&var_e8, i, arg1, &var_e8)
                int64_t xmm0_1 = eax_7[2].q
                float xmm6_1[0x4] = *eax_7
                float xmm7_1[0x4] = eax_7[1]
                int128_t var_b0_1 = data_5c77ac
                float xmm5_1 = arg2[1]
                float xmm0_4 = *arg2 f- xmm6_1
                float xmm1_1 = arg2[2]
                float xmm2_2 = _mm_shuffle_ps(xmm7_1, xmm7_1, 0x55)
                float var_3c[0x4] = xmm6_1
                float xmm5_2 = xmm5_1 - _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)
                float xmm1_2 = xmm1_1 - _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa)
                float xmm6_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff)
                float xmm0_10 = _mm_shuffle_ps(xmm7_1, xmm7_1, 0xaa)
                float xmm3_2 = xmm2_2 * xmm0_10
                float xmm1_4 = xmm0_10 * xmm0_10
                float var_2c_1[0x4] = xmm7_1
                float xmm1_6 = xmm7_1[0] f* xmm7_1
                float xmm1_8 = xmm2_2 * xmm2_2
                float xmm4_2 = xmm6_2 * xmm6_2
                float xmm7_3 = xmm5_2 + xmm5_2
                float xmm5_4 = eax_7[1].d f* xmm0_10
                float xmm2_4 = xmm7_1[0] * xmm6_2
                float xmm1_10 = xmm1_2 + xmm1_2
                float xmm6_4 = xmm2_2 * xmm6_2
                float xmm7_6 = (xmm4_2 + xmm1_4 - xmm1_6 - xmm1_8) * xmm0_4 + (xmm2_4 + xmm3_2) * xmm7_3
                    + (xmm6_4 - xmm5_4) * xmm1_10
                float xmm0_23 = xmm0_4 + xmm0_4
                float var_50_2 = xmm7_6
                float xmm0_25 = xmm1_4 - xmm4_2
                float xmm4_4 = xmm2_2 f* eax_7[1].d
                float xmm4_6 = xmm6_2 * xmm0_10
                float xmm3_4[0x4] = eax_7[1]
                float xmm3_6 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0xff) * 0.5f
                float xmm0_37 = 1f f/ data_5c779c.d
                float xmm4_8 = xmm7_6 * xmm0_37
                float xmm2_9 = ((xmm0_25 + xmm1_6 - xmm1_8) * xmm5_2 + (xmm2_4 - xmm3_2) * xmm0_23
                    + (xmm4_6 + xmm4_4) * xmm1_10) * xmm0_37
                float xmm1_18 = ((xmm4_4 - xmm4_6) * xmm7_3 + (xmm5_4 + xmm6_4) * xmm0_23
                    + (xmm0_25 - xmm1_6 + xmm1_8) * xmm1_2) * xmm0_37
                int32_t var_70
                
                if (xmm4_8 f< 0 || xmm2_9 f< 0 || xmm1_18 f< 0 || xmm3_6 < xmm4_8
                        || xmm0_1.d * 0.5f < xmm2_9 || not(xmm0_1:4.d * 0.5f >= xmm1_18))
                    if (sub_4c5be0(&var_70, &var_3c, arg2, &var_70) == 0)
                        result = result_1
                    else
                        int32_t xmm0_38 = var_70
                        
                        if (var_5c f<= xmm0_38)
                            result = result_1
                        else
                            result = i
                            var_5c = xmm0_38
                            result_1 = result
                else
                    result = result_1
            
            eax_4 = var_74
            i += 1
            edi_1 += 0xb8
        while (i s< eax_4[1])
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
