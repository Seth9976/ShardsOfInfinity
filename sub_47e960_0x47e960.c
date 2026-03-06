// 函数名称: sub_47e960
// 虚拟地址: 0x47e960
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_47e960(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: double* eax
    double* eax
    
    if (arg1 u> 5)
        sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\sprite.cpp", 0x6d8, "ImageRotationUVS")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    float var_14_2
    float var_10_2
    float xmm0_22
    float xmm1_9
    float xmm3_3
    float xmm3_6
    float xmm4_5
    float xmm5_3
    float xmm6_4
    float xmm7_3
    
    switch (arg1)
        case 0
            return 
        case 1
            float xmm0_1 = sub_4145d0(-1.57079637f)
            float xmm0_2
            eax, xmm0_2 = sub_4145b0(-1.57079637f)
            xmm7_3 = xmm0_2 f* arg2[2] - xmm0_1 f* arg2[3]
            float xmm1_6 = xmm0_2 f* arg2[1] + xmm0_1 f* *arg2 + 1f
            xmm5_3 = xmm0_2 f* arg2[4] - xmm0_1 f* arg2[5]
            xmm6_4 = xmm0_2 f* arg2[3] + xmm0_1 f* arg2[2] + 1f
            xmm4_5 = xmm0_2 f* arg2[5] + xmm0_1 f* arg2[4] + 1f
            xmm3_3 = xmm0_2 f* arg2[6] - xmm0_1 f* arg2[7]
            float xmm1_8 = xmm0_2 f* arg2[7] + xmm0_1 f* arg2[6]
            *arg2 = xmm0_2 f* *arg2 - xmm0_1 f* arg2[1]
            xmm0_22 = xmm1_6
            xmm1_9 = xmm1_8 + 1f
        label_47ea87:
            arg2[1] = xmm0_22
            arg2[2] = xmm7_3
            arg2[3] = xmm6_4
            arg2[4] = xmm5_3
            arg2[5] = xmm4_5
            arg2[6] = xmm3_3
            arg2[7] = xmm1_9
            return 
        case 2
            float xmm0_23 = sub_4145d0(3.14159274f)
            float xmm0_24
            eax, xmm0_24 = sub_4145b0(3.14159274f)
            var_14_2 = xmm0_24 f* *arg2 - xmm0_23 f* arg2[1] + 1f
            xmm7_3 = xmm0_24 f* arg2[2] - xmm0_23 f* arg2[3] + 1f
            xmm6_4 = xmm0_24 f* arg2[3] + xmm0_23 f* arg2[2] + 1f
            var_10_2 = xmm0_24 f* arg2[1] + xmm0_23 f* *arg2 + 1f
            xmm5_3 = xmm0_24 f* arg2[4] - xmm0_23 f* arg2[5] + 1f
            xmm4_5 = xmm0_24 f* arg2[5] + xmm0_23 f* arg2[4] + 1f
            xmm3_6 = xmm0_24 f* arg2[6] - xmm0_23 f* arg2[7]
            xmm1_9 = xmm0_24 f* arg2[7] + xmm0_23 f* arg2[6] + 1f
        label_47ebc5:
            xmm3_3 = xmm3_6 + 1f
            *arg2 = var_14_2
            xmm0_22 = var_10_2
            goto label_47ea87
        case 3
            float xmm0_42 = sub_4145d0(1.57079637f)
            float xmm0_43
            eax, xmm0_43 = sub_4145b0(1.57079637f)
            var_14_2 = xmm0_43 f* *arg2 - xmm0_42 f* arg2[1] + 1f
            var_10_2 = xmm0_43 f* arg2[1] + xmm0_42 f* *arg2
            xmm7_3 = xmm0_43 f* arg2[2] - xmm0_42 f* arg2[3] + 1f
            xmm6_4 = xmm0_43 f* arg2[3] + xmm0_42 f* arg2[2]
            xmm4_5 = xmm0_43 f* arg2[5] + xmm0_42 f* arg2[4]
            xmm5_3 = xmm0_43 f* arg2[4] - xmm0_42 f* arg2[5] + 1f
            xmm3_6 = xmm0_43 f* arg2[6] - xmm0_42 f* arg2[7]
            xmm1_9 = xmm0_43 f* arg2[7] + xmm0_42 f* arg2[6]
            goto label_47ebc5
        case 4
            int128_t xmm0_60 = *arg2
            *arg2 = arg2[4]
            arg2[1] = arg2[5]
            arg2[2] = arg2[6]
            arg2[3] = arg2[7]
            *(arg2 + 0x10) = xmm0_60
            return 
        case 5
            int32_t xmm0_61 = *arg2
            int32_t xmm1_24 = arg2[1]
            *arg2 = arg2[2]
            arg2[1] = arg2[3]
            arg2[2] = xmm0_61
            arg2[3] = xmm1_24
            int32_t xmm0_62 = arg2[4]
            int32_t xmm1_25 = arg2[5]
            arg2[4] = arg2[6]
            arg2[5] = arg2[7]
            arg2[6] = xmm0_62
            arg2[7] = xmm1_25
            return 
}
