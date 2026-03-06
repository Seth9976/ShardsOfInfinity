// 函数名称: sub_517a20
// 虚拟地址: 0x517a20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_517a20(void* arg1)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    void* ecx = *(arg1 + 0xac)
    
    if (eax u< ecx)
        eax = &eax[1]
        *(arg1 + 0xa8) = eax
    else if (*(arg1 + 0x20) != 0)
        sub_50ebb0(arg1)
        *(arg1 + 0xa8) += 1
        eax = *(arg1 + 0xa8)
        ecx = *(arg1 + 0xac)
    
    int32_t ebx
    
    if (eax u< ecx)
        ebx.b = *eax
        eax = &eax[1]
        *(arg1 + 0xa8) = eax
    else if (*(arg1 + 0x20) == 0)
        ebx.b = 0
    else
        sub_50ebb0(arg1)
        char* eax_1 = *(arg1 + 0xa8)
        ebx.b = *eax_1
        eax = &eax_1[1]
        *(arg1 + 0xa8) = eax
    
    int32_t result
    
    if (ebx.b u> 1)
        result = 0
    else
        if (eax u< *(arg1 + 0xac))
            ecx.b = *eax
            eax = &eax[1]
        else if (*(arg1 + 0x20) == 0)
            ecx.b = 0
        else
            sub_50ebb0(arg1)
            char* eax_2 = *(arg1 + 0xa8)
            ecx.b = *eax_2
            eax = &eax_2[1]
        
        void* eax_8
        
        if (ebx.b != 1)
            if (ecx.b == 2 || ecx.b == 3 || ecx.b == 0xa || ecx.b == 0xb)
                void* ecx_9
                int32_t edx_3
                
                if (*(arg1 + 0x10) != 0)
                    edx_3 = *(arg1 + 0xac)
                    ecx_9 = edx_3 - eax
                
                if (*(arg1 + 0x10) == 0 || ecx_9 s>= 9)
                    eax_8 = &eax[9]
                label_517bd0:
                    *(arg1 + 0xa8) = eax_8
                    goto label_517bd8
                
                *(arg1 + 0xa8) = edx_3
                (*(arg1 + 0x14))(*(arg1 + 0x1c), 9 - ecx_9)
            label_517bd8:
                
                if (sub_50ed90(arg1) s< 1)
                    result = 0
                else if (sub_50ed90(arg1) s< 1)
                    result = 0
                else
                    char* eax_13 = *(arg1 + 0xa8)
                    
                    if (eax_13 u< *(arg1 + 0xac))
                        eax_13.b = *eax_13
                    else if (*(arg1 + 0x20) == 0)
                        eax_13.b = 0
                    else
                        sub_50ebb0(arg1)
                        eax_13.b = **(arg1 + 0xa8)
                    
                    if (ebx.b != 1)
                        if (eax_13.b == 8 || eax_13.b == 0xf || eax_13.b == 0x10 || eax_13.b == 0x18
                                || eax_13.b == 0x20)
                            result = 1
                        else
                            result = 0
                    else if (eax_13.b == 8 || (eax_13.b == 0x10 && (eax_13.b == 8 || eax_13.b == 0xf
                            || eax_13.b == 0x10 || eax_13.b == 0x18 || eax_13.b == 0x20)))
                        result = 1
                    else
                        result = 0
            else
                result = 0
        else if (ecx.b == ebx.b || ecx.b == 9)
            int32_t edx_1
            
            if (*(arg1 + 0x10) != 0)
                edx_1 = *(arg1 + 0xac)
                ecx = edx_1 - eax
            
            void* eax_5
            
            if (*(arg1 + 0x10) == 0 || ecx s>= 4)
                eax_5 = &eax[4]
                *(arg1 + 0xa8) = eax_5
            else
                *(arg1 + 0xa8) = edx_1
                (*(arg1 + 0x14))(*(arg1 + 0x1c), 4 - ecx)
                eax_5 = *(arg1 + 0xa8)
            
            if (eax_5 u< *(arg1 + 0xac))
                ecx.b = *eax_5
                eax_5 += 1
            else if (*(arg1 + 0x20) == 0)
                ecx.b = 0
            else
                sub_50ebb0(arg1)
                char* eax_6 = *(arg1 + 0xa8)
                ecx.b = *eax_6
                eax_5 = &eax_6[1]
            
            if (ecx.b == 8 || ecx.b == 0xf || ecx.b == 0x10 || ecx.b == 0x18 || ecx.b == 0x20)
                void* ecx_7
                int32_t edx_2
                
                if (*(arg1 + 0x10) != 0)
                    edx_2 = *(arg1 + 0xac)
                    ecx_7 = edx_2 - eax_5
                
                if (*(arg1 + 0x10) == 0 || ecx_7 s>= 4)
                    eax_8 = eax_5 + 4
                    goto label_517bd0
                
                int32_t eax_7 = *(arg1 + 0x14)
                int32_t var_14_2 = *(arg1 + 0x1c)
                *(arg1 + 0xa8) = edx_2
                eax_7(var_14_2, 4 - ecx_7)
                goto label_517bd8
            
            result = 0
        else
            result = 0
    
    *(arg1 + 0xa8) = *(arg1 + 0xb0)
    *(arg1 + 0xac) = *(arg1 + 0xb4)
    return result
}
