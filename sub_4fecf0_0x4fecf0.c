// 函数名称: sub_4fecf0
// 虚拟地址: 0x4fecf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __fastcallsub_4fecf0(char arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    ebx.b = arg1
    data_df8488 = 1
    data_df848c = 0
    float var_14
    sub_44edc0(&var_14)
    float xmm1 = var_14
    data_df8490 = xmm1
    int32_t var_10
    data_df8494 = var_10
    data_df84a0 = 0
    data_df8498 = xmm1
    data_df849c = var_10
    sub_44edc0(&var_14)
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_4fdd90(var_14, var_10)
    data_df84a4 = eax_2
    float var_1c
    int128_t* eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_4feab0(&var_1c, edx, 0, &var_1c)
    data_df84ac = *eax_4
    int128_t* result = sub_4feab0(&var_1c, edx_1, 1, &var_1c)
    int32_t i = 0
    int128_t xmm0_2 = *result
    data_df84a8 = ebx.b
    data_df84bc = xmm0_2
    
    if (data_d77c6c s> 0)
        int128_t* esi_1 = &data_df84cc
        
        do
            result = sub_4fbab0((&data_d76c6c)[i], nullptr)
            i += 1
            float xmm4_1 = *(result + 0xc)
            float xmm3_1 = result[1].d
            float xmm2_2 = *(result + 0x14) - xmm4_1
            float xmm1_2 = *(result + 0x18) - xmm3_1
            var_1c = xmm2_2 f* *(result + 0x74) + xmm4_1
            float var_18_1 = *(result + 0x78) * xmm1_2 + xmm3_1
            var_14 = *(result + 0x7c) * xmm2_2 + xmm4_1
            float var_10_1 = result[8].d f* xmm1_2 + xmm3_1
            *esi_1 = var_1c.o
            esi_1 = &esi_1[1]
        while (i s< data_d77c6c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
