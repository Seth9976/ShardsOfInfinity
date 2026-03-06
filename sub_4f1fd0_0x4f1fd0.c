// 函数名称: sub_4f1fd0
// 虚拟地址: 0x4f1fd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void** __convention("regparm")sub_4f1fd0(int32_t arg1, int32_t* arg2, void** arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* edi = &arg2[(arg4 - arg2) s>> 3]
    void* edi = &arg2[(arg4 - arg2) s>> 3]
    sub_4f2190(arg4 - 4, edi, arg2, arg4 - 4, arg5)
    int32_t* ebx_1 = edi + 4
    int32_t* var_8 = ebx_1
    
    if (arg2 u< edi)
        void* ebx_2 = edi
        
        do
            ebx_2 -= 4
            
            if (arg5(ebx_2, edi) != 0)
                break
            
            if (arg5(edi, ebx_2) != 0)
                break
            
            edi = ebx_2
        while (arg2 u< edi)
        
        ebx_1 = var_8
    
    void* eax_8 = arg4
    
    if (ebx_1 u< eax_8)
        do
            if (arg5(ebx_1, edi) != 0)
                eax_8 = arg4
                break
            
            eax_8 = arg4
            
            if (arg5(edi, ebx_1) != 0)
                break
            
            ebx_1 = &ebx_1[1]
        while (ebx_1 u< eax_8)
        
        var_8 = ebx_1
    
    int32_t* esi_1 = ebx_1
    void* edx_1 = edi
    label_4f206c:
    void* var_c_1 = edx_1
    
    while (true)
        int32_t* var_14_1 = esi_1
        
        while (true)
            if (esi_1 u< eax_8)
                do
                    if (arg5(edi, esi_1) == 0)
                        if (arg5(esi_1, edi) != 0)
                            break
                        
                        if (ebx_1 != esi_1)
                            int32_t ecx_2 = *ebx_1
                            *ebx_1 = *esi_1
                            *esi_1 = ecx_2
                        
                        ebx_1 = &ebx_1[1]
                    
                    esi_1 = &esi_1[1]
                while (esi_1 u< arg4)
                
                edx_1 = var_c_1
                var_8 = ebx_1
                var_14_1 = esi_1
            
            bool cond:1_1 = edx_1 != arg2
            
            if (edx_1 u> arg2)
                void* ebx_3 = var_c_1
                void* esi_2 = ebx_3 - 4
                int32_t* eax_16
                
                do
                    if (arg5(esi_2, edi) == 0)
                        if (arg5(edi, esi_2) != 0)
                            eax_16 = arg2
                            break
                        
                        edi -= 4
                        
                        if (edi != esi_2)
                            int32_t ecx_3 = *edi
                            *edi = *esi_2
                            *esi_2 = ecx_3
                    
                    eax_16 = arg2
                    ebx_3 -= 4
                    esi_2 -= 4
                while (eax_16 u< ebx_3)
                
                esi_1 = var_14_1
                var_c_1 = ebx_3
                edx_1 = var_c_1
                cond:1_1 = edx_1 != eax_16
                ebx_1 = var_8
            
            if (not(cond:1_1))
                if (esi_1 == arg4)
                    *arg3 = edi
                    arg3[1] = ebx_1
                    return arg3
                
                if (ebx_1 != esi_1)
                    int32_t ecx_4 = *edi
                    *edi = *ebx_1
                    *ebx_1 = ecx_4
                
                ebx_1 = &ebx_1[1]
                int32_t ecx_5 = *edi
                *edi = *esi_1
                edi += 4
                eax_8 = arg4
                *esi_1 = ecx_5
                esi_1 = &esi_1[1]
                var_8 = ebx_1
                break
            
            edx_1 -= 4
            var_c_1 = edx_1
            
            if (esi_1 != arg4)
                int32_t ecx_8 = *esi_1
                *esi_1 = *edx_1
                esi_1 = &esi_1[1]
                eax_8 = arg4
                *edx_1 = ecx_8
                goto label_4f206c
            
            edi -= 4
            
            if (edx_1 != edi)
                int32_t ecx_6 = *edx_1
                *edx_1 = *edi
                *edi = ecx_6
            
            int32_t eax_20 = ebx_1[-1]
            ebx_1 -= 4
            int32_t ecx_7 = *edi
            *edi = eax_20
            eax_8 = arg4
            var_8 = ebx_1
            *ebx_1 = ecx_7
}
