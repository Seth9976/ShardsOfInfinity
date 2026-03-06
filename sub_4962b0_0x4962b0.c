// 函数名称: sub_4962b0
// 虚拟地址: 0x4962b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4962b0(int128_t* arg1, int64_t arg2, float arg3)
{
    // 第一条实际指令: int32_t esi = data_e47798
    int32_t esi = data_e47798
    TEB* fsbase
    void* edi = *fsbase->ThreadLocalStoragePointer
    
    if (esi s> *(edi + 4))
        __Init_thread_header(&data_e47798)
        esi = data_e47798
        
        if (esi == 0xffffffff)
            data_e4779c = 0x3c8efa35
            __Init_thread_footer(&data_e47798)
            esi = data_e47798
    
    float xmm0_3 = arg2.d f* data_e4779c * 0.5f
    float xmm0_4 = sub_4145d0(xmm0_3)
    float xmm0_5 = xmm0_4 * 0f
    float xmm0_7 = sub_4145b0(xmm0_3)
    
    if (esi s> *(edi + 4))
        __Init_thread_header(&data_e47798)
        esi = data_e47798
        
        if (esi == 0xffffffff)
            data_e4779c = 0x3c8efa35
            __Init_thread_footer(&data_e47798)
            esi = data_e47798
    
    float xmm0_10 = arg2:4.d f* data_e4779c * 0.5f
    float xmm0_11 = sub_4145d0(xmm0_10)
    float xmm0_12 = xmm0_11 * 0f
    float xmm0_14 = sub_4145b0(xmm0_10)
    
    if (esi s> *(edi + 4))
        __Init_thread_header(&data_e47798)
        
        if (data_e47798 == 0xffffffff)
            data_e4779c = 0x3c8efa35
            __Init_thread_footer(&data_e47798)
    
    float xmm0_17 = data_e4779c * arg3 * 0.5f
    float xmm0_18 = sub_4145d0(xmm0_17)
    float xmm1_1 = xmm0_18 * 0f
    float xmm0_20 = sub_4145b0(xmm0_17)
    float xmm0_22 = xmm0_14 * xmm0_5
    float xmm3_1 = xmm0_12 * xmm0_5
    float xmm4_1 = xmm0_11 * xmm0_5
    float xmm1_4 = xmm0_7 * xmm0_12
    float xmm2_1 = xmm0_4 * xmm0_12
    float xmm7_3 = xmm1_4 + xmm0_22 + xmm3_1 - xmm0_11 * xmm0_4
    float xmm6_5 = xmm0_11 * xmm0_7 + xmm0_22 + xmm2_1 - xmm3_1
    float xmm5_4 = xmm0_4 * xmm0_14 + xmm1_4 + xmm4_1 - xmm3_1
    float xmm0_29 = xmm0_14 * xmm0_7 - xmm4_1 - xmm3_1 - xmm2_1
    float xmm3_3 = xmm0_29 * xmm1_1
    float xmm2_3 = xmm7_3 * xmm1_1
    float xmm4_3 = xmm6_5 * xmm1_1
    float xmm5_5 = xmm5_4 * xmm1_1
    int64_t var_2c
    var_2c.d = xmm6_5 * xmm0_20 + xmm3_3 + xmm0_18 * xmm5_4 - xmm2_3
    var_2c:4.d = xmm0_18 * xmm0_29 + xmm7_3 * xmm0_20 + xmm4_3 - xmm5_5
    float var_24_1 = xmm5_4 * xmm0_20 + xmm3_3 + xmm2_3 - xmm0_18 * xmm6_5
    float var_20 = xmm0_29 * xmm0_20 - xmm4_3 - xmm0_18 * xmm7_3 - xmm5_5
    *arg1 = var_2c.o
    return arg1
}
