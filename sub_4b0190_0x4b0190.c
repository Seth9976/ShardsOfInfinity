// 函数名称: sub_4b0190
// 虚拟地址: 0x4b0190
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b0190(int32_t arg1, void* arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        *arg4 = *(arg3 + 8)
        int32_t ecx_1 = *(arg3 + 0x28)
        arg4[1] = *(arg3 + 0x18)
        arg4[2].d = ecx_1
        return arg4
    
    int32_t ecx = *(arg2 + 0x4a4)
    *arg4 = *(arg2 + 0x484)
    arg4[1] = *(arg2 + 0x494)
    arg4[2].d = ecx
    return arg4
}
