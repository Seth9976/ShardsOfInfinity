// 函数名称: sub_43f170
// 虚拟地址: 0x43f170
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_43f170(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_5 = data_5c2dbc
    int32_t eax_5 = data_5c2dbc
    int32_t esi = 0
    
    if (eax_5 s> 0)
        do
            if (*((esi << 2) + &data_5c2d9c) == arg1)
                data_5c2dbc = eax_5 - 1
                int32_t eax_1 = *(((eax_5 - 1) << 2) + &data_5c2d9c)
                *((esi << 2) + &data_5c2d9c) = eax_1
                return eax_1
            
            esi += 1
        while (esi s< eax_5)
    
    int32_t var_10
    char const* const ecx
    
    if (arg2 s<= 8)
        if (eax_5 s< 8)
            if (eax_5 != arg2)
                *((eax_5 << 2) + &data_5c2d9c) = arg1
                data_5c2dbc += 1
                return eax_5
            
            sub_51dd40(&data_5c2d9c, 0x5c2da0, (eax_5 << 2) + 0xfffffffc)
            int32_t eax_3 = data_5c2dbc
            (&data_5c2d98)[eax_3] = arg1
            return eax_3
        
        char const* const var_c_2 = "ToggleSelected"
        var_10 = 0x1afe
        ecx = "gShardsClient.numSelection < MAX_WHICH"
    else
        char const* const var_c = "ToggleSelected"
        var_10 = 0x1afd
        ecx = "maxSelected <= MAX_WHICH"
    
    sub_44e4d0(eax_5, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsclient.cpp", var_10, 
        "ToggleSelected")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
