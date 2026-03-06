// 函数名称: sub_44c9f0
// 虚拟地址: 0x44c9f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_44c9f0(int32_t arg1)
{
    // 第一条实际指令: void* eax = sub_4471d0(1)
    void* eax = sub_4471d0(1)
    int32_t edx = 0
    int32_t ecx = *(eax + 8)
    int32_t* result
    
    if (ecx s> 0)
        result = *(eax + 4)
        
        do
            if (*result == arg1)
                return result
            
            edx += 1
            result = &result[0x19]
        while (edx s< ecx)
    
    result = sub_4471d0(2)
    int32_t ecx_1 = 0
    int32_t edx_1 = result[2]
    
    if (edx_1 s> 0)
        result = result[1]
        
        do
            if (*result == arg1)
                return result
            
            ecx_1 += 1
            result = &result[0x19]
        while (ecx_1 s< edx_1)
    
    sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsgame.cpp", 0xe25, 
        "FindCardDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
