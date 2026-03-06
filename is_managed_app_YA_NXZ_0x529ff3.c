// 函数名称: ?is_managed_app@@YA_NXZ
// 虚拟地址: 0x529ff3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HMODULE?is_managed_app@@YA_NXZ()
{
    // 第一条实际指令: HMODULE ecx = GetModuleHandleW(nullptr)
    HMODULE ecx = GetModuleHandleW(nullptr)
    HMODULE result
    
    if (ecx != 0 && ecx->unused.w == 0x5a4d)
        result = ecx * 2
        
        if (result->unused == 0x4550 && result->__offset(0x18).w == 0x10b && result u> 0xe)
            result.b = result != 0
            return result
    
    result.b = 0
    return result
}
