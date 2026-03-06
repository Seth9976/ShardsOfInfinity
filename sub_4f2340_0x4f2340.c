// 函数名称: sub_4f2340
// 虚拟地址: 0x4f2340
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4f2340(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: void* esi = arg2
    void* esi = arg2
    int32_t edx = arg6
    void* ecx = esi
    int32_t eax_2 = (arg4 - 1) s>> 1
    void* var_8 = ecx
    int32_t var_c = eax_2
    void* edi = esi
    
    if (esi s< eax_2)
        do
            edi = (edi << 1) + 2
            int32_t ecx_1 = arg3 + (edi << 2)
            
            if (edx(ecx_1, ecx_1 - 4) != 0)
                edi -= 1
            
            edx = arg6
            *(arg3 + (esi << 2)) = *(arg3 + (edi << 2))
            esi = edi
            eax_2 = var_c
        while (edi s< eax_2)
        
        ecx = var_8
    
    if (edi == eax_2 && (arg4.b & 1) == 0)
        *(arg3 + (esi << 2)) = *(arg3 + (arg4 << 2) - 4)
        esi = arg4 - 1
    
    if (ecx s< esi)
        int32_t edi_2
        
        do
            edi_2 = (esi - 1) s>> 1
            
            if (edx(arg3 + (edi_2 << 2), arg5) == 0)
                break
            
            edx = arg6
            *(arg3 + (esi << 2)) = *(arg3 + (edi_2 << 2))
            esi = edi_2
        while (var_8 s< edi_2)
    
    int32_t result = *arg5
    *(arg3 + (esi << 2)) = result
    return result
}
