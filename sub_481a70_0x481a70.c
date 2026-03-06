// 函数名称: sub_481a70
// 虚拟地址: 0x481a70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_481a70(int32_t arg1, void* arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax_1 = *arg4
    int32_t ecx
    
    if (eax_1 s>= 0x1f)
        eax_1 -= 0x1f
        ecx = 0x6260
        
        if (*(arg2 + 8) != 0)
            ecx = 0x7894
    else
        ecx = 0xc
    
    int32_t edx = 0
    __builtin_memcpy(arg3, eax_1 * 0x32c + arg2 + ecx, 0x32c)
    
    if (arg5 s> 0)
        do
            int32_t eax_3 = arg4[edx]
            int32_t ecx_1
            
            if (eax_3 s>= 0x1f)
                eax_3 -= 0x1f
                ecx_1 = 0x6260
                
                if (*(arg2 + 8) != 0)
                    ecx_1 = 0x7894
            else
                ecx_1 = 0xc
            
            void* esi_6 = eax_3 * 0x32c + arg2 + ecx_1
            
            if (*(esi_6 + 4) != 0 || *(esi_6 + 0x327) != 0 || *(esi_6 + 0x326) != 0
                    || *(esi_6 + 0x325) != 0)
                __builtin_memcpy(arg3, esi_6, 0x32c)
            
            edx += 1
        while (edx s< arg5)
    
    return arg3
}
