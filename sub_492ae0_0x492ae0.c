// 函数名称: sub_492ae0
// 虚拟地址: 0x492ae0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_492ae0(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* edi = data_cdf47c
    int32_t* edi = data_cdf47c
    edi[3] += 1
    int32_t* result = *edi
    
    if (result == 0)
        sub_494390(edi)
        result = *edi
    
    *edi = *result
    result[2] = 0
    result[3] = 0
    result[4] = 0
    *result = &data_5559b1
    result[1] = &data_5559b1
    int32_t* result_1 = result
    sub_44f590(result, arg2)
    sub_429090(arg1 + 4, &result_1)
    return result
}
