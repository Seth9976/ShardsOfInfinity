// 函数名称: sub_420f50
// 虚拟地址: 0x420f50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_420f50(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541350
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44f240(&result_1, "BtnBack")
    char* const result_2 = &data_5559b1
    char* result_3 = result_1
    char* const result_4 = &data_5559b1
    char* edx = *(arg4 + 4)
    
    if (result_3 != 0)
        result_4 = result_3
    
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_4
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_4[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_4 = &result_4[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_4, result_4, c_1) | 1
        break
    
    if (ecx_2 == 0 || *(arg4 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_44f000(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        sub_45e9a0(&data_5bb270:4)
        int64_t xmm0 = data_5bb264.q
        data_5bb278 = data_5bb26c
        int32_t eax_5 = data_5bb27c
        data_5bb26c = eax_5
        data_5bb270 = xmm0
        data_5bb268 = 0
        data_5bb264 = 0
        data_5bb27c = eax_5 + 1
        data_5bb260 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5 + 1
    
    sub_44f240(&result_1, "BtnOK")
    char* result = result_1
    char* ecx_8 = *(arg4 + 4)
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_1
    
    while (true)
        char edx_3 = *result_2
        char temp3_1 = *ecx_8
        bool c_2 = edx_3 u< temp3_1
        
        if (edx_3 == temp3_1)
            if (edx_3 == 0)
                esi_1 = 0
                break
            
            edx_3 = result_2[1]
            char temp4_1 = ecx_8[1]
            c_2 = edx_3 u< temp4_1
            
            if (edx_3 == temp4_1)
                result_2 = &result_2[2]
                ecx_8 = &ecx_8[2]
                
                if (edx_3 != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(result_2, result_2, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && result != 0 && *result != 0)
        result = sub_44f000(&result_1)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_1 == 0)
        result = sub_420df0()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
