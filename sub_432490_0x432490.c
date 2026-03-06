// 函数名称: sub_432490
// 虚拟地址: 0x432490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_432490(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541dd0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = *arg2 + arg5
    
    if (result s>= 0x1000)
        sub_44e4d0(result, &data_5559b1, "curInput + end < MAX_INPUTS", 
            "c:\ax2017\jams\shards\code\shardsai.cpp", 0xfb8, "AddInputPlayerRangeCards")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi = 5
    
    if (arg5 s> 5)
        do
            result = arg7(arg3, arg4, esi, eax_2)
            
            if (result.b != 0)
                int32_t ecx_1
                ecx_1.b = arg6(arg3, arg4, esi) != 0
                int32_t ecx_3 = *arg2
                *(data_65acbc + (ecx_3 << 3)) = _mm_cvtepi32_pd(zx.q((ecx_1 << 1) + 0xffffffff))
                result = ecx_3 + 1
                *arg2 = result
            
            esi += 1
        while (esi s< arg5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
