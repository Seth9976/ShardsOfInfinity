// 函数名称: sub_44d2a0
// 虚拟地址: 0x44d2a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_44d2a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8
    int32_t* var_8
    void* result = sub_44d240(*arg1, &var_8)
    int32_t edx_1 = 0
    
    if (result s> 0)
        int32_t* edi_1 = var_8
        int32_t* ecx_1 = edi_1
        
        do
            if (*ecx_1 == arg1[1])
                result = &edi_1[edx_1 * 0x11]
                
                if (result != 0)
                    return result
                
                break
            
            edx_1 += 1
            ecx_1 = &ecx_1[0x11]
        while (edx_1 s< result)
    
    sub_44e4d0(result, &data_5559b1, "pDef", "c:\ax2017\jams\shards\code\shardsgame.cpp", 0xfbe, 
        "GameSepcific_GetExpansionDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
