// 函数名称: sub_4f6a60
// 虚拟地址: 0x4f6a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4f6a60(int32_t arg1, int32_t* arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int64_t xmm0_29
    float xmm2_11
    int64_t xmm4_3
    float xmm5_3[0x4]
    float xmm6_4
    
    if (arg3 - 2 u<= 9)
        switch (arg3)
            case 2, 9
                int32_t var_28_1 = 0x3f800000
                float var_24_1 = arg2[1] f* -0f + *arg2 * -0f f- arg2[2]
                *arg4 = 0.o
                return arg4
            case 3, 0xa
                xmm0_29 = 0x3f800000
                xmm2_11 = arg2[1] f* -0f f- *arg2
            label_4f6ca8:
                int32_t var_28_2 = 0
                float var_24_2 = xmm2_11 + arg2[2] f* -0f
                *arg4 = xmm0_29.o
                return arg4
            case 4, 0xb
                xmm0_29 = 0x3f80000000000000
                xmm2_11 = *arg2 * -0f f- arg2[1]
                goto label_4f6ca8
            case 5
                float xmm3 = data_d76c04
                float xmm2 = data_d76c10
                float xmm6 = data_d76c0c
                float xmm1 = data_d76c08
                float xmm5_2 = xmm3 * xmm6 + xmm2 * xmm1
                xmm5_3 = xmm5_2 + xmm5_2
                float xmm4_2 = xmm6 * xmm1 - xmm3 * xmm2
                xmm4_3 = xmm4_2 + xmm4_2
                xmm6_4 = xmm6 * xmm6 - xmm1 * xmm1 - xmm3 * xmm3 + xmm2 * xmm2
            label_4f6af4:
                float xmm1_2 = arg2[1]
                float xmm5_4 = xmm5_3 f* *arg2
                int64_t xmm0_5 = _mm_unpacklo_ps(xmm5_3, xmm4_3)
                float var_28 = xmm6_4
                int32_t var_24 = (xmm1_2 f* xmm4_3 + xmm5_4 + arg2[2] f* xmm6_4) ^ (data_59e5c0.o).d
                *arg4 = xmm0_5.o
                return arg4
            case 6
                float xmm6_8 = data_d76c04
                float xmm3_3 = data_d76c10
                float xmm2_4 = data_d76c0c
                float xmm1_8 = data_d76c08
                xmm5_3 = xmm6_8 * xmm6_8 + xmm3_3 * xmm3_3 - xmm2_4 * xmm2_4 - xmm1_8 * xmm1_8
                float xmm6_10 = xmm6_8 * xmm2_4 - xmm3_3 * xmm1_8
                float xmm4_10 = xmm2_4 * xmm3_3 + xmm6_8 * xmm1_8
                xmm6_4 = xmm6_10 + xmm6_10
                xmm4_3 = xmm4_10 + xmm4_10
                goto label_4f6af4
            case 7
                float xmm6_5 = data_d76c04
                float xmm2_2 = data_d76c0c
                float xmm3_2 = data_d76c08
                float xmm1_7 = data_d76c10
                float xmm5_7 = xmm6_5 * xmm3_2 - xmm2_2 * xmm1_7
                xmm5_3 = xmm5_7 + xmm5_7
                xmm4_3 = xmm3_2 * xmm3_2 - xmm2_2 * xmm2_2 + xmm1_7 * xmm1_7 - xmm6_5 * xmm6_5
                float xmm6_7 = xmm6_5 * xmm1_7 + xmm2_2 * xmm3_2
                xmm6_4 = xmm6_7 + xmm6_7
                goto label_4f6af4
    sub_44e4d0(arg1, &data_5559b1, "Halt", "c:\ax2017\engine\editor\fabeditor.cpp", 0x2f2, 
        "CalcDragPlane")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
