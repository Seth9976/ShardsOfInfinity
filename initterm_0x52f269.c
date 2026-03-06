// 函数名称: __initterm
// 虚拟地址: 0x52f269
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__initterm(uint32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t entry_ebx
    int32_t var_10 = entry_ebx
    uint32_t* esi = arg1
    int32_t edi
    int32_t var_18 = edi
    int32_t edi_1 = 0
    uint32_t result = (arg2 - esi + 3) u>> 2
    int32_t ebx_2 = not.d(sbb.d(entry_ebx, entry_ebx, arg2 u< esi)) & result
    
    if (ebx_2 != 0)
        do
            result = *esi
            
            if (result != 0)
                result = result()
            
            esi = &esi[1]
            edi_1 += 1
        while (edi_1 != ebx_2)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
