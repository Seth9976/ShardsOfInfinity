// 函数名称: sub_518400
// 虚拟地址: 0x518400
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_518400(int32_t arg1, char* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* var_8 = nullptr
    void* var_8 = nullptr
    void* i_1 = arg4
    void* esi = arg3
    char* edi = arg2
    void* i = arg4
    
    if (arg4 s> 0)
        do
            char* eax_1 = *(esi + 0xa8)
            
            if (eax_1 u< *(esi + 0xac))
                arg3.b = *eax_1
                eax_1 = &eax_1[1]
                *(esi + 0xa8) = eax_1
            else if (*(esi + 0x20) == 0)
                arg3.b = 0
            else
                sub_50ebb0(esi)
                char* eax_2 = *(esi + 0xa8)
                i = i_1
                arg3.b = *eax_2
                eax_1 = &eax_2[1]
                *(esi + 0xa8) = eax_1
            
            uint32_t ebx_1 = zx.d(arg3.b)
            
            if (ebx_1 != 0x80)
                if (ebx_1 u< 0x80)
                    int32_t j_2 = ebx_1 + 1
                    
                    if (j_2 s> i)
                        return 0
                    
                    var_8 += j_2
                    int32_t j
                    
                    do
                        char* eax_3 = *(esi + 0xa8)
                        
                        if (eax_3 u< *(esi + 0xac))
                            arg3.b = *eax_3
                            *(esi + 0xa8) = &eax_3[1]
                        else if (*(esi + 0x20) == 0)
                            arg3.b = 0
                        else
                            sub_50ebb0(esi)
                            char* eax_5 = *(esi + 0xa8)
                            arg3.b = *eax_5
                            *(esi + 0xa8) = &eax_5[1]
                        
                        *edi = arg3.b
                        edi = &edi[4]
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                else if (ebx_1 u> 0x80)
                    arg3 = 0x101 - ebx_1
                    
                    if (arg3 s> i)
                        return 0
                    
                    if (eax_1 u< *(esi + 0xac))
                        i.b = *eax_1
                        *(esi + 0xa8) = &eax_1[1]
                    else if (*(esi + 0x20) == 0)
                        i.b = 0
                    else
                        sub_50ebb0(esi)
                        char* eax_8 = *(esi + 0xa8)
                        i.b = *eax_8
                        *(esi + 0xa8) = &eax_8[1]
                    
                    var_8 += arg3
                    
                    if (arg3 != 0)
                        void* j_1
                        
                        do
                            *edi = i.b
                            edi = &edi[4]
                            j_1 = arg3
                            arg3 -= 1
                        while (j_1 != 1)
            
            i = arg4 - var_8
            i_1 = i
        while (i s> 0)
    
    return 1
}
