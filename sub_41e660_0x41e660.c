// 函数名称: sub_41e660
// 虚拟地址: 0x41e660
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_41e660(int32_t* arg1)
{
    // 第一条实际指令: char* eax = *arg1
    char* eax = *arg1
    
    if (eax != 0 && *eax != 0 && *(sub_44f000(arg1) + 8) == 8)
        int32_t esi_1 = 0
        
        while (true)
            char* eax_1 = *arg1
            int32_t eax_3
            
            if (eax_1 == 0 || *eax_1 == 0)
                eax_3 = 0
            else
                eax_3 = *(sub_44f000(arg1) + 8)
            
            if (esi_1 s>= eax_3)
                eax_3.b = 1
                return eax_3
            
            char* eax_4 = *arg1
            char* const ecx_1 = &data_5559b1
            
            if (eax_4 != 0)
                ecx_1 = eax_4
            
            if (_isalpha(ecx_1[esi_1]) == 0)
                char* eax_7 = *arg1
                char* const ecx_2 = &data_5559b1
                
                if (eax_7 != 0)
                    ecx_2 = eax_7
                
                if (_isdigit(ecx_2[esi_1]) == 0)
                    break
            
            esi_1 += 1
    
    eax.b = 0
    return eax
}
