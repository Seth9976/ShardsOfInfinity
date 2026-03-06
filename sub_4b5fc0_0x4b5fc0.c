// 函数名称: sub_4b5fc0
// 虚拟地址: 0x4b5fc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b5fc0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_28
    void var_28
    sub_4b5c40(&var_28, *arg2, arg1, &var_28)
    
    if (arg2[2] != 2)
        return sub_44e260("Unknown attachment type")
    
    int32_t* result = sub_4b6ca0(arg2[3])
    int64_t var_14
    *(result + 8) = var_14
    int32_t var_c
    result[4] = var_c
    int128_t var_24
    *(result + 0x14) = var_24
    return result
}
