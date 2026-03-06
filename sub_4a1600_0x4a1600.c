// 函数名称: sub_4a1600
// 虚拟地址: 0x4a1600
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_4a1600(int32_t arg1, int32_t arg2, char** arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: char** var_8 = arg3
    char** var_8 = arg3
    int32_t* esi = arg4
    char** var_8_1 = arg3
    void* edi = &data_5b54a8
    int32_t i_1 = 0x1c
    int32_t i
    
    do
        if (*esi != *edi)
            int32_t edx = *(arg5 + arg2 * 0xc + 0x160)
            int32_t var_18 = edx
            int128_t* eax_5 = ((edx + 0x11) << 5) + arg5
            *eax_5 = *arg4
            eax_5[1] = *(arg4 + 0x10)
            sub_44f980(arg3, "\tfloat2 uv = MultiplyMatrixVec(float3(arg_uv, 1.0), gTexAnim%d).xy;\n")
            return arg3
        
        esi = &esi[1]
        edi += 4
        i = i_1
        i_1 -= 4
    while (i u>= 4)
    sub_44f240(arg3, "\tfloat2 uv = arg_uv;\n")
    return arg3
}
