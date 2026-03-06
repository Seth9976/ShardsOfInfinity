// 函数名称: sub_44f450
// 虚拟地址: 0x44f450
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44f450(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: char* ecx = *arg1
    char* ecx = *arg1
    char* const eax = &data_5559b1
    
    if (ecx != 0)
        eax = ecx
    
    while (true)
        ecx.b = *eax
        char temp0_1 = *arg2
        bool c_1 = ecx.b u< temp0_1
        
        if (ecx.b == temp0_1)
            if (ecx.b == 0)
                break
            
            ecx.b = eax[1]
            char temp1_1 = arg2[1]
            c_1 = ecx.b u< temp1_1
            
            if (ecx.b == temp1_1)
                eax = &eax[2]
                arg2 = &arg2[2]
                
                if (ecx.b == 0)
                    break
                
                continue
        
        int32_t result
        result.b = (sbb.d(eax, eax, c_1) | 1) == 0
        return result
    
    int32_t eax_1
    eax_1.b = true
    return 1
}
