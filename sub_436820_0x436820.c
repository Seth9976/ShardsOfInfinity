// 函数名称: sub_436820
// 虚拟地址: 0x436820
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_436820(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ecx = arg1[3]
    int32_t* ecx = arg1[3]
    int32_t eax = *arg2
    int32_t edx = arg1[1]
    char* edi
    
    if (&ecx[1] s<= edx)
        edi = *arg1
    else
        int32_t eax_2 = edx * 2
        int32_t ecx_1 = 0x1000
        
        if (eax_2 s> 0x1000)
            ecx_1 = eax_2
        
        arg1[1] = ecx_1
        edi = sub_45cd70(ecx_1)
        sub_51d5b0(edi, *arg1, arg1[3])
        int32_t eax_4 = *arg1
        
        if (eax_4 != 0)
            _aligned_free_base(eax_4)
        
        ecx = arg1[3]
        *arg1 = edi
    
    *(ecx + edi) = eax
    arg1[3] += 4
    int32_t* ecx_2 = arg1[3]
    int32_t edx_1 = arg1[1]
    arg1[2] = ecx_2
    int32_t eax_6 = arg2[1]
    char* edi_1
    
    if (&ecx_2[1] s<= edx_1)
        edi_1 = *arg1
    else
        int32_t eax_8 = edx_1 * 2
        int32_t ecx_3 = 0x1000
        
        if (eax_8 s> 0x1000)
            ecx_3 = eax_8
        
        arg1[1] = ecx_3
        edi_1 = sub_45cd70(ecx_3)
        sub_51d5b0(edi_1, *arg1, arg1[3])
        int32_t eax_10 = *arg1
        
        if (eax_10 != 0)
            _aligned_free_base(eax_10)
        
        ecx_2 = arg1[3]
        *arg1 = edi_1
    
    *(ecx_2 + edi_1) = eax_6
    arg1[3] += 4
    int32_t* ecx_4 = arg1[3]
    int32_t edx_2 = arg1[1]
    arg1[2] = ecx_4
    int32_t eax_12 = arg2[0xa]
    char* edi_2
    
    if (&ecx_4[1] s<= edx_2)
        edi_2 = *arg1
    else
        int32_t eax_14 = edx_2 * 2
        int32_t ecx_5 = 0x1000
        
        if (eax_14 s> 0x1000)
            ecx_5 = eax_14
        
        arg1[1] = ecx_5
        edi_2 = sub_45cd70(ecx_5)
        sub_51d5b0(edi_2, *arg1, arg1[3])
        int32_t eax_16 = *arg1
        
        if (eax_16 != 0)
            _aligned_free_base(eax_16)
        
        ecx_4 = arg1[3]
        *arg1 = edi_2
    
    *(ecx_4 + edi_2) = eax_12
    arg1[3] += 4
    int32_t* ecx_6 = arg1[3]
    arg1[2] = ecx_6
    int32_t i_1 = 0
    
    if (arg2[0xa] s> 0)
        void* ebx_1 = &arg2[2]
        int32_t i
        
        do
            int32_t eax_18 = *ebx_1
            int32_t edx_3 = arg1[1]
            char* edi_3
            
            if (&ecx_6[1] s<= edx_3)
                edi_3 = *arg1
            else
                int32_t eax_20 = edx_3 * 2
                int32_t ecx_7 = 0x1000
                
                if (eax_20 s> 0x1000)
                    ecx_7 = eax_20
                
                arg1[1] = ecx_7
                edi_3 = sub_45cd70(ecx_7)
                sub_51d5b0(edi_3, *arg1, arg1[3])
                int32_t eax_22 = *arg1
                
                if (eax_22 != 0)
                    _aligned_free_base(eax_22)
                
                ecx_6 = arg1[3]
                *arg1 = edi_3
            
            ebx_1 += 4
            *(ecx_6 + edi_3) = eax_18
            ecx_6 = arg1[3] + 4
            i = i_1 + 1
            arg1[3] = ecx_6
            arg1[2] = ecx_6
            i_1 = i
        while (i s< arg2[0xa])
    
    int32_t edx_4 = arg1[1]
    int32_t ebx_2 = arg2[0xb]
    
    if (&ecx_6[1] s<= edx_4)
        *(ecx_6 + *arg1) = ebx_2
        arg1[3] += 4
        int32_t eax_30 = arg1[3]
        arg1[2] = eax_30
        return eax_30
    
    int32_t eax_26 = edx_4 * 2
    int32_t ecx_9 = 0x1000
    
    if (eax_26 s> 0x1000)
        ecx_9 = eax_26
    
    arg1[1] = ecx_9
    char* eax_27 = sub_45cd70(ecx_9)
    sub_51d5b0(eax_27, *arg1, arg1[3])
    int32_t eax_28 = *arg1
    
    if (eax_28 != 0)
        _aligned_free_base(eax_28)
    
    int32_t* ecx_10 = arg1[3]
    *arg1 = eax_27
    *(ecx_10 + eax_27) = ebx_2
    arg1[3] += 4
    int32_t eax_29 = arg1[3]
    arg1[2] = eax_29
    return eax_29
}
