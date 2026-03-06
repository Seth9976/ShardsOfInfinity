// 函数名称: sub_425fb0
// 虚拟地址: 0x425fb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_425fb0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541738
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = sub_472550(arg4, sub_424170)
    void* ecx_1 = data_65ac30
    
    if (ecx_1 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* const eax_4 = &data_557e10
    char* const edx
    
    while (true)
        if (*eax_4 == *(ecx_1 + 0xc))
            edx = *(eax_4 + 4)
            
            if (edx != 0)
                break
            
            sub_44e4d0(eax_4, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_4 += 8
        
        if (*(eax_4 + 4) == 0)
            edx = &data_5559b1
            break
    
    sub_44f240(&var_14, edx)
    int32_t var_8_1 = 0
    int32_t eax_6 = sub_469cf0(&var_14, &data_5bbcf8, arg4, &var_14, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            eax_6 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_6 = sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_3 = 0xffffffff
    void* ecx_7 = data_65ac30
    
    if (ecx_7 == 0)
        sub_44e4d0(eax_6, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* const eax_7 = &data_557e00
    char* const edx_3
    
    while (true)
        if (*eax_7 == *(ecx_7 + 0x24))
            edx_3 = *(eax_7 + 4)
            
            if (edx_3 != 0)
                break
            
            sub_44e4d0(eax_7, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_7 += 8
        
        if (*(eax_7 + 4) == 0)
            edx_3 = &data_5559b1
            break
    
    sub_44f240(&var_14, edx_3)
    int32_t var_8_4 = 2
    int32_t eax_9 = sub_469cf0(&var_14, &data_5bbd20, arg4, &var_14, 0xffffffff)
    int32_t var_8_5 = 3
    
    if (data_cdf414 != 0)
        eax_9 = var_14
        
        if (eax_9 != 0 && *eax_9 != 0)
            eax_9 = sub_44f000(&var_14)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                eax_9 = sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    void* ecx_13 = data_65ac30
    
    if (ecx_13 == 0)
        sub_44e4d0(eax_9, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* const eax_10 = &data_557e20
    char* const edx_6
    
    while (true)
        if (*eax_10 == *(ecx_13 + 8))
            edx_6 = *(eax_10 + 4)
            
            if (edx_6 != 0)
                break
            
            sub_44e4d0(eax_10, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_10 += 8
        
        if (*(eax_10 + 4) == 0)
            edx_6 = &data_5559b1
            break
    
    sub_44f240(&var_14, edx_6)
    int32_t var_8_7 = 4
    sub_469cf0(&var_14, &data_5bbd0c, arg4, &var_14, 0xffffffff)
    int32_t var_8_8 = 5
    
    if (data_cdf414 != 0)
        char* eax_12 = var_14
        
        if (eax_12 != 0 && *eax_12 != 0)
            char* eax_13 = sub_44f000(&var_14)
            int32_t temp2_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_9 = 0xffffffff
    void* eax_14 = data_65ac30
    
    if (eax_14 == 0)
        sub_44e4d0(eax_14, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_15 = *(eax_14 + 0x20)
    
    if (eax_15 == 0)
        eax_15 = 2
    
    if (eax_15 == 1)
        sub_44f240(&var_14, "Drag")
        int32_t var_8_12 = 6
        sub_469cf0(&var_14, &data_5bbd34, arg4, &var_14, 0xffffffff)
        int32_t var_8_13 = 7
    else
        if (eax_15 != 2)
            sub_44e4d0(eax_15 - 2, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x11f4, "OptionsUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_44f240(&var_14, "Click")
        int32_t var_8_10 = 0xa
        sub_469cf0(&var_14, &data_5bbd34, arg4, &var_14, 0xffffffff)
        int32_t var_8_11 = 0xb
    
    if (data_cdf414 != 0)
        char* eax_20 = var_14
        
        if (eax_20 != 0 && *eax_20 != 0)
            char* eax_21 = sub_44f000(&var_14)
            int32_t temp5_1 = *(eax_21 + 4)
            *(eax_21 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_14 = 0xffffffff
    int32_t eax_22 = sub_41b780(0xe480a8, arg4, "sliderMusic")
    int32_t* ecx_25 = data_65ac30
    
    if (ecx_25 == 0)
        sub_44e4d0(eax_22, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_425c80(eax_22, &data_65aae8, *ecx_25)
    int32_t eax_23 = sub_41b780(0xe480cc, arg4, "sliderEffects")
    void* ecx_27 = data_65ac30
    
    if (ecx_27 == 0)
        sub_44e4d0(eax_23, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_425c80(eax_23, &data_65aaf0, *(ecx_27 + 4))
    int32_t eax_24 = sub_41b780(0xe480f0, arg4, "btnWidescreen")
    int32_t eax_25 = data_65ac30
    
    if (eax_25 == 0)
        sub_44e4d0(eax_25, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    *(eax_25 + 0x14)
    int32_t var_28 = 0xffffffff
    sub_469930(eax_24)
    void* eax_26 = data_65ac30
    
    if (eax_26 == 0)
        sub_44e4d0(eax_26, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax_26 + 0x18) != 0)
        int32_t var_28_1 = 0xffffffff
        sub_469930(eax_24)
    
    int32_t eax_27 = sub_41b780(0xe48114, arg4, "btnFullscreen")
    int32_t ecx_31 = data_65ac30
    
    if (ecx_31 != 0)
        int32_t var_28_2 = 0xffffffff
        *(ecx_31 + 0x18)
        int32_t result = sub_469930(eax_27)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_44e4d0(eax_27, &data_5559b1, "gGameSettings.localSettings", 
        "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
