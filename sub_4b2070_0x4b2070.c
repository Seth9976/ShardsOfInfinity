// 函数名称: sub_4b2070
// 虚拟地址: 0x4b2070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4b2070(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t* var_4c
    int32_t* var_4c
    int32_t eax_1 = __security_cookie ^ &var_4c
    int32_t eax_3 = *(arg2 + 0x6c)
    var_4c = arg3
    int32_t ebx
    int64_t xmm0
    
    if (eax_3 s<= *(arg2 + 0x5c))
        xmm0 = *(arg3 + 0x7c)
        ebx = arg3[0x21]
    else
        xmm0 = *(arg2 + 0x70)
        ebx = *(arg2 + 0x78)
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (xmm0.d s> 0)
        int32_t edx = xmm0:4.d
        
        do
            int32_t esi_1 = 0
            int32_t var_48_1 = 0
            
            if (edx s> 0)
                do
                    int32_t edi_1 = 0
                    
                    if (ebx s> 0)
                        int32_t var_24_1 = esi_1
                        
                        do
                            int64_t var_18 = i.q
                            int32_t var_10_1 = edi_1
                            uint32_t (* eax_5)[0x4] = sub_4b0870(&var_18, arg2, arg3, &var_18)
                            sub_4b2bd0(eax_5, arg4, eax_5, arg5)
                            arg3 = var_4c
                            edi_1 += 1
                        while (edi_1 s< ebx)
                        
                        esi_1 = var_48_1
                        i = i_1
                        edx = xmm0:4.d
                    
                    esi_1 += 1
                    var_48_1 = esi_1
                while (esi_1 s< edx)
            
            i += 1
            i_1 = i
        while (i s< xmm0.d)
    
    @__security_check_cookie@4(eax_1 ^ &var_4c)
    return i
}
