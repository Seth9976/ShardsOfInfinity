// 函数名称: sub_4754a0
// 虚拟地址: 0x4754a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4754a0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_64f848 = 1
    data_64f84c = 0
    float var_14
    sub_44edc0(&var_14)
    float xmm1 = var_14
    data_64f850 = xmm1
    int32_t var_10
    data_64f854 = var_10
    data_64f860 = 0
    data_64f858 = xmm1
    data_64f85c = var_10
    sub_44edc0(&var_14)
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_46cc20(var_14, var_10)
    data_64f864 = eax_2
    float var_1c
    int128_t* eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_475220(&var_1c, edx, 0, &var_1c)
    data_64f86c = *eax_4
    int128_t* result = sub_475220(&var_1c, edx_1, 1, &var_1c)
    int32_t i = 0
    int128_t xmm0_2 = *result
    data_64f868 = 0
    data_64f87c = xmm0_2
    
    if (data_5cea2c s> 0)
        int32_t* esi_1 = &data_64f88c
        
        do
            result = sub_469160((&data_5cda2c)[i])
            i += 1
            int32_t ecx_5 = *(result + 0x63c) * 0x208
            float xmm4_1 = *(ecx_5 + result + 0x14)
            float xmm3_1 = *(ecx_5 + result + 0x18)
            float xmm2_2 = *(ecx_5 + result + 0x1c) - xmm4_1
            float xmm1_2 = *(ecx_5 + result + 0x20) - xmm3_1
            var_1c = xmm2_2 f* *(ecx_5 + result + 0xcc) + xmm4_1
            float var_18_1 = *(ecx_5 + result + 0xd0) * xmm1_2 + xmm3_1
            var_14 = *(ecx_5 + result + 0xd4) * xmm2_2 + xmm4_1
            float var_10_1 = *(ecx_5 + result + 0xd8) * xmm1_2 + xmm3_1
            *esi_1 = var_1c.o
            esi_1 = &esi_1[4]
        while (i s< data_5cea2c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
