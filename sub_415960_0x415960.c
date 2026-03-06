// 函数名称: sub_415960
// 虚拟地址: 0x415960
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_415960(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void var_344
    void var_344
    int32_t eax_1 = __security_cookie ^ &var_344
    uint32_t var_354
    void var_340
    int32_t eax_3
    
    switch (arg4)
        case 0, 5
            eax_3 = sub_481a70(arg4, arg3, &var_340, &data_571dbc, 9)
            var_354 = 2
        label_4159a7:
            uint32_t result = sub_479b90(eax_3, *(arg2 + 4), &var_340, var_354)
            @__security_check_cookie@4(eax_1 ^ &var_344)
            return result
        case 1
            eax_3 = sub_481a70(arg4, arg3, &var_340, &data_571da0, 7)
            var_354 = 4
            goto label_4159a7
        case 2
            eax_3 = sub_481a70(arg4, arg3, &var_340, &data_571ac4, 7)
            var_354 = 8
            goto label_4159a7
    
    sub_44e4d0(arg4, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x1c5, 
        "UIHitAction")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
