// 函数名称: sub_45d720
// 虚拟地址: 0x45d720
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_45d720(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542602
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_8c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_78 = arg1
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_90)(struct _EXCEPTION_REGISTRATION_RECORD**
        * arg1) = sub_44f380
    int32_t* var_80 = arg1
    int32_t var_7c = 0
    void var_64
    `eh vector constructor iterator'(&var_64, 4, 4, sub_44f290)
    int32_t var_8_1 = 0
    uint32_t eax_4 = *arg2 - 1
    
    if (eax_4 u<= 0xb)
        eax_4 = zx.d(lookup_table_45d974[eax_4])
        
        switch (eax_4)
            case 0
                var_8_1.b = 1
                char* eax_5 = arg2[1]
                
                if (eax_5 == 0)
                    sub_44e4d0(eax_5, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x9a, 
                        "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* var_90_1 = arg2[2]
                var_78 = &data_5559b1
                sub_44f690(&var_78, eax_5, var_90_1)
                int32_t var_7c_1 = 4
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_90_2)(struct 
                    _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                int32_t var_8_2 = 3
                `eh vector constructor iterator'(&arg1[4], 4, 4, sub_44f290)
                int32_t var_7c_2 = 0xc
                arg1[1] = 0
                *arg1 = 3
                sub_44f510(&arg1[4], &var_78)
                int32_t var_7c_3 = 6
                int32_t var_8_3 = 4
                
                if (data_cdf414 != 0)
                    int32_t* eax_6 = var_78
                    
                    if (eax_6 != 0 && *eax_6 != 0)
                        char* eax_7 = sub_44f000(&var_78)
                        int32_t temp0_1 = *(eax_7 + 4)
                        *(eax_7 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                
                int32_t var_8_4 = 5
                goto label_45d84b
            case 1
                int32_t esi_2 = arg2[1]
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_90_4)(struct 
                    _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                `eh vector constructor iterator'(&arg1[4], 4, 4, sub_44f290)
                arg1[1] = 0
                *arg1 = 1
                arg1[8] = esi_2
                int32_t var_8_5 = 6
            label_45d84b:
                `eh vector vbase constructor iterator'(&var_64, 4, 4, sub_44f380)
                fsbase->NtTib.ExceptionList = ExceptionList
                @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
                return arg1
            case 2
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_90_5)(struct 
                    _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_44f380
                var_78 = arg2[1]
                `eh vector constructor iterator'(&arg1[4], 4, 4, sub_44f290)
                int32_t* xmm0_2 = var_78
                arg1[1] = 0
                *arg1 = 2
                arg1[8] = xmm0_2
                int32_t var_8_6 = 7
                goto label_45d84b
            case 3
                sub_45d230(arg1, 0x5c9940)
                int32_t var_8_7 = 8
                goto label_45d84b
    
    sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x7b7, "UI2ExprToEvalResult")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
