// 函数名称: sub_48b5e0
// 虚拟地址: 0x48b5e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_48b5e0(int32_t* arg1)
{
    // 第一条实际指令: if ((arg1[2].b & 1) == 0)
    if ((arg1[2].b & 1) == 0)
        arg1[3]
        sub_48b5b0(*arg1)
        *arg1 = 0
    
    char** ecx_1 = arg1[1]
    
    if (ecx_1 != 0)
        sub_491590(ecx_1)
        arg1[1] = 0
    
    return _aligned_free_base(arg1)
}
