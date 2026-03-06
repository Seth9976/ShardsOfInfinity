// 函数名称: sub_4b8610
// 虚拟地址: 0x4b8610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4b8610(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: void* eax_1 = sub_4b8c10(arg3, arg4)
    void* eax_1 = sub_4b8c10(arg3, arg4)
    int32_t edx_1 = *arg2
    int32_t esi = 0
    int32_t* edi_1
    
    if (edx_1 s<= 0)
    label_4b864f:
        int32_t eax_2 = edx_1 << 3
        char* eax_3 = sub_45cd70(eax_2 + 8)
        sub_51d5b0(eax_3, arg2[1], eax_2)
        int32_t eax_4 = *arg2
        
        if (eax_4 s> 0)
            int32_t ecx_1 = arg2[1]
            
            if (ecx_1 != 0)
                _aligned_free_base(ecx_1)
                eax_4 = *arg2
        
        arg2[1] = eax_3
        *arg2 = eax_4 + 1
        edi_1 = &eax_3[eax_2]
    else
        edi_1 = arg2[1]
        
        while (*edi_1 != arg4)
            esi += 1
            edi_1 = &edi_1[2]
            
            if (esi s>= edx_1)
                goto label_4b864f
        
        sub_4b8590(&edi_1[1], arg4, arg3, &edi_1[1])
    
    *edi_1 = arg4
    
    if (sub_48abc0(eax_1) == 0)
        edi_1[1] = arg5
        return arg5
    
    int32_t eax_9 = *(eax_1 + 0x10)
    
    if (eax_9 == 8)
        char* esi_3 = arg5
        void* ecx_4 = &esi_3[1]
        
        do
            eax_9.b = *esi_3
            esi_3 = &esi_3[1]
        while (eax_9.b != 0)
        
        char* eax_10 = sub_45cd70(esi_3 - ecx_4 + 1)
        edi_1[1] = eax_10
        return sub_51d5b0(eax_10, arg5, esi_3 - ecx_4 + 1)
    
    if (eax_9 - 1 u<= 0x10)
        sub_44e4d0(eax_9 - 1, &data_5559b1, "!DefTypeIsBuiltIn(pDefMap)", 
            "c:\ax2017\engine\attribmap.cpp", 0xf4, "AttribMapSetValue")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (arg5 != 0)
        char* eax_13 = sub_48bb00(arg5, eax_1)
        edi_1[1] = eax_13
        return eax_13
    
    char* eax_14 = sub_4b8850(arg3, arg4)
    
    if (eax_14 == 0)
        int32_t* eax_17 = sub_45cd70(sub_48acc0(eax_1))
        edi_1[1] = eax_17
        return sub_48b160(eax_17, eax_1)
    
    char* eax_15 = sub_48bb00(eax_14, eax_1)
    edi_1[1] = eax_15
    return eax_15
}
