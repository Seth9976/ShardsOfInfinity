// 函数名称: __get_osfhandle
// 虚拟地址: 0x537b2c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__get_osfhandle(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0xfffffffe)
    if (arg1 != 0xfffffffe)
        if (arg1 s>= 0 && arg1 u< data_65a978)
            int32_t ecx_2 = (arg1 & 0x3f) * 0x30
            int32_t eax_5 = (&data_65a778)[arg1 s>> 6]
            
            if ((*(eax_5 + ecx_2 + 0x28) & 1) != 0)
                return *(eax_5 + ecx_2 + 0x18)
        
        *___doserrno() = 0
        *__errno() = 9
        __invalid_parameter_noinfo()
    else
        *___doserrno() = 0
        *__errno() = 9
    
    return 0xffffffff
}
