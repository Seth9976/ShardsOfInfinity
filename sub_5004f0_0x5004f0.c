// 函数名称: sub_5004f0
// 虚拟地址: 0x5004f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_5004f0()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = data_d77c6c
    
    if (result != 0)
        int32_t ecx_1 = data_d76c6c
        int128_t var_40
        char* ecx_2
        float xmm1_3
        void* eax_4
        
        if (result != 1)
            eax_4, ecx_2 = sub_4fbab0(ecx_1, nullptr)
            xmm1_3 = *(eax_4 + 0x18) f+ *(eax_4 + 0x10)
        else
            int32_t eax_2
            eax_2, ecx_2 = sub_4fba30(ecx_1)
            
            if (eax_2 == 0)
                float xmm0_1[0x4] = *sub_500350(&var_40)
                xmm1_3 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55) + _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff)
            else
                int32_t* eax_3
                eax_3, ecx_2 = sub_485450(data_d76c60)
                eax_4 = *eax_3
                xmm1_3 = *(eax_4 + 0x18) f+ *(eax_4 + 0x10)
        int32_t i = 0
        var_40 = xmm1_3 * 0.5f
        
        if (data_d77c6c s> 0)
            do
                void* eax_6
                int32_t edx_1
                eax_6, edx_1 = sub_4fbab0((&data_d76c6c)[i], nullptr)
                float xmm2_1 = *(eax_6 + 0x10)
                float xmm3_1 = *(eax_6 + 0x18)
                float xmm1_7 = var_40.d - (xmm2_1 + xmm3_1) * 0.5f
                float var_24 = *(eax_6 + 0xc) + 0f
                float var_20_1 = xmm2_1 + xmm1_7
                float var_18_1 = xmm3_1 + xmm1_7
                float var_1c_1 = *(eax_6 + 0x14) + 0f
                void var_50
                int128_t* eax_8
                eax_8, ecx_2 = sub_47bc00(&var_50, edx_1, &var_24, &var_50)
                i += 1
                *(eax_6 + 0xc) = *eax_8
            while (i s< data_d77c6c)
        
        ecx_2.b = 1
        result = sub_4fb880(ecx_2)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
