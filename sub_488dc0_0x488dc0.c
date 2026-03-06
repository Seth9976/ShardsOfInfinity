// 函数名称: sub_488dc0
// 虚拟地址: 0x488dc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_488dc0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char* edx = nullptr
    char* edx = nullptr
    char* eax = *(arg2 + 0xcc)
    
    if (*eax != 0)
        edx = eax
    
    if (arg1[0x19] s<= *arg1)
        if (*(arg2 + 4) != 5)
            return sub_4807c0(*(arg2 + 0xb0), edx) __tailcall
        
        return sub_4807c0(*(arg2 + 0xdc), edx) __tailcall
    
    char* result = arg1[0x1a]
    
    if (*(arg1 + 0x151) == 0)
        if (result != 0)
            return result
        
        return &data_5559b1
    
    char* result_1 = &data_5559b1
    
    if (result != 0)
        result_1 = result
    
    return sub_4807c0(result_1, edx) __tailcall
}
