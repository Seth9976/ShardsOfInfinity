// 函数名称: sub_47c180
// 虚拟地址: 0x47c180
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_47c180(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_11 = data_cdf424
    int32_t eax_11 = data_cdf424
    
    if (*(eax_11 + 0x1c) == 0)
        sub_44e4d0(eax_11, &data_5559b1, "gpSpriteAppData->materialBound", 
            "c:\ax2017\engine\sprite.cpp", 0x5c, "SpritePutMaterialInCache")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax = sub_45cfa0(0xf08)
    eax[3] += 1
    void* var_18
    int32_t* esi
    
    if (eax[4] != 0xffffffff)
        esi = *eax
        
        if (esi == 0)
            sub_45ce30(eax)
            esi = *eax
        
        int32_t var_10_1 = 0xf04
        *eax = *esi
        int32_t var_14_1 = 0
        var_18 = &esi[1]
    else
        esi = sub_45cd70(0xf08)
        int32_t var_10 = 0xf04
        int32_t var_14 = 0
        var_18 = &esi[1]
    
    _memset(var_18, 0, 0xf04)
    *esi = arg1
    sub_4b4b60(&esi[1], arg1)
    void* edi_1 = data_cdf424
    int32_t* eax_4 = sub_45cfa0(0xc)
    eax_4[3] += 1
    int32_t* ecx_3 = *eax_4
    
    if (ecx_3 == 0)
        sub_45ce30(eax_4)
        ecx_3 = *eax_4
    
    *eax_4 = *ecx_3
    ecx_3[2] = 0
    *ecx_3 = esi
    ecx_3[1] = 0
    ecx_3[2] = *(edi_1 + 0x44)
    void* eax_7 = *(edi_1 + 0x44)
    
    if (eax_7 == 0)
        *(edi_1 + 0x48) += 1
        *(edi_1 + 0x40) = ecx_3
        *(edi_1 + 0x44) = ecx_3
        return &esi[1]
    
    *(eax_7 + 4) = ecx_3
    *(edi_1 + 0x48) += 1
    *(edi_1 + 0x44) = ecx_3
    return &esi[1]
}
