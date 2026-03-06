// 函数名称: sub_514000
// 虚拟地址: 0x514000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_514000(void* arg1, void* arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t edi = *(arg1 + 0xc)
    int32_t edx = 0xa
    int32_t esi_3 = (edi s>> 1 & 0x5555) | ((edi & 0x5555) * 2)
    int32_t ecx_3 = (esi_3 u>> 2 & 0x3333) | (esi_3 & 0x3333) << 2
    int32_t eax_6 = (ecx_3 u>> 4 & 0xf0f) | (ecx_3 & 0xf0f) << 4
    uint32_t i = zx.d(eax_6.b) << 8 | eax_6 u>> 8
    int32_t* eax_8 = arg2 + 0x448
    
    if (i s>= *eax_8)
        do
            eax_8 = &eax_8[1]
            edx += 1
        while (i s>= *eax_8)
        
        if (edx == 0x10)
            return 0xffffffff
    
    int32_t esi_10 =
        (i s>> (0x10 - edx.b)) - zx.d(*(arg2 + (edx << 1) + 0x400)) + zx.d(*(arg2 + (edx << 1) + 0x464))
    *(arg1 + 8) -= edx
    *(arg1 + 0xc) = edi u>> edx.b
    return zx.d(*(arg2 + (esi_10 << 1) + 0x5a4))
}
