// 函数名称: sub_445460
// 虚拟地址: 0x445460
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void** __convention("regparm")sub_445460(int32_t arg1, int32_t* arg2, void** arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* edi = &arg2[((arg4 - arg2) s>> 4) * 2]
    void* edi = &arg2[((arg4 - arg2) s>> 4) * 2]
    sub_445680(arg4 - 8, edi, arg2, arg4 - 8, arg5)
    int32_t* ebx_1 = edi + 8
    int32_t* var_c = ebx_1
    
    if (arg2 u< edi)
        void* ebx_2 = edi
        
        do
            ebx_2 -= 8
            
            if (arg5(ebx_2, edi) != 0)
                break
            
            if (arg5(edi, ebx_2) != 0)
                break
            
            edi = ebx_2
        while (arg2 u< edi)
        
        ebx_1 = var_c
    
    void* ecx_2 = arg4
    
    if (ebx_1 u< ecx_2)
        do
            if (arg5(ebx_1, edi) != 0)
                ecx_2 = arg4
                break
            
            ecx_2 = arg4
            
            if (arg5(edi, ebx_1) != 0)
                break
            
            ebx_1 = &ebx_1[2]
        while (ebx_1 u< ecx_2)
        
        var_c = ebx_1
    
    void* eax_8 = edi
    int32_t* esi_1 = ebx_1
    void* var_8 = eax_8
    
    while (true)
        int32_t* var_14_1 = esi_1
        
        while (true)
            if (esi_1 u< ecx_2)
                do
                    if (arg5(edi, esi_1) == 0)
                        if (arg5(esi_1, edi) != 0)
                            break
                        
                        if (ebx_1 != esi_1)
                            int32_t ecx_3 = *ebx_1
                            int32_t edx_1 = ebx_1[1]
                            *ebx_1 = *esi_1
                            ebx_1[1] = esi_1[1]
                            *esi_1 = ecx_3
                            esi_1[1] = edx_1
                        
                        ebx_1 = &ebx_1[2]
                    
                    esi_1 = &esi_1[2]
                while (esi_1 u< arg4)
                
                eax_8 = var_8
                var_c = ebx_1
                var_14_1 = esi_1
            
            bool cond:0_1 = eax_8 != arg2
            
            if (eax_8 u> arg2)
                void* ebx_3 = var_8
                void* esi_2 = ebx_3 - 8
                
                do
                    if (arg5(esi_2, edi) == 0)
                        if (arg5(edi, esi_2) != 0)
                            break
                        
                        edi -= 8
                        
                        if (edi != esi_2)
                            int32_t ecx_5 = *edi
                            int32_t edx_2 = *(edi + 4)
                            *edi = *esi_2
                            *(edi + 4) = *(esi_2 + 4)
                            *esi_2 = ecx_5
                            *(esi_2 + 4) = edx_2
                    
                    ebx_3 -= 8
                    esi_2 -= 8
                while (arg2 u< ebx_3)
                
                esi_1 = var_14_1
                var_8 = ebx_3
                eax_8 = var_8
                cond:0_1 = eax_8 != arg2
                ebx_1 = var_c
            
            if (not(cond:0_1))
                if (esi_1 == arg4)
                    *arg3 = edi
                    arg3[1] = ebx_1
                    return arg3
                
                if (ebx_1 != esi_1)
                    int32_t ecx_7 = *edi
                    int32_t edx_3 = *(edi + 4)
                    *edi = *ebx_1
                    *(edi + 4) = ebx_1[1]
                    *ebx_1 = ecx_7
                    ebx_1[1] = edx_3
                
                int32_t ecx_8 = *edi
                ebx_1 = &ebx_1[2]
                int32_t edx_4 = *(edi + 4)
                *edi = *esi_1
                *(edi + 4) = esi_1[1]
                edi += 8
                eax_8 = var_8
                *esi_1 = ecx_8
                ecx_2 = arg4
                esi_1[1] = edx_4
                esi_1 = &esi_1[2]
                var_c = ebx_1
                break
            
            var_8 = eax_8 - 8
            
            if (esi_1 != arg4)
                int32_t ecx_11 = *esi_1
                int32_t edx_7 = esi_1[1]
                var_8 = eax_8 - 8
                *esi_1 = *(eax_8 - 8)
                esi_1[1] = *(var_8 + 4)
                esi_1 = &esi_1[2]
                eax_8 = var_8
                *eax_8 = ecx_11
                ecx_2 = arg4
                *(eax_8 + 4) = edx_7
                break
            
            edi -= 8
            
            if (eax_8 - 8 != edi)
                int32_t ecx_9 = *(eax_8 - 8)
                int32_t edx_5 = *(eax_8 - 4)
                *var_8 = *edi
                *(var_8 + 4) = *(edi + 4)
                ebx_1 = var_c
                *edi = ecx_9
                *(edi + 4) = edx_5
            
            int32_t ecx_10 = *edi
            ebx_1 = &ebx_1[-2]
            int32_t edx_6 = *(edi + 4)
            var_c = ebx_1
            *edi = *ebx_1
            *(edi + 4) = ebx_1[1]
            eax_8 = var_8
            *ebx_1 = ecx_10
            ecx_2 = arg4
            ebx_1[1] = edx_6
}
