// 函数名称: sub_50db60
// 虚拟地址: 0x50db60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_50db60(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: *(arg3 + 0x10) = data_65789c.q
    *(arg3 + 0x10) = data_65789c.q
    *(arg3 + 0x18) = data_6578a4
    *(arg3 + 0x1c) = arg4
    int32_t eax_2 = *(arg3 + 0x10)
    *(arg3 + 0x24) = 0x80
    *(arg3 + 0x20) = 1
    *(arg3 + 0xb0) = arg3 + 0x28
    void* eax_3 = eax_2(arg4, arg3 + 0x28, 0x80)
    *(arg3 + 0xa8) = arg3 + 0x28
    
    if (eax_3 != 0)
        void* eax_7 = eax_3 + 0x28 + arg3
        *(arg3 + 0xac) = eax_7
        *(arg3 + 0xb4) = eax_7
        return eax_7
    
    *(arg3 + 0x20) = eax_3
    *(arg3 + 0xac) = arg3 + 0x29
    *(arg3 + 0x28) = 0
    int32_t eax_5 = *(arg3 + 0xac)
    *(arg3 + 0xb4) = eax_5
    return eax_5
}
