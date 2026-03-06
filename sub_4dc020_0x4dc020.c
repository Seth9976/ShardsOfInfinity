// 函数名称: sub_4dc020
// 虚拟地址: 0x4dc020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_4dc020(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_4dd530(arg1 + 0x4240, arg2)
    int32_t* eax = sub_4dd530(arg1 + 0x4240, arg2)
    void* result = eax[0x36]
    
    if (result == 0)
        result = sub_45cd70(eax[2])
        eax[0x36] = result
    
    return result
}
