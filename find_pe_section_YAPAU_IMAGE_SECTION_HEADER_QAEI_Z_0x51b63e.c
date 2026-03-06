// 函数名称: ?find_pe_section@@YAPAU_IMAGE_SECTION_HEADER@@QAEI@Z
// 虚拟地址: 0x51b63e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?find_pe_section@@YAPAU_IMAGE_SECTION_HEADER@@QAEI@Z(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx_1 = *(arg1 + 0x3c) + arg1
    void* ecx_1 = *(arg1 + 0x3c) + arg1
    void* i = ecx_1 + 0x18 + zx.d(*(ecx_1 + 0x14))
    
    for (void* esi_1 = zx.d(*(ecx_1 + 6)) * 0x28 + i; i != esi_1; i += 0x28)
        if (arg2 u>= *(i + 0xc) && arg2 u< *(i + 8) + *(i + 0xc))
            return i
    
    return nullptr
}
