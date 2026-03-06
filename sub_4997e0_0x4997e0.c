// 函数名称: sub_4997e0
// 虚拟地址: 0x4997e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4997e0(float* arg1)
{
    // 第一条实际指令: float* var_c = arg1
    float* var_c = arg1
    void* eax = arg1[0xb9]
    *(eax + 0x14) += 1
    sub_498510(arg1, arg1)
    int32_t eax_2 = sub_4459f0(*arg1[0xb9])
    int32_t* ebx_1 = arg1[0xb7] i* 0x134 + *eax_2
    int32_t* i_2 = sub_4b88a0(eax_2, ebx_1, &data_5b39c8, 3)
    int32_t* i_1 = i_2
    
    if (i_1 s> 0)
        int32_t* i
        
        do
            i_2 = sub_49a0a0(arg1)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result = sub_4b88a0(i_2, ebx_1, &data_5b39c8, 4)
    arg1[0xbe] = _mm_cvtepi32_ps(zx.o(result)) / 100f
    return result
}
