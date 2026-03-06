// 函数名称: sub_43a0d0
// 虚拟地址: 0x43a0d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_43a0d0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    data_5bcaf8 = 0
    bool cond:0 = data_5bcb00 == arg1
    data_5bcaf0 = 0
    
    if (cond:0)
        arg1 = 0xffffffff
    
    data_5bcb00 = arg1
    void* result = sub_443fc0()
    
    if (result != 0)
        result = sub_443fc0()
        
        if (*(result + 0x14) == 8)
            return sub_443df0(8)
    
    return result
}
