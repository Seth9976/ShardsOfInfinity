// 函数名称: sub_516930
// 虚拟地址: 0x516930
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_516930(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t edx_2 = (arg1 u>> 1 & 0x55555555) + (arg1 & 0x55555555)
    int32_t edx_2 = (arg1 u>> 1 & 0x55555555) + (arg1 & 0x55555555)
    int32_t eax_3 = (edx_2 u>> 2 & 0x33333333) + (edx_2 & 0x33333333)
    int32_t ecx_4 = ((eax_3 u>> 4) + eax_3) & 0xf0f0f0f
    int32_t ecx_5 = ecx_4 + (ecx_4 u>> 8)
    return zx.d((ecx_5 u>> 0x10).b + ecx_5.b)
}
