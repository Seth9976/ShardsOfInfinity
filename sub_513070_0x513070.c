// 函数名称: sub_513070
// 虚拟地址: 0x513070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_513070(void* arg1, void* arg2, void* arg3, char* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: if (arg5 s<= 0)
    if (arg5 s<= 0)
        return 
    
    char* ecx_1 = arg4
    void* eax = arg1 + 2
    void* ebx_2 = arg2 - ecx_1
    void* edi_2 = arg3 - ecx_1
    arg2 = ebx_2
    arg3 = edi_2
    int32_t i
    
    do
        uint32_t esi_1 = zx.d(*ecx_1)
        uint32_t edi_3 = zx.d(*(edi_2 + ecx_1))
        int32_t ebx_5 = (zx.d(*(ebx_2 + ecx_1)) << 0x14) + 0x80000
        int32_t var_8_1 = ((esi_1 - 0x80) * 0x166f00 + ebx_5) s>> 0x14
        
        if (var_8_1 u> 0xff)
            int32_t ecx_15 = 0xff
            
            if (var_8_1 s< 0)
                ecx_15 = 0
            
            var_8_1 = ecx_15
        
        int32_t edx_4 =
            ((0x80 - esi_1) * 0xb6d00 + (((0x80 - edi_3) * 0x58200) & 0xffff0000) + ebx_5) s>> 0x14
        
        if (edx_4 u> 0xff)
            int32_t ecx_16 = 0xff
            
            if (edx_4 s< 0)
                ecx_16 = 0
            
            edx_4 = ecx_16
        
        int32_t ebx_7 = ((edi_3 - 0x80) * 0x1c5a00 + ebx_5) s>> 0x14
        
        if (ebx_7 u> 0xff)
            int32_t ecx_17 = 0xff
            
            if (ebx_7 s< 0)
                ecx_17 = 0
            
            ebx_7 = ecx_17
        
        edi_2 = arg3
        *(eax - 2) = var_8_1.b
        *eax = ebx_7.b
        ecx_1 = &arg4[1]
        ebx_2 = arg2
        *(eax - 1) = edx_4.b
        *(eax + 1) = 0xff
        eax += arg6
        i = arg5
        arg5 -= 1
        arg4 = ecx_1
    while (i != 1)
}
