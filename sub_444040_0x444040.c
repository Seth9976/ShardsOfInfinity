// 函数名称: sub_444040
// 虚拟地址: 0x444040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_444040(int32_t arg1, int32_t arg2, void** arg3, int32_t arg4)
{
    // 第一条实际指令: void** var_8 = arg3
    void** var_8 = arg3
    sub_472550(arg4, sub_443e50)
    void* result = data_65aabc
    
    if (result == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(result + 0x434) != 0)
        result = sub_44dea0(*(sub_41ad20() + 0xf8), &var_8)
        
        if (data_5bcd74 s< result)
            int32_t var_10_1 = 0xffffffff
            sub_469930(arg4)
            sub_42bf40()
            int32_t var_10_2 = 0xffffffff
            return sub_469930(arg4)
    
    return result
}
