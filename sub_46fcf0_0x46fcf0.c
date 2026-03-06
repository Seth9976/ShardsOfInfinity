// 函数名称: sub_46fcf0
// 虚拟地址: 0x46fcf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_46fcf0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t result = 1
    uint32_t result = 1
    *arg2 = arg1
    int32_t eax_1
    
    if (*(arg1 + 0x784) != 0)
        int32_t* eax_2 = sub_45d320(arg1)
        eax_1 = sub_4b8a40(eax_2, eax_2, &data_5b1d6c, 0x6b)
    else
        eax_1 = 0
    
    int32_t var_8 = eax_1
    
    if (*eax_1 != 0)
        int32_t i = 0
        
        if (*(arg1 + 0x7f4) s> 0)
            do
                char* eax_3
                char* ecx_1
                eax_3, ecx_1 = sub_462970(arg1, i)
                int32_t var_24_1 = eax_1
                sub_46fc70(eax_3, &result, eax_3, arg2, ecx_1)
                i += 1
            while (i s< *(arg1 + 0x7f4))
            
            return result
    
    return 1
}
