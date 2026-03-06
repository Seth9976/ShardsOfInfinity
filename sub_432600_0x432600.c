// 函数名称: sub_432600
// 虚拟地址: 0x432600
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_432600(void* arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t result = arg2[5].d
    int32_t result = arg2[5].d
    int128_t var_58 = *arg2
    int128_t xmm0_1 = arg2[1]
    int32_t var_6c = 0
    int128_t var_48 = xmm0_1
    int32_t result_1 = result
    int128_t var_38 = arg2[2]
    int128_t var_28 = arg2[3]
    int128_t xmm0_4 = arg2[4]
    *(arg1 + 0x450) = 0
    int128_t var_18 = xmm0_4
    __builtin_memcpy(arg1, &var_6c, 0x68)
    __builtin_memcpy(arg1 + 0x68, &var_6c, 0x68)
    return result
}
