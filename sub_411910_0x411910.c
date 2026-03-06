// 函数名称: sub_411910
// 虚拟地址: 0x411910
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_411910(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540dfa
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = arg1[1]
    int32_t* eax_4
    
    if (eax_3 s< 0x7d0)
        if (eax_3 s< 0x5dc)
            if (data_65aabc != 0)
                sub_44e4d0(eax_3, &data_5559b1, "gClient == NULL", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x87, "EnterClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (data_65aab8 != 0)
                sub_44e4d0(eax_3, &data_5559b1, "gServer == NULL", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x88, "EnterClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            data_65aabc = 0x5baad0
            int32_t var_8_1 = 0
            eax_4 = sub_418de0(arg1)
            int32_t var_8_2 = 1
            
            if (data_65aabc == 0)
                sub_44e4d0(eax_4, &data_5559b1, "gClient != NULL", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8e, "ExitClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (data_65aab8 == 0)
                goto label_411a26
            
            sub_44e4d0(eax_4, &data_5559b1, "gServer == NULL", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (data_65aabc != 0)
            sub_44e4d0(eax_3, &data_5559b1, "gClient == NULL", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x95, "EnterServer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (data_65aab8 != 0)
            sub_44e4d0(eax_3, &data_5559b1, "gServer == NULL", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x96, "EnterServer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        data_65aab8 = 0
    else if (eax_3 s>= 0xbb8 && eax_3 s>= 0x1388)
        if (eax_3 s< 0xf42a4)
            if (data_65aabc != 0)
                sub_44e4d0(eax_3, &data_5559b1, "gClient == NULL", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x87, "EnterClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (data_65aab8 != 0)
                sub_44e4d0(eax_3, &data_5559b1, "gServer == NULL", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x88, "EnterClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            data_65aabc = 0x5baad0
            int32_t var_8_3 = 3
            eax_4 = sub_418de0(arg1)
            int32_t var_8_4 = 4
            
            if (data_65aabc == 0)
                sub_44e4d0(eax_4, &data_5559b1, "gClient != NULL", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8e, "ExitClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (data_65aab8 == 0)
            label_411a26:
                data_65aabc = 0
                eax_4.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_4
            
            sub_44e4d0(eax_4, &data_5559b1, "gServer == NULL", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (data_65aabc != 0)
            sub_44e4d0(eax_3, &data_5559b1, "gClient == NULL", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x95, "EnterServer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (data_65aab8 != 0)
            sub_44e4d0(eax_3, &data_5559b1, "gServer == NULL", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x96, "EnterServer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        data_65aab8 = 0
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
