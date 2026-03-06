// 函数名称: _memchr
// 虚拟地址: 0x51dc90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*_memchr(char* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = arg3
    int32_t result = arg3
    
    if (result != 0)
        char* edx_1 = arg1
        int32_t ebx_1
        ebx_1.b = arg2
        uint32_t ecx
        
        while ((edx_1 & 3) != 0)
            ecx.b = *edx_1
            edx_1 = &edx_1[1]
            ecx.b ^= ebx_1.b
            
            if (ecx.b == 0)
                return &edx_1[0xffffffff]
            
            int32_t result_1 = result
            result -= 1
            
            if (result_1 == 1)
                return result
        
        int32_t i_1 = result - 4
        
        if (result u>= 4)
            ebx_1 *= 0x1010101
            int32_t i
            
            do
                int32_t ecx_2 = *edx_1 ^ ebx_1
                edx_1 = &edx_1[4]
                
                if (((ecx_2 ^ 0xffffffff ^ (0x7efefeff + ecx_2)) & 0x81010100) != 0)
                    int32_t ecx_5
                    ecx_5.b = (*(edx_1 - 4)).b ^ ebx_1.b
                    
                    if (ecx_5.b == 0)
                        return &edx_1[0xfffffffc]
                    
                    ecx_5:1.b ^= ebx_1.b
                    
                    if (ecx_5:1.b == 0)
                        return &edx_1[0xfffffffd]
                    
                    ecx.b = (ecx_5 u>> 0x10).b ^ ebx_1.b
                    
                    if (ecx.b == 0)
                        return &edx_1[0xfffffffe]
                    
                    ecx:1.b ^= ebx_1.b
                    
                    if (ecx:1.b == 0)
                        return &edx_1[0xffffffff]
                
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        result = i_1 + 4
        
        if (i_1 != 0xfffffffc)
            while (true)
                ecx.b = *edx_1
                edx_1 = &edx_1[1]
                ecx.b ^= ebx_1.b
                
                if (ecx.b == 0)
                    return &edx_1[0xffffffff]
                
                int32_t result_2 = result
                result -= 1
                
                if (result_2 == 1)
                    return result
    
    return result
}
