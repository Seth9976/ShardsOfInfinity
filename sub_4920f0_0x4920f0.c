// 函数名称: sub_4920f0
// 虚拟地址: 0x4920f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4920f0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    char* eax = *arg4
    char* const edx = &data_5559b1
    
    if (eax != 0)
        edx = eax
    
    int32_t eax_1 = sub_4b8d10(arg3, edx)
    *arg2 = eax_1
    
    if (eax_1 == 0xffffffff)
        eax_1.b = 0
        return eax_1
    
    void* eax_2 = sub_4b8c10(arg3, eax_1)
    int32_t* eax_3 = *(eax_2 + 0x10)
    int32_t var_1c
    char const* const ecx_1
    
    if (eax_3 != 5)
        uint32_t (* eax_5)[0x4]
        
        if (eax_3 s> 0 && eax_3 s< 0x12)
            void* eax_4 = sub_4b8540(arg3, *arg2)
            sub_491920(eax_4, eax_2, &arg2[1], eax_4, arg4)
            eax_5 = sub_48acc0(eax_2)
            
            if (eax_5 == 1)
                arg2[1] &= 0xff
                eax_5.b = eax_5.b
                return eax_5
            
            if (eax_5 != 2)
                eax_5.b = 1
                return eax_5
            
            *(arg2 + 6) = 0
            int32_t eax_6
            eax_6.b = 1
            return 1
        
        arg2[1] = sub_45cd70(sub_48acc0(eax_2))
        char eax_9 = sub_48ac30(eax_2)
        int32_t edx_4 = *arg2
        
        if (eax_9 != 0)
            void* eax_10 = sub_4b8540(arg3, edx_4)
            sub_491920(eax_10, eax_2, arg2[1], eax_10, arg4)
            void* eax_11
            eax_11.b = 1
            return eax_11
        
        int32_t eax_12 = sub_4b8c70(arg3, edx_4)
        
        if ((eax_12.b & 0x40) == 0)
            sub_492980(eax_12, eax_2, arg2[1], arg4[2], 0)
            eax_5.b = 1
            return eax_5
        
        eax_3 = *(eax_2 + 4)
        
        if ((eax_3[0xa].b & 0x40) != 0)
            sub_492980(sub_491920(sub_48b160(arg2[1], eax_2), eax_3[3], arg2[1], eax_3, arg4), eax_2, 
                arg2[1], arg4[2], 1)
            uint32_t (* eax_15)[0x4]
            eax_15.b = 1
            return eax_15
        
        char const* const var_18_5 = "DefParseReadTagValue"
        var_1c = 0x2e3
        ecx_1 = "pDefMap->pDTMapFields[0].fieldFlags & DEF_FIELD_FLAG_INLINE_XML"
    else
        char const* const var_18_1 = "DefParseReadTagValue"
        var_1c = 0x2ba
        ecx_1 = "Halt"
    
    sub_44e4d0(eax_3, &data_5559b1, ecx_1, "c:\ax2017\engine\defparsetree.cpp", var_1c, 
        "DefParseReadTagValue")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
