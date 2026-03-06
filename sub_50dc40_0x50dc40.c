// 函数名称: sub_50dc40
// 虚拟地址: 0x50dc40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50dc40(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    // 第一条实际指令: if (arg3 s>= 0 && arg2 s>= 0)
    if (arg3 s>= 0 && arg2 s>= 0)
        int32_t eax
        int32_t edx
        
        if (arg2 != 0)
            edx:eax = 0x7fffffff
        
        if (arg2 == 0 || arg3 s<= divs.dp.d(edx:eax, arg2))
            int32_t ecx = arg3 * arg2
            
            if (ecx s>= 0 && arg4 s>= 0)
                int32_t eax_2
                int32_t edx_2
                
                if (arg4 != 0)
                    edx_2:eax_2 = 0x7fffffff
                
                if (arg4 == 0 || ecx s<= divs.dp.d(edx_2:eax_2, arg4))
                    int32_t ecx_1 = ecx * arg4
                    
                    if (ecx_1 s>= 0 && ecx_1 s<= 0x1fffffff)
                        return 1
    
    return 0
}
