// 函数名称: ?find_end_of_double_null_terminated_sequence@@YAPB_WQB_W@Z
// 虚拟地址: 0x53755a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?find_end_of_double_null_terminated_sequence@@YAPB_WQB_W@Z(int16_t* arg1)
{
    // 第一条实际指令: int16_t* edx = arg1
    int16_t* edx = arg1
    int32_t edi
    int32_t var_8 = edi
    
    while (*edx != 0)
        int16_t* ecx_1 = edx
        int16_t i
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        edx = &edx[((ecx_1 - &ecx_1[1]) s>> 1) + 1]
    
    return &edx[1]
}
