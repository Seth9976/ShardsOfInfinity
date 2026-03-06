// 函数名称: ___acrt_stdio_flush_nolock
// 虚拟地址: 0x529cf3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_stdio_flush_nolock(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    char edx = (arg1[3]).b
    
    if ((edx & 3) == 2 && (edx & 0xc0) != 0)
        int16_t* eax_1 = arg1[1]
        enum CONSOLE_MODE edi_2 = *arg1 - eax_1
        *arg1 = eax_1
        arg1[2] = 0
        
        if (edi_2 s> 0)
            if (edi_2 != __write(__fileno(arg1), eax_1, edi_2))
                arg1[3] |= 0x10
                return 0xffffffff
            
            if (((arg1[3] u>> 2).b & 1) != 0)
                arg1[3] &= 0xfffffffd
    
    return 0
}
