// 函数名称: sub_46fe20
// 虚拟地址: 0x46fe20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_46fe20(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_414
    void var_410
    void* ecx
    void* result =
        sub_4b8ac0(sub_46d960(&var_414, &var_410, ecx, &var_414), arg2, &data_5b1d6c, data_dff698, 0x6c)
    void* result_1 = result
    
    if (result_1 != 0)
        int32_t ecx_2 = arg4 - var_414
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = muls.dp.d(0x66666667, ecx_2)
        int32_t edx_3 = edx_2 s>> 1
        result = arg3 - 0x6d
        int32_t* esi_5 = ((ecx_2 s/ 5) << 4) + *(result_1 + 4)
        int32_t ecx_3
        
        switch (result)
            case nullptr
                result = sub_48d020(&data_571ae0, arg5)
                
                if (result != 0)
                    int32_t edi_1 = *(result_1 + 8)
                    ecx_3 = 0
                    int32_t edx_5 = *result
                    
                    if (edi_1 s> 0)
                        result = *(result_1 + 4)
                        
                        do
                            if (*result == edx_5)
                                goto label_46ff62
                            
                            ecx_3 += 1
                            result += 0x10
                        while (ecx_3 s< edi_1)
                    
                    *esi_5 = edx_5
                    ecx_3.b = 1
                    result = sub_469210(ecx_3.b)
            case 1
                int32_t* var_424_1 = &var_414
                result, ecx_3 = sub_4529c0(&var_414, edx_3, ecx_2, arg5, &data_585a90)
                
                if (result == 1)
                    esi_5[1] = __maxss_xmmss_memss(var_414, 0)
                    ecx_3.b = 1
                    result = sub_469210(ecx_3.b)
            case 2
                int32_t* var_424_2 = &var_414
                result, ecx_3 = sub_4529c0(&var_414, edx_3, ecx_2, arg5, &data_585a90)
                
                if (result == 1)
                    esi_5[2] = __maxss_xmmss_memss(var_414, 0)
                    ecx_3.b = 1
                    result = sub_469210(ecx_3.b)
            case 3
                result, ecx_3 = sub_48d020(&data_571e58, arg5)
                
                if (result != 0)
                    esi_5[3] = *result
                    ecx_3.b = 1
                    result = sub_469210(ecx_3.b)
    
    label_46ff62:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
