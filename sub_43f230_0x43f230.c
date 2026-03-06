// 函数名称: sub_43f230
// 虚拟地址: 0x43f230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_43f230()
{
    // 第一条实际指令: int32_t var_3c
    int32_t var_3c
    int32_t eax_1 = __security_cookie ^ &var_3c
    _memset(&var_3c, 0, 0x30)
    void* esi = data_65aabc
    int32_t var_14 = 1
    var_3c = *data_5c2e30
    int32_t eax_4 = data_5c2e34
    int32_t var_34 = eax_4
    
    if (esi != 0)
        int32_t esi_1 = *(esi + 0x648)
        void* eax_5 = sub_41ad20()
        void* result = sub_436b50(eax_5, esi_1, eax_5, &var_3c)
        @__security_check_cookie@4(eax_1 ^ &var_3c)
        return result
    
    sub_44e4d0(eax_4, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
