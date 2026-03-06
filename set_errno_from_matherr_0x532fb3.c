// 函数名称: __set_errno_from_matherr
// 虚拟地址: 0x532fb3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*__set_errno_from_matherr(void* arg1)
{
    // 第一条实际指令: void* eax_1
    void* eax_1
    
    if (arg1 == 1)
        eax_1 = __errno()
        *eax_1 = 0x21
    else
        eax_1 = arg1 - 2
        
        if (eax_1 u<= 1)
            void* eax_2 = __errno()
            *eax_2 = 0x22
            return eax_2
    
    return eax_1
}
