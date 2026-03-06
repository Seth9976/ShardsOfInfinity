// 函数名称: sub_44f2a0
// 虚拟地址: 0x44f2a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_44f2a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* eax_1 = *arg2
    char* eax_1 = *arg2
    *arg1 = eax_1
    
    if (eax_1 != 0 && *eax_1 != 0)
        char* eax_2 = sub_44f000(arg1)
        *(eax_2 + 4) += 1
    
    return arg1
}
