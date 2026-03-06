// 函数名称: sub_4253d0
// 虚拟地址: 0x4253d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4253d0(int32_t arg1, int32_t arg2, char* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const result_1 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result = sub_469bf0(sub_472550(arg4, sub_425020), &data_5bbc6c, arg4, 2, 0xffffffff)
    void* ebx = &data_e48018
    uint32_t edi = 0
    
    for (void** const i = &data_557eac; i s< 0x557ed4; )
        char* edx = i[1]
        
        if (edx == 0)
            sub_44e4d0(result, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_44f240(&result_1, edx)
        int32_t var_8_1 = 0
        result = sub_469cf0(&result_1, &data_5bbc80, arg4, &result_1, edi)
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5559b1
        
        int32_t var_8_3 = 0xffffffff
        
        if (*i != 0)
            int32_t eax_5 = sub_41b7f0(ebx, arg4, "tblRulesItem", edi)
            *i
            int32_t var_28_3 = 0xffffffff
            result = sub_469930(eax_5)
        
        if (i[2] == 0)
            uint32_t var_28_4 = edi
            result = sub_469930(arg4)
        
        i = &i[5]
        edi += 1
        ebx += 0x24
    
    if (data_5bb1e4.d == 0x1e)
        result = data_5bb1e4:4
    label_425502:
        
        if (result != 0)
            int32_t var_28_5 = 0xffffffff
            result = sub_469930(arg4)
    else if (data_5bb1f0.d == 0x1e)
        result = data_5bb1f0:4
        goto label_425502
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
