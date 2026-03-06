// 函数名称: ?__c32rtomb_utf8@__crt_mbstring@@YAIPAD_UPAU_Mbstatet@@@Z
// 虚拟地址: 0x53bc49
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?__c32rtomb_utf8@__crt_mbstring@@YAIPAD_UPAU_Mbstatet@@@Z(char* arg1, uint32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        uint32_t ecx_1 = arg2
        
        if (ecx_1 != 0)
            if ((ecx_1 & 0xffffff80) != 0)
                void* result
                int32_t ebx
                char* i_2
                
                if ((ecx_1 & 0xfffff800) == 0)
                    ebx.b = 0xc0
                    i_2 = 1
                label_53bcc5:
                    int32_t edi
                    int32_t var_10_1 = edi
                    char* i_1 = i_2
                    char* i
                    
                    do
                        char eax = ecx_1.b
                        ecx_1 u>>= 6
                        *(i_1 + arg1) = (eax & 0x3f) | 0x80
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    ecx_1.b |= ebx.b
                    *arg1 = ecx_1.b
                    *arg3 &= i_1
                    arg3[1] &= i_1
                    result = &i_2[1]
                else
                    char* i_3
                    
                    if ((ecx_1 & 0xffff0000) != 0)
                        if ((ecx_1 & 0xffe00000) == 0 && ecx_1 u<= 0x10ffff)
                            i_3 = 3
                            ebx.b = 0xf0
                        label_53bcc4:
                            i_2 = i_3
                            goto label_53bcc5
                        
                        result = __crt_mbstring::return_illegal_sequence(arg3)
                    else
                        if (ecx_1 u< 0xd800 || ecx_1 u> 0xdfff)
                            i_3 = 2
                            ebx.b = 0xe0
                            goto label_53bcc4
                        
                        result = __crt_mbstring::return_illegal_sequence(arg3)
                return result
            
            *arg1 = ecx_1.b
        else
            *arg1 = ecx_1.b
            *arg3 = ecx_1
            arg3[1] = ecx_1
    else
        *arg3 &= arg1
        arg3[1] &= arg1
    
    return 1
}
