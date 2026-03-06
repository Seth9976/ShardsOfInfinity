// 函数名称: sub_44f490
// 虚拟地址: 0x44f490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44f490(int32_t* arg1)
{
    // 第一条实际指令: char* ecx_1 = *arg1
    char* ecx_1 = *arg1
    char* const eax = &data_5559b1
    
    if (ecx_1 != 0)
        eax = ecx_1
    
    char* const ecx = &data_5559b1
    
    while (true)
        char edx = *eax
        char temp0_1 = *ecx
        bool c_1 = edx u< temp0_1
        
        if (edx == temp0_1)
            if (edx == 0)
                break
            
            edx = eax[1]
            char temp1_1 = ecx[1]
            c_1 = edx u< temp1_1
            
            if (edx == temp1_1)
                eax = &eax[2]
                ecx = &ecx[2]
                
                if (edx == 0)
                    break
                
                continue
        
        int32_t result
        result.b = (sbb.d(eax, eax, c_1) | 1) != 0
        return result
    
    int32_t eax_1
    eax_1.b = false
    return 0
}
