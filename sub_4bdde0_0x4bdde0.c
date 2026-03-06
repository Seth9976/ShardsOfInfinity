// 函数名称: sub_4bdde0
// 虚拟地址: 0x4bdde0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4bdde0(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    char* const esi = &data_5559b1
    char* eax_1 = *arg4
    
    if (eax_1 != 0)
        esi = eax_1
    
    int32_t* var_8_1 = arg3
    arg4 = fconvert.s(__ismbcupper(esi))
    void* eax_2 = sub_4bd420(arg2)
    *eax_2 = 3
    *(eax_2 + 4) = arg4
    arg3[2] = &data_5559b1
    arg3[1] = eax_2
    *arg3 = 3
    return arg3
}
