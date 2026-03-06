// 函数名称: sub_412b20
// 虚拟地址: 0x412b20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_412b20(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax = *arg2
    void* eax = *arg2
    void* i
    void* i_1
    
    if (eax != 0)
        i_1 = *arg1
        i = eax + 0x1d0
    else
        i = *arg1
        i_1 = i
    
    for (; i u< arg1[1] * 0x1d0 + i_1; i += 0x1d0)
        if ((*(i + 0x1c8) & 0xffff0000) != 0)
            *arg2 = i
            i.b = 1
            return i
    
    *arg2 = 0xffffffff
    i.b = 0
    return i
}
