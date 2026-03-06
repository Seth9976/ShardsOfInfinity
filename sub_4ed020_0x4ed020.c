// 函数名称: sub_4ed020
// 虚拟地址: 0x4ed020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4ed020(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t* var_8 = esi
    int32_t eax
    int32_t eax_1 = sub_4dd7f0(eax, esi[1], *esi, arg2[0xc])
    int32_t* i = arg2[6]
    int32_t ecx_1 = eax_1
    int32_t var_c = ecx_1
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[5]
        
        if (*esi == *i_1 && esi[1] == i_1[1])
            int32_t* edx_1 = esi[2]
            int32_t* eax_4 = i_1[2]
            int32_t j_1 = ecx_1 - 4
            
            if (ecx_1 u>= 4)
                int32_t j
                
                do
                    if (*edx_1 != *eax_4)
                        goto label_4ed086
                    
                    edx_1 = &edx_1[1]
                    eax_4 = &eax_4[1]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            if (j_1 == 0xfffffffc)
            label_4ed0eb:
                var_8[3] = i_1[3]
                var_8[4] = i_1[4]
                return 0
            
        label_4ed086:
            ecx_1.b = *edx_1
            
            if (ecx_1.b == *eax_4)
                if (j_1 == 0xfffffffd)
                    goto label_4ed0eb
                
                ecx_1.b = *(edx_1 + 1)
                
                if (ecx_1.b == *(eax_4 + 1))
                    if (j_1 == 0xfffffffe)
                        goto label_4ed0eb
                    
                    ecx_1.b = *(edx_1 + 2)
                    
                    if (ecx_1.b == *(eax_4 + 2))
                        if (j_1 == 0xffffffff)
                            goto label_4ed0eb
                        
                        ecx_1.b = *(edx_1 + 3)
                        
                        if (ecx_1.b == *(eax_4 + 3))
                            goto label_4ed0eb
            
            ecx_1 = var_c
            esi = var_8
    
    int32_t ecx_3
    ecx_3.b = sub_4ec890(&esi[3], esi[1], *esi, arg2, &esi[3]) != 0
    return ecx_3 + 1
}
