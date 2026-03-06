// 函数名称: sub_4b75c0
// 虚拟地址: 0x4b75c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4b75c0(int128_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_70
    float* ecx
    sub_4b7260(ecx, &var_70)
    void var_5c
    void* ecx_1 = &var_5c
    float xmm5 = var_70
    int32_t i_1 = 7
    float var_68
    float var_80 = var_68 - 0f
    float var_6c
    int64_t xmm5_2 = _mm_unpacklo_ps(xmm5 - 0f, var_6c - 0f)
    int64_t xmm6_2 = _mm_unpacklo_ps(xmm5 + 0f, var_6c + 0f)
    float var_74 = var_68 + 0f
    *arg1 = xmm5_2.o
    arg1[1].q = xmm6_2
    int32_t i
    
    do
        int32_t xmm1_2 = *(ecx_1 - 8)
        
        if (not(*arg1 f<= xmm1_2))
            *arg1 = xmm1_2
        else if (not(xmm1_2 f<= *(arg1 + 0xc)))
            *(arg1 + 0xc) = xmm1_2
        
        int32_t xmm1_3 = *(ecx_1 - 4)
        
        if (not(*(arg1 + 4) f<= xmm1_3))
            *(arg1 + 4) = xmm1_3
        else if (not(xmm1_3 f<= arg1[1].d))
            arg1[1].d = xmm1_3
        
        int32_t xmm1_4 = *ecx_1
        
        if (not(*(arg1 + 8) f<= xmm1_4))
            *(arg1 + 8) = xmm1_4
        else if (not(xmm1_4 f<= *(arg1 + 0x14)))
            *(arg1 + 0x14) = xmm1_4
        
        ecx_1 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg1
}
