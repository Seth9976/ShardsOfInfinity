// 函数名称: sub_518a60
// 虚拟地址: 0x518a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_518a60(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t eax = arg2
    int32_t var_8_1 = eax
    int32_t ebx = 0x80
    char* edi = nullptr
    int32_t result
    
    while (true)
        if ((eax & ebx) == 0)
            result = arg4
        else
            char* eax_3
            int32_t ecx
            
            if (*(arg3 + 0x10) == 0)
            label_518aa2:
                eax_3 = *(arg3 + 0xa8)
                ecx = *(arg3 + 0xac)
                
                if (eax_3 u>= ecx)
                    return 0
            else
                if ((*(arg3 + 0x18))(*(arg3 + 0x1c)) != 0)
                    if (*(arg3 + 0x20) == 0)
                        return 0
                    
                    goto label_518aa2
                
                eax_3 = *(arg3 + 0xa8)
                ecx = *(arg3 + 0xac)
            
            if (eax_3 u< ecx)
                ecx.b = *eax_3
                *(arg3 + 0xa8) = &eax_3[1]
                result = arg4
                edi[result] = ecx.b
            else if (*(arg3 + 0x20) == 0)
                result = arg4
                edi[result] = 0
            else
                sub_50ebb0(arg3)
                char* eax_5 = *(arg3 + 0xa8)
                char ecx_2 = *eax_5
                *(arg3 + 0xa8) = &eax_5[1]
                result = arg4
                edi[result] = ecx_2
        
        edi = &edi[1]
        ebx s>>= 1
        
        if (edi s>= 4)
            break
        
        eax = var_8_1
    
    return result
}
