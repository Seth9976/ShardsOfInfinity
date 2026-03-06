// 函数名称: sub_433840
// 虚拟地址: 0x433840
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_433840(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx
    
    if (*arg1 == 0)
        int32_t ecx_1 = arg1[2]
        
        if (ecx_1 == 0xffffffff)
            result.b = 0
            return result
        
        result = data_65aabc
        
        if (result != 0)
            if (ecx_1 != *(result + 0x648))
                result.b = 1
                return result
            
            result.b = 0
            return result
        
        var_8 = "GetClient"
        var_c = 0x74
        var_10 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        var_8 = "IsOpponentCard"
        var_c = 0x438
        var_10 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
        ecx = "gfx.type == SHGFX_CARD"
    
    sub_44e4d0(result, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
