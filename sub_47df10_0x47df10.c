// 函数名称: sub_47df10
// 虚拟地址: 0x47df10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_47df10(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_30[0x4]
    TEB* fsbase
    
    if (data_e49978 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e49978)
        
        if (data_e49978 == 0xffffffff)
            var_30[3] = 0x80000000
            var_30[1].q = _mm_unpacklo_ps(0x80000000, 0xbf800000)
            void var_48
            data_e4997c.o =
                *sub_413000(&var_48, &var_30[1], &data_571928, &var_48, 0x571898, &data_5718b0)
            __Init_thread_footer(&data_e49978)
    
    float xmm2_1 = arg3[1] f* 0.5f
    float eax_6 = data_65aeac
    float xmm5[0x4] = data_65ae94
    float xmm1_3 = data_65ae08 / xmm2_1
    int64_t xmm0_2 = data_65aea4
    float xmm2_2 = xmm2_1 * xmm1_3
    float xmm0_5 = *arg3 * -0.5f * xmm1_3
    float xmm7_1[0x4] = _mm_shuffle_ps(xmm5, xmm5, 0xff)
    float xmm4_1 = _mm_shuffle_ps(xmm5, xmm5, 0x55)
    float xmm3_1[0x4] = _mm_shuffle_ps(xmm5, xmm5, 0xaa)
    float xmm0_7 = xmm7_1[0] f* xmm7_1
    float xmm1_5 = xmm5[0] f* xmm5
    float xmm0_9 = xmm4_1 * xmm4_1
    float xmm6_1 = xmm4_1 f* xmm5
    float xmm0_11 = xmm3_1[0] f* xmm3_1
    float xmm5_2 = xmm3_1[0] f* xmm7_1
    var_30 = xmm7_1
    float xmm7_3 = xmm4_1 * var_30[0]
    float xmm3_2 = xmm3_1 f* data_65ae94.d
    float xmm4_3 = xmm2_2 + xmm2_2
    float xmm0_13 = xmm6_1 - xmm5_2
    float xmm0_19 = xmm0_5 + xmm0_5
    float xmm2_11 = data_65ae94.d * var_30[0]
    float xmm0_21 = xmm0_7 - xmm1_5
    float xmm1_7 = xmm3_1[0] * xmm4_1
    float xmm2_12 = xmm2_11 + xmm1_7
    float xmm5_5 = data_e4997c
    float xmm3_8 = data_e49988
    float xmm4_4 = data_e49984
    float xmm2_14 = data_e49980
    int64_t xmm7_6 = _mm_unpacklo_ps(
        xmm0_2.d + (xmm1_5 + xmm0_7 - xmm0_9 - xmm0_11) * xmm0_5 + xmm0_13 + xmm0_13
            + (xmm7_3 + xmm3_2) * xmm4_3, 
        xmm0_2:4.d + xmm0_21 + xmm0_9 - xmm0_11 + (xmm5_2 + xmm6_1) * xmm0_19
        + (xmm1_7 - xmm2_11) * xmm4_3)
    float xmm1_17 = var_30[0] * xmm5_5 + data_65ae94.d * xmm3_8 + xmm4_1 * xmm4_4 - xmm3_1[0] * xmm2_14
    int64_t var_40
    var_40.d = var_30[0] * xmm2_14 + xmm4_1 * xmm3_8 + xmm3_1[0] * xmm5_5 - data_65ae94.d * xmm4_4
    var_40:4.d = var_30[0] * xmm4_4 + xmm3_1[0] * xmm3_8 + data_65ae94.d * xmm2_14 - xmm4_1 * xmm5_5
    float xmm1_31 = var_30.d * xmm3_8 - (data_65ae94).d * xmm5_5 - xmm4_1 * xmm2_14
    float xmm0_54 = xmm3_1[0] * xmm4_4
    xmm3_1[3] =
        eax_6 + (xmm3_2 - xmm7_3) * xmm0_19 + xmm2_12 + xmm2_12 + (xmm0_21 - xmm0_9 + xmm0_11) * xmm2_2
    xmm3_1[1].q = xmm7_6
    float var_38_1 = xmm1_31 - xmm0_54
    int128_t var_9c = xmm1_17.o
    *arg4 = xmm1_3.o
    arg4[1] = xmm3_1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
