// 函数名称: sub_4366d0
// 虚拟地址: 0x4366d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __fastcallsub_4366d0(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    
    if (data_5bb1e4.d != 0x1e)
        ebx = 0
        
        if (data_5bb1f0.d == 0x1e)
            ebx = data_5bb1f0:4
    else
        ebx = data_5bb1e4:4
    
    int128_t var_1c
    int128_t* eax
    int32_t edx_1
    eax, edx_1 = sub_47a430(&var_1c, 0)
    int32_t i = 0
    float xmm1[0x4] = *eax
    void* eax_1 = arg1
    float xmm2_1 = xmm1[0] + _mm_shuffle_ps(xmm1, xmm1, 0xaa)
    float xmm0_5 = (_mm_shuffle_ps(xmm1, xmm1, 0x55) + _mm_shuffle_ps(xmm1, xmm1, 0xff)) * 0.5f
    *(eax_1 + 0x34) = xmm2_1 * 0.5f
    *(eax_1 + 0x38) = xmm0_5
    
    if (*(eax_1 + 0x14) s> 0)
        void* edi_1 = eax_1 + 0x3c
        
        do
            int32_t eax_2 = *(eax_1 + (i << 2))
            void* var_104_1
            int32_t var_100_1
            
            if (eax_2 != 0)
                sub_47a240(eax_2 - 1)
                var_100_1 = 0xffffffff
                void var_3c
                var_104_1 = &var_3c
            else
                var_100_1 = eax_2
                void var_2c
                var_104_1 = &var_2c
            
            int128_t* eax_5
            eax_5, edx_1 = sub_47a430(var_104_1, var_100_1)
            i += 1
            eax_1 = arg1
            var_1c = *eax_5
            float xmm0_9 = (var_1c:4.d f+ var_1c:0xc.d) * 0.5f
            *edi_1 = (var_1c.d f+ var_1c:8.d) * 0.5f
            *(edi_1 + 4) = xmm0_9
            edi_1 += 8
        while (i s< *(eax_1 + 0x14))
    
    void var_ec
    int128_t* result = sub_47a330(&var_ec, edx_1, ebx, &var_ec)
    float xmm1_5[0x4] = *result
    int128_t var_84 = result[1]
    int128_t xmm0_11 = result[2]
    int32_t xmm1_6 = _mm_shuffle_ps(xmm1_5, xmm1_5, 0xff)
    int128_t var_74 = xmm0_11
    int128_t var_64 = result[3]
    int128_t xmm0_13 = result[4]
    *(arg1 + 0x64) = xmm1_6
    int128_t var_54 = xmm0_13
    return result
}
