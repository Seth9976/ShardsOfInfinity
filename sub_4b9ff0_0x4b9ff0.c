// 函数名称: sub_4b9ff0
// 虚拟地址: 0x4b9ff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4b9ff0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1[3] == 0)
    if (arg1[3] == 0)
        return 
    
    void** i_1 = arg1[1]
    void* edi_1 = nullptr
    void** i = i_1
    int32_t xmm1_1 = (zx.o(0)).d
    int32_t var_8_1 = 0
    int32_t var_24_1
    void* eax
    char const* const ecx
    
    if (i == 0)
    label_4ba110:
        char const* const var_20_4 = "AnimationAccumBonePosition"
        var_24_1 = 0x262
        ecx = "totalWeight > EPSILON"
    label_4ba129:
        sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\animation.cpp", var_24_1, 
            "AnimationAccumBonePosition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    do
        eax = *i
        i = i[1]
        int32_t edx = *(eax + 0x20)
        
        if (edx != 2 && edx != 4)
            xmm1_1 = xmm1_1 f+ *(eax + 0x14)
            
            if (edi_1 != 0)
                eax = edi_1
            
            edi_1 = eax
            var_8_1 = xmm1_1
    while (i != 0)
    
    if (xmm1_1 f<= 9.99999975e-06f)
        goto label_4ba110
    
    if (edi_1 == 0)
        char const* const var_20_1 = "AnimationAccumBonePosition"
        var_24_1 = 0x263
        ecx = "pAnimSetBase != NULL"
        goto label_4ba129
    
    if (i_1 == 0)
        return 
    
    do
        void* edi_2 = *i_1
        i_1 = i_1[1]
        eax = sub_4b9470(arg1, edi_2)
        int32_t ecx_2 = *(edi_2 + 0x20)
        int32_t var_20_2
        
        if (ecx_2 == 4)
            var_20_2 = ecx_2
            sub_4b9cc0(eax, edi_2 + 0x2c, eax, *(edi_2 + 4), 1f, *(edi_2 + 0xac), *(edi_2 + 0xb0), arg2)
        else if (ecx_2 != 2)
            var_20_2 = ecx_2
            sub_4b9cc0(eax, edi_2 + 0x2c, eax, *(edi_2 + 4), *(edi_2 + 0x14) f/ var_8_1, 
                *(edi_2 + 0xac), *(edi_2 + 0xb0), arg2)
    while (i_1 != 0)
    
    int32_t* i_2 = arg1[1]
    
    while (i_2 != 0)
        void* edi_3 = *i_2
        i_2 = i_2[1]
        int32_t ecx_5
        eax, ecx_5 = sub_4b9470(arg1, edi_3)
        
        if (*(edi_3 + 0x20) == 2)
            int32_t var_20_3 = ecx_5
            sub_4b9b50(eax, eax, arg1[*(edi_3 + 0x28) * 3 + 7], *(edi_3 + 4), *(edi_3 + 0x24), arg2)
}
