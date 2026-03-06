// 函数名称: sub_51c14d
// 虚拟地址: 0x51c14d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_51c14d(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* ecx_1 = *(arg1 - 0x14)
    int32_t* ecx_1 = *(arg1 - 0x14)
    int32_t eax_1 = **ecx_1
    *(arg1 - 0x20) = eax_1
    return __seh_filter_exe(eax_1, ecx_1)
}
