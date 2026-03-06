// 函数名称: sub_51a110
// 虚拟地址: 0x51a110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_51a110(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    void* esi = arg1
    char* edi = nullptr
    char* eax = *(esi + 0xa8)
    
    if (eax u< *(esi + 0xac))
        ebx.b = *eax
        *(esi + 0xa8) = &eax[1]
        goto label_51a154
    
    if (*(esi + 0x20) == 0)
    label_51a152:
        ebx.b = 0
        goto label_51a154
    
    while (true)
        sub_50ebb0(arg1)
        char* eax_2 = *(esi + 0xa8)
        ebx.b = *eax_2
        *(esi + 0xa8) = &eax_2[1]
    label_51a154:
        
        if (*(esi + 0x10) == 0)
        label_51a179:
            
            if (*(esi + 0xa8) u>= *(esi + 0xac))
                goto label_51a224
        else if ((*(esi + 0x18))(*(esi + 0x1c)) != 0)
            if (*(esi + 0x20) == 0)
                goto label_51a224
            
            goto label_51a179
        
        if (ebx.b == 0xa)
            goto label_51a224
        
        edi[arg2] = ebx.b
        edi = &edi[1]
        
        if (edi == 0x3ff)
            break
        
        char* eax_8 = *(esi + 0xa8)
        
        if (eax_8 u< *(esi + 0xac))
            ebx.b = *eax_8
            *(esi + 0xa8) = &eax_8[1]
            goto label_51a154
        
        if (*(esi + 0x20) == 0)
            goto label_51a152
        
        arg1 = esi
    
    label_51a1c3:
    char* eax_12
    int32_t ecx
    
    if (*(esi + 0x10) == 0)
    label_51a1ec:
        eax_12 = *(esi + 0xa8)
        ecx = *(esi + 0xac)
        
        if (eax_12 u< ecx)
            goto label_51a1fc
    else if ((*(esi + 0x18))(*(esi + 0x1c)) == 0)
        eax_12 = *(esi + 0xa8)
        ecx = *(esi + 0xac)
    label_51a1fc:
        
        if (eax_12 u< ecx)
            goto label_51a213
        
        if (*(esi + 0x20) != 0)
            sub_50ebb0(esi)
            eax_12 = *(esi + 0xa8)
        label_51a213:
            ecx.b = *eax_12
            *(esi + 0xa8) = &eax_12[1]
    else if (*(esi + 0x20) != 0)
        goto label_51a1ec
    label_51a224:
    edi[arg2] = 0
    return arg2
}
