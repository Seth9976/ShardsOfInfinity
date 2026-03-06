// 函数名称: sub_445680
// 虚拟地址: 0x445680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_445680(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_2 = (arg4 - arg3) s>> 3
    int32_t eax_2 = (arg4 - arg3) s>> 3
    int32_t eax_56
    
    if (eax_2 s<= 0x28)
        if (arg5(arg2, arg3) != 0)
            int32_t ecx_14 = *arg2
            int32_t edx_12 = arg2[1]
            *arg2 = *arg3
            arg2[1] = arg3[1]
            *arg3 = ecx_14
            arg3[1] = edx_12
        
        eax_56 = arg5(arg4, arg2)
        
        if (eax_56.b != 0)
            int32_t ecx_15 = *arg4
            int32_t edx_13 = arg4[1]
            *arg4 = *arg2
            arg4[1] = arg2[1]
            *arg2 = ecx_15
            arg2[1] = edx_13
            eax_56 = arg5(arg2, arg3)
            
            if (eax_56.b != 0)
                int32_t ecx_16 = *arg2
                int32_t edx_14 = arg2[1]
                *arg2 = *arg3
                eax_56 = arg3[1]
                arg2[1] = eax_56
                *arg3 = ecx_16
                arg3[1] = edx_14
    else
        int32_t eax_4 = (eax_2 + 1) s>> 3
        int32_t eax_5 = eax_4 << 3
        int32_t* ebx_1 = &arg3[eax_4 * 2]
        int32_t* var_14_1 = ebx_1
        
        if (arg5(ebx_1, arg3) != 0)
            int32_t ecx_2 = *ebx_1
            int32_t edx = ebx_1[1]
            *ebx_1 = *arg3
            ebx_1[1] = arg3[1]
            *arg3 = ecx_2
            arg3[1] = edx
        
        if (arg5(&arg3[eax_4 * 4], ebx_1) != 0)
            int32_t ecx_3 = arg3[eax_4 * 4]
            int32_t edx_1 = arg3[eax_4 * 4 + 1]
            arg3[eax_4 * 4] = *ebx_1
            arg3[eax_4 * 4 + 1] = ebx_1[1]
            *ebx_1 = ecx_3
            ebx_1[1] = edx_1
            
            if (arg5(ebx_1, arg3) != 0)
                int32_t ecx_4 = *ebx_1
                int32_t edx_2 = ebx_1[1]
                *ebx_1 = *arg3
                ebx_1[1] = arg3[1]
                *arg3 = ecx_4
                arg3[1] = edx_2
        
        int32_t* eax_19 = arg2 - eax_5
        
        if (arg5(arg2, eax_19) != 0)
            int32_t ecx_5 = *arg2
            int32_t edx_3 = arg2[1]
            *arg2 = *eax_19
            arg2[1] = eax_19[1]
            *eax_19 = ecx_5
            eax_19[1] = edx_3
        
        if (arg5(&arg2[eax_4 * 2], arg2) != 0)
            int32_t ecx_6 = arg2[eax_4 * 2]
            int32_t edx_4 = arg2[eax_4 * 2 + 1]
            arg2[eax_4 * 2] = *arg2
            arg2[eax_4 * 2 + 1] = arg2[1]
            *arg2 = ecx_6
            arg2[1] = edx_4
            ebx_1 = var_14_1
            
            if (arg5(arg2, eax_19) != 0)
                int32_t ecx_7 = *arg2
                int32_t edx_5 = arg2[1]
                *arg2 = *eax_19
                arg2[1] = eax_19[1]
                *eax_19 = ecx_7
                eax_19[1] = edx_5
        
        void* eax_36 = arg4 - (eax_4 << 4)
        int32_t* edi_4 = arg4 - eax_5
        int32_t* var_8_2 = eax_36
        
        if (arg5(edi_4, eax_36) != 0)
            int32_t ecx_8 = *edi_4
            int32_t edx_6 = edi_4[1]
            *edi_4 = *var_8_2
            edi_4[1] = var_8_2[1]
            *var_8_2 = ecx_8
            var_8_2[1] = edx_6
        
        if (arg5(arg4, edi_4) != 0)
            int32_t ecx_9 = *arg4
            int32_t edx_7 = arg4[1]
            *arg4 = *edi_4
            arg4[1] = edi_4[1]
            *edi_4 = ecx_9
            edi_4[1] = edx_7
            ebx_1 = var_14_1
            
            if (arg5(edi_4, var_8_2) != 0)
                int32_t ecx_10 = *edi_4
                int32_t edx_8 = edi_4[1]
                *edi_4 = *var_8_2
                edi_4[1] = var_8_2[1]
                *var_8_2 = ecx_10
                var_8_2[1] = edx_8
        
        if (arg5(arg2, ebx_1) != 0)
            int32_t ecx_11 = *arg2
            int32_t edx_9 = arg2[1]
            *arg2 = *ebx_1
            arg2[1] = ebx_1[1]
            *ebx_1 = ecx_11
            ebx_1[1] = edx_9
        
        eax_56 = arg5(edi_4, arg2)
        
        if (eax_56.b != 0)
            int32_t ecx_12 = *edi_4
            int32_t edx_10 = edi_4[1]
            *edi_4 = *arg2
            edi_4[1] = arg2[1]
            *arg2 = ecx_12
            arg2[1] = edx_10
            eax_56 = arg5(arg2, ebx_1)
            
            if (eax_56.b != 0)
                int32_t ecx_13 = *arg2
                int32_t edx_11 = arg2[1]
                *arg2 = *ebx_1
                int32_t eax_60 = ebx_1[1]
                arg2[1] = eax_60
                *ebx_1 = ecx_13
                ebx_1[1] = edx_11
                return eax_60
    
    return eax_56
}
