// 函数名称: sub_4c4770
// 虚拟地址: 0x4c4770
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4c4770(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const result_1 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = arg1[1]
    void* ecx = arg1[3]
    int32_t* result
    int32_t edx
    edx:result = sx.q(edi - ecx)
    int32_t ebx_1 = result ^ edx
    int32_t ebx_2 = ebx_1 - edx
    
    if (ebx_1 != edx)
        result_1 = &data_5559b1
        
        if (edi s>= ecx)
            edi = ecx
        
        int32_t var_8_1 = 0
        char* const ecx_1 = &data_5559b1
        char* eax_5 = *arg1
        
        if (eax_5 != 0)
            ecx_1 = eax_5
        
        sub_44f690(&result_1, ecx_1, edi)
        char* ecx_3 = *arg1
        int32_t eax_7
        
        if (ecx_3 == 0 || *ecx_3 == 0)
            eax_7 = 0
        else
            char* eax_6 = sub_44f000(arg1)
            ecx_3 = *arg1
            eax_7 = *(eax_6 + 8)
        
        char* edx_1 = &data_5559b1
        
        if (ecx_3 != 0)
            edx_1 = ecx_3
        
        sub_44f690(&result_1, edi + edx_1 + ebx_2, eax_7 - edi - ebx_2)
        result = sub_44f510(arg1, &result_1)
        arg1[1] = edi
        arg1[3] = edi
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp1_1 = result[1]
                result[1] -= 1
                
                if (temp1_1 == 1)
                    result = sub_45d050(result, result[3] + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
