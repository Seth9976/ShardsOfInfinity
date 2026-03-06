// 函数名称: sub_480520
// 虚拟地址: 0x480520
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_480520(int32_t arg1, char* arg2, char** arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542fc9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg3
    int32_t var_8_1 = 0
    int32_t var_18 = 0
    
    if (arg2 == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(arg3, arg2)
    int32_t var_8_2 = 0
    int32_t var_18_1 = 1
    
    if (arg4 != 0)
        sub_44f620(arg3, arg4)
    
    char* eax_5 = *arg3
    char* const edi = &data_5559b1
    void* edx = &data_5559b1
    
    if (eax_5 != 0)
        edx = eax_5
    
    int32_t var_8_3 = 1
    char* var_14
    sub_44f510(arg3, sub_480260(eax_5, edx, &var_14, &(*U"][}{\r")[1], U"][}{\r"))
    int32_t var_8_4 = 2
    
    if (data_cdf414 != 0)
        char* eax_7 = var_14
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    
    var_8_4.b = 0
    char* eax_9 = *arg3
    void* edx_3 = &data_5559b1
    
    if (eax_9 != 0)
        edx_3 = eax_9
    
    int32_t var_8_5 = 3
    char** ecx_7 = sub_44f510(arg3, sub_480260(eax_9, edx_3, &var_14, &(*][}{\r")[3], &(*][}{\r")[2]))
    int32_t var_8_6 = 4
    
    if (data_cdf414 != 0)
        char* eax_11 = var_14
        
        if (eax_11 != 0 && *eax_11 != 0)
            ecx_7 = &var_14
            char* eax_12 = sub_44f000(ecx_7)
            int32_t temp1_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp1_1 == 1)
                ecx_7 = sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
    
    var_8_6.b = 0
    char* const edx_6 = &data_5559b1
    char* eax_13 = *arg3
    char** var_2c_4 = ecx_7
    
    if (eax_13 != 0)
        edx_6 = eax_13
    
    sub_44f9f0(eax_13, edx_6, &var_14, &(*U"][}{\r")[4])
    int32_t var_18_2 = 3
    int32_t var_8_7 = 5
    char** ecx_11 = sub_44f510(arg3, &var_14)
    int32_t var_8_8 = 6
    
    if (data_cdf414 != 0)
        char* eax_14 = var_14
        
        if (eax_14 != 0 && *eax_14 != 0)
            ecx_11 = &var_14
            char* eax_15 = sub_44f000(ecx_11)
            int32_t temp2_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp2_1 == 1)
                ecx_11 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
    
    var_8_8.b = 0
    char* eax_16 = *arg3
    char** var_2c_6 = ecx_11
    
    if (eax_16 != 0)
        edi = eax_16
    
    sub_44f9f0(eax_16, edi, &var_14, &data_5742d4)
    int32_t var_18_3 = 7
    int32_t var_8_9 = 7
    sub_44f510(arg3, &var_14)
    int32_t var_8_10 = 8
    
    if (data_cdf414 != 0)
        char* eax_17 = var_14
        
        if (eax_17 != 0 && *eax_17 != 0)
            char* eax_18 = sub_44f000(&var_14)
            int32_t temp3_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
    
    var_8_10.b = 0
    char* edi_1 = nullptr
    
    while (true)
        char* eax_19 = *arg3
        int32_t eax_21
        
        if (eax_19 == 0 || *eax_19 == 0)
            eax_21 = 0
        else
            eax_21 = *(sub_44f000(arg3) + 8)
        
        if (edi_1 s>= eax_21)
            break
        
        *(edi_1 + *arg3) = _tolower(sx.d(*(*arg3 + edi_1)))
        edi_1 = &edi_1[1]
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
