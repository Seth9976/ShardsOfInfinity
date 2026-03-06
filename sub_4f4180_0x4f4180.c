// 函数名称: sub_4f4180
// 虚拟地址: 0x4f4180
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4f4180()
{
    // 第一条实际指令: int32_t* ecx = data_ce2758
    int32_t* ecx = data_ce2758
    int32_t* eax = ecx[1]
    
    if (eax != 0x19)
        if (eax == 0x18)
            return sub_4f49a0(0x42c80000, 0x42c80000)
        
        if (eax == 2)
            char** eax_3 = sub_4b6020(ecx)
            data_ce2780 = eax_3[0x1a]
            eax = *sub_490e40(eax_3[1])
            
            if (eax != 0 && eax[0x10] s> 0)
                data_ce2784 = 0
                return sub_4ba8f0(eax, eax_3[1], eax_3, 0)
            
            data_ce2784 = 0xffffffff
    else
        int128_t xmm0_1 = data_5724f8
        int64_t var_3c_1 = _mm_unpacklo_ps(0x43480000, 0x43480000)
        int32_t var_34_1 = 0
        int128_t var_30 = 0x3f800000.o
        int128_t var_20_1 = xmm0_1
        eax = sub_495120(ecx, &var_30)
        
        if (eax[0x1d].b != 0)
            *(eax + 0x76) = 1
            int128_t xmm0_4 = data_5724f8
            int32_t* ecx_1 = data_ce2758
            int64_t var_3c_2 = 0
            int32_t var_34_2 = 0
            var_30 = 0x3f800000.o
            int128_t var_20_2 = xmm0_4
            sub_495120(ecx_1, &var_30)
            int32_t eax_1
            int80_t st0
            st0, eax_1 = sub_4f48b0(data_ce2758)
            return eax_1
    
    return eax
}
