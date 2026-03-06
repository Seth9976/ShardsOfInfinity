// 函数名称: sub_5003b0
// 虚拟地址: 0x5003b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_5003b0()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* result = data_d77c6c
    
    if (result != 0)
        int32_t ecx_1 = data_d76c6c
        int128_t var_40
        float xmm1_2
        
        if (result != 1)
            result = sub_4fbab0(ecx_1, nullptr)
            xmm1_2 = *(result + 0x14) f+ *(result + 0xc)
        else if (sub_4fba30(ecx_1) == 0)
            result = sub_500350(&var_40)
            float xmm1_1[0x4] = *result
            xmm1_2 = xmm1_1 f+ _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
        else
            result = *sub_485450(data_d76c60)
            xmm1_2 = *(result + 0x14) f+ *(result + 0xc)
        
        int32_t i = 0
        var_40 = xmm1_2 * 0.5f
        
        if (data_d77c6c s> 0)
            do
                void* eax_4
                int32_t edx_1
                eax_4, edx_1 = sub_4fbab0((&data_d76c6c)[i], nullptr)
                float xmm2_1 = *(eax_4 + 0xc)
                float xmm3_1 = *(eax_4 + 0x14)
                float xmm1_6 = var_40.d - (xmm2_1 + xmm3_1) * 0.5f
                float xmm0_6 = *(eax_4 + 0x10)
                float var_24 = xmm2_1 + xmm1_6
                float var_1c_1 = xmm3_1 + xmm1_6
                float var_20_1 = xmm0_6 + 0f
                float var_18_1 = *(eax_4 + 0x18) + 0f
                void var_50
                result = sub_47bc00(&var_50, edx_1, &var_24, &var_50)
                i += 1
                *(eax_4 + 0xc) = *result
            while (i s< data_d77c6c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
