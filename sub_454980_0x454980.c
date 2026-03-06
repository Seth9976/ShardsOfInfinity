// 函数名称: sub_454980
// 虚拟地址: 0x454980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_454980(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x48)
    *(arg1 + 0x48)
    void* edi = *(arg1 + 4)
    int32_t eax = sub_454920()
    int32_t ebx = 0
    int32_t var_c = *(edi + 8)
    int32_t ecx_2 = *(edi + 0x18)
    int32_t var_8 = *(edi + 0xc)
    int32_t var_14
    int32_t ecx_6
    int32_t edx_3
    int32_t esi_3
    
    if (eax != 1)
        if ((*(*data_ce19b4 + 0x28))(*(edi + 0x24)) == 0)
            *(edi + 0x24) = (*(*data_ce19b4 + 0x24))(*(edi + 0x14), *(edi + 0x10), *(edi + 8), 0)
        
        if (*(edi + 0x1c) s> 0 && (*(*data_ce19b4 + 0x34))(*(edi + 0x28)) == 0)
            int32_t edx_4 = *(edi + 0x1c)
            int32_t eax_12
            eax_12.b = edx_4 != *(edi + 0x18) * 2
            *(edi + 0x28) =
                (*(*data_ce19b4 + 0x30))(*(edi + 0x20), edx_4, zx.d(eax_12.b), 0, *(edi + 0x24))
        
        ecx_6 = *(edi + 0x28)
        
        if (eax == 2)
            ebx = data_cdf3e4
        
        edx_3 = var_8
        esi_3 = ecx_2
        var_14 = *(edi + 0x24)
    else
        void* eax_2 = sub_4b3f40(sub_4b3e00(*(arg1 + 0x48)))
        sub_454700(*(arg1 + 4), *eax_2)
        edx_3 = *(edi + 0xc) * data_cdf3e4
        ecx_6 = *(edi + 0x30)
        var_14 = *(edi + 0x2c)
        esi_3 = *(edi + 0x18) * data_cdf3e4
        var_c = 0xc
        var_8 = edx_3
    
    int32_t edx_5
    int32_t eax_17
    int32_t eax_16
    
    if (ecx_6 == 0)
        edx_5:eax_17 = muls.dp.d(0x55555556, edx_3)
    else
        edx_5:eax_16 = muls.dp.d(0x55555556, esi_3)
    (*(*data_ce19b4 + 0x3c))(4, var_14, ecx_6, var_c, (edx_5 u>> 0x1f) + edx_5, var_8, 0, ebx)
    int32_t ecx_12 = data_cdf3e4
    void* result = data_ce19c4
    
    if (ecx_12 s<= 0)
        *(result + 0x18) += 1
        *(result + 0x1c) += 1
        return result
    
    *(result + 0x18) += ecx_12
    *(result + 0x1c) += 1
    return result
}
