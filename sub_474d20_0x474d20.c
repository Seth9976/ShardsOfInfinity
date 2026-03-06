// 函数名称: sub_474d20
// 虚拟地址: 0x474d20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_474d20(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg2 s>= arg1[1])
        sub_44e4d0(eax_1, &data_5559b1, "attribTreeItemIndex < tree.numItems", 
            "c:\ax2017\engine\ui2.cpp", 0x2aea, "NumTotalChildren")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi = *arg1
    int32_t result = 0
    int32_t var_40c = *(esi + arg2 * 0xc + 8)
    uint32_t var_408[0x40][0x4]
    _memset(&var_408, 0, 0x3fc)
    int32_t eax_4 = 0
    void* edx = esi + (arg2 + 1) * 0xc
    
    while (true)
        while ((&var_40c)[eax_4] == 0)
            int32_t temp0_1 = eax_4
            eax_4 -= 1
            
            if (temp0_1 - 1 s< 0)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
        
        int32_t ecx_2 = *(edx + 8)
        result += 1
        (&var_40c)[eax_4] -= 1
        edx += 0xc
        eax_4 += 1
        (&var_40c)[eax_4] = ecx_2
}
