// 函数名称: sub_429100
// 虚拟地址: 0x429100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_429100(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i = *arg1
    int32_t* i = *arg1
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[1]
        sub_45d050(i_1, 0xc)
    
    arg1[2] = 0
    *arg1 = 0
    arg1[1] = 0
}
