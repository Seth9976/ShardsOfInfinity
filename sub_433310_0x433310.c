// 函数名称: sub_433310
// 虚拟地址: 0x433310
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_433310(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: void var_5c
    void var_5c
    int128_t* eax_1 = sub_445190(&var_5c, nullptr, arg3 + 0x108, &var_5c)
    *arg4 = *eax_1
    arg4[1] = eax_1[1]
    arg4[2] = eax_1[2]
    arg4[3] = eax_1[3]
    int32_t eax_2 = eax_1[5].d
    arg4[4] = eax_1[4]
    arg4[5].d = eax_2
    
    if (*(arg3 + 0x564) == data_5bcca8)
        *arg4 = *arg4 f+ data_5bccac
        *(arg4 + 4) = data_5bccb0 f+ *(arg4 + 4)
    
    return arg4
}
