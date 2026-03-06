// 函数名称: sub_445ea0
// 虚拟地址: 0x445ea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_445ea0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edx = *arg1
    int32_t edx = *arg1
    int32_t ecx = arg1[1]
    arg2[1] = ecx
    *arg2 = edx
    arg2[2] = *(ecx * 0x9c + edx + 0x1eec)
    return arg2
}
