// 函数名称: sub_4950a0
// 虚拟地址: 0x4950a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4950a0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: char* edi = arg1
    char* edi = arg1
    int32_t result = arg2
    char i = *edi
    
    while (i != 0)
        char eax_1 = _tolower(sx.d(i))
        char ecx = eax_1
        edi = &edi[1]
        
        if (eax_1 == 0x5c)
            ecx = 0x2f
        
        i = *edi
        result = result u>> 8 ^ *(((zx.d(ecx) ^ zx.d(result.b)) << 2) + &data_5720f8)
    
    return result
}
