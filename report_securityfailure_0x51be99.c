// 函数名称: ___report_securityfailure
// 虚拟地址: 0x51be99
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void___report_securityfailure(int32_t arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3 @ edi) __noreturn
{
    // 第一条实际指令: BOOL eax
    BOOL eax
    int32_t ecx
    int32_t edx
    eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
    bool p = unimplemented  {test eax, eax}
    bool a = undefined
    bool z = eax == 0
    
    if (not(z))
        trap(0xd)
    
    data_65a0d8 = eax
    data_65a0d4 = ecx
    data_65a0d0 = edx
    int32_t entry_ebx
    data_65a0cc = entry_ebx
    data_65a0c8 = arg2
    data_65a0c4 = arg3
    int16_t ss
    data_65a0f0 = ss
    int16_t cs
    data_65a0e4 = cs
    int16_t ds
    data_65a0c0 = ds
    int16_t es
    data_65a0bc = es
    int16_t fs
    data_65a0b8 = fs
    int16_t gs
    data_65a0b4 = gs
    bool d
    data_65a0e8 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
        | (p ? 1 : 0) << 2
    data_65a0dc = arg1
    data_65a0e0 = __return_addr
    int32_t arg_4
    data_65a0ec = &arg_4
    data_659fe4 = data_65a0e0
    data_659fd8 = 0xc0000409
    data_659fdc = 1
    data_659fe8 = 1
    int32_t var_324_1 = 4
    data_659fec = arg_4
    ___raise_securityfailure(&data_54c634)
    noreturn
}
