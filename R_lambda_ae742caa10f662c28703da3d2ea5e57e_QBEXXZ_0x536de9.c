// 函数名称: ??R<lambda_ae742caa10f662c28703da3d2ea5e57e>@@QBEXXZ
// 虚拟地址: 0x536de9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcall??R<lambda_ae742caa10f662c28703da3d2ea5e57e>@@QBEXXZ(int32_t* arg1)
{
    // 第一条实际指令: _memcpy_s(data_65aa60, 0x101, *(**arg1 + 0x48) + 0x18, 0x101)
    _memcpy_s(data_65aa60, 0x101, *(**arg1 + 0x48) + 0x18, 0x101)
    _memcpy_s(data_65aa64, 0x100, *(**arg1 + 0x48) + 0x119, 0x100)
    int32_t* eax_10 = **arg1[1]
    bool cond:0 = *eax_10 != 1
    *eax_10
    *eax_10 -= 1
    
    if (not(cond:0))
        int32_t* eax_12 = *arg1[1]
        
        if (*eax_12 != 0x5b0478)
            __free_base(*eax_12)
    
    **arg1[1] = *(**arg1 + 0x48)
    int32_t* result = *(**arg1 + 0x48)
    *result += 1
    return result
}
