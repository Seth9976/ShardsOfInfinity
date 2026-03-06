// 函数名称: sub_495830
// 虚拟地址: 0x495830
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __fastcallsub_495830(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x30)
    void* edi = *(arg1 + 0x30)
    int32_t* esi = arg2[1]
    float var_8_1
    bool p_2
    
    if (esi[1] == 1)
        int32_t* eax_1 = *esi
        float xmm0_1 = *eax_1
        float temp0_1 = eax_1[1]
        xmm0_1 - temp0_1
        var_8_1 = xmm0_1
        eax_1:1.b = (xmm0_1 == temp0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp0_1) ? 1 : 0) << 2
            | (xmm0_1 < temp0_1 ? 1 : 0)
        p_2 = unimplemented  {test ah, 0x44}
    
    if (esi[1] != 1 || p_2)
        int32_t ecx_2 = (*(edi + 0x2c) + *arg2) * *arg2
        float xmm1_1 = *(edi + 0x2f0)
        int32_t edx_2 = (ecx_2 << 0xf) + not.d(ecx_2)
        int32_t ecx_4 = (edx_2 u>> 0xc ^ edx_2) * 5
        int32_t eax_8 = (ecx_4 u>> 4 ^ ecx_4) * 0x809
        int32_t eax_9 = *(edi + 0x2f4)
        int32_t edx_3 = eax_9 - 1
        
        if (xmm1_1 f<= *(edi + 0x2e8))
            edx_3 = eax_9
        
        float xmm0_2 =
            sub_4e0380(esi, edx_3, xmm1_1, (((eax_8 u>> 0x10 ^ eax_8) & 0x7fffff) | 0x3f800000) - 1f)
        esi = arg2[1]
        var_8_1 = xmm0_2
        edi = *(arg1 + 0x30)
    
    float* result
    float xmm0_3
    bool p_4
    
    if (esi[1] == 1)
        result = *esi
        xmm0_3 = *result
        float temp1_1 = result[1]
        xmm0_3 - temp1_1
        result:1.b = (xmm0_3 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp1_1) ? 1 : 0) << 2
            | (xmm0_3 < temp1_1 ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (esi[1] != 1 || p_4)
        int32_t ecx_13 = (*(edi + 0x2c) + *arg2) * *arg2
        int32_t edx_6 = (ecx_13 << 0xf) + not.d(ecx_13)
        int32_t ecx_15 = (edx_6 u>> 0xc ^ edx_6) * 5
        int32_t eax_16 = (ecx_15 u>> 4 ^ ecx_15) * 0x809
        result, xmm0_3 = sub_4e0380(esi, *(edi + 0x2f4), *(edi + 0x2e8), 
            (((eax_16 u>> 0x10 ^ eax_16) & 0x7fffff) | 0x3f800000) - 1f)
    
    return result
}
