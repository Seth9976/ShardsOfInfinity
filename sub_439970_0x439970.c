// 函数名称: sub_439970
// 虚拟地址: 0x439970
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_439970()
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    int32_t eax
    char const* const ecx
    
    if (data_5c2f18 s> 0)
        eax = data_5c2eb0
        
        if (eax u> 0xc)
            char const* const var_8_1 = "ShardsHandleEndTurnCancel"
            var_c = 0x1304
            ecx = "Halt"
        else
            uint32_t result = zx.d(lookup_table_439a08[eax])
            
            switch (result)
                case 0
                    return result
                case 1
                    return sub_43a0d0(*(sub_445bb0(sub_444860(), (data_5c2eb4).w) + 4))
                case 2
                    data_5bccbc = 1
                    return result
    else
        char const* const var_8 = "ShardsHandleEndTurnCancel"
        var_c = 0x12eb
        ecx = "gShardsClient.endTurnState.numReasons > 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsclient.cpp", var_c, 
        "ShardsHandleEndTurnCancel")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
