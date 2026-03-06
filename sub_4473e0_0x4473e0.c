// 函数名称: sub_4473e0
// 虚拟地址: 0x4473e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4473e0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t edi = 0
    char* esi_1 = *(arg2 + 0x10) + 0x34
    int32_t eax
    
    while (zx.d(*esi_1) != arg4)
        edi += 1
        esi_1 = &esi_1[0xc]
        
        if (edi s>= 4)
            eax.b = 0
            return eax
    
    if (arg5 != 0)
        int32_t eax_1 = *(arg2 + 0x18)
        int32_t ecx_4 = (arg2 - arg3 - 4) s>> 5
        
        if (eax_1 != 0)
            arg5[1] = edi
            *arg5 = eax_1 << 0x10 | ecx_4
            int32_t eax_3
            eax_3.b = 1
            return eax_3
        
        arg5[1] = edi
        *arg5 = ecx_4
    
    eax.b = 1
    return eax
}
