// 函数名称: sub_4b4ea0
// 虚拟地址: 0x4b4ea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4b4ea0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544958
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* esi = *arg1
    
    if (*esi != 1)
        sub_44e4d0(arg1, &data_5559b1, "pMaterial->passCount == 1", "c:\ax2017\engine\material.cpp", 
            0x398, "MaterialReimport")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* edx = esi[1]
    
    if (*edx != 1)
        sub_44e4d0(arg1, &data_5559b1, "pMaterial->pPassArray[0].variationCount == 1", 
            "c:\ax2017\engine\material.cpp", 0x399, "MaterialReimport")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    esi[2].b = sub_4b8920(arg1, edx[1] + 4, &data_5b6224, 1)
    void* eax_5 = esi[1]
    *(esi + 9) = sub_4b8920(eax_5, *(eax_5 + 4) + 4, &data_5b6224, 0).b
    int32_t var_8_2 = 1
    char* result
    
    if (data_cdf414 != 0)
        char* result_1
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
