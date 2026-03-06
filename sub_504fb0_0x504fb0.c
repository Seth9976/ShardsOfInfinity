// 函数名称: sub_504fb0
// 虚拟地址: 0x504fb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __fastcallsub_504fb0(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    LRESULT result
    void* ecx
    char* edx_1
    
    if (arg1 != 0)
        edx_1 = arg1
        ecx = &edx_1[1]
        
        do
            result.b = *edx_1
            edx_1 = &edx_1[1]
        while (result.b != 0)
    
    if (arg1 == 0 || edx_1 != ecx)
        WPARAM wParam = 0
        result = SendMessageA(*(data_e47264 + 0x14), 0x18b, 0, 0)
        
        if (result s> 0)
            do
                LRESULT eax_2 = SendMessageA(*(data_e47264 + 0x14), 0x199, wParam, 0)
                
                if (eax_2 != 0xffffffff && eax_2 != 0 && *(eax_2 + 0x14) == 0x63)
                    uint32_t eax_3
                    
                    if (arg1 != 0)
                        eax_3 = __mbsicmp(*eax_2, arg1)
                    
                    if ((arg1 == 0 || eax_3 == 0) && *(eax_2 + 0x18) != 0)
                        sub_5031a0(eax_2)
                
                wParam += 1
                result = SendMessageA(*(data_e47264 + 0x14), 0x18b, 0, 0)
            while (wParam s< result)
    
    return result
}
