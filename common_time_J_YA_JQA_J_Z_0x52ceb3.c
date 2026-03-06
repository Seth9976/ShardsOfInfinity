// 函数名称: ??$common_time@_J@@YA_JQA_J@Z
// 虚拟地址: 0x52ceb3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t??$common_time@_J@@YA_JQA_J@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_18 = edi
    uint32_t result_1 = 0
    int32_t var_10
    int32_t* edi_1 = &var_10
    *edi_1 = 0
    void* edi_2 = &edi_1[1]
    *edi_2 = 0
    *(edi_2 + 4) = 0
    uint32_t result
    int32_t ecx
    int32_t edx
    int32_t edx_1
    
    if (common_timespec_get<struct _timespec64>(&result_1, edx, ecx, &result_1, 1) == 1)
        edx_1 = var_10
        result = result_1
    else
        result = 0xffffffff
        edx_1 = 0xffffffff
    
    if (arg1 != 0)
        *arg1 = result
        arg1[1] = edx_1
    
    return result
}
