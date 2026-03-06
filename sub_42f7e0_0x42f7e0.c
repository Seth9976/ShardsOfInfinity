// 函数名称: sub_42f7e0
// 虚拟地址: 0x42f7e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_42f7e0()
{
    // 第一条实际指令: if (data_65ac50 == 0)
    if (data_65ac50 == 0)
        return 
    
    _free(data_65acbc)
    _free(data_65acc0)
    _free(data_65ac98)
    _free(data_65acb4)
    _free(data_65acc4)
    _free(data_65acb8)
    _free(data_65ac9c)
    _free(data_65acc8)
    _free(data_65accc)
    int32_t* eax_1 = data_65aca0
    int32_t i = 0
    
    if (*eax_1 s> 0)
        do
            _free(*(data_65aca4 + (i << 2)))
            _free(*(data_65aca8 + (i << 2)))
            eax_1 = data_65aca0
            i += 1
        while (i s< *eax_1)
    
    _free(eax_1)
    _free(data_65aca4)
    _free(data_65aca8)
    int32_t i_1 = 0
    
    if (data_65ac84 + 1 s> 0)
        do
            _free(*(data_65acac + (i_1 << 2)))
            _free(*(data_65acb0 + (i_1 << 2)))
            i_1 += 1
        while (i_1 s< data_65ac84 + 1)
    
    _free(data_65acac)
    _free(data_65acb0)
    
    for (int32_t* i_2 = nullptr; i_2 s< 0x410; i_2 = &i_2[1])
        _free(*(i_2 + data_65acd8))
    
    _free(data_65acd8)
    _free(data_65acdc)
    int32_t ecx_1 = data_65ac80
    int32_t esi_1 = 0
    
    if (ecx_1 s> 0)
        do
            int32_t eax_12 = *(data_65ace8 + (esi_1 << 2))
            
            if (eax_12 != 0)
                _free(eax_12)
                ecx_1 = data_65ac80
            
            esi_1 += 1
        while (esi_1 s< ecx_1)
    
    _free(data_65ace8)
    data_65ac50 = 0
}
