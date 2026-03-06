// 函数名称: __initterm_e
// 虚拟地址: 0x52f2c5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__initterm_e(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg1
    int32_t edi
    int32_t var_10 = edi
    int32_t result
    
    while (true)
        if (esi == arg2)
            result = 0
            break
        
        int32_t edi_1 = *esi
        
        if (edi_1 != 0)
            result = edi_1()
            
            if (result != 0)
                break
        
        esi = &esi[1]
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
