// 函数名称: sub_47bf90
// 虚拟地址: 0x47bf90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_47bf90(char* arg1, char* arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: char* result = arg1
    char* result = arg1
    char* edx = arg1
    arg1.b = *edx
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(zx.d(*arg2) - zx.d(arg1.b))) * arg3
    float xmm0_3
    
    if (0 f<= xmm0_2)
        xmm0_3 = xmm0_2 + 0.5f
    else
        xmm0_3 = xmm0_2 - 0.5f
    
    int32_t ebx
    ebx.b = edx[1]
    result.b = (int.d(xmm0_3)).b + arg1.b
    float xmm0_6 = _mm_cvtepi32_ps(zx.o(zx.d(arg2[1]) - zx.d(ebx.b))) * arg3
    float xmm0_7
    
    if (0 f<= xmm0_6)
        xmm0_7 = xmm0_6 + 0.5f
    else
        xmm0_7 = xmm0_6 - 0.5f
    
    char eax_3 = (int.d(xmm0_7)).b + ebx.b
    ebx.b = edx[2]
    result:1.b = eax_3
    float xmm0_10 = _mm_cvtepi32_ps(zx.o(zx.d(arg2[2]) - zx.d(ebx.b))) * arg3
    float xmm0_11
    
    if (0 f<= xmm0_10)
        xmm0_11 = xmm0_10 + 0.5f
    else
        xmm0_11 = xmm0_10 - 0.5f
    
    edx.b = edx[3]
    result:2.b = (int.d(xmm0_11)).b + ebx.b
    float xmm0_14 = _mm_cvtepi32_ps(zx.o(zx.d(arg2[3]) - zx.d(edx.b))) * arg3
    
    if (0 f<= xmm0_14)
        result:3.b = (int.d(xmm0_14 + 0.5f)).b + edx.b
        return result
    
    result:3.b = (int.d(xmm0_14 - 0.5f)).b + edx.b
    return result
}
