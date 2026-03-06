// 函数名称: ?crop_zeroes@__crt_stdio_output@@YAXPADQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x520685
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*?crop_zeroes@__crt_stdio_output@@YAXPADQAU__crt_locale_pointers@@@Z(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* ecx = arg1
    char* ecx = arg1
    int32_t ebx
    ebx.b = ***(*arg2 + 0x88)
    char* result
    result.b = *ecx
    
    if (result.b != 0)
        char edx = result.b
        
        do
            result.b = edx
            
            if (edx == ebx.b)
                break
            
            ecx = &ecx[1]
            result.b = *ecx
            edx = result.b
        while (result.b != 0)
    
    void* ecx_1 = &ecx[1]
    
    if (result.b != 0)
        while (true)
            result.b = *ecx_1
            
            if (result.b == 0)
                break
            
            if (result.b == 0x65)
                break
            
            if (result.b == 0x45)
                break
            
            ecx_1 += 1
        
        void* edx_1 = ecx_1
        
        do
            ecx_1 -= 1
            result.b = *ecx_1
        while (result.b == 0x30)
        
        if (result.b == ebx.b)
            ecx_1 -= 1
        
        do
            result.b = *edx_1
            ecx_1 += 1
            edx_1 += 1
            *ecx_1 = result.b
        while (result.b != 0)
    
    return result
}
