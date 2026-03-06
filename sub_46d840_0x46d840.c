// 函数名称: sub_46d840
// 虚拟地址: 0x46d840
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_46d840(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* edi = sub_45d320(arg1)
    int32_t* edi = sub_45d320(arg1)
    void* eax_1 = sub_46af30(arg1)
    
    if (eax_1 != 0)
        int32_t edx = *(eax_1 + 4)
        int32_t ecx_1 = 0
        
        if (edx s> 0)
            int32_t* eax_2 = *(eax_1 + 8)
            
            do
                if (*eax_2 == arg2)
                    return eax_1 + 4
                
                ecx_1 += 1
                eax_2 = &eax_2[2]
            while (ecx_1 s< edx)
    
    int32_t* ebx_2 = data_5c99e4
    char* edx_2
    
    if (ebx_2 != 0)
        edx_2 = *(arg1 + 0x6a0)
    
    int32_t* var_8
    
    if (ebx_2 == 0 || edx_2 == 0 || *edx_2 == 0)
        var_8 = nullptr
    else
        int32_t* eax_3 = sub_45f310(ebx_2, edx_2)
        ebx_2 = data_5c99e4
        var_8 = eax_3
    
    int32_t edx_3 = *edi
    int32_t ecx_3 = 0
    
    if (edx_3 s<= 0)
    label_46d8d5:
        
        if (var_8 != 0 && arg2 != 0xd2)
            edi = var_8
    else
        int32_t* eax_5 = edi[1]
        
        while (*eax_5 != arg2)
            ecx_3 += 1
            eax_5 = &eax_5[2]
            
            if (ecx_3 s>= edx_3)
                goto label_46d8d5
    
    int32_t* eax_7
    
    if (ebx_2 == 0)
        eax_7 = nullptr
    else if (ebx_2 != *(arg1 + 0x6a4))
        int32_t eax_9 = *(arg1 + 0x69c)
        
        if (eax_9 == 3)
            eax_7 = sub_45f310(ebx_2, "Text")
        else if (eax_9 == 5)
            eax_7 = sub_45f310(ebx_2, "Button")
        else
            eax_7 = nullptr
    else
        eax_7 = nullptr
    
    int32_t ebx_3 = *edi
    int32_t edx_5 = 0
    
    if (ebx_3 s> 0)
        int32_t* ecx_5 = edi[1]
        
        do
            if (*ecx_5 == arg2)
                return edi
            
            edx_5 += 1
            ecx_5 = &ecx_5[2]
        while (edx_5 s< ebx_3)
    
    if (eax_7 != 0 && arg2 != 0xd2)
        return eax_7
    
    return edi
}
