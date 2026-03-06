// 函数名称: sub_46af30
// 虚拟地址: 0x46af30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_46af30(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_45d320(arg1)
    int32_t edx = 0
    int32_t edi = *eax_3
    int32_t* esi_1
    
    if (edi s<= 0)
    label_46af75:
        esi_1 = nullptr
    else
        esi_1 = eax_3[1]
        
        while (*esi_1 != 0x6b)
            edx += 1
            esi_1 = &esi_1[2]
            
            if (edx s>= edi)
                goto label_46af75
    
    var_14 = nullptr
    void* eax_4
    char* edx_2
    
    if (esi_1 != 0)
        eax_4 = sub_4b8c10(&data_5b1d6c, 0x6b)
        
        if (*(eax_4 + 0x10) != 8)
            sub_44e4d0(eax_4, &data_5559b1, 
                "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING", 
                "c:\ax2017\engine\ui2.cpp", 0x677, "AttribAsString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        edx_2 = esi_1[1]
    else
        eax_4 = sub_46ae50(arg1, &var_14)
        
        if (eax_4 != 1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        edx_2 = var_14
    
    if (edx_2 == 0)
        sub_44e4d0(eax_4, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_14, edx_2)
    int32_t var_8_1 = 0
    void* result = sub_46ad40(arg1, &var_14)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* ecx_5 = var_14
        
        if (ecx_5 != 0 && *ecx_5 != 0)
            char* eax_6 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
