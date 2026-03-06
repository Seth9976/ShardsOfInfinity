// 函数名称: sub_4154d0
// 虚拟地址: 0x4154d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4154d0()
{
    // 第一条实际指令: void* esi = data_65ac30
    void* esi = data_65ac30
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx_1
    
    if (esi != 0)
        result.b = *(esi + 0x18)
        void* ecx
        ecx.b = result.b == 0
        *(esi + 0x18) = ecx.b
        
        if (result.b != 0)
            int32_t ecx_2 = 0x300
            
            if (*(esi + 0x1c) s> 0x300)
                ecx_2 = *(esi + 0x1c)
            
            *(data_65ae00 + 0x18) = ecx_2
            *(data_65ae00 + 0x14) = sub_415460(ecx_2, *(esi + 0x14))
            ecx.b = *(esi + 0x18)
        
        sub_44e890(ecx.b)
        sub_429a80()
        result = data_65aabc
        
        if (result != 0)
            *(result + 0x65c) = 1
            return result
        
        var_8 = "GetClient"
        var_c = 0x74
        var_10 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    else
        var_8 = "GetLocalSettings"
        var_c = 0x23d
        var_10 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx_1 = "gGameSettings.localSettings"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
