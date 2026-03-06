// 函数名称: sub_4c1ed0
// 虚拟地址: 0x4c1ed0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4c1ed0(int32_t arg1, char* arg2, int32_t* arg3, float arg4 @ xmm3, int32_t arg5)
{
    // 第一条实际指令: int32_t* ecx = *arg3
    int32_t* ecx = *arg3
    arg3[0x1c] = 0
    arg3[0x1d] = 0
    void var_10
    
    if (sub_4c4480(&arg3[3], arg2, ecx, &arg3[3], &arg3[4], &var_10) == 0)
        char* const ecx_1 = &data_5559b1
        char* eax_3 = *(*arg3 + 0x20)
        
        if (eax_3 != 0)
            ecx_1 = eax_3
        
        char* const var_2c_1 = ecx_1
        char* var_30_1 = arg2
        sub_44e260("missing flanim action %s in %s")
    
    void var_18
    void var_14
    float var_8
    sub_4c4480(&var_18, arg2, *arg3, &var_18, &var_14, &var_8)
    arg3[6] = arg5
    int32_t result = arg3[4]
    arg3[1] = 0
    arg3[7] = 0
    
    if (result s> 1)
        arg3[5] = var_8 * arg4 / _mm_cvtepi32_ps(zx.o(result - 1))
        return result - 1
    
    arg3[5] = 0
    return result
}
