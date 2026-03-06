// 函数名称: ?__mbsrtowcs_utf8@__crt_mbstring@@YAIPA_WPAPBDIPAU_Mbstatet@@@Z
// 虚拟地址: 0x53501a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")?__mbsrtowcs_utf8@__crt_mbstring@@YAIPA_WPAPBDIPAU_Mbstatet@@@Z(int32_t arg1, int32_t arg2, int32_t arg3, int16_t* arg4, int32_t* arg5, int32_t arg6, void* arg7)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_c = arg3
    int32_t edi
    int32_t var_18 = edi
    char* edi_2 = *arg5
    int32_t esi_3
    
    if (arg4 == 0)
        int32_t ebx_1 = 0
        
        while (true)
            esi_3 =
                sub_53ad9c(0, edi_2, <lambda_0f007d4f94c691a9a85cf1869a09f0c3>::operator()(edi_2), arg7)
            
            if (esi_3 == 0xffffffff)
                *__errno() = 0x2a
                break
            
            if (esi_3 == 0)
                return ebx_1
            
            if (esi_3 == 4)
                ebx_1 += 1
            
            edi_2 = &edi_2[esi_3]
            ebx_1 += 1
    else
        int32_t i_1 = arg6
        int16_t* esi_1 = arg4
        
        if (i_1 != 0)
            int32_t i
            
            do
                int32_t eax_1 = sub_53ad9c(&var_c, edi_2, 
                    <lambda_0f007d4f94c691a9a85cf1869a09f0c3>::operator()(edi_2), arg7)
                
                if (eax_1 == 0xffffffff)
                    *arg5 = edi_2
                    *__errno() = 0x2a
                    return 0xffffffff
                
                if (eax_1 == 0)
                    edi_2 = nullptr
                    *esi_1 = 0
                    break
                
                int32_t ecx = var_c
                
                if (ecx u> 0xffff)
                    if (i_1 u<= 1)
                        break
                    
                    i_1 -= 1
                    var_c = ecx - 0x10000
                    *esi_1 = ((ecx - 0x10000) u>> 0xa).w | 0xd800
                    esi_1 = &esi_1[1]
                    ecx = ((ecx - 0x10000) & 0x3ff) | 0xdc00
                
                *esi_1 = ecx.w
                edi_2 = &edi_2[eax_1]
                esi_1 = &esi_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        esi_3 = (esi_1 - arg4) s>> 1
        *arg5 = edi_2
    
    return esi_3
}
