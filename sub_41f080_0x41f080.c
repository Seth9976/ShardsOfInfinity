// 函数名称: sub_41f080
// 虚拟地址: 0x41f080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_41f080(int32_t arg1)
{
    // 第一条实际指令: void* result = data_5bb714
    void* result = data_5bb714
    
    if (result != 0 && result != &data_5559b1)
        if (data_cdf414 != 0 && *result != 0)
            result = sub_44f000(&data_5bb714)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
        
        data_5bb714 = &data_5559b1
    
    data_5bb718 = arg1
    data_5bb260 = 0xa
    return result
}
