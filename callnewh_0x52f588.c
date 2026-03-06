// 函数名称: __callnewh
// 虚拟地址: 0x52f588
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__callnewh(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = __query_new_handler()
    int32_t eax_3
    
    if (eax_2 != 0)
        eax_3 = eax_2(arg1)
    
    int32_t result
    
    if (eax_2 == 0 || eax_3 == 0)
        result = 0
    else
        result = 1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
