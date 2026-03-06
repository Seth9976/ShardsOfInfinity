// 函数名称: sub_415240
// 虚拟地址: 0x415240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_415240()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = data_65ac34
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    void* result
    char* ecx_1
    
    if (edi != 0)
        result = data_65aabc
        
        if (result != 0)
            int16_t esi = (*(edi + 4)).w
            char* edi_1 = *(edi + 8)
            void* eax = sub_4501f0()
            
            if (sub_44ff50(eax, edi_1, eax, esi) == 0)
                sub_450480(eax)
                *(result + 0x14) = 0
                *(result + 0x18) = 1
                return result
            
            if (eax == 0)
                *(result + 0x14) = 0
                *(result + 0x18) = 1
                return result
            
            int32_t ecx_4 = *(eax + 0x48)
            *(eax + 0x14) = 1
            *(eax + 0x24) = 1
            *(eax + 0x28) = 2
            *(result + 0x14) = ecx_4
            *(result + 0x18) = 1
            return result
        
        var_18 = "GetClient"
        var_1c = 0x74
        var_20 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    else
        var_18 = "GetChannelSettings"
        var_1c = 0x243
        var_20 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx_1 = "gGameSettings.channelSettings"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
