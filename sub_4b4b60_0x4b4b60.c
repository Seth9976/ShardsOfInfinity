// 函数名称: sub_4b4b60
// 虚拟地址: 0x4b4b60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b4b60(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_544928
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_24
    int32_t* var_40 = &var_24
    int32_t* result_1
    int32_t ecx_1 = sub_42ce10(&result_1, arg2, 5)
    int32_t var_14_1 = 0
    int32_t* eax_3 = var_24
    
    if (*eax_3 != 1)
        sub_44e4d0(eax_3, &data_5559b1, "pDefMaterial->passCount == 1", 
            "c:\ax2017\engine\material.cpp", 0x2de, "MaterialSimpleStateBind")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_4 = eax_3[1]
    
    if (*eax_4 != 1)
        sub_44e4d0(eax_4, &data_5559b1, "materialPass.variationCount == 1", 
            "c:\ax2017\engine\material.cpp", 0x2e3, "MaterialSimpleStateBind")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_5 = eax_4[1]
    int32_t var_40_1 = ecx_1
    var_24 = eax_5 + 4
    sub_4b48c0(arg1, &var_24)
    __builtin_memcpy(&arg1[0x391], eax_5 + 0xc, 0x80)
    *(arg1 + 0xec4) = *(eax_5 + 0x8c)
    *(arg1 + 0xed4) = *(eax_5 + 0x9c)
    *(arg1 + 0xee4) = *(eax_5 + 0xac)
    int32_t* result = result_1
    *(arg1 + 0xef4) = *(eax_5 + 0xbc)
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
