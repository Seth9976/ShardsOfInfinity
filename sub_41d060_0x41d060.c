// 函数名称: sub_41d060
// 虚拟地址: 0x41d060
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_41d060(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* esi = data_65aabc
    void* esi = data_65aabc
    
    if (esi == 0)
        sub_44e4d0(arg1, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    *((arg2 << 2) + &data_65ac24) = arg4
    void* esi_1 = esi + (arg4 << 4)
    sub_469cf0(esi_1 + 0x2c, &data_5bb458, arg3, esi_1 + 0x2c, arg2)
    int32_t i = 0
    void* result = sub_41b9a0() + 0x20
    
    do
        if (*(result - 4) == 1 && *result == *(esi_1 + 0x28))
            int32_t var_14_1 = arg2
            return sub_469930(arg3)
        
        i += 1
        result += 0x2c
    while (i s< 5)
    
    return result
}
