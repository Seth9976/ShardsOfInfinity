// 函数名称: sub_501240
// 虚拟地址: 0x501240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_501240(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (data_d77c70.b != 0 || data_d77c72 != 0)
    if (data_d77c70.b != 0 || data_d77c72 != 0)
        return 
    
    if (arg2 == 0)
        data_d77c6c = arg2
        return sub_5012b0() __tailcall
    
    int32_t edx_1 = 0
    int32_t* edi_1 = sub_485450(data_d76c60)
    
    if (arg2 s> 0)
        do
            (&data_d76c6c)[edx_1] = *(*(arg1 + (edx_1 << 2)) * 0x118 + *edi_1)
            edx_1 += 1
        while (edx_1 s< arg2)
    
    data_d77c6c = arg2
}
