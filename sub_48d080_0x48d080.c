// 函数名称: sub_48d080
// 虚拟地址: 0x48d080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_48d080()
{
    // 第一条实际指令: if (data_cdf454 != 0)
    if (data_cdf454 != 0)
        return 
    
    int32_t* eax_1 = sub_45cfa0(0x20)
    eax_1[3] += 1
    int32_t* ecx_1 = *eax_1
    
    if (ecx_1 == 0)
        sub_45ce30(eax_1)
        ecx_1 = *eax_1
    
    *eax_1 = *ecx_1
    ecx_1[4] = 0
    ecx_1[6] = 0
    __builtin_memset(ecx_1, 0, 0x20)
    data_cdf454 = ecx_1
    ecx_1[5] = 0x400
    void* eax_3 = sub_48e950(&ecx_1[3])
    int32_t* edi_1 = data_cdf454
    
    if (*edi_1 != 0)
        sub_44e4d0(eax_3, &data_5559b1, "mNodeBuckets == NULL", "c:\ax2017\engine\xmap.h", 0x72, 
            "XMap<class XString,struct XAsset *>::SetNumBuckets")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t eax_4 = sub_41b670(0x400)
    *edi_1 = sub_45cff0(eax_4 << 2)
    edi_1[1] = eax_4 - 1
    *(data_cdf454 + 0x1c) = 1
}
