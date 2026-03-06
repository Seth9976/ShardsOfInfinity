// 函数名称: sub_50f860
// 虚拟地址: 0x50f860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50f860(int32_t arg1, uint32_t (* arg2)[0x4], int32_t* arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg3[0x11f5] != 0)
    if (arg3[0x11f5] != 0)
        return 0
    
    if (arg3[0x11f0] s< 0x10)
        sub_50f380(arg3)
    
    if (arg3[0x11f6] != 0)
        int32_t edx_6 = arg3[0x11f0]
        
        if (edx_6 s< 1)
            sub_50f380(arg3)
            edx_6 = arg3[0x11f0]
        
        int32_t ecx_14 = arg3[0x11ef]
        arg3[0x11ef] = ecx_14 * 2
        arg3[0x11f0] = edx_6 - 1
        
        if (ecx_14 s< 0)
            *arg2 += 1 << (arg3[0x11f7]).b
        
        return 1
    
    _memset(arg2, 0, 0x80)
    
    if (arg3[0x11f0] s< 0x10)
        sub_50f380(arg3)
    
    int32_t esi = arg3[0x11ef]
    uint32_t eax_3 = zx.d(*((esi u>> 0x17) + arg4))
    uint32_t var_8
    void* eax_4
    uint32_t eax_5
    int32_t ebx_2
    
    if (eax_3 u>= 0xff)
        int32_t* eax_6 = arg4 + 0x62c
        int32_t edx = 0xa
        
        while (esi u>> 0x10 u>= *eax_6)
            eax_6 = &eax_6[1]
            edx += 1
        
        ebx_2 = arg3[0x11f0]
        
        if (edx == 0x11)
            ebx_2 -= 0x10
            eax_5 = 0xffffffff
            arg3[0x11f0] = ebx_2
            var_8 = 0xffffffff
            goto label_50f997
        
        if (edx s> ebx_2)
            eax_5 = 0xffffffff
            var_8 = 0xffffffff
            goto label_50f997
        
        ebx_2 -= edx
        eax_4 = (esi u>> (0x20 - edx.b) & *((edx << 2) + &data_5731a0)) + *(arg4 + (edx << 2) + 0x64c)
        arg3[0x11f0] = ebx_2
        arg3[0x11ef] = esi << edx.b
        eax_4.b = *(eax_4 + arg4 + 0x400)
        goto label_50f98b
    
    uint32_t ecx_1 = zx.d(*(eax_3 + arg4 + 0x500))
    ebx_2 = arg3[0x11f0]
    int32_t ebx_6
    
    if (ecx_1 s<= ebx_2)
        ebx_2 -= ecx_1
        arg3[0x11ef] = esi << ecx_1.b
        arg3[0x11f0] = ebx_2
        eax_4.b = *(eax_3 + arg4 + 0x400)
    label_50f98b:
        eax_5 = zx.d(eax_4.b)
        var_8 = eax_5
        
        if (eax_5 != 0)
            goto label_50f997
        
        ebx_6 = 0
    else
        eax_5 = 0xffffffff
        var_8 = 0xffffffff
    label_50f997:
        
        if (ebx_2 s< eax_5)
            sub_50f380(arg3)
            ebx_2 = arg3[0x11f0]
            eax_5 = var_8
        
        int32_t edx_1 = arg3[0x11ef]
        int32_t esi_4 = rol.d(edx_1, eax_5.b)
        int32_t ecx_10 = *((eax_5 << 2) + &data_5731a0)
        arg3[0x11ef] = not.d(ecx_10) & esi_4
        arg3[0x11f0] = ebx_2 - var_8
        ebx_6 = (*((var_8 << 2) + &data_573160) & not.d(edx_1 s>> 0x1f)) + (ecx_10 & esi_4)
    
    int32_t eax_15 = arg5 * 9
    int32_t edx_5 = arg3[eax_15 * 2 + 0x11ad] + ebx_6
    arg3[eax_15 * 2 + 0x11ad] = edx_5
    edx_5.w <<= (arg3[0x11f7]).b
    *arg2 = edx_5.w
    return 1
}
