// 函数名称: sub_476260
// 虚拟地址: 0x476260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_476260(void* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    void* result_1 = data_5c99a0
    void* esi_1 = data_5c99a4 * 0x1008 + result_1
    label_476280:
    
    if (result != 0)
        result += 0x1008
    else
        result = result_1
    
    if (result u>= esi_1)
        return nullptr
    
    while ((*(result + 0x1004) & 0xffff0000) == 0)
        result += 0x1008
        
        if (result u>= esi_1)
            return 0
    
    int32_t edi_1 = *(result + 0x7f4)
    int32_t edx_1 = 0
    
    if (edi_1 s<= 0)
        return 
    
    void* ecx = result + 0x7f8
    
    while (true)
        if (*ecx == *(arg1 + 0x1004))
            if (*(result + 0x6a4) != 0)
                return result
            
            break
        
        edx_1 += 1
        ecx += 4
        
        if (edx_1 s>= edi_1)
            result_1 = data_5c99a0
            goto label_476280
    
    return nullptr
}
