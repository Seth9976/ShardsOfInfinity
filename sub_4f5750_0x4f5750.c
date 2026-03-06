// 函数名称: sub_4f5750
// 虚拟地址: 0x4f5750
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4f5750(float* arg1)
{
    // 第一条实际指令: void var_94
    void var_94
    int32_t eax_1 = __security_cookie ^ &var_94
    int32_t* ecx = data_ce27a0
    
    if (ecx[1] != 0x20)
        sub_44e4d0(eax_1, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
            "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx_1 = sub_4459f0(ecx)
    int32_t i = 0
    int32_t var_4c = ecx_1
    int32_t i_1 = 0
    
    if (data_ce37a4 s> 0)
        float xmm6_1 = arg1[3]
        void* ebx_1 = &data_d6dc08
        float xmm7_1 = *arg1
        float xmm1_1 = arg1[1]
        float xmm0_2 = xmm7_1 * xmm1_1
        float xmm3_1 = arg1[2]
        float xmm4_2 = xmm1_1 * xmm1_1
        float xmm1_3 = xmm6_1 * arg1[2]
        float xmm5_2 = xmm6_1 * xmm6_1
        float xmm2_2 = xmm7_1 * xmm7_1
        float xmm3_2 = xmm3_1 * xmm3_1
        float xmm1_9 = xmm6_1 * arg1[1]
        float xmm6_2 = xmm6_1 * xmm7_1
        float xmm1_11 = xmm7_1 * arg1[2]
        float xmm5_8 = xmm5_2 - xmm2_2
        float xmm0_7 = arg1[1] * arg1[2]
        
        do
            float xmm0_9 = *(ebx_1 - 4) f- data_d76c14:4
            float xmm2_6 = *ebx_1 f- data_d76c1c
            float xmm6_5 = *(ebx_1 - 8) f- data_d76c14.d
            float xmm3_4 = xmm0_9 + xmm0_9
            float xmm1_17 = xmm2_6 + xmm2_6
            float xmm6_6 = xmm6_5 + xmm6_5
            void* esi_2 = (&data_ce27a4)[i] * 0xb8 + *ecx_1
            float xmm7_3 = xmm0_9 * (xmm5_8 + xmm4_2 - xmm3_2) + xmm6_6 * (xmm1_3 + xmm0_2)
            float var_90_3 = xmm7_3
            float xmm3_8 = xmm3_4 * (xmm6_2 + xmm0_7) + xmm6_6 * (xmm1_11 - xmm1_9)
                + xmm2_6 * (xmm5_8 - xmm4_2 + xmm3_2) f+ data_d76c1c
            int64_t xmm4_8 = _mm_unpacklo_ps(
                xmm3_4 * (xmm0_2 - xmm1_3) + (xmm2_2 + xmm5_2 - xmm4_2 - xmm3_2) * xmm6_5
                    + xmm1_17 * (xmm1_11 + xmm1_9) f+ data_d76c14.d, 
                xmm7_3 + xmm1_17 * (xmm0_7 - xmm6_2) f+ data_d76c14:4)
            *(esi_2 + 8) = xmm4_8
            *(esi_2 + 0x10) = xmm3_8
            int64_t xmm0_21 = *(ebx_1 + 4)
            float xmm0_26 = *(ebx_1 + 0xc) * 2f * 3.14159274f * 0.00277777785f * 0.5f
            float xmm0_27 = sub_4145d0(xmm0_26)
            float xmm0_29 = sub_4145b0(xmm0_26)
            float xmm0_31 = xmm0_21.d * 2f * 3.14159274f * 0.00277777785f * 0.5f
            float xmm0_32 = sub_4145d0(xmm0_31)
            float xmm0_34 = sub_4145b0(xmm0_31)
            float xmm0_36 = xmm0_21:4.d * 2f * 3.14159274f * 0.00277777785f * 0.5f
            float xmm0_37 = sub_4145d0(xmm0_36)
            float xmm0_39 = sub_4145b0(xmm0_36)
            float xmm4_10 = xmm0_34 * xmm0_27
            float xmm5_12 = xmm0_32 * xmm0_29
            float xmm2_13 = xmm0_32 * xmm0_27
            float xmm1_24 = xmm0_34 * xmm0_29
            float xmm6_10 = xmm0_39 * xmm5_12 - xmm0_37 * xmm4_10
            float xmm7_6 = xmm0_37 * xmm1_24 + xmm0_39 * xmm2_13
            float xmm6_13 = xmm0_39 * xmm4_10 - xmm0_37 * xmm5_12
            float xmm5_15 = xmm0_39 * xmm1_24 + xmm0_37 * xmm2_13
            float xmm4_15 = xmm6_10 * arg1[3] + xmm5_15 * *arg1 + xmm6_13 * arg1[1] - xmm7_6 * arg1[2]
            float xmm3_15 = xmm7_6 * arg1[3] + xmm5_15 * arg1[1] + xmm6_10 * arg1[2] - xmm6_13 * *arg1
            float xmm2_18 = xmm6_13 * arg1[3] + xmm5_15 * arg1[2] + xmm7_6 * *arg1 - xmm6_10 * arg1[1]
            float xmm5_19 = xmm5_15 * arg1[3] - xmm6_10 * *arg1 - xmm7_6 * arg1[1] - xmm6_13 * arg1[2]
            int32_t edx_1
            float xmm0_69
            edx_1, xmm0_69 = sub_412d90(xmm5_19 * xmm5_19 + xmm4_15 * xmm4_15 + xmm3_15 * xmm3_15
                + xmm2_18 * xmm2_18)
            float var_1c = xmm4_15 / xmm0_69
            float var_18_1 = xmm3_15 / xmm0_69
            float var_14_1 = xmm2_18 / xmm0_69
            float var_10_1 = xmm5_19 / xmm0_69
            float var_38[0x4]
            int64_t* eax_6 = sub_4fb390(&var_38, edx_1, &var_1c, &var_38)
            int16_t top = top - 2
            unimplemented  {call 0x4fb390}
            ecx_1 = var_4c
            ebx_1 += 0x24
            int32_t eax_7 = eax_6[1].d
            *(esi_2 + 0x14) = *eax_6
            *(esi_2 + 0x1c) = eax_7
            i = i_1 + 1
            i_1 = i
        while (i s< data_ce37a4)
    
    @__security_check_cookie@4(eax_1 ^ &var_94)
    return i
}
