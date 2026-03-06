// 函数名称: sub_465640
// 虚拟地址: 0x465640
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_465640(int32_t arg1, int32_t* arg2, uint32_t arg3, int32_t arg4 @ xmm3, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = *(arg3 + 0x69c)
    
    if (eax_2 == 3)
        int32_t ecx = *(arg3 + 0x63c) * 0x208
        
        if (*(ecx + arg3 + 0x1d8) == 0)
            goto label_4657ef
        
        *(arg3 + 0x7c8) = *(ecx + arg3 + 0x1ac)
        *(arg3 + 0x7ec) = *(ecx + arg3 + 0xac)
        *(arg3 + 0x7e0) = *(ecx + arg3 + 0x1e8)
        int32_t eax_6
        int32_t edx
        eax_6, edx = sub_41b6f0(arg3 + 0x6cc)
        int32_t ecx_2 = *(arg3 + 0x63c) * 0x208
        float xmm3 = *(arg3 + 0x6e8)
        *(arg3 + 0x7a8) = eax_6
        *(arg3 + 0x7ac) = edx
        float xmm0_4 = *(arg3 + 0x6d8) f- *(arg3 + 0x6d0)
        *(arg3 + 0x7b0) = *(arg3 + 0x6d4) f- *(arg3 + 0x6cc)
        *(arg3 + 0x7b4) = xmm0_4
        float xmm0_5 = *(ecx_2 + arg3 + 0x1c8)
        float xmm1_5 = *(ecx_2 + arg3 + 0x1b4) * xmm3 * xmm0_5
        *(arg3 + 0x7b8) = *(ecx_2 + arg3 + 0x1b0) * xmm3 * xmm0_5
        *(arg3 + 0x7bc) = xmm1_5
        *(arg3 + 0x7d0) = xmm3 f* *(ecx_2 + arg3 + 0x1c8)
        *(arg3 + 0x7cc) = *(ecx_2 + arg3 + 0x1b8)
        *(arg3 + 0x7d4) = *(ecx_2 + arg3 + 0x1bc)
        *(arg3 + 0x7dc) = 0xff000000
        *(arg3 + 0x7d8) = 0xffffffff
        sub_4c50b0(arg3 + 0x798, 0, &data_571d90)
    else if (eax_2 != 2)
    label_4657ef:
        int32_t i = 0
        int32_t var_14_1 = *(arg3 + 0x72c)
        int128_t var_64 = *(arg3 + 0x6dc)
        int128_t var_54_1 = *(arg3 + 0x6ec)
        int128_t var_44_1 = *(arg3 + 0x6fc)
        int128_t var_34_1 = *(arg3 + 0x70c)
        int128_t var_24_1 = *(arg3 + 0x71c)
        
        if (*(arg3 + 0x7f4) s> 0)
            do
                uint32_t eax_10
                int32_t ecx_8
                eax_10, ecx_8 = sub_4627e0(arg3, i)
                
                if (*(eax_10 + 0x784) != arg3)
                    sub_44e4d0(eax_10, &data_5559b1, "child.parent == &ui", "c:\ax2017\engine\ui2.cpp", 
                        0x12d4, "UI2UpdateChildren")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t var_80_2 = *(arg3 + 0x64c)
                int32_t var_84_2 = arg5
                int32_t var_8c_1 = ecx_8
                sub_466a50(eax_10, arg3, eax_10, *(arg3 + 0x750), &var_64, *(arg3 + 0x754), 
                    *(arg3 + 0x78c), *(arg3 + 0x790), arg4, arg2)
                i += 1
            while (i s< *(arg3 + 0x7f4))
    else
        sub_464cc0(eax_2, arg2, arg3, arg4, arg5, arg6)
    
    int32_t result = sub_462780(arg3)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
