// 函数名称: sub_450c90
// 虚拟地址: 0x450c90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_450c90(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_20
    char const* const ecx_1
    
    if (arg3 s>= 0x3e8)
        if (arg2 s<= 0x7e80)
            int32_t var_c = arg3
            int32_t var_10 = arg2
            int32_t var_14 = 0xfeedface
            int32_t** ecx
            void* result = sub_450a70(&var_14, 0xc, ecx, &var_14)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        char const* const var_1c_2 = "NetBufferStartMessage"
        var_20 = 0x2a1
        ecx_1 = "length <= MAX_NET_MESSAGE_SIZE"
    else
        char const* const var_1c = "NetBufferStartMessage"
        var_20 = 0x2a0
        ecx_1 = "messageId >= NETMSG_MIN_VALUE"
    
    sub_44e4d0(arg3, &data_5559b1, ecx_1, "c:\ax2017\engine\network.cpp", var_20, 
        "NetBufferStartMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
