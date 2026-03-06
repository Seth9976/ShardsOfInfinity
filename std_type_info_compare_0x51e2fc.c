// 函数名称: ___std_type_info_compare
// 虚拟地址: 0x51e2fc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___std_type_info_compare(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 != arg2)
    if (arg1 != arg2)
        char* ecx_1 = arg2 + 5
        char* eax_2 = arg1 + 5
        
        while (true)
            char edx = *eax_2
            char temp0_1 = *ecx_1
            bool c_1 = edx u< temp0_1
            
            if (edx == temp0_1)
                if (edx == 0)
                    break
                
                edx = eax_2[1]
                char temp1_1 = ecx_1[1]
                c_1 = edx u< temp1_1
                
                if (edx == temp1_1)
                    eax_2 = &eax_2[2]
                    ecx_1 = &ecx_1[2]
                    
                    if (edx == 0)
                        break
                    
                    continue
            
            return sbb.d(eax_2, eax_2, c_1) | 1
    
    return 0
}
