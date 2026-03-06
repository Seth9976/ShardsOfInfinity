// 函数名称: sub_4f2190
// 虚拟地址: 0x4f2190
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4f2190(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_2 = (arg4 - arg3) s>> 2
    int32_t eax_2 = (arg4 - arg3) s>> 2
    int32_t eax_34
    
    if (eax_2 s<= 0x28)
        if (arg5(arg2, arg3) != 0)
            int32_t ecx_13 = *arg2
            *arg2 = *arg3
            *arg3 = ecx_13
        
        eax_34 = arg5(arg4, arg2)
        
        if (eax_34.b != 0)
            int32_t ecx_14 = *arg4
            *arg4 = *arg2
            *arg2 = ecx_14
            eax_34 = arg5(arg2, arg3)
            
            if (eax_34.b != 0)
                int32_t ecx_15 = *arg2
                eax_34 = *arg3
                *arg2 = eax_34
                *arg3 = ecx_15
    else
        int32_t eax_4 = (eax_2 + 1) s>> 3
        int32_t eax_5 = eax_4 << 2
        int32_t* ebx_1 = &arg3[eax_4]
        
        if (arg5(ebx_1, arg3) != 0)
            int32_t ecx_1 = *ebx_1
            *ebx_1 = *arg3
            *arg3 = ecx_1
        
        if (arg5(&arg3[eax_4 * 2], ebx_1) != 0)
            int32_t ecx_2 = arg3[eax_4 * 2]
            arg3[eax_4 * 2] = *ebx_1
            *ebx_1 = ecx_2
            
            if (arg5(ebx_1, arg3) != 0)
                int32_t ecx_3 = *ebx_1
                *ebx_1 = *arg3
                *arg3 = ecx_3
        
        int32_t* eax_15 = arg2 - eax_5
        
        if (arg5(arg2, eax_15) != 0)
            int32_t ecx_4 = *arg2
            *arg2 = *eax_15
            *eax_15 = ecx_4
        
        if (arg5(&arg2[eax_4], arg2) != 0)
            int32_t ecx_5 = arg2[eax_4]
            arg2[eax_4] = *arg2
            *arg2 = ecx_5
            
            if (arg5(arg2, eax_15) != 0)
                int32_t ecx_6 = *arg2
                *arg2 = *eax_15
                *eax_15 = ecx_6
        
        void* eax_25 = arg4 - (eax_4 << 3)
        int32_t* edi_3 = arg4 - eax_5
        int32_t* var_10_2 = eax_25
        
        if (arg5(edi_3, eax_25) != 0)
            int32_t ecx_7 = *edi_3
            *edi_3 = *var_10_2
            *var_10_2 = ecx_7
        
        if (arg5(arg4, edi_3) != 0)
            int32_t ecx_8 = *arg4
            *arg4 = *edi_3
            *edi_3 = ecx_8
            
            if (arg5(edi_3, var_10_2) != 0)
                int32_t ecx_9 = *edi_3
                *edi_3 = *var_10_2
                *var_10_2 = ecx_9
        
        if (arg5(arg2, ebx_1) != 0)
            int32_t ecx_10 = *arg2
            *arg2 = *ebx_1
            *ebx_1 = ecx_10
        
        eax_34 = arg5(edi_3, arg2)
        
        if (eax_34.b != 0)
            int32_t ecx_11 = *edi_3
            *edi_3 = *arg2
            *arg2 = ecx_11
            eax_34 = arg5(arg2, ebx_1)
            
            if (eax_34.b != 0)
                int32_t ecx_12 = *arg2
                int32_t eax_36 = *ebx_1
                *arg2 = eax_36
                *ebx_1 = ecx_12
                return eax_36
    
    return eax_34
}
