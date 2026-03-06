// 函数名称: sub_44f4d0
// 虚拟地址: 0x44f4d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44f4d0(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* edx = *arg2
    char* edx = *arg2
    char* const eax = &data_5559b1
    
    if (edx != 0)
        eax = edx
    
    while (true)
        edx.b = *arg1
        char temp0_1 = *eax
        bool c_1 = edx.b u< temp0_1
        
        if (edx.b == temp0_1)
            if (edx.b == 0)
                break
            
            edx.b = arg1[1]
            char temp1_1 = eax[1]
            c_1 = edx.b u< temp1_1
            
            if (edx.b == temp1_1)
                arg1 = &arg1[2]
                eax = &eax[2]
                
                if (edx.b == 0)
                    break
                
                continue
        
        int32_t result
        result.b = (sbb.d(eax, eax, c_1) | 1) == 0
        return result
    
    int32_t eax_1
    eax_1.b = true
    return 1
}
