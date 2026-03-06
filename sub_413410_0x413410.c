// 函数名称: sub_413410
// 虚拟地址: 0x413410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_413410()
{
    // 第一条实际指令: void* i_1 = nullptr
    void* i_1 = nullptr
    sub_414460(&data_5bb160, &i_1)
    
    for (void* i = i_1; i != 0xffffffff; i = i_1)
        int32_t* esi_1 = i + 0x404
        int32_t j_1 = 0x80
        int32_t j
        
        do
            if (*esi_1 != 0)
                sub_45e9a0(esi_1)
            
            esi_1 = &esi_1[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        int32_t ecx_2 = data_5bb16c
        data_5bb16c = zx.d(*(i + 0x638))
        *(i + 0x638) = ecx_2
        data_5bb170 -= 1
        sub_414460(&data_5bb160, &i_1)
    
    return sub_414390()
}
