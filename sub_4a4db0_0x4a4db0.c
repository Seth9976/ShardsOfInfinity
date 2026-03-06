// 函数名称: sub_4a4db0
// 虚拟地址: 0x4a4db0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

floatsub_4a4db0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(data_ce1790, &rect)
    int32_t right = rect.right
    
    if (right != 0)
        int32_t bottom = rect.bottom
        
        if (bottom != 0)
            void* eax_2 = data_65ae00
            float result = float.s(*(eax_2 + 0x14)) * float.s(arg1) / float.s(right)
            float var_1c = float.s(*(eax_2 + 0x18)) * float.s(arg2) / float.s(bottom)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
