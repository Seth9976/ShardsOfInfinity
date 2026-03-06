// 函数名称: ___FrameUnwindFilter
// 虚拟地址: 0x51cdf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___FrameUnwindFilter(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *arg1
    int32_t* eax_1 = *arg1
    
    if (*eax_1 == 0xe0434352 || *eax_1 == 0xe0434f4d)
        if (*(sub_51e354() + 0x18) s> 0)
            void* eax_4 = sub_51e354()
            *(eax_4 + 0x18) -= 1
    else if (*eax_1 == 0xe06d7363)
        *(sub_51e354() + 0x18) = 0
        noreturn sub_52f140() __tailcall
    
    return 0
}
