// 函数名称: sub_4956e0
// 虚拟地址: 0x4956e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4956e0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg2[1]
    int32_t* esi = arg2[1]
    float xmm0_1
    bool p_2
    
    if (esi[1] == 1)
        int32_t* eax_1 = *esi
        xmm0_1 = *eax_1
        float temp0_1 = eax_1[1]
        xmm0_1 - temp0_1
        eax_1:1.b = (xmm0_1 == temp0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp0_1) ? 1 : 0) << 2
            | (xmm0_1 < temp0_1 ? 1 : 0)
        p_2 = unimplemented  {test ah, 0x44}
    
    if (esi[1] != 1 || p_2)
        int32_t ecx_2 = (*(arg1 + 0x2c) + *arg2) * *arg2
        int32_t edx_2 = (ecx_2 << 0xf) + not.d(ecx_2)
        int32_t ecx_4 = (edx_2 u>> 0xc ^ edx_2) * 5
        int32_t eax_8 = (ecx_4 u>> 4 ^ ecx_4) * 0x809
        xmm0_1 = sub_4e0380(esi, *(arg1 + 0x2f4), *(arg1 + 0x2e8), 
            (((eax_8 u>> 0x10 ^ eax_8) & 0x7fffff) | 0x3f800000) - 1f)
    
    if (0 f<= xmm0_1)
        return int.d(xmm0_1 + 0.5f)
    
    return int.d(xmm0_1 - 0.5f)
}
