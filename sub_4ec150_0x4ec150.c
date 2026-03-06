// 函数名称: sub_4ec150
// 虚拟地址: 0x4ec150
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4ec150(int32_t arg1, int16_t* arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t i = arg4 + arg3
    int32_t i = arg4 + arg3
    uint32_t result = 0
    uint32_t result_1 = 0
    int32_t ebx = 0
    int32_t var_10 = 0
    
    if (zx.d(*arg2) s>= i)
        *arg5 = 0
        return 0
    
    int32_t esi_4
    int16_t eax_5
    
    do
        uint32_t result_2 = zx.d(arg2[1])
        int32_t ecx_3
        
        if (result_2 s<= result)
            int16_t* esi_2 = *(arg2 + 4)
            uint32_t edx_1 = arg4 - ebx
            int16_t* var_14_1 = esi_2
            uint32_t edi_1 = zx.d(*esi_2)
            uint32_t ecx_5 = edi_1 - zx.d(*arg2)
            eax_5 = edi_1.w
            
            if (ecx_5 + ebx s<= arg4)
                edx_1 = ecx_5
            
            ebx += edx_1
            ecx_3 = (result_1 - result_2) * edx_1
            arg2 = esi_2
        else
            result_1 = result_2
            uint32_t eax_1 = zx.d(*arg2)
            arg2 = *(arg2 + 4)
            ecx_3 = (result_2 - result) * ebx
            uint32_t esi_1 = zx.d(*arg2)
            
            if (eax_1 s>= arg3)
                ebx += esi_1 - eax_1
                eax_5 = esi_1.w
            else
                ebx += esi_1 - arg3
                eax_5 = esi_1.w
        
        result = result_1
        esi_4 = var_10 + ecx_3
        var_10 = esi_4
    while (zx.d(eax_5) s< i)
    *arg5 = esi_4
    return result
}
