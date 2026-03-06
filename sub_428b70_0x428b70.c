// 函数名称: sub_428b70
// 虚拟地址: 0x428b70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* const __fastcallsub_428b70(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* const result = &data_557bf8
    
    while (*result != arg1)
        result += 0x14
        
        if (result == &data_557e00)
            result = &data_557ed8
            
            while (*result != arg1)
                result += 0x14
                
                if (result == &data_557fb4)
                    sub_44e4d0(result, &data_5559b1, "Halt", 
                        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x26c9, "GameSpecific_GetDlgDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            
            break
    
    return result
}
