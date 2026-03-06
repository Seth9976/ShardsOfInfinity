// 函数名称: sub_48c4a0
// 虚拟地址: 0x48c4a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_48c4a0(char* arg1, char* arg2)
{
    // 第一条实际指令: char* ebx = arg2
    char* ebx = arg2
    char* var_8 = arg1
    char* var_10 = ebx
    char* edx = arg1
    
    if (*ebx == 0)
        return edx
    
    arg1.b = *edx
    
    if (arg1.b != 0)
        char* eax_3 = edx - ebx
        char* var_c_1 = eax_3
        
        do
            char* esi_1 = ebx
            
            if (arg1.b != 0)
                do
                    ebx.b = *esi_1
                    
                    if (ebx.b == 0)
                        return var_8
                    
                    uint32_t eax_5 = _tolower(sx.d(*(eax_3 + esi_1)))
                    uint32_t eax_7
                    eax_7, arg1 = _tolower(sx.d(ebx.b))
                    eax_3 = var_c_1
                    
                    if (eax_5 != eax_7)
                        break
                    
                    esi_1 = &esi_1[1]
                while (*(eax_3 + esi_1) != 0)
                
                ebx = var_10
                edx = var_8
            
            if (*esi_1 == 0)
                return edx
            
            arg1.b = edx[1]
            edx = &edx[1]
            eax_3 = &eax_3[1]
            var_8 = edx
            var_c_1 = eax_3
        while (arg1.b != 0)
    
    return 0
}
