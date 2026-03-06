// 函数名称: sub_519030
// 虚拟地址: 0x519030
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_519030(int32_t arg1, int32_t* arg2, void* arg3, uint32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: uint32_t var_c
    uint32_t var_c
    int32_t* ecx = &var_c
    
    if (arg5 != 0)
        ecx = arg5
    
    int32_t i_1 = 0x5c
    int32_t i
    
    do
        int32_t eax_1 = *(arg3 + 0xa8)
        
        if (eax_1 u< *(arg3 + 0xac))
            *(arg3 + 0xa8) = eax_1 + 1
        else if (*(arg3 + 0x20) != 0)
            sub_50ebb0(arg3)
            *(arg3 + 0xa8) += 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    uint32_t eax_3 = sub_50ecf0(arg3)
    uint32_t eax_4 = sub_50ecf0(arg3)
    bool cond:1 = *(arg3 + 0x10) == 0
    var_c = eax_4
    
    if (cond:1)
    label_5190bd:
        
        if (*(arg3 + 0xa8) u< *(arg3 + 0xac))
            goto label_5190c9
    else if ((*(arg3 + 0x18))(*(arg3 + 0x1c)) == 0)
    label_5190c9:
        
        if (eax_3 s>= 0 && eax_4 s>= 0)
            int32_t ecx_5
            
            if (eax_4 != 0)
                ecx_5.b = eax_3 s<= divs.dp.d(0x7fffffff, eax_4)
            
            if (eax_4 == 0 || ecx_5 != 0)
                int32_t edi_2 = eax_4 * eax_3
                
                if (edi_2 s>= 0 && edi_2 s<= 0x1fffffff)
                    sub_50ecf0(arg3)
                    sub_50ecf0(arg3)
                    sub_50ecf0(arg3)
                    sub_50ecf0(arg3)
                    char* ebx_1
                    int32_t edi_3
                    
                    if (eax_4 == 0)
                        if (edi_2 s>= 0 && edi_2 s<= 0x1fffffff)
                            goto label_519145
                        
                        ebx_1 = nullptr
                        edi_3 = edi_2 << 2
                    else if (eax_3 s> divs.dp.d(0x7fffffff, eax_4) || edi_2 s< 0 || edi_2 s> 0x1fffffff)
                        ebx_1 = nullptr
                        edi_3 = edi_2 << 2
                    else
                    label_519145:
                        edi_3 = edi_2 << 2
                        int32_t var_20_2 = edi_3
                        ebx_1 = _malloc()
                    
                    uint32_t (* eax_12)[0x4] = _memset(ebx_1, 0xff, edi_3)
                    uint32_t edi_4 = var_c
                    
                    if (sub_518b20(eax_12, eax_3, arg3, edi_4, ecx, ebx_1) == 0)
                        _free(ebx_1)
                        ebx_1 = nullptr
                    
                    *arg2 = eax_3
                    *arg4 = edi_4
                    return sub_50ee30(ecx, 4, ebx_1, *ecx, eax_3, edi_4)
    else if (*(arg3 + 0x20) != 0)
        goto label_5190bd
    
    return 0
}
