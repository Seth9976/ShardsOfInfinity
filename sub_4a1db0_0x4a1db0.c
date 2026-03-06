// 函数名称: sub_4a1db0
// 虚拟地址: 0x4a1db0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4a1db0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5418c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* result_1 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = arg1[0x52]
    
    if (eax_3 s<= 0)
        sub_44e4d0(eax_3, &data_5559b1, "emitResults.currentFunctionStackDepth > 0", 
            "c:\ax2017\engine\materialfndef.cpp", 0x358, "EmitFnLine")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* esi = &arg1[2 + arg1[eax_3 + 0x41] * 2]
    int32_t var_8_1 = 0
    int32_t* result = sub_44f510(esi, sub_44f810(arg2, &result_1, esi))
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, result[3] + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
