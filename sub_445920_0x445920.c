// 函数名称: sub_445920
// 虚拟地址: 0x445920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_445920(int32_t arg1, void* arg2, int32_t arg3, void* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    int32_t eax_2 = (arg4 - 1) s>> 1
    int32_t edx = arg6
    void* ecx = edi
    void* var_8 = ecx
    void* ebx = edi
    int32_t var_c = eax_2
    
    if (edi s< eax_2)
        do
            ebx = (ebx << 1) + 2
            int32_t ecx_1 = arg3 + (ebx << 3)
            
            if (edx(ecx_1, ecx_1 - 8) != 0)
                ebx -= 1
            
            edx = arg6
            *(arg3 + (edi << 3)) = *(arg3 + (ebx << 3))
            *(arg3 + (edi << 3) + 4) = *(arg3 + (ebx << 3) + 4)
            edi = ebx
            eax_2 = var_c
        while (ebx s< eax_2)
        
        ecx = var_8
    
    if (ebx == eax_2 && (arg4.b & 1) == 0)
        *(arg3 + (edi << 3)) = *(arg3 + (arg4 << 3) - 8)
        *(arg3 + (edi << 3) + 4) = *(arg3 + (arg4 << 3) - 4)
        edi = arg4 - 1
    
    if (ecx s< edi)
        int32_t ebx_3
        
        do
            ebx_3 = (edi - 1) s>> 1
            
            if (edx(arg3 + (ebx_3 << 3), arg5) == 0)
                break
            
            edx = arg6
            *(arg3 + (edi << 3)) = *(arg3 + (ebx_3 << 3))
            *(arg3 + (edi << 3) + 4) = *(arg3 + (ebx_3 << 3) + 4)
            edi = ebx_3
        while (var_8 s< ebx_3)
    
    *(arg3 + (edi << 3)) = *arg5
    int32_t result = arg5[1]
    *(arg3 + (edi << 3) + 4) = result
    return result
}
