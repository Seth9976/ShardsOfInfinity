// 函数名称: sub_4d68a0
// 虚拟地址: 0x4d68a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_4d68a0(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    ebx.b = 0
    int32_t esi = 0
    uint32_t result
    
    while (true)
        result = glGetError()
        
        if (result != 0)
            uint32_t result_1 = result
            int32_t var_38_1 = arg1
            int32_t edx
            int32_t var_3c_1 = edx
            int32_t ecx
            int32_t var_40_1 = ecx
            sub_44e260("%s(%d): %s - glError (0x%x)\n")
            esi += 1
            ebx.b = 1
            
            if (esi s< 5)
                continue
        else if (ebx.b == 0)
            break
        
        result = IsDebuggerPresent()
        
        if (result == 1)
            breakpoint
        
        break
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
