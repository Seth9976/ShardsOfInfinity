// 函数名称: sub_46ae50
// 虚拟地址: 0x46ae50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_46ae50(void* arg1, char** arg2)
{
    // 第一条实际指令: *arg2 = sub_46ade0(arg1)
    *arg2 = sub_46ade0(arg1)
    char* eax_1
    
    if (*(arg1 + 0x784) != 0)
        int32_t* eax_2 = sub_45d320(arg1)
        eax_1 = sub_4b8a40(eax_2, eax_2, &data_5b1d6c, 0x6b)
    else
        eax_1 = nullptr
    
    char* eax_3 = *arg2
    
    if (eax_3 != 0 && *eax_3 != 0)
        int32_t* eax_4 = sub_45d320(arg1)
        char*** eax_5 = sub_4b8ac0(eax_4, eax_4, &data_5b1d6c, data_dff67c, 0x68)
        
        if (eax_5 != 0)
            int32_t i = 0
            
            if (eax_5[1] s> 0)
                int32_t edi_1 = 0
                
                do
                    if (__stricmp(*(*eax_5 + edi_1), eax_3) == 0)
                        if (eax_1 != 0 && *eax_1 != 0 && __stricmp(*arg2, eax_1) != 0)
                            return 2
                        
                        return 1
                    
                    i += 1
                    edi_1 += 0xc
                while (i s< eax_5[1])
    
    return 0
}
