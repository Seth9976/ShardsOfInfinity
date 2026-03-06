// 函数名称: ?getSystemCP@@YAHH@Z
// 虚拟地址: 0x536eaa
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t?getSystemCP@@YAHH@Z(uint32_t arg1)
{
    // 第一条实际指令: void* var_14
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, nullptr)
    data_65aa68 = 0
    uint32_t result = arg1
    
    if (result == 0xfffffffe)
        data_65aa68 = 1
        result = GetOEMCP()
    else if (result == 0xfffffffd)
        data_65aa68 = 1
        result = GetACP()
    else if (result == 0xfffffffc)
        data_65aa68 = 1
        void* var_10
        result = *(var_10 + 8)
    
    char var_8
    
    if (var_8 != 0)
        void* ecx_1 = var_14
        *(ecx_1 + 0x350) &= 0xfffffffd
    
    return result
}
