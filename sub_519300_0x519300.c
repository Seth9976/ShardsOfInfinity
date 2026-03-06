// 函数名称: sub_519300
// 虚拟地址: 0x519300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_519300(char* arg1, void* arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    void* esi = arg3
    
    if (arg4 s<= 0)
        return 
    
    void* edi_1 = arg2 + 1
    
    do
        char* eax = *(esi + 0xa8)
        
        if (eax u< *(esi + 0xac))
            arg3.b = *eax
            *(esi + 0xa8) = &eax[1]
        else if (*(esi + 0x20) == 0)
            arg3.b = 0
        else
            sub_50ebb0(esi)
            char* eax_2 = *(esi + 0xa8)
            arg3.b = *eax_2
            *(esi + 0xa8) = &eax_2[1]
        
        *(edi_1 + 1) = arg3.b
        char* eax_4 = *(esi + 0xa8)
        
        if (eax_4 u< *(esi + 0xac))
            arg3.b = *eax_4
            *(esi + 0xa8) = &eax_4[1]
        else if (*(esi + 0x20) == 0)
            arg3.b = 0
        else
            sub_50ebb0(esi)
            char* eax_6 = *(esi + 0xa8)
            arg3.b = *eax_6
            *(esi + 0xa8) = &eax_6[1]
        
        *edi_1 = arg3.b
        arg1 = *(esi + 0xa8)
        
        if (arg1 u< *(esi + 0xac))
            arg3.b = *arg1
            *(esi + 0xa8) = &arg1[1]
        else if (*(esi + 0x20) == 0)
            arg3.b = 0
        else
            sub_50ebb0(esi)
            char* eax_8 = *(esi + 0xa8)
            arg3.b = *eax_8
            *(esi + 0xa8) = &eax_8[1]
        
        *(edi_1 - 1) = arg3.b
        arg1.b = arg5 == ebx
        ebx += 1
        arg1.b -= 1
        *(edi_1 + 2) = arg1.b
        edi_1 += 4
    while (ebx s< arg4)
}
