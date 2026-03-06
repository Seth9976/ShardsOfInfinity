// 函数名称: sub_416e60
// 虚拟地址: 0x416e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_416e60()
{
    // 第一条实际指令: uint32_t var_118[0x4]
    uint32_t var_118[0x4]
    int32_t eax_1 = __security_cookie ^ &var_118
    void* edi = data_65aabc
    
    if (edi == 0)
        sub_44e4d0(eax_1, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    _memset(&var_118, 0, 0x108)
    int32_t var_34 = 2
    int32_t var_fc = 0x3e8
    int32_t var_d0 = 3
    int32_t var_f8 = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x23c)
    int32_t eax_4 = *(edi + 0x430)
    int32_t var_cc = 0
    int32_t var_28 = eax_4
    *(edi + 0x434) = 1
    *(edi + 0x438) = 0x7fffffff
    sub_429850(eax_4, edi + 0x460, &var_118, 4, 0xffffffff)
    sub_416be0()
    sub_441b80(edi + 0x460, 0x557e38)
    char* result = sub_42b530(edi + 0x460, 0x7fffffff)
    @__security_check_cookie@4(eax_1 ^ &var_118)
    return result
}
