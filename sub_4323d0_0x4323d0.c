// 函数名称: sub_4323d0
// 虚拟地址: 0x4323d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4323d0(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541dd0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t var_18 = ecx
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = *arg2 + arg4
    
    if (result s>= 0x1000)
        sub_44e4d0(result, &data_5559b1, "curInput + end < MAX_INPUTS", 
            "c:\ax2017\jams\shards\code\shardsai.cpp", 0xfd0, "AddInputPlayerRangeCount")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edx = arg3
    
    while (edx s< arg4)
        int32_t ecx_1 = *arg2
        int32_t eax_4
        eax_4.b = arg5 s> edx
        edx += 1
        *(data_65acbc + (ecx_1 << 3)) = _mm_cvtepi32_pd(zx.q((eax_4 << 1) + 0xffffffff))
        result = ecx_1 + 1
        *arg2 = result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
