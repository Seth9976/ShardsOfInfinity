// 函数名称: sub_519640
// 虚拟地址: 0x519640
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_519640(void* arg1, int16_t arg2)
{
    // 第一条实际指令: uint32_t ebx = zx.d(arg2)
    uint32_t ebx = zx.d(arg2)
    
    if (*(arg1 + (ebx << 2) + 0x828) s>= 0)
        sub_519640()
    
    int32_t ecx = *(arg1 + 0x884c)
    
    if (ecx s>= *(arg1 + 0x8844))
        return 
    
    int32_t eax_2 = *(arg1 + 0x8848) + ecx
    char* edi_2 = *(arg1 + 8) + eax_2
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(eax_2)
    *(((eax_3 + (edx_1 & 3)) s>> 2) + *(arg1 + 0x10)) = 1
    uint32_t ecx_2 = zx.d(*(arg1 + (ebx << 2) + 0x82b))
    int32_t eax_6 = *(arg1 + 0x8828)
    char* ecx_3 = eax_6 + (ecx_2 << 2)
    
    if (*(eax_6 + (ecx_2 << 2) + 3) u> 0x80)
        *edi_2 = ecx_3[2]
        edi_2[1] = ecx_3[1]
        edi_2[2] = *ecx_3
        edi_2[3] = ecx_3[3]
    
    *(arg1 + 0x8848) += 4
    
    if (*(arg1 + 0x8848) s< *(arg1 + 0x8840))
        return 
    
    int32_t edi_3 = *(arg1 + 0x8844)
    *(arg1 + 0x8848) = *(arg1 + 0x8838)
    *(arg1 + 0x884c) += *(arg1 + 0x8830)
    
    if (*(arg1 + 0x884c) s< edi_3)
        return 
    
    int32_t i = *(arg1 + 0x882c)
    
    while (i s> 0)
        int32_t eax_12 = *(arg1 + 0x883c)
        int32_t edx_4 = *(arg1 + 0x8850) << i.b
        i -= 1
        *(arg1 + 0x8830) = edx_4
        int32_t eax = eax_12 + (edx_4 s>> 1)
        *(arg1 + 0x882c) = i
        *(arg1 + 0x884c) = eax
        
        if (eax s< edi_3)
            break
}
