// 函数名称: sub_4b6330
// 虚拟地址: 0x4b6330
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4b6330(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t* ecx = *(arg1 + 0x2c)
    
    if (ecx != 0)
        sub_4ba5b0(ecx)
    
    int32_t* i = *(arg1 + 0x38)
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[4]
        sub_4b5fc0(arg1, i_1)
}
