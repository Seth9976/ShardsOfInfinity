// 函数名称: sub_4abc60
// 虚拟地址: 0x4abc60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4abc60()
{
    // 第一条实际指令: int32_t* eax = sub_45cfa0(0x25c)
    int32_t* eax = sub_45cfa0(0x25c)
    eax[3] += 1
    int32_t* edi = *eax
    
    if (edi == 0)
        sub_45ce30(eax)
        edi = *eax
    
    *eax = *edi
    _memset(edi, 0, 0x25c)
    data_ce19c4 = edi
    int32_t* eax_2 = sub_45cfa0(0x54)
    eax_2[3] += 1
    int32_t* esi_1 = *eax_2
    
    if (esi_1 == 0)
        sub_45ce30(eax_2)
        esi_1 = *eax_2
    
    *eax_2 = *esi_1
    _memset(esi_1, 0, 0x54)
    esi_1[0x11] = 0
    esi_1[0x12] = 0
    data_cdf424 = esi_1
    int32_t* eax_4 = sub_45cfa0(1)
    eax_4[3] += 1
    int32_t* ecx_3 = *eax_4
    
    if (ecx_3 == 0)
        sub_45ce30(eax_4)
        ecx_3 = *eax_4
    
    int32_t eax_5 = *ecx_3
    *eax_4 = eax_5
    *ecx_3 = 0
    bool cond:0 = data_654cc4 != 0
    data_ce1af0 = ecx_3
    
    if (cond:0)
        sub_44e4d0(eax_5, &data_5559b1, "mpBlock == NULL", "c:\ax2017\engine\dataarray.h", 0xce, 
            "DataArray<struct MaterialCacheItem>::DataArrayInitialize")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    data_654cc4 = sub_45cd70(0x78800)
    data_654ccc = 0x80
    data_654cdc = "materialcache"
    data_654cd8 = 0xd204
    _memset(&data_65ae08, 0, 0x38)
    _memset(&data_65ae44, 0, 0x108)
    _memset(0x65b04c, 0, 0x88)
    _memset(0x65b114, 0, 0xf8)
    _memset(&data_65b21c, 0, 0x6841e0)
    void* ecx_5 = data_ce19c4
    data_65ae40 = 0xff00ff00
    data_cdf3fc = 5
    __builtin_memset(&data_cdf400, 0, 0x14)
    int128_t xmm0 = data_571934
    __builtin_memcpy(&data_65b0d4, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    __builtin_memcpy(&data_65af4c, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "00\x00\x80\x3f\x"
    "
        0x100)
    data_65b20c = xmm0
    *(ecx_5 + 0x98) = 0xff0000ff
    __builtin_memcpy(ecx_5 + 0xa0, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    *(ecx_5 + 0x9c) = 1
    *(ecx_5 + 0x248) = 0
    return 0xff0000ff
}
