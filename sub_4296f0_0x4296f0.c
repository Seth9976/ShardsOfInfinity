// 函数名称: sub_4296f0
// 虚拟地址: 0x4296f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4296f0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: void* var_8 = arg2
    void* var_8 = arg2
    void* esi = arg2
    int32_t eax_2 = (arg4 - 1) s>> 1
    int32_t ecx = arg6
    int32_t var_c = eax_2
    void* edi = esi
    
    if (esi s< eax_2)
        do
            int32_t var_20_1 = *(arg3 + (edi << 3) + 4)
            edi = (edi << 1) + 2
            
            if (ecx(*(arg3 + (edi << 2)), var_20_1) != 0)
                edi -= 1
            
            ecx = arg6
            *(arg3 + (esi << 2)) = *(arg3 + (edi << 2))
            esi = edi
            eax_2 = var_c
        while (edi s< eax_2)
        
        arg2 = var_8
    
    if (edi == eax_2 && (arg4.b & 1) == 0)
        *(arg3 + (esi << 2)) = *(arg3 + (arg4 << 2) - 4)
        esi = arg4 - 1
    
    if (arg2 s< esi)
        int32_t edi_2
        
        do
            edi_2 = (esi - 1) s>> 1
            
            if (ecx(*(arg3 + (edi_2 << 2)), *arg5) == 0)
                break
            
            ecx = arg6
            *(arg3 + (esi << 2)) = *(arg3 + (edi_2 << 2))
            esi = edi_2
        while (var_8 s< edi_2)
    
    int32_t result = *arg5
    *(arg3 + (esi << 2)) = result
    return result
}
