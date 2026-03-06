// 函数名称: sub_44f3f0
// 虚拟地址: 0x44f3f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_44f3f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* ecx = *arg1
    char* ecx = *arg1
    char* edx = *arg2
    char* const eax_1 = &data_5559b1
    char* const esi = &data_5559b1
    
    if (edx != 0)
        esi = edx
    
    if (ecx != 0)
        eax_1 = ecx
    
    while (true)
        ecx.b = *eax_1
        char temp1_1 = *esi
        bool c_1 = ecx.b u< temp1_1
        
        if (ecx.b == temp1_1)
            if (ecx.b == 0)
                break
            
            ecx.b = eax_1[1]
            char temp2_1 = esi[1]
            c_1 = ecx.b u< temp2_1
            
            if (ecx.b == temp2_1)
                eax_1 = &eax_1[2]
                esi = &esi[2]
                
                if (ecx.b == 0)
                    break
                
                continue
        
        int32_t result
        result.b = (sbb.d(eax_1, eax_1, c_1) | 1) == 0
        return result
    
    int32_t eax_2
    eax_2.b = true
    return 1
}
