// 函数名称: sub_4918e0
// 虚拟地址: 0x4918e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4918e0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    char* eax = *(arg2 + 4)
    char* const edx = &data_5559b1
    
    if (eax != 0)
        edx = eax
    
    int32_t var_8 = arg1 + 0xc
    int32_t var_c = arg1 + 8
    int32_t var_10 = arg1 + 4
    int32_t var_14 = arg1
    int32_t result
    result.b = sub_4529c0(arg1 + 4, edx, arg1, edx, "%d %d %d %d") == 4
    return result
}
