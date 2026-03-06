// 函数名称: sub_4b8590
// 虚拟地址: 0x4b8590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4b8590(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* eax = sub_4b8c10(arg3, arg2)
    void* eax = sub_4b8c10(arg3, arg2)
    void* var_8 = eax
    int32_t esi = *(eax + 0x10)
    
    if (esi == 8)
        eax = sub_4b8850(arg3, arg2)
        int32_t ecx_1 = *arg4
        
        if (ecx_1 != eax)
            if (ecx_1 != 0)
                int32_t eax_1 = _aligned_free_base(ecx_1)
                *arg4 = 0
                return eax_1
            
            *arg4 = 0
    else if (esi s<= 0 || esi s>= 0x12)
        eax = sub_4b8850(arg3, arg2)
        int32_t* ecx_3 = *arg4
        
        if (ecx_3 != eax)
            eax = sub_48b5b0(ecx_3)
            *arg4 = 0
    
    return eax
}
