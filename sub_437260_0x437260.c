// 函数名称: sub_437260
// 虚拟地址: 0x437260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_437260(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: arg4[1] = arg2
    arg4[1] = arg2
    *arg4 = arg3
    arg4[2] = arg5
    arg4[3] = arg6
    int32_t var_10
    char const* const ecx
    
    if (arg5 s< 0 || arg6 s> arg5)
        if (arg3 s< 0x11)
            return arg4
        
        if (arg5 s< 0)
            char const* const var_c_1 = "ShLocSet"
            var_10 = 0xc7a
            ecx = "loc.slot >= 0"
        else if (arg6 s> 0)
            if (arg5 s< arg6)
                return arg4
            
            char const* const var_c_3 = "ShLocSet"
            var_10 = 0xc7c
            ecx = "loc.slot < loc.count"
        else
            char const* const var_c_2 = "ShLocSet"
            var_10 = 0xc7b
            ecx = "loc.count > 0"
    else
        char const* const var_c = "ShLocSet"
        var_10 = 0xc75
        ecx = "count > slot"
    
    sub_44e4d0(arg5, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsclient.cpp", var_10, 
        "ShLocSet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
