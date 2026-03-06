// 函数名称: ??8type_info@@QBE_NABV0@@Z
// 虚拟地址: 0x51ecfc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char __thiscall??8type_info@@QBE_NABV0@@Z(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_3 = ___std_type_info_compare(arg1 + 4, arg2 + 4)
    int32_t eax_3 = ___std_type_info_compare(arg1 + 4, arg2 + 4)
    char eax_4 = (neg.d(eax_3)).b
    return sbb.b(eax_4, eax_4, eax_3 != 0) + 1
}
