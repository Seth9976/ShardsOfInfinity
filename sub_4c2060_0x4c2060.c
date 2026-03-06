// 函数名称: sub_4c2060
// 虚拟地址: 0x4c2060
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4c2060(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* edi = arg3 + arg2 * 0xc
    int32_t* edi = arg3 + arg2 * 0xc
    int32_t eax_1 = edi[2]
    int32_t var_18
    char const* const var_14
    char* ecx_2
    
    if (eax_1 == 2)
        if (arg4 s>= 0 && arg4 s< edi[1] u>> 2)
            return *(*edi + (arg4 << 2))
        
        var_14 = "FlanimGetUncompressedParamInt"
        var_18 = 0x304
        ecx_2 = "frameIndex >= 0 && frameIndex < numFrames"
    else if (eax_1 != 4)
        var_14 = "FlanimGetUncompressedParamInt"
        var_18 = 0x30e
        ecx_2 = "Halt"
    else
        int32_t ebx_1 = *edi
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x2aaaaaab, edi[1])
        int32_t esi_3 = (edx_1 u>> 0x1f) + edx_1
        
        if (esi_3 s> 0)
            int32_t ecx_3 = 1
            
            if (esi_3 != 1)
                while (zx.d(*(ebx_1 + (esi_3 << 2) + (ecx_3 << 1))) s<= arg4)
                    ecx_3 += 1
                    
                    if (ecx_3 == esi_3)
                        break
            
            return *(ebx_1 + (ecx_3 << 2) - 4)
        
        var_14 = "FlanimGetUncompressedConstantInt"
        var_18 = 0x2f2
        ecx_2 = "numValues > 0"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_2, "c:\ax2017\engine\flanim.cpp", var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
