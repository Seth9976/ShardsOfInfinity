// 函数名称: sub_46ea00
// 虚拟地址: 0x46ea00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_46ea00(char* arg1, char* arg2)
{
    // 第一条实际指令: char* eax = arg2
    char* eax = arg2
    char* ecx = arg1
    
    while (true)
        char edx = *ecx
        char temp0_1 = *eax
        bool c_1 = edx u< temp0_1
        
        if (edx == temp0_1)
            if (edx == 0)
                break
            
            edx = ecx[1]
            char temp1_1 = eax[1]
            c_1 = edx u< temp1_1
            
            if (edx == temp1_1)
                ecx = &ecx[2]
                eax = &eax[2]
                
                if (edx == 0)
                    break
                
                continue
        
        return (sbb.d(eax, eax, c_1) | 1) u>> 0x1f
    
    return 0
}
