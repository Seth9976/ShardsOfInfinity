// 函数名称: sub_4a7230
// 虚拟地址: 0x4a7230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4a7230(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* result = __security_cookie ^ &__saved_ebp
    void* result_1 = result
    int32_t var_1b4
    char const* const ecx_8
    
    if (arg1 u> 0x27)
        char const* const var_1b0_4 = "ProfilerCalcGroupBy"
        var_1b4 = 0x1c1
        ecx_8 = "frameIndex >= 0 && frameIndex < PROFILER_MAX_FRAMES"
    else
        void* esi_1 = data_ce189c
        int32_t edx_1 = 0
        int32_t ebx_1 = 0
        void* ecx_1 = arg1 * 0x259a10 + esi_1
        void* var_1a0 = ecx_1
        
        if (*(ecx_1 + 0x249f00) s<= 0)
        label_4a733f:
            @__security_check_cookie@4(result_1 ^ &__saved_ebp)
            return result
        
        void* edi_1 = ecx_1 + 8
        
        while (true)
            result = *(edi_1 + 4)
            
            if (result == 1)
                if (edx_1 s> 0)
                    result = *(esi_1 + 0x5e206b0)
                    void* ecx_2 = (&var_1a0)[edx_1]
                    
                    if (result == 1)
                        result = *(ecx_2 + 8)
                        
                        if (result == *(esi_1 + 0x5e206b4))
                            int32_t ecx_3 = *edi_1
                            
                            if (ecx_3 s< 0 || ecx_3 s>= *(esi_1 + 0x5e20684))
                                char const* const var_1b0 = "ProfilerCalcGroupBy"
                                var_1b4 = 0x1d6
                                ecx_8 = "profileEvent->mFuncPointIndex >= 0 && "
                                "profileEvent->mFuncPointIndex < gProfilerGlobals->mFuncPointCount"
                                break
                            
                            result = ecx_3 * 7
                            *(esi_1 + (result << 2) + 0x5e0129c) = 1
                    else if (result == 2)
                        result = *edi_1
                        
                        if (result == *(esi_1 + 0x5e206b4))
                            if (result s< 0 || result s>= *(esi_1 + 0x5e20684))
                                char const* const var_1b0_1 = "ProfilerCalcGroupBy"
                                var_1b4 = 0x1df
                                ecx_8 = "profileEvent->mFuncPointIndex >= 0 && "
                                "profileEvent->mFuncPointIndex < gProfilerGlobals->mFuncPointCount"
                                break
                            
                            result = *(ecx_2 + 8)
                            *(esi_1 + result * 0x1c + 0x5e0129c) = 1
                    
                    ecx_1 = var_1a0
                
                if (edx_1 s>= 0x64)
                    char const* const var_1b0_2 = "ProfilerCalcGroupBy"
                    var_1b4 = 0x1e6
                    ecx_8 = "stackSize < PROFILER_MAX_STACK_SIZE"
                    break
                
                result = edi_1 - 8
                int32_t var_19c[0x65]
                var_19c[edx_1] = result
                edx_1 += 1
            else if (result == 2)
                if (edx_1 s<= 0)
                    char const* const var_1b0_3 = "ProfilerCalcGroupBy"
                    var_1b4 = 0x1ec
                    ecx_8 = "stackSize > 0"
                    break
                
                edx_1 -= 1
            
            ebx_1 += 1
            edi_1 += 0x18
            
            if (ebx_1 s>= *(ecx_1 + 0x249f00))
                goto label_4a733f
    
    sub_44e4d0(result, &data_5559b1, ecx_8, "c:\ax2017\engine\perfevent.cpp", var_1b4, 
        "ProfilerCalcGroupBy")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
