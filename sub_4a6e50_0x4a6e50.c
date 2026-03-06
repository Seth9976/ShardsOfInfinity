// 函数名称: sub_4a6e50
// 虚拟地址: 0x4a6e50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4a6e50(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_54417b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_4dc = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 u> 0x27)
        sub_44e4d0(result, &data_5559b1, "frameIndex >= 0 && frameIndex < PROFILER_MAX_FRAMES", 
            "c:\ax2017\engine\perfevent.cpp", 0x16f, "ProfilerCalcFuncData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* edx = data_ce189c
    void* ebx_1 = arg1 * 0x259a10 + edx
    
    if (*(ebx_1 + 0x259a0c) == 0)
        int32_t i = 0
        
        if (*(edx + 0x5e20684) s> 0)
            void* eax_3 = ebx_1 + 0x24a014
            
            do
                *(eax_3 - 4) = 0
                eax_3 += 0x10
                *(eax_3 - 0x10) = 0
                i += 1
                *(eax_3 - 0x18) = 0
                *(eax_3 - 0xc) = 0
            while (i s< *(edx + 0x5e20684))
        
        result = *(ebx_1 + 0x249f00)
        char* const ecx = nullptr
        int32_t esi_1 = 0
        char* const var_4c8 = nullptr
        
        if (result s> 0)
            void* edi_1 = ebx_1 + 8
            
            do
                int32_t eax_4 = *(edi_1 + 4)
                int32_t var_334[0x63]
                int32_t var_1a4[0x64]
                
                if (eax_4 == 1)
                    if (esi_1 s>= 0x64)
                        sub_44e4d0(eax_4, &data_5559b1, "stackSize < PROFILER_MAX_STACK_SIZE", 
                            "c:\ax2017\engine\perfevent.cpp", 0x18c, "ProfilerCalcFuncData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    var_1a4[esi_1] = 0
                    int32_t var_4c4[0x63]
                    var_4c4[esi_1] = edi_1 - 8
                    var_334[esi_1] = 0
                    esi_1 += 1
                else if (eax_4 != 2)
                    if (eax_4 != 3)
                        sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\engine\perfevent.cpp", 
                            0x1b3, "ProfilerCalcFuncData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    void var_338
                    
                    if (esi_1 s> 0)
                        *(&var_338 + (esi_1 << 2)) = *(edi_1 + 8) f+ *(&var_338 + (esi_1 << 2))
                else
                    if (esi_1 s<= 0)
                        sub_44e4d0(eax_4, &data_5559b1, "stackSize > 0", 
                            "c:\ax2017\engine\perfevent.cpp", 0x194, "ProfilerCalcFuncData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t* eax_6 = (&var_4c8)[esi_1]
                    esi_1 -= 1
                    int32_t edx_1 = eax_6[2]
                    
                    if (edx_1 != *edi_1)
                        int32_t eax_13 = data_ce189c
                        int32_t ecx_7 = edx_1 * 7
                        int32_t var_4e0_2 = *(eax_13 + (ecx_7 << 2) + 0x5e01288)
                        int32_t var_4e4_2 = *(eax_13 + (ecx_7 << 2) + 0x5e01284)
                        int32_t var_8_1 = 0
                        char* const edx_2 = &data_5559b1
                        char* eax_15 = *sub_44f980(&var_4c8, "Mismatched profiler event '%s%s'")
                        
                        if (eax_15 != 0)
                            edx_2 = eax_15
                        
                        sub_44e4d0(eax_15, edx_2, 
                            "eventStart->mFuncPointIndex == profileEvent->mFuncPointIndex", 
                            "c:\ax2017\engine\perfevent.cpp", 0x199, "ProfilerCalcFuncData")
                        int32_t var_8_2 = 1
                        
                        if (data_cdf414 != 0)
                            char* eax_16 = var_4c8
                            
                            if (eax_16 != 0 && *eax_16 != 0)
                                char* eax_17 = sub_44f000(&var_4c8)
                                int32_t temp0_1 = *(eax_17 + 4)
                                *(eax_17 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                                    var_4c8 = &data_5559b1
                        
                        int32_t var_8_3 = 0xffffffff
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t eax_7
                    float xmm0_1
                    eax_7, xmm0_1 = sub_44eb40(*eax_6, eax_6[1], *(edi_1 - 8), *(edi_1 - 4))
                    int32_t ecx_1 = *edi_1
                    
                    if (ecx_1 u> 0xf9f)
                        sub_44e4d0(eax_7, &data_5559b1, 
                            "profileEvent->mFuncPointIndex >= 0 && profileEvent->mFuncPointIndex < 
                                PROFILER_MAX_FUNC_POINTS", 
                            "c:\ax2017\engine\perfevent.cpp", 0x19d, "ProfilerCalcFuncData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t ecx_2 = ecx_1 * 2
                    int32_t eax_8 = var_334[esi_1]
                    float xmm0_2 = xmm0_1 f+ *(ebx_1 + (ecx_2 << 3) + 0x24a00c)
                    *(ebx_1 + (ecx_2 << 3) + 0x24a014) += 1
                    *(ebx_1 + (ecx_2 << 3) + 0x24a018) = eax_8
                    *(ebx_1 + (ecx_2 << 3) + 0x24a00c) = xmm0_2
                    *(ebx_1 + (ecx_2 << 3) + 0x24a010) =
                        xmm0_1 f- var_1a4[esi_1] f+ *(ebx_1 + (ecx_2 << 3) + 0x24a010)
                    ecx = var_4c8
                    void var_1a8
                    
                    if (esi_1 s> 0)
                        *(&var_1a8 + (esi_1 << 2)) = *(&var_1a8 + (esi_1 << 2)) + xmm0_1
                result = *(ebx_1 + 0x249f00)
                ecx = &ecx[1]
                edi_1 += 0x18
                var_4c8 = ecx
            while (ecx s< result)
        
        if (result != 0x186a0 && esi_1 != 0)
            sub_44e4d0(result, &data_5559b1, "stackSize == 0", "c:\ax2017\engine\perfevent.cpp", 0x1b9, 
                "ProfilerCalcFuncData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(ebx_1 + 0x259a0c) = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
