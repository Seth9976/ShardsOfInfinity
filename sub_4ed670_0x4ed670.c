// 函数名称: sub_4ed670
// 虚拟地址: 0x4ed670
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4ed670(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t ebx = arg5
    int32_t ebx = arg5
    int32_t ecx_1 = sub_4dd620(*(arg3 + 0x10))
    int32_t var_c = ecx_1
    int32_t result
    
    if (ebx s< arg7)
        result = arg6
        
        do
            int32_t esi_1 = arg4
            
            if (esi_1 s< result)
                int32_t edi_2 = ecx_1 * esi_1
                
                do
                    if ((sub_4dd8c0(*(arg3 + 0xc) * ebx + edi_2 + *arg3, *(arg3 + 0x10)) u>> 0x18).b
                            u> 1)
                        return 0
                    
                    ecx_1 = var_c
                    esi_1 += 1
                    result = arg6
                    edi_2 += ecx_1
                while (esi_1 s< result)
            
            ebx += 1
        while (ebx s< arg7)
    
    result.b = 1
    return result
}
