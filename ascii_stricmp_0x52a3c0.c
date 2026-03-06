// 函数名称: ___ascii_stricmp
// 虚拟地址: 0x52a3c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t___ascii_stricmp(char* arg1, char* arg2)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    int32_t edi
    int32_t var_c = edi
    char* edi_1 = arg2
    uint32_t ecx_1
    uint32_t edx_1
    
    do
        ecx_1 = zx.d(*esi)
        esi = &esi[1]
        
        if (ecx_1 - 0x41 u<= 0x19)
            ecx_1 += 0x20
        
        edx_1 = zx.d(*edi_1)
        edi_1 = &edi_1[1]
        
        if (edx_1 - 0x41 u<= 0x19)
            edx_1 += 0x20
        
        if (ecx_1 == 0)
            break
    while (ecx_1 == edx_1)
    
    return ecx_1 - edx_1
}
