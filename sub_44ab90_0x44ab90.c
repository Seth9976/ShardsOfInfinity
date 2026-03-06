// 函数名称: sub_44ab90
// 虚拟地址: 0x44ab90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_44ab90(int32_t arg1, uint32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = arg4
    uint32_t eax_2 = zx.d(ecx.w)
    int32_t var_28 = ecx
    
    if (eax_2 u>= 0xc8)
        sub_44e4d0(eax_2, &data_5559b1, "idNoMimic < MAX_CARDS", 
            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x90, "CardGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t result = eax_2 << 5
    
    if (*(result + arg3 + 0x19) == 0 && *(result + arg3 + 4) == 0xa && *(result + arg3 + 8) == arg2)
        for (int32_t i = 0; i s< 4; i += 1)
            int32_t var_30 = ecx
            int32_t i_1 = i
            void var_24
            result = sub_448960(&var_30, arg2, arg3, &var_30, &var_24, 1)
            
            if (result == 0 || result == 1)
                result.b = 1
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            ecx = var_28
    
    result.b = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
