// 函数名称: sub_48e250
// 虚拟地址: 0x48e250
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_48e250(char* arg1)
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
        
        if (sub_495050(arg1) != 0)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
