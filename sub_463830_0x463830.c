// 函数名称: sub_463830
// 虚拟地址: 0x463830
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_463830(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t var_1c
    char* ecx_4
    
    if (arg2 != 0)
        if (arg4 == 0)
            int32_t edx_9 = arg3[1]
            int32_t edi_3 = *arg3
            
            if (arg5 s>= edx_9 * edi_3)
                return arg5 - (edx_9 - 1) * edi_3
            
            return sub_463830(0, arg5)
        
        char const* const var_18_2 = "TableIndextToSlot"
        var_1c = 0x105b
        ecx_4 = "alignment == TABLE_LR_TB"
    else
        int32_t edi_1 = *arg3
        int32_t temp1_1 = mods.dp.d(sx.q(arg5), edi_1)
        arg1 = divs.dp.d(sx.q(arg5), edi_1)
        int32_t edx_3 = arg3[1]
        int32_t ecx = temp1_1
        
        if (arg1 s>= edx_3)
            ecx = (arg1 - edx_3) * edi_1 + temp1_1
        
        if (arg4 u> 3)
            char const* const var_18 = "TableIndextToSlot"
            var_1c = 0x1056
            ecx_4 = "Halt"
        else
            switch (arg4)
                case 0
                    return ecx
                case 1
                    return ecx
                case 2
                    if (arg1 s< edi_1)
                        return arg1
                    
                    return edi_1 - 1
                case 3
                    return edi_1 - ecx - 1
    
    sub_44e4d0(arg1, &data_5559b1, ecx_4, "c:\ax2017\engine\ui2.cpp", var_1c, "TableIndextToSlot")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
