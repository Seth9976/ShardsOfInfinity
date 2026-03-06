// 函数名称: sub_4f1dd0
// 虚拟地址: 0x4f1dd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4f1dd0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t esi = arg5
    int32_t esi = arg5
    int32_t i_6 = arg2
    int32_t* edi = arg3
    int32_t i_7 = i_6
    int32_t i_11 = (i_6 - edi) s>> 2
    int32_t i_12
    int32_t i_4
    
    if (i_11 s<= 0x20)
    label_4f1e67:
        
        if (i_11 s>= 2 && edi != i_6)
            i_11 = &edi[1]
            i_12 = i_11
            
            if (i_11 != i_6)
                i_4 = i_11 - 4
                
                do
                    int32_t i_10 = i_11
                    int32_t var_20 = *i_11
                    
                    if (esi(&var_20, edi) == 0)
                        int32_t i_5 = i_4
                        int32_t i_8 = i_5
                        
                        if (arg5(&var_20, i_5) != 0)
                            int32_t i_9 = i_10
                            char i
                            
                            do
                                *i_9 = *i_8
                                i_9 = i_8
                                i_8 -= 4
                                i = arg5(&var_20, i_8)
                            while (i != 0)
                            i_10 = i_9
                            i_6 = i_7
                        
                        esi = arg5
                        *i_10 = var_20
                    else
                        sub_51dd40(&edi[1], edi, i_12 - edi)
                        *edi = var_20
                    
                    int32_t i_13 = i_12
                    i_4 += 4
                    i_11 = i_13 + 4
                    i_12 = i_11
                while (i_11 != i_6)
    else
        while (arg4 s> 0)
            sub_4f1fd0(i_11, edi, &i_4, i_6, esi)
            int32_t edx_3 = (arg4 s>> 1) + (arg4 s>> 2)
            arg4 = edx_3
            int32_t* var_c
            
            if (((i_4 - edi) & 0xfffffffc) s>= ((i_6 - var_c) & 0xfffffffc))
                sub_4f1dd0(edx_3, esi)
                i_6 = i_4
                i_7 = i_6
            else
                sub_4f1dd0(edx_3, esi)
                edi = var_c
            
            i_11 = (i_6 - edi) s>> 2
            
            if (i_11 s<= 0x20)
                goto label_4f1e67
        
        if (i_11 s<= 0x20)
            goto label_4f1e67
        
        void* ebx = i_6 - edi
        int32_t i_3 = ebx s>> 2
        i_4 = i_3
        void* i_1 = i_3 s>> 1
        
        if (i_1 s> 0)
            do
                i_12 = edi[i_1 - 1]
                i_11 = sub_4f2340(&i_12, i_1 - 1, edi, i_3, &i_12, esi)
                i_1 -= 1
            while (i_1 s> 0)
            
            i_3 = i_4
        
        if (i_3 s>= 2)
            int32_t i_2
            
            do
                if (i_3 s>= 2)
                    i_4 = *(edi + ebx - 4)
                    *(edi + ebx - 4) = *edi
                    int32_t eax_20 = (ebx - 4) s>> 2
                    sub_4f2340(eax_20, nullptr, edi, eax_20, &i_4, esi)
                
                ebx -= 4
                i_2 = ebx s>> 2
                i_3 = i_2
            while (i_2 s>= 2)
            
            return i_2
    return i_11
}
