// 函数名称: sub_469560
// 虚拟地址: 0x469560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_469560(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (*(arg1 + 0xa) == 0)
        while (*(arg1 + 0xb) == 0)
            arg1 = *(arg1 + 0x784)
            
            if (arg1 == 0)
                result.b = 1
                return result
            
            if (*(arg1 + 0xa) != 0)
                break
    
    result.b = 0
    return result
}
