// 函数名称: sub_4a2e30
// 虚拟地址: 0x4a2e30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4a2e30(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543e36
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_304 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1[3] == 0)
        char* const var_2ec = &data_5559b1
        int32_t var_8_1 = 0
        uint32_t var_2e8[0x10][0x4]
        _memset(&var_2e8, 0, 0x100)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_308_1)(char** arg1) = sub_4a3060
        `eh vector constructor iterator'(&var_2e8, 8, 0x20, 0x4a3050)
        int32_t var_8_2 = 1
        uint32_t var_1e8[0x4][0x4]
        _memset(&var_1e8, 0, 0x1b4)
        int32_t* var_2f4 = 0xffffffff
        char* const* var_308_2 = &var_2ec
        char* const var_2f0
        sub_4a25c0(&var_2f4, "main", &var_2f0, &var_2f4, *arg1, arg1[1])
        var_8_2.b = 2
        
        if (data_cdf414 != 0)
            char* eax_4 = var_2f0
            
            if (eax_4 != 0 && *eax_4 != 0)
                char* eax_5 = sub_44f000(&var_2f0)
                int32_t temp0_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
                    var_2f0 = &data_5559b1
        
        var_8_2.b = 1
        int32_t* eax_6 = sub_4a2890(&var_2ec)
        var_2f4 = eax_6
        arg1[4] = eax_6
        int32_t var_190
        
        if (var_190 s> 8)
            sub_44e4d0(eax_6, &data_5559b1, "results.numSamplers <= NUM_DIFFUSE", 
                "c:\ax2017\engine\materialfndef.cpp", 0x651, "MakeMaterial")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void var_34
        void var_1a0
        
        if (var_190 s> 0)
            __builtin_memcpy(&var_34, &var_1a0, var_190 << 2)
        void var_cc
        int32_t var_4c
        void var_48
        int32_t var_38
        arg1[3] =
            sub_4b4fd0(&var_cc, &var_34, var_2f4, var_190, &var_cc, var_4c, &var_48, var_38, arg1[2].b)
        int32_t var_8_3 = 3
        `eh vector vbase constructor iterator'(&var_2e8, 8, 0x20, sub_4a3060)
        var_8_3.b = 4
        
        if (data_cdf414 != 0)
            char* const eax_10 = var_2ec
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_44f000(&var_2ec)
                int32_t temp1_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
    
    int32_t result = arg1[3]
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
