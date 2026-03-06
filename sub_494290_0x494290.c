// 函数名称: sub_494290
// 虚拟地址: 0x494290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_494290(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* edi = data_cdf47c
    int32_t var_8_1 = arg1
    *(edi + 0x1c) += 1
    int32_t* result = *(edi + 0x10)
    
    if (result == 0)
        sub_494310(edi + 0x10)
        result = *(edi + 0x10)
    
    *(edi + 0x10) = *result
    result[2] = 0
    result[3] = 0
    result[4] = 0
    *result = &data_5559b1
    result[1] = 0
    result[2] = 0
    result[3] = 0
    sub_494270(arg2, 0)
    return result
}
