// 函数名称: sub_449d50
// 虚拟地址: 0x449d50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_449d50(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t* esi = arg3
    void* edx_1 = sub_445b50(arg3, arg4)
    int32_t var_18 = 2
    int32_t var_1c = *edx_1
    char const* const var_20 = "%s loses %d mastery"
    int32_t* var_24 = esi
    int32_t ecx = esi[0x85a]
    
    if (ecx != 2 && ecx != 3)
        uint32_t (* eax_1)[0x4] = sub_44d360(esi, arg2)
        (*eax_1)[5] = 3
        (*eax_1)[0xa] = arg4
        (*eax_1)[6] = 2
        (*eax_1)[7] = 2
    
    uint32_t eax_2 = *(edx_1 + 0xc)
    uint32_t ecx_2 = 2
    
    if (eax_2 s< 2)
        ecx_2 = eax_2
    
    uint32_t eax_3 = eax_2 - ecx_2
    *(edx_1 + 0xc) = eax_3
    return sub_445a20(eax_3, 0x17, esi, arg2, arg4, ecx_2, 0, 0)
}
