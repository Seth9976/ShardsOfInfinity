// 函数名称: __configthreadlocale
// 虚拟地址: 0x52f4dc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__configthreadlocale(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax = sub_530312()
    int32_t* eax = sub_530312()
    int32_t ecx = eax[0xd4]
    int32_t eax_1
    eax_1.b = (ecx.b & 2) == 0
    
    if (arg1 == 0xffffffff)
        data_5b03e4 = 0xffffffff
    else if (arg1 != 0)
        int32_t ecx_1
        
        if (arg1 == 1)
            ecx_1 = ecx | 2
        else
            if (arg1 != 2)
                *__errno() = 0x16
                __invalid_parameter_noinfo()
                return 0xffffffff
            
            ecx_1 = ecx & 0xfffffffd
        
        eax[0xd4] = ecx_1
    
    return eax_1 + 1
}
