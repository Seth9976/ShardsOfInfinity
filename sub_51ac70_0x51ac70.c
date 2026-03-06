// 函数名称: sub_51ac70
// 虚拟地址: 0x51ac70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_51ac70(int32_t arg1, void* arg2, void* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: void var_8
    void var_8
    void* eax = &var_8
    
    if (arg2 != 0)
        eax = arg2
    
    void* eax_1 = arg4
    void* ecx = &var_8
    
    if (eax_1 != 0)
        ecx = eax_1
    
    int32_t ecx_1 = *(arg3 + 0xb4)
    void* edi = &var_8
    
    if (arg5 != 0)
        edi = arg5
    
    *(arg3 + 0xac) = ecx_1
    char* eax_3 = *(arg3 + 0xb0)
    *(arg3 + 0xa8) = eax_3
    int32_t ebx
    
    if (eax_3 u< ecx_1)
        ebx.b = *eax_3
        eax_3 = &eax_3[1]
        *(arg3 + 0xa8) = eax_3
    else if (*(arg3 + 0x20) == 0)
        ebx.b = 0
    else
        sub_50ebb0(arg3)
        char* eax_4 = *(arg3 + 0xa8)
        ecx_1 = *(arg3 + 0xac)
        ebx.b = *eax_4
        eax_3 = &eax_4[1]
        *(arg3 + 0xa8) = eax_3
    
    if (eax_3 u< ecx_1)
        ecx_1.b = *eax_3
        *(arg3 + 0xa8) = &eax_3[1]
    else if (*(arg3 + 0x20) == 0)
        ecx_1.b = 0
    else
        sub_50ebb0(arg3)
        char* eax_6 = *(arg3 + 0xa8)
        ecx_1.b = *eax_6
        *(arg3 + 0xa8) = &eax_6[1]
    
    if (ebx.b != 0x50 || (ecx_1.b != 0x35 && ecx_1.b != 0x36))
        *(arg3 + 0xa8) = *(arg3 + 0xb0)
        *(arg3 + 0xac) = *(arg3 + 0xb4)
        return 0
    
    int32_t eax_8
    eax_8.b = ecx_1.b == 0x36
    *edi = (eax_8 << 1) + 1
    char* eax_10 = *(arg3 + 0xa8)
    
    if (eax_10 u< *(arg3 + 0xac))
        ecx_1.b = *eax_10
        *(arg3 + 0xa8) = &eax_10[1]
    else if (*(arg3 + 0x20) == 0)
        ecx_1.b = 0
    else
        sub_50ebb0(arg3)
        eax_10 = *(arg3 + 0xa8)
        ecx_1.b = *eax_10
        *(arg3 + 0xa8) = &eax_10[1]
    
    arg4:3.b = ecx_1.b
    sub_51aa70(arg3, &arg4:3)
    *eax = sub_51abd0(arg3, &arg4:3)
    sub_51aa70(arg3, &arg4:3)
    *ecx = sub_51abd0(arg3, &arg4:3)
    sub_51aa70(arg3, &arg4:3)
    int32_t result
    result.b = sub_51abd0(arg3, &arg4:3) s<= 0xff
    return result
}
