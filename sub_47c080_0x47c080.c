// 函数名称: sub_47c080
// 虚拟地址: 0x47c080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_47c080(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg2 = *arg1
    *arg2 = *arg1
    arg2[1] = arg1[1]
    arg2[2] = arg1[2]
    arg2[3] = arg1[1]
    arg2[4] = *arg1
    arg2[5] = arg1[3]
    arg2[6] = arg1[2]
    int32_t result = arg1[3]
    arg2[7] = result
    return result
}
