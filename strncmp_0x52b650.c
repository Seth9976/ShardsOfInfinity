// 函数名称: _strncmp
// 虚拟地址: 0x52b650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_strncmp(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: char* edx = arg2
    char* edx = arg2
    int32_t ebx = arg3
    
    if ((ebx & 0xffffffff) == 0)
        return 0
    
    int32_t* ecx_1 = arg1 - edx
    
    if ((edx & 3) != 0)
        goto label_52b670
    
    while (true)
        if (((ecx_1 + edx) & 0xfff) u<= 0xffc)
            int32_t eax_4 = *(ecx_1 + edx)
            
            if (eax_4 == *edx)
                int32_t temp1_1 = ebx
                ebx -= 4
                
                if (temp1_1 u<= 4)
                    return 0
                
                edx = &edx[4]
                
                if ((not.d(eax_4) & (eax_4 - 0x1010101) & 0x80808080) != 0)
                    return 0
                
                continue
        
    label_52b670:
        uint32_t eax_1 = zx.d(*(ecx_1 + edx))
        char temp0_1 = *edx
        
        if (eax_1.b != temp0_1)
            return sbb.d(eax_1, eax_1, eax_1.b u< temp0_1) | 1
        
        if (eax_1 == 0)
            return 0
        
        edx = &edx[1]
        int32_t temp2_1 = ebx
        ebx -= 1
        
        if (temp2_1 u<= 1)
            return 0
        
        if ((edx.b & 3) != 0)
            break
}
