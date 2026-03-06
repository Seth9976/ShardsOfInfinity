// 函数名称: sub_482bd0
// 虚拟地址: 0x482bd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_482bd0(int32_t arg1, int32_t arg2, char** arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: char* const esi = &data_5559b1
    char* const esi = &data_5559b1
    
    if ((*(arg4 + 0x28) & 0x10) == 0)
        esi = *(arg3 + arg2)
    
    return sub_482b20(arg5, arg5[1] + *arg5 + arg2, esi, arg5)
}
