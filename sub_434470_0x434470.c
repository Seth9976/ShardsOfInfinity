// 函数名称: sub_434470
// 虚拟地址: 0x434470
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_434470()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541e30
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_65ae00
    int32_t xmm2 = data_5bccb4
    int32_t xmm1 = data_5bccb8
    int32_t var_1c = xmm2
    uint128_t xmm3 = zx.o(*(eax_3 + 0x18))
    float xmm4_1 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    int32_t var_18 = xmm1
    int32_t xmm3_1 = _mm_cvtepi32_ps(xmm3)
    
    if (xmm4_1 < 0f || xmm3_1 f< 0)
        sub_44e4d0(eax_3, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0xa4, 
            "RectContains")
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    if (not(xmm2 f< 0) && not(xmm1 f< 0) && not(xmm4_1 f< xmm2) && not(xmm3_1 f< xmm1))
        struct InputHitResult::HitResult::VTable* var_48
        sub_415790(&var_48, &var_1c)
        int32_t var_44
        
        if (var_44 u> 3)
            sub_44e4d0(var_44, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 
                0x6da, "CalcDropTarget")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        switch (var_44)
            case 0, 1, 3
                fsbase->NtTib.ExceptionList = ExceptionList
                return 1
            case 2
                int32_t var_38
                char* eax_6 = sub_46f400(var_38)
                char* var_14
                sub_44f240(&var_14, "drop_cancel")
                int32_t ebx
                ebx.b = sub_44f4d0(eax_6, &var_14)
                int32_t var_8_1 = 0
                
                if (data_cdf414 != 0)
                    char* ecx_6 = var_14
                    
                    if (ecx_6 != 0 && *ecx_6 != 0)
                        char* eax_8 = sub_44f000(&var_14)
                        int32_t temp0_1 = *(eax_8 + 4)
                        *(eax_8 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                
                int32_t result
                result.b = ebx.b == 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
