// 函数名称: sub_4e1220
// 虚拟地址: 0x4e1220
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4e1220()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545b18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* eax_3 = sub_52a358(0x48, 0x10)
    
    if (eax_3 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_48b160(eax_3, data_e4707c)
    char* result_1
    char* result_2 = result_1
    char* const result_5 = &data_5559b1
    char* const result_4 = &data_5559b1
    
    if (result_2 != 0)
        result_4 = result_2
    
    void* eax_4 = _strrchr(result_4, 0x2e)
    
    if (eax_4 != 0)
        uint32_t eax_5 = __stricmp(eax_4, ".fbx")
        int32_t eax_6 = neg.d(eax_5)
        eax_4 = sbb.d(eax_6, eax_6, eax_5 != 0) + 1
    
    char* result_3 = result_1
    char const* const var_24_2
    
    if (eax_4 == 1)
        if (result_3 != 0)
            result_5 = result_3
        
        char* const result_7 = result_5
        var_24_2 = "structure reimport failed to read '%s'"
    else
        if (result_3 != 0)
            result_5 = result_3
        
        char* const result_6 = result_5
        var_24_2 = "unknown structure type '%s'"
    
    sub_44e260(var_24_2)
    _aligned_free_base(eax_3)
    int32_t var_8_2 = 3
    char* result
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
