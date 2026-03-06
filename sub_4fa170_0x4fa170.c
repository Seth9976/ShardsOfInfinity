// 函数名称: sub_4fa170
// 虚拟地址: 0x4fa170
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4fa170(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (data_d76c30 != 0)
    if (data_d76c30 != 0)
        return 
    
    if (arg2 == 0)
        data_ce37a4 = arg2
        return sub_4f4fa0() __tailcall
    
    int32_t ecx_1 = 0
    
    if (arg2 s> 0)
        do
            (&data_ce27a4)[ecx_1] = *(arg1 + (ecx_1 << 2))
            ecx_1 += 1
        while (ecx_1 s< arg2)
    
    data_ce37a4 = arg2
    return sub_4f4fa0() __tailcall
}
