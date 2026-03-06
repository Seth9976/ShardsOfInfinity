// 函数名称: sub_428e90
// 虚拟地址: 0x428e90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_428e90()
{
    // 第一条实际指令: int32_t xmm2 = data_5b0f3c
    int32_t xmm2 = data_5b0f3c
    int32_t ebx
    int32_t var_14 = ebx
    int32_t xmm0
    int32_t var_c = xmm0
    int64_t* i = &data_5bb1f0
    int32_t var_c_1 = xmm2
    
    do
        int32_t eax_1 = i[-2].d
        ebx.b = 0
        
        if (eax_1 != 0)
            if (eax_1 != *(i - 0xc))
                if (eax_1 != *i)
                    sub_45e9a0(i + 4)
                    int32_t eax_3 = *(i - 4)
                    xmm2 = var_c_1
                    *i = *(i - 0xc)
                    i[1].d = eax_3
                    *(i - 0xc) = i[-2].d
                    int32_t eax_5 = *(i + 0xc)
                    *(i - 4) = eax_5
                    i[-1].d = 0
                    *(i + 0xc) = eax_5 + 1
                else
                    int64_t xmm1_1 = *(i - 0xc)
                    int32_t ecx_1 = *(i - 4)
                    int32_t eax_2 = i[1].d
                    *(i - 0xc) = *i
                    *i = xmm1_1
                    *(i - 4) = eax_2
                    i[1].d = ecx_1
                
                ebx.b = 1
            
            i[-2].d = 0
        
        sub_428be0(i, 1, xmm2)
        sub_428be0(i - 0xc, 0, var_c_1)
        
        if (ebx.b != 0)
            sub_47b400(i[-1].d)
        
        xmm2 = var_c_1
        i = &i[4]
    while (i s< &data_5bb2b0)
    
    int32_t result = data_5bb268
    int32_t result_1 = data_5bb244:4
    
    if (result != 0)
        result_1 = result
    
    data_5c99e0 = result_1
    return result
}
