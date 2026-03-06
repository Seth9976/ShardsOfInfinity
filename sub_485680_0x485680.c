// 函数名称: sub_485680
// 虚拟地址: 0x485680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_485680(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t result_1 = *arg1
    int32_t result = result_1
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(result_1 u>> 0x18)) * arg2
    
    if (0 f<= xmm2_2)
        result:3.b = (int.d(xmm2_2 + 0.5f)).b
        return result
    
    result:3.b = (int.d(xmm2_2 - 0.5f)).b
    return result
}
