// 函数名称: sub_4d3290
// 虚拟地址: 0x4d3290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4d3290(void* arg1)
{
    // 第一条实际指令: int32_t i = *(arg1 + 0x68)
    int32_t i = *(arg1 + 0x68)
    void* result = data_ce24d4
    
    if (*data_ce26e0 != 1)
    label_4d32bd:
        result = *(*result + (((i s>> 4 | i) & *(result + 4)) << 2))
        
        if (result == 0)
        label_4d32cf:
            result.b = 0
            return result
        
        while (i != *result)
            result = *(result + 0x14)
            
            if (result == 0)
                goto label_4d32cf
        
        if (result == 0xfffffffc)
            goto label_4d32cf
    else if (*(result + 0x70) != i && *(result + 0x74) != i && *(result + 0x78) != i)
        goto label_4d32bd
    
    result.b = 1
    return result
}
