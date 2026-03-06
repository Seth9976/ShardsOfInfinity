// 函数名称: sub_4c2ef0
// 虚拟地址: 0x4c2ef0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

double* __convention("regparm")sub_4c2ef0(float arg1 @ eax, int32_t arg2, void* arg3, int32_t* arg4, float* arg5)
{
    // 第一条实际指令: float xmm0 = arg4[2]
    float xmm0 = arg4[2]
    xmm0 - 0f
    int32_t ecx = *arg4
    arg1:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        return sub_4c2220(arg1, arg2, arg3, ecx, arg5)
    
    float var_34
    sub_4c2220(&var_34, arg2, arg3, ecx, &var_34)
    float var_64
    sub_4c2220(&var_64, arg2, arg3, arg4[1], &var_64)
    float xmm4 = arg4[2]
    float xmm2_3 = (var_64 - var_34) * xmm4 + var_34
    float var_60
    float var_30
    arg5[1] = (var_60 - var_30) * xmm4 + var_30
    *arg5 = xmm2_3
    float var_54
    float var_24
    arg5[4] = (var_54 - var_24) * xmm4 + var_24
    float var_58
    float var_28
    arg5[3] = (var_58 - var_28) * xmm4 + var_28
    float var_5c
    float var_2c
    arg5[2] = (var_5c - var_2c) * xmm4 + var_2c
    float var_50
    float var_20
    arg5[5] = (var_50 - var_20) * xmm4 + var_20
    void var_44
    char var_14
    arg5[8] = sub_47bf90(&var_14, &var_44, xmm4)
    void var_40
    char var_10
    arg5[9] = sub_47bf90(&var_10, &var_40, xmm4)
    int32_t var_c
    arg5[0xa] = var_c
    int32_t result
    arg5[0xb] = result
    return result
}
