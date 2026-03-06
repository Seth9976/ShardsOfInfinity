// 函数名称: ___scrt_unhandled_exception_filter@4
// 虚拟地址: 0x51c6a2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall___scrt_unhandled_exception_filter@4(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *arg1
    int32_t* eax_1 = *arg1
    
    if (*eax_1 == 0xe06d7363 && eax_1[4] == 3)
        int32_t eax_2 = eax_1[5]
        
        if (eax_2 == 0x19930520 || eax_2 == 0x19930521 || eax_2 == 0x19930522 || eax_2 == 0x1994000)
            sub_52f140()
            noreturn
    
    return 0
}
