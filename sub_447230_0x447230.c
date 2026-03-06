// 函数名称: sub_447230
// 虚拟地址: 0x447230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_447230(int32_t arg1, int32_t arg2, uint32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: void* edx = sub_4471d0(arg2)
    void* edx = sub_4471d0(arg2)
    uint32_t i = 0
    void* var_10 = edx
    uint32_t i_1 = 0
    
    if (*(edx + 8) s> 0)
        int32_t ecx_1 = 0
        int32_t var_c_1 = 0
        
        do
            int32_t j = 0
            void* edi_2 = *(edx + 4) + ecx_1
            
            if (*(edi_2 + 4) s> 0)
                do
                    int32_t* eax_1 = sub_445e10()
                    int32_t esi_1 = eax_1[6]
                    int32_t ecx_5 = (eax_1 - 0xdfd4cc) s>> 5
                    int32_t esi_3
                    
                    if (esi_1 == 0)
                        esi_3 = ecx_5
                    else
                        esi_3 = esi_1 << 0x10 | ecx_5
                    
                    *eax_1 = arg3
                    eax_1[1] = arg4
                    eax_1[4] = edi_2
                    eax_1[2] = 0
                    sub_445a20(sub_4461a0(eax_1, esi_3, &data_dfd4c8, arg3, arg4), 0, &data_dfd4c8, 
                        arg4, esi_3, arg3, i_1, 0)
                    j += 1
                while (j s< *(edi_2 + 4))
                
                i = i_1
                ecx_1 = var_c_1
                edx = var_10
            
            i += 1
            ecx_1 += 0x64
            i_1 = i
            var_c_1 = ecx_1
        while (i s< *(edx + 8))
    
    return i
}
