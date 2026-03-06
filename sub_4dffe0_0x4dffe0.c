// 函数名称: sub_4dffe0
// 虚拟地址: 0x4dffe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4dffe0(char* arg1, char** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545ac8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_11 = 0x10
    int32_t var_8_1 = 0
    int32_t* result_12 = sub_52a358(0x40, result_11)
    
    if (result_12 == 0)
        result_11 = "XMalloc"
        sub_44e4d0(result_12, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, result_11)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_48b160(result_12, data_e46f5c)
    int32_t* eax_3
    char* result_13
    eax_3, result_13 = sub_492a80(arg2[1], data_e46f54)
    result_11 = result_13
    
    if (arg1 == 0)
        sub_44e4d0(arg1, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&result_11, arg1)
    char* result_1
    sub_44fd60(&result_1)
    var_8_1.b = 1
    char* result_3 = result_1
    char* const result_9 = &data_5559b1
    
    if (result_3 != 0)
        result_9 = result_3
    
    int32_t eax_5 = _strncmp(result_9, "skybox_", 7)
    int32_t eax_6
    
    if (eax_5 != 0)
        char* result_4 = result_1
        char* const result_10 = &data_5559b1
        result_11 = 8
        
        if (result_4 != 0)
            result_10 = result_4
        
        eax_6 = _strncmp(result_10, "cubemap_", result_11)
    
    if (eax_5 == 0 || eax_6 == 0)
        eax_3[4] = 1
    
    char* result_2
    char* result_5 = result_2
    char* result_6 = result_5
    
    if (result_5 != 0 && *result_5 != 0)
        char* eax_7 = sub_44f000(&result_6)
        *(eax_7 + 4) += 1
    
    char* const result_7 = &data_5559b1
    
    if (result_5 != 0)
        result_7 = result_5
    
    var_8_1.b = 2
    result_11 = result_7
    char var_11
    
    if (sub_4dfe00(result_7, eax_3, arg1, result_12, result_11) != 0)
        var_8_1.b = 4
        
        if (data_cdf414 != 0 && result_5 != 0 && *result_5 != 0)
            char* eax_12 = sub_44f000(&result_6)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
        
        var_11 = 1
    else
        int32_t i = 0
        
        if (result_12[0xd] s> 0)
            do
                int32_t eax_9 = result_12[0xf]
                char* result_14 = *(eax_9 + (i << 3) + 4)
                int32_t* eax_10 = eax_9 + (i << 3)
                
                if (result_14 != 0)
                    result_11 = result_14
                    _aligned_free_base(result_11)
                    eax_10[1] = 0
                
                i += 1
                *eax_10 = 0
            while (i s< result_12[0xd])
        
        char* const result_8 = &data_5559b1
        
        if (result_5 != 0)
            result_8 = result_5
        
        result_11 = result_8
        sub_44e260("texture reimport failed to read '%s'")
        var_8_1.b = 3
        
        if (data_cdf414 != 0 && result_5 != 0 && *result_5 != 0)
            char* eax_11 = sub_44f000(&result_6)
            int32_t temp1_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
        
        var_11 = 0
    
    var_8_1.b = 1
    data_e46f54
    sub_48b5b0(eax_3)
    int32_t* ebx
    
    if (var_11 != 0)
        **arg2 = result_12
        ebx.b = 1
    else
        result_11 = result_12
        _aligned_free_base(result_11)
        ebx.b = 0
    
    var_8_1.b = 7
    char* result
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
                result_1 = &data_5559b1
    
    int32_t var_8_2 = 8
    
    if (data_cdf414 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_2)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
