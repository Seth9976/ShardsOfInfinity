// 函数名称: sub_4e5aa0
// 虚拟地址: 0x4e5aa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4e5aa0(char* arg1, void** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545ff8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result_4 = 0x10
    int32_t var_8_1 = 0
    int32_t* eax_3 = sub_52a358(0x30, result_4)
    
    if (eax_3 == 0)
        result_4 = "XMalloc"
        sub_44e4d0(eax_3, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, result_4)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* edx = data_e47040
    *arg2 = eax_3
    sub_48b160(eax_3, edx)
    char* ecx_1 = arg1
    uint32_t (* eax_5)[0x4]
    
    do
        eax_5.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_5.b != 0)
    
    if (arg1 == 0)
        result_4 = "XString::XString"
        sub_44e4d0(eax_5, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x9a, result_4)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* const var_18 = &data_5559b1
    result_4 = ecx_1 - &ecx_1[1] - 4
    sub_44f690(&var_18, arg1, result_4)
    var_8_1.b = 1
    char* result_5
    sub_44f240(&result_5, ".texture")
    var_8_1.b = 2
    result_4 = &result_5
    int32_t* result_1
    sub_44f810(&var_18, &result_1, result_4)
    var_8_1.b = 5
    
    if (data_cdf414 != 0)
        char* result_9 = result_5
        
        if (result_9 != 0 && *result_9 != 0)
            char* eax_7 = sub_44f000(&result_5)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
    
    var_8_1.b = 4
    int32_t** result_10
    void* result_6
    result_10, result_6 = sub_48fa90(3)
    result_4 = result_6
    int32_t* result_2
    void* result_3 = result_2
    result_5 = result_10
    result_4 = result_3
    
    if (result_3 != 0 && *result_3 != 0)
        char* eax_8 = sub_44f000(&result_4)
        *(eax_8 + 4) += 1
    
    char* const esi_1 = var_18
    char* const eax_9 = &data_5559b1
    
    if (esi_1 != 0)
        eax_9 = esi_1
    
    char* const result_8
    
    if (sub_4dffe0(eax_9, result_5).b != 0)
        result_4 = result_5
        result_8 = sub_48ddb0(result_4)
        int32_t* var_20
        result_4 = &var_20
        sub_42ce10(&result_5, result_8, 3)
        int32_t ecx_12 = *(*var_20 + 0x18)
        char* result_11 = result_5
        
        if (result_11 != 0)
            *(result_11 + 0x1c) -= 1
        
        if (ecx_12 != 1)
            char* edx_5 = &data_5559b1
            result_4 = result_8
            
            if (esi_1 != 0)
                edx_5 = esi_1
            
            result_8 = sub_4e4310(result_11, edx_5, eax_3)
        
        result_4 = &var_20
        sub_42ce10(&result_5, result_8, 3)
        var_8_1.b = 9
        int32_t* eax_15 = var_20
        void* ecx_15 = *eax_15
        int32_t* result_7
        
        if (ecx_15 != 0)
            int32_t* ecx_16 = *(ecx_15 + 0x24)
            
            if (ecx_16 == 0)
                result_7 = eax_15[1]
                
                if (result_7 == 0)
                    result_7 = sub_48f050(result_8)
                    var_20[1] = result_7
                
                var_8_1.b = 4
                char* result_13 = result_5
                
                if (result_13 != 0)
                    *(result_13 + 0x1c) -= 1
            else
                var_8_1.b = 4
                result_7 = sub_48f4d0(ecx_16)
                char* result_14 = result_5
                
                if (result_14 != 0)
                    *(result_14 + 0x1c) -= 1
        else
            var_8_1.b = 4
            char* result_12 = result_5
            
            if (result_12 != 0)
                *(result_12 + 0x1c) -= 1
            
            result_7 = nullptr
        
        int32_t* ecx_18 = data_ce19b4
        result_4 = result_7
        int32_t eax_20 = (*(*ecx_18 + 0x20))(result_4)
        eax_3[9] = 0
        char* edx_6 = &data_5559b1
        
        if (esi_1 != 0)
            edx_6 = esi_1
        
        result_4 = result_8
        int32_t* eax_21 = sub_4e4420(eax_20, edx_6, eax_3, result_4)
        eax_3[0xa] = eax_21
        char* edx_7 = &data_5559b1
        
        if (esi_1 != 0)
            edx_7 = esi_1
        
        eax_3[0xb] = sub_4e5170(eax_21, edx_7, eax_3, result_8)
        result_8.b = 1
    else
        result_8.b = 0
    
    var_8_1.b = 0xa
    int32_t* result
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                sub_45d050(result, result[3] + 0x10)
                result_1 = &data_5559b1
    
    var_8_1.b = 0xb
    
    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_44f000(&var_18)
        int32_t temp2_1 = result[1]
        result[1] -= 1
        
        if (temp2_1 == 1)
            sub_45d050(result, result[3] + 0x10)
    
    int32_t var_8_2 = 0xc
    
    if (data_cdf414 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_2)
            int32_t temp3_1 = result[1]
            result[1] -= 1
            
            if (temp3_1 == 1)
                sub_45d050(result, result[3] + 0x10)
    
    result.b = result_8.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
