// 函数名称: sub_45d410
// 虚拟地址: 0x45d410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_45d410(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    int32_t eax = *arg1
    
    if (eax == 8)
        return arg1[arg2 + 8]
    
    if (eax != 7)
        return 0
    
    void* eax_4 = &arg1[(arg2 + 2) * 4]
    int32_t xmm3 = *(eax_4 + 0xc)
    float xmm0_1
    
    if (0 f<= xmm3)
        int32_t xmm0 = _mm_min_ss(0x437f0000, xmm3)
        
        if (0 f<= xmm0)
            xmm0_1 = xmm0 f+ 0.5f
        else
            xmm0_1 = xmm0 f- 0.5f
    else
        xmm0_1 = (zx.o(0)).d f+ 0.5f
    
    float xmm4 = *(eax_4 + 8)
    float xmm0_3
    
    if (0f <= xmm4)
        int32_t xmm0_2 = _mm_min_ss(0x437f0000, xmm4)
        
        if (0 f<= xmm0_2)
            xmm0_3 = xmm0_2 f+ 0.5f
        else
            xmm0_3 = xmm0_2 f- 0.5f
    else
        xmm0_3 = (zx.o(0)).d f+ 0.5f
    
    float xmm4_1 = *(eax_4 + 4)
    float xmm0_5
    
    if (0f <= xmm4_1)
        int32_t xmm0_4 = _mm_min_ss(0x437f0000, xmm4_1)
        
        if (0 f<= xmm0_4)
            xmm0_5 = xmm0_4 f+ 0.5f
        else
            xmm0_5 = xmm0_4 f- 0.5f
    else
        xmm0_5 = (zx.o(0)).d f+ 0.5f
    
    int32_t xmm0_6 = *eax_4
    float xmm1_1
    
    if (0 f<= xmm0_6)
        int32_t xmm1 = _mm_min_ss(0x437f0000, xmm0_6)
        
        if (0 f<= xmm1)
            xmm1_1 = xmm1 f+ 0.5f
        else
            xmm1_1 = xmm1 f- 0.5f
    else
        xmm1_1 = (zx.o(0)).d f+ 0.5f
    
    result:2.b = (int.d(xmm0_3)).b
    result:1.b = (int.d(xmm0_5)).b
    result:3.b = (int.d(xmm0_1)).b
    result.b = (int.d(xmm1_1)).b
    return result
}
