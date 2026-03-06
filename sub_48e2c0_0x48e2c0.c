// 函数名称: sub_48e2c0
// 虚拟地址: 0x48e2c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_48e2c0(char* arg1)
{
    // 第一条实际指令: void* result
    void* result
    
    if (*arg1 != 0)
        void* eax = _strchr(arg1, 0x5c)
        
        if (eax == 0)
            result = _strchr(arg1, 0x2f)
        
        if (eax == 0 && result == 0)
            result.b = 0
            return result
        
        int32_t xmm0[0x4]
        int32_t xmm0_1[0x4]
        result, xmm0_1 = _strstr(xmm0, arg1, 0x588548)
        
        if (result != 0)
            result.b = 0
            return result
        
        if (_strstr(xmm0_1, arg1, 0x58854c) != 0)
            result.b = 0
            return result
        
        if (sub_48e290(arg1).b == 0 && sub_495050(arg1) == 0)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
