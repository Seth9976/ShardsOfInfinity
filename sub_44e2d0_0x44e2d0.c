// 函数名称: sub_44e2d0
// 虚拟地址: 0x44e2d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44e2d0(char* arg1)
{
    // 第一条实际指令: void* esi = data_65ac4c
    void* esi = data_65ac4c
    
    if (esi == 0)
        sub_48c200(&data_65acf8)
        esi = _fopen(&data_65acf8, U"a")
        
        if (esi == 0)
            return OutputDebugStringA("Failed to open log file\n")
    
    char* ecx = arg1
    data_65ac4c = esi
    void* eax
    
    do
        eax.b = *ecx
        ecx = &ecx[1]
    while (eax.b != 0)
    void* var_c = esi
    
    if (_fwrite(arg1, ecx - &ecx[1], 1) != 1)
        OutputDebugStringA("Failed to write to log file\n")
    
    return _fflush(esi)
}
