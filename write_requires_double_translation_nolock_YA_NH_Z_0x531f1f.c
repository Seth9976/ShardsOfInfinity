// 函数名称: ?write_requires_double_translation_nolock@@YA_NH@Z
// 虚拟地址: 0x531f1f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __convention("regparm")?write_requires_double_translation_nolock@@YA_NH@Z(int32_t arg1, int32_t arg2, enum CONSOLE_MODE arg3, int32_t arg4)
{
    // 第一条实际指令: enum CONSOLE_MODE mode = arg3
    enum CONSOLE_MODE mode = arg3
    BOOL result
    
    if (__isatty(arg4) != 0)
        int32_t edi
        int32_t var_10_1 = edi
        int32_t edi_2 = arg4 s>> 6
        int32_t esi_2 = (arg4 & 0x3f) * 0x30
        void* eax_1
        
        if (*((&data_65a778)[edi_2] + esi_2 + 0x28) s< 0)
            eax_1 = sub_530312()[0x13]
        
        if (*((&data_65a778)[edi_2] + esi_2 + 0x28) s< 0
                && (*(eax_1 + 0xa8) != 0 || *((&data_65a778)[edi_2] + esi_2 + 0x29) != 0))
            result.b = GetConsoleMode(*((&data_65a778)[edi_2] + esi_2 + 0x18), &mode) != 0
        else
            result.b = 0
    else
        result.b = 0
    
    return result
}
