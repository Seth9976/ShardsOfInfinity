// 函数名称: sub_4e3380
// 虚拟地址: 0x4e3380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4e3380(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5450e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* eax_3 = sub_52a358(0x14, 0x10)
    
    if (eax_3 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_48b160(eax_3, data_e470e8)
    int32_t result_1
    int32_t result_2 = result_1
    char* const result_5 = &data_5559b1
    char* const result_4 = &data_5559b1
    
    if (result_2 != 0)
        result_4 = result_2
    
    int32_t ebx
    
    if (sub_4e2e60(result_4, eax_3) != 0)
        ebx.b = 1
        *(*arg1 + 0xc) = eax_3
    else
        int32_t result_3 = result_1
        
        if (result_3 != 0)
            result_5 = result_3
        
        char* const result_6 = result_5
        sub_44e260("anim reimport reading xan '%s'")
        _aligned_free_base(eax_3)
        ebx.b = 0
    
    int32_t var_8_2 = 2
    int32_t result
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
