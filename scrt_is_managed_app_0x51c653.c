// 函数名称: ___scrt_is_managed_app
// 虚拟地址: 0x51c653
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HMODULE___scrt_is_managed_app()
{
    // 第一条实际指令: HMODULE result = GetModuleHandleW(nullptr)
    HMODULE result = GetModuleHandleW(nullptr)
    
    if (result != 0 && result->unused.w == 0x5a4d)
        int32_t* ecx_2 = result * 2
        
        if (*ecx_2 == 0x4550 && ecx_2[6].w == 0x10b && ecx_2[0x1d] u> 0xe && ecx_2[0x3a] != 0)
            result.b = 1
            return 0x101
    
    result.b = 0
    return result
}
