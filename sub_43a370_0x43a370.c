// 函数名称: sub_43a370
// 虚拟地址: 0x43a370
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_43a370(int32_t arg1 @ esi, void* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_541f20
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_13c = arg1
    int32_t var_144 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const result_1
    sub_44f240(&result_1, "btn_endTurn")
    char* const result_2 = &data_5559b1
    char* result_3 = result_1
    char* const result_24 = &data_5559b1
    char* edx_1 = *(arg2 + 4)
    
    if (result_3 != 0)
        result_24 = result_3
    
    int32_t esi
    
    while (true)
        result_3.b = *result_24
        char temp0_1 = *edx_1
        bool c_1 = result_3.b u< temp0_1
        bool z_1 = result_3.b == temp0_1
        char var_55_1 = result_3.b
        result_3 = result_1
        
        if (z_1)
            if (var_55_1 == 0)
                esi = 0
                break
            
            result_3.b = result_24[1]
            char temp1_1 = edx_1[1]
            c_1 = result_3.b u< temp1_1
            bool z_2 = result_3.b == temp1_1
            char var_55_2 = result_3.b
            result_3 = result_1
            
            if (z_2)
                result_24 = &result_24[2]
                edx_1 = &edx_1[2]
                
                if (var_55_2 != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg1, arg1, c_1) | 1
        break
    
    int32_t var_14_1 = 0
    
    if (data_cdf414 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_44f000(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_2 = 0xffffffff
    
    if (esi == 0)
        sub_439a20()
    
    sub_44f240(&result_1, "btn_deckStyle")
    char* const result_25 = &data_5559b1
    char* edx_4 = *(arg2 + 4)
    char* const result_4 = result_1
    
    if (result_4 != 0)
        result_25 = result_4
    
    int32_t esi_2
    
    while (true)
        result_4.b = *result_25
        char temp3_1 = *edx_4
        bool c_2 = result_4.b u< temp3_1
        bool z_3 = result_4.b == temp3_1
        char var_55_3 = result_4.b
        result_4 = result_1
        
        if (z_3)
            if (var_55_3 == 0)
                esi_2 = 0
                break
            
            result_4.b = result_25[1]
            char temp4_1 = edx_4[1]
            c_2 = result_4.b u< temp4_1
            bool z_4 = result_4.b == temp4_1
            char var_55_4 = result_4.b
            result_4 = result_1
            
            if (z_4)
                result_25 = &result_25[2]
                edx_4 = &edx_4[2]
                
                if (var_55_4 != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_2) | 1
        break
    
    int32_t var_14_3 = 1
    
    if (data_cdf414 != 0 && result_4 != 0 && *result_4 != 0)
        result_4 = sub_44f000(&result_1)
        int32_t temp5_1 = *(result_4 + 4)
        *(result_4 + 4) -= 1
        
        if (temp5_1 == 1)
            result_4 = sub_45d050(result_4, *(result_4 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_4 = 0xffffffff
    
    if (esi_2 == 0)
        void* ecx_6 = data_65ac30
        
        if (ecx_6 == 0)
            sub_44e4d0(result_4, &data_5559b1, "gGameSettings.localSettings", 
                "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_5
        eax_5.b = *(ecx_6 + 0x28) != 1
        *(ecx_6 + 0x28) = eax_5
        sub_429a80()
    
    sub_44f240(&result_1, "btn_nextGame")
    char* const result_26 = &data_5559b1
    char* edx_7 = *(arg2 + 4)
    char* const result_5 = result_1
    
    if (result_5 != 0)
        result_26 = result_5
    
    int32_t esi_4
    
    while (true)
        result_5.b = *result_26
        char temp6_1 = *edx_7
        bool c_3 = result_5.b u< temp6_1
        bool z_5 = result_5.b == temp6_1
        char var_55_5 = result_5.b
        result_5 = result_1
        
        if (z_5)
            if (var_55_5 == 0)
                esi_4 = 0
                break
            
            result_5.b = result_26[1]
            char temp7_1 = edx_7[1]
            c_3 = result_5.b u< temp7_1
            bool z_6 = result_5.b == temp7_1
            char var_55_6 = result_5.b
            result_5 = result_1
            
            if (z_6)
                result_26 = &result_26[2]
                edx_7 = &edx_7[2]
                
                if (var_55_6 != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(esi_2, esi_2, c_3) | 1
        break
    
    int32_t var_14_5 = 2
    
    if (data_cdf414 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_7 = sub_44f000(&result_1)
        int32_t temp8_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_6 = 0xffffffff
    int32_t var_60
    
    if (esi_4 == 0 && sub_4222f0(&var_60) != 0)
        if (var_60 != 1)
            sub_416d70(result_1)
        else
            void* eax_9 = data_65aabc
            
            if (eax_9 == 0)
                sub_44e4d0(eax_9, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            *(eax_9 + 0x42c) = 3
    
    sub_44f240(&result_1, "btn_zoom_action")
    char* const result_27 = &data_5559b1
    char* edx_10 = *(arg2 + 4)
    char* const result_6 = result_1
    
    if (result_6 != 0)
        result_27 = result_6
    
    char* esi_6
    
    while (true)
        result_6.b = *result_27
        char temp9_1 = *edx_10
        bool c_4 = result_6.b u< temp9_1
        bool z_7 = result_6.b == temp9_1
        char var_55_7 = result_6.b
        result_6 = result_1
        
        if (z_7)
            if (var_55_7 == 0)
                esi_6 = nullptr
                break
            
            result_6.b = result_27[1]
            char temp10_1 = edx_10[1]
            c_4 = result_6.b u< temp10_1
            bool z_8 = result_6.b == temp10_1
            char var_55_8 = result_6.b
            result_6 = result_1
            
            if (z_8)
                result_27 = &result_27[2]
                edx_10 = &edx_10[2]
                
                if (var_55_8 != 0)
                    continue
                
                esi_6 = nullptr
                break
        
        esi_6 = sbb.d(esi_4, esi_4, c_4) | 1
        break
    
    int32_t var_14_7 = 3
    
    if (data_cdf414 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_11 = sub_44f000(&result_1)
        int32_t temp11_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_8 = 0xffffffff
    int32_t var_138
    void var_d0
    
    if (esi_6 == 0)
        void* eax_12 = sub_443fc0()
        char ecx_15 = data_5bccbc
        
        if (eax_12 != 0)
            ecx_15 = 0
        
        data_5bccbc = ecx_15
        int32_t ecx_16 = data_5bcaec
        
        if (ecx_16 == 0)
            sub_44e4d0(eax_12, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 0x6c, 
                "DataArray<struct ShGfx>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t edx_13 = zx.d(ecx_16.w)
        
        if (edx_13 u< data_5bcd80)
            eax_12 = edx_13 * 0x568 + data_5bcd7c
        
        if (edx_13 u>= data_5bcd80 || *(eax_12 + 0x564) != ecx_16)
            sub_44e4d0(eax_12, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct ShGfx>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        char var_148_1 = 0
        char var_14c_1 = 0
        esi_6 = edx_13 * 0x568 + data_5bcd7c
        *(esi_6 + 0x518) = *(esi_6 + 0x508)
        data_5bcaec = 0
        
        if (sub_43f2e0(eax_12, &data_571d90, esi_6, var_14c_1, var_148_1) == 2)
            int128_t xmm0_2 = *(esi_6 + 0x508)
            void* eax_15 = &esi_6[0xa0]
            var_138 = 1
            *(eax_15 + 0x45c) = 0
            __builtin_memcpy(eax_15, eax_15 + 0x68, 0x68)
            int128_t var_134_1 = xmm0_2
            __builtin_memcpy(&var_d0, &var_138, 0x68)
            int32_t var_68_1 = 6
            int32_t var_64_1 = 0
            esi_6 = __builtin_memcpy(eax_15 + 0xd0, &var_d0, 0x70)
            *(eax_15 + 0x450) = 1
            result_2 = &data_5559b1
    
    sub_44f240(&result_1, "btn_cancel_merc")
    char* const result_28 = &data_5559b1
    char* edx_14 = *(arg2 + 4)
    char* const result_7 = result_1
    
    if (result_7 != 0)
        result_28 = result_7
    
    int32_t esi_10
    
    while (true)
        result_7.b = *result_28
        char temp12_1 = *edx_14
        bool c_5 = result_7.b u< temp12_1
        bool z_9 = result_7.b == temp12_1
        char var_55_9 = result_7.b
        result_7 = result_1
        
        if (z_9)
            if (var_55_9 == 0)
                esi_10 = 0
                break
            
            result_7.b = result_28[1]
            char temp13_1 = edx_14[1]
            c_5 = result_7.b u< temp13_1
            bool z_10 = result_7.b == temp13_1
            char var_55_10 = result_7.b
            result_7 = result_1
            
            if (z_10)
                result_28 = &result_28[2]
                edx_14 = &edx_14[2]
                
                if (var_55_10 != 0)
                    continue
                
                esi_10 = 0
                break
        
        esi_10 = sbb.d(esi_6, esi_6, c_5) | 1
        break
    
    int32_t var_14_9 = 4
    
    if (data_cdf414 != 0 && result_7 != 0 && *result_7 != 0)
        result_7 = sub_44f000(&result_1)
        int32_t temp14_1 = *(result_7 + 4)
        *(result_7 + 4) -= 1
        
        if (temp14_1 == 1)
            result_7 = sub_45d050(result_7, *(result_7 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_10 = 0xffffffff
    
    if (esi_10 == 0)
        void* ecx_21 = data_65aabc
        
        if (ecx_21 == 0)
            sub_44e4d0(result_7, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* eax_18 = sub_437070(*(sub_433c60(*(ecx_21 + 0x648)) + 0x30))
        var_138 = 1
        eax_18[4] = eax_18[0x14b]
        eax_18[3] = 4
        eax_18[2] = 0xffffffff
        int128_t xmm0_3 = *(eax_18 + 0x508)
        eax_18[0x13f] = 0
        __builtin_memcpy(&eax_18[0x28], &eax_18[0x42], 0x68)
        int128_t var_134_2 = xmm0_3
        __builtin_memcpy(&var_d0, &var_138, 0x68)
        int32_t var_68_2 = 6
        int32_t var_64_2 = 0
        esi_10 = __builtin_memcpy(&eax_18[0x5c], &var_d0, 0x70)
        void* ecx_25 = data_65aabc
        eax_18[0x13c] = 1
        
        if (ecx_25 == 0)
            sub_44e4d0(eax_18, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result_2 = &data_5559b1
        *(sub_433c60(*(ecx_25 + 0x648)) + 0x30) = 0
    
    sub_44f240(&result_1, "btn_constructs_expand")
    char* const result_29 = &data_5559b1
    char* edx_17 = *(arg2 + 4)
    char* const result_8 = result_1
    
    if (result_8 != 0)
        result_29 = result_8
    
    int32_t esi_13
    
    while (true)
        result_8.b = *result_29
        char temp15_1 = *edx_17
        bool c_6 = result_8.b u< temp15_1
        bool z_11 = result_8.b == temp15_1
        char var_55_11 = result_8.b
        result_8 = result_1
        
        if (z_11)
            if (var_55_11 == 0)
                esi_13 = 0
                break
            
            result_8.b = result_29[1]
            char temp16_1 = edx_17[1]
            c_6 = result_8.b u< temp16_1
            bool z_12 = result_8.b == temp16_1
            char var_55_12 = result_8.b
            result_8 = result_1
            
            if (z_12)
                result_29 = &result_29[2]
                edx_17 = &edx_17[2]
                
                if (var_55_12 != 0)
                    continue
                
                esi_13 = 0
                break
        
        esi_13 = sbb.d(esi_10, esi_10, c_6) | 1
        break
    
    int32_t var_14_11 = 5
    
    if (data_cdf414 != 0 && result_8 != 0 && *result_8 != 0)
        char* eax_21 = sub_44f000(&result_1)
        int32_t temp17_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_12 = 0xffffffff
    
    if (esi_13 == 0)
        data_5bccbc = data_5bccbc == 0
        
        if (sub_443fc0() != 0 && *(sub_443fc0() + 0x14) == 5)
            sub_443df0(esi_13 + 5)
    
    sub_44f240(&result_1, "btn_menu")
    char* const result_30 = &data_5559b1
    char* edx_20 = *(arg2 + 4)
    char* const result_9 = result_1
    
    if (result_9 != 0)
        result_30 = result_9
    
    int32_t esi_15
    
    while (true)
        result_9.b = *result_30
        char temp18_1 = *edx_20
        bool c_7 = result_9.b u< temp18_1
        bool z_13 = result_9.b == temp18_1
        char var_55_13 = result_9.b
        result_9 = result_1
        
        if (z_13)
            if (var_55_13 == 0)
                esi_15 = 0
                break
            
            result_9.b = result_30[1]
            char temp19_1 = edx_20[1]
            c_7 = result_9.b u< temp19_1
            bool z_14 = result_9.b == temp19_1
            char var_55_14 = result_9.b
            result_9 = result_1
            
            if (z_14)
                result_30 = &result_30[2]
                edx_20 = &edx_20[2]
                
                if (var_55_14 != 0)
                    continue
                
                esi_15 = 0
                break
        
        esi_15 = sbb.d(esi_13, esi_13, c_7) | 1
        break
    
    int32_t var_14_13 = 6
    
    if (data_cdf414 != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_25 = sub_44f000(&result_1)
        int32_t temp20_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_14 = 0xffffffff
    
    if (esi_15 == 0)
        int32_t eax_26 = data_5bcae8
        data_5bb240 = 0xf
        
        if (eax_26 s< 1)
            eax_26 = 1
        
        data_5c63a4 = eax_26
    
    sub_44f240(&result_1, "btn_ok")
    char* const result_31 = &data_5559b1
    char* edx_23 = *(arg2 + 4)
    char* const result_10 = result_1
    
    if (result_10 != 0)
        result_31 = result_10
    
    int32_t esi_17
    
    while (true)
        result_10.b = *result_31
        char temp21_1 = *edx_23
        bool c_8 = result_10.b u< temp21_1
        bool z_15 = result_10.b == temp21_1
        char var_55_15 = result_10.b
        result_10 = result_1
        
        if (z_15)
            if (var_55_15 == 0)
                esi_17 = 0
                break
            
            result_10.b = result_31[1]
            char temp22_1 = edx_23[1]
            c_8 = result_10.b u< temp22_1
            bool z_16 = result_10.b == temp22_1
            char var_55_16 = result_10.b
            result_10 = result_1
            
            if (z_16)
                result_31 = &result_31[2]
                edx_23 = &edx_23[2]
                
                if (var_55_16 != 0)
                    continue
                
                esi_17 = 0
                break
        
        esi_17 = sbb.d(esi_15, esi_15, c_8) | 1
        break
    
    int32_t var_14_15 = 7
    
    if (data_cdf414 != 0 && result_10 != 0 && *result_10 != 0)
        char* eax_28 = sub_44f000(&result_1)
        int32_t temp23_1 = *(eax_28 + 4)
        *(eax_28 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_16 = 0xffffffff
    
    if (esi_17 == 0)
        sub_439ce0()
    
    sub_44f240(&result_1, "btn_merc")
    char* const result_32 = &data_5559b1
    char* edx_26 = *(arg2 + 4)
    char* const result_11 = result_1
    
    if (result_11 != 0)
        result_32 = result_11
    
    int32_t esi_19
    
    while (true)
        result_11.b = *result_32
        char temp24_1 = *edx_26
        bool c_9 = result_11.b u< temp24_1
        bool z_17 = result_11.b == temp24_1
        char var_55_17 = result_11.b
        result_11 = result_1
        
        if (z_17)
            if (var_55_17 == 0)
                esi_19 = 0
                break
            
            result_11.b = result_32[1]
            char temp25_1 = edx_26[1]
            c_9 = result_11.b u< temp25_1
            bool z_18 = result_11.b == temp25_1
            char var_55_18 = result_11.b
            result_11 = result_1
            
            if (z_18)
                result_32 = &result_32[2]
                edx_26 = &edx_26[2]
                
                if (var_55_18 != 0)
                    continue
                
                esi_19 = 0
                break
        
        esi_19 = sbb.d(esi_17, esi_17, c_9) | 1
        break
    
    int32_t var_14_17 = 8
    
    if (data_cdf414 != 0 && result_11 != 0 && *result_11 != 0)
        char* eax_30 = sub_44f000(&result_1)
        int32_t temp26_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp26_1 == 1)
            sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_18 = 0xffffffff
    int32_t var_54
    
    if (esi_19 == 0)
        if (sub_443fc0() != 0 && *(sub_443fc0() + 0x14) == 0xc)
            sub_443df0(esi_19 + 0xc)
        
        _memset(&var_54, 0, 0x30)
        void* ecx_41 = data_65aabc
        int32_t eax_34 = *data_5c2e30
        var_54 = eax_34
        
        if (ecx_41 == 0)
            sub_44e4d0(eax_34, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* eax_35 = sub_433c60(*(ecx_41 + 0x648))
        void* esi_21 = data_65aabc
        int32_t var_2c_1 = 1
        int32_t var_50_1 = 2
        int32_t eax_36 = *(eax_35 + 0x30)
        int32_t var_4c_1 = eax_36
        int32_t var_28_1 = 3
        
        if (esi_21 == 0)
            sub_44e4d0(eax_36, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        esi_19 = *(esi_21 + 0x648)
        void* eax_37 = sub_41ad20()
        void* eax_38 = sub_436b50(eax_37, esi_19, eax_37, &var_54)
        void* ecx_44 = data_65aabc
        
        if (ecx_44 == 0)
            sub_44e4d0(eax_38, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(sub_433c60(*(ecx_44 + 0x648)) + 0x30) = 0
    
    sub_44f240(&result_1, "btn_buy")
    char* const result_33 = &data_5559b1
    char* edx_30 = *(arg2 + 4)
    char* const result_12 = result_1
    
    if (result_12 != 0)
        result_33 = result_12
    
    int32_t esi_22
    
    while (true)
        result_12.b = *result_33
        char temp27_1 = *edx_30
        bool c_10 = result_12.b u< temp27_1
        bool z_19 = result_12.b == temp27_1
        char var_55_19 = result_12.b
        result_12 = result_1
        
        if (z_19)
            if (var_55_19 == 0)
                esi_22 = 0
                break
            
            result_12.b = result_33[1]
            char temp28_1 = edx_30[1]
            c_10 = result_12.b u< temp28_1
            bool z_20 = result_12.b == temp28_1
            char var_55_20 = result_12.b
            result_12 = result_1
            
            if (z_20)
                result_33 = &result_33[2]
                edx_30 = &edx_30[2]
                
                if (var_55_20 != 0)
                    continue
                
                esi_22 = 0
                break
        
        esi_22 = sbb.d(esi_19, esi_19, c_10) | 1
        break
    
    int32_t var_14_19 = 9
    
    if (data_cdf414 != 0 && result_12 != 0 && *result_12 != 0)
        char* eax_41 = sub_44f000(&result_1)
        int32_t temp29_1 = *(eax_41 + 4)
        *(eax_41 + 4) -= 1
        
        if (temp29_1 == 1)
            sub_45d050(eax_41, *(eax_41 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_20 = 0xffffffff
    
    if (esi_22 == 0)
        void* eax_42 = sub_443fc0()
        void* eax_43
        
        if (eax_42 != 0)
            eax_43 = sub_443fc0()
        
        if (eax_42 == 0 || *(eax_43 + 0x14) != 0xc)
            void* eax_44 = sub_443fc0()
            void* eax_45
            
            if (eax_44 != 0)
                eax_45 = sub_443fc0()
            
            if (eax_44 == 0 || *(eax_45 + 0x14) != 0x12)
                _memset(&var_54, 0, 0x30)
                void* ecx_49 = data_65aabc
                int32_t eax_47 = *data_5c2e30
                var_54 = eax_47
                
                if (ecx_49 == 0)
                    sub_44e4d0(eax_47, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* eax_48 = sub_433c60(*(ecx_49 + 0x648))
                void* esi_24 = data_65aabc
                int32_t var_2c_2 = 1
                int32_t var_50_2 = 2
                int32_t eax_49 = *(eax_48 + 0x30)
                int32_t var_4c_2 = eax_49
                int32_t var_28_2 = 0
                
                if (esi_24 == 0)
                    sub_44e4d0(eax_49, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                esi_22 = *(esi_24 + 0x648)
                void* eax_50 = sub_41ad20()
                void* eax_51 = sub_436b50(eax_50, esi_22, eax_50, &var_54)
                void* ecx_52 = data_65aabc
                
                if (ecx_52 == 0)
                    sub_44e4d0(eax_51, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                *(sub_433c60(*(ecx_52 + 0x648)) + 0x30) = 0
    
    sub_44f240(&result_1, "btn_deck")
    char* const result_34 = &data_5559b1
    char* edx_34 = *(arg2 + 4)
    char* const result_13 = result_1
    
    if (result_13 != 0)
        result_34 = result_13
    
    int32_t esi_25
    
    while (true)
        result_13.b = *result_34
        char temp30_1 = *edx_34
        bool c_11 = result_13.b u< temp30_1
        bool z_21 = result_13.b == temp30_1
        char var_55_21 = result_13.b
        result_13 = result_1
        
        if (z_21)
            if (var_55_21 == 0)
                esi_25 = 0
                break
            
            result_13.b = result_34[1]
            char temp31_1 = edx_34[1]
            c_11 = result_13.b u< temp31_1
            bool z_22 = result_13.b == temp31_1
            char var_55_22 = result_13.b
            result_13 = result_1
            
            if (z_22)
                result_34 = &result_34[2]
                edx_34 = &edx_34[2]
                
                if (var_55_22 != 0)
                    continue
                
                esi_25 = 0
                break
        
        esi_25 = sbb.d(esi_22, esi_22, c_11) | 1
        break
    
    int32_t var_14_21 = 0xa
    
    if (data_cdf414 != 0 && result_13 != 0 && *result_13 != 0)
        char* eax_54 = sub_44f000(&result_1)
        int32_t temp32_1 = *(eax_54 + 4)
        *(eax_54 + 4) -= 1
        
        if (temp32_1 == 1)
            sub_45d050(eax_54, *(eax_54 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_22 = 0xffffffff
    
    if (esi_25 == 0)
        void* eax_55 = data_65aabc
        data_5bcaf8 = data_5bcaf8 == 0
        data_5bcaf0 = 0
        data_5bcb00 = 0xffffffff
        
        if (eax_55 == 0)
            sub_44e4d0(eax_55, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        data_5bcafc = *(eax_55 + 0x648)
    
    sub_44f240(&result_1, "btn_discard")
    char* const result_35 = &data_5559b1
    char* edx_37 = *(arg2 + 4)
    char* const result_14 = result_1
    
    if (result_14 != 0)
        result_35 = result_14
    
    int32_t esi_27
    
    while (true)
        result_14.b = *result_35
        char temp33_1 = *edx_37
        bool c_12 = result_14.b u< temp33_1
        bool z_23 = result_14.b == temp33_1
        char var_55_23 = result_14.b
        result_14 = result_1
        
        if (z_23)
            if (var_55_23 == 0)
                esi_27 = 0
                break
            
            result_14.b = result_35[1]
            char temp34_1 = edx_37[1]
            c_12 = result_14.b u< temp34_1
            bool z_24 = result_14.b == temp34_1
            char var_55_24 = result_14.b
            result_14 = result_1
            
            if (z_24)
                result_35 = &result_35[2]
                edx_37 = &edx_37[2]
                
                if (var_55_24 != 0)
                    continue
                
                esi_27 = 0
                break
        
        esi_27 = sbb.d(esi_25, esi_25, c_12) | 1
        break
    
    int32_t var_14_23 = 0xb
    
    if (data_cdf414 != 0 && result_14 != 0 && *result_14 != 0)
        result_14 = sub_44f000(&result_1)
        int32_t temp35_1 = *(result_14 + 4)
        *(result_14 + 4) -= 1
        
        if (temp35_1 == 1)
            sub_45d050(result_14, *(result_14 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_24 = 0xffffffff
    
    if (esi_27 == 0)
        result_14.b = data_5bcaf0
        data_5bcaf8 = 0
        data_5bcb00 = 0xffffffff
        data_5bcaf0 = result_14.b == 0
        
        if (result_14.b == 0)
            void* eax_58 = data_65aabc
            
            if (eax_58 == 0)
                sub_44e4d0(eax_58, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            data_5bcaf4 = *(eax_58 + 0x648)
    
    sub_44f240(&result_1, "btn_oppDeck")
    char* const result_36 = &data_5559b1
    char* edx_40 = *(arg2 + 4)
    char* const result_15 = result_1
    
    if (result_15 != 0)
        result_36 = result_15
    
    int32_t esi_29
    
    while (true)
        result_15.b = *result_36
        char temp36_1 = *edx_40
        bool c_13 = result_15.b u< temp36_1
        bool z_25 = result_15.b == temp36_1
        char var_55_25 = result_15.b
        result_15 = result_1
        
        if (z_25)
            if (var_55_25 == 0)
                esi_29 = 0
                break
            
            result_15.b = result_36[1]
            char temp37_1 = edx_40[1]
            c_13 = result_15.b u< temp37_1
            bool z_26 = result_15.b == temp37_1
            char var_55_26 = result_15.b
            result_15 = result_1
            
            if (z_26)
                result_36 = &result_36[2]
                edx_40 = &edx_40[2]
                
                if (var_55_26 != 0)
                    continue
                
                esi_29 = 0
                break
        
        esi_29 = sbb.d(esi_27, esi_27, c_13) | 1
        break
    
    int32_t var_14_25 = 0xc
    
    if (data_cdf414 != 0 && result_15 != 0 && *result_15 != 0)
        char* eax_61 = sub_44f000(&result_1)
        int32_t temp38_1 = *(eax_61 + 4)
        *(eax_61 + 4) -= 1
        
        if (temp38_1 == 1)
            sub_45d050(eax_61, *(eax_61 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_26 = 0xffffffff
    
    if (esi_29 == 0)
        int32_t ecx_64 = *(arg2 + 8) + 1
        data_5bcaf0 = 0
        data_5bcaf8 = data_5bcaf8 == 0
        int32_t eax_63 = sub_41af20(ecx_64)
        void* ecx_65 = data_65aabc
        data_5bcafc = eax_63
        
        if (ecx_65 == 0)
            sub_44e4d0(eax_63, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (eax_63 == *(ecx_65 + 0x648))
            sub_44e4d0(eax_63, &data_5559b1, "gui.zoomDeckPlayer != LocalWho()", 
                "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x1344, "ZoomOppDeckToggle")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    sub_44f240(&result_1, "btn_oppDiscard")
    char* const result_37 = &data_5559b1
    char* edx_43 = *(arg2 + 4)
    char* const result_16 = result_1
    
    if (result_16 != 0)
        result_37 = result_16
    
    int32_t esi_31
    
    while (true)
        result_16.b = *result_37
        char temp39_1 = *edx_43
        bool c_14 = result_16.b u< temp39_1
        bool z_27 = result_16.b == temp39_1
        char var_55_27 = result_16.b
        result_16 = result_1
        
        if (z_27)
            if (var_55_27 == 0)
                esi_31 = 0
                break
            
            result_16.b = result_37[1]
            char temp40_1 = edx_43[1]
            c_14 = result_16.b u< temp40_1
            bool z_28 = result_16.b == temp40_1
            char var_55_28 = result_16.b
            result_16 = result_1
            
            if (z_28)
                result_37 = &result_37[2]
                edx_43 = &edx_43[2]
                
                if (var_55_28 != 0)
                    continue
                
                esi_31 = 0
                break
        
        esi_31 = sbb.d(esi_29, esi_29, c_14) | 1
        break
    
    int32_t var_14_27 = 0xd
    
    if (data_cdf414 != 0 && result_16 != 0 && *result_16 != 0)
        char* eax_65 = sub_44f000(&result_1)
        int32_t temp41_1 = *(eax_65 + 4)
        *(eax_65 + 4) -= 1
        
        if (temp41_1 == 1)
            sub_45d050(eax_65, *(eax_65 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_28 = 0xffffffff
    
    if (esi_31 == 0)
        int32_t ecx_70 = *(arg2 + 8) + 1
        data_5bcaf8 = 0
        data_5bcaf0 = data_5bcaf0 == 0
        int32_t eax_67 = sub_41af20(ecx_70)
        void* ecx_71 = data_65aabc
        data_5bcaf4 = eax_67
        
        if (ecx_71 == 0)
            sub_44e4d0(eax_67, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (eax_67 == *(ecx_71 + 0x648))
            sub_44e4d0(eax_67, &data_5559b1, "gui.zoomDiscardPlayer != LocalWho()", 
                "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x133a, "ZoomOppDiscardToggle")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    sub_44f240(&result_1, "btn_opp")
    char* const result_38 = &data_5559b1
    char* edx_46 = *(arg2 + 4)
    char* const result_17 = result_1
    
    if (result_17 != 0)
        result_38 = result_17
    
    int32_t esi_33
    
    while (true)
        result_17.b = *result_38
        char temp42_1 = *edx_46
        bool c_15 = result_17.b u< temp42_1
        bool z_29 = result_17.b == temp42_1
        char var_55_29 = result_17.b
        result_17 = result_1
        
        if (z_29)
            if (var_55_29 == 0)
                esi_33 = 0
                break
            
            result_17.b = result_38[1]
            char temp43_1 = edx_46[1]
            c_15 = result_17.b u< temp43_1
            bool z_30 = result_17.b == temp43_1
            char var_55_30 = result_17.b
            result_17 = result_1
            
            if (z_30)
                result_38 = &result_38[2]
                edx_46 = &edx_46[2]
                
                if (var_55_30 != 0)
                    continue
                
                esi_33 = 0
                break
        
        esi_33 = sbb.d(esi_31, esi_31, c_15) | 1
        break
    
    int32_t var_14_29 = 0xe
    
    if (data_cdf414 != 0 && result_17 != 0 && *result_17 != 0)
        char* eax_69 = sub_44f000(&result_1)
        int32_t temp44_1 = *(eax_69 + 4)
        *(eax_69 + 4) -= 1
        
        if (temp44_1 == 1)
            sub_45d050(eax_69, *(eax_69 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_14_30 = 0xffffffff
    
    if (esi_33 == 0)
        int32_t eax_71 = sub_41af20(*(arg2 + 8) + 1)
        int32_t var_30_1 = esi_33
        int32_t var_28_3 = esi_33
        void* esi_35 = data_65aabc
        int32_t eax_72 = *data_5c2e30
        int64_t var_48
        __builtin_memset(&var_48, 0, 0x18)
        var_54 = eax_72
        int32_t var_50_3 = 0xa
        int32_t var_4c_3 = eax_71
        int32_t var_2c_3 = 1
        
        if (esi_35 == 0)
            sub_44e4d0(eax_72, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        esi_33 = *(esi_35 + 0x648)
        void* eax_73 = sub_41ad20()
        sub_436b50(eax_73, esi_33, eax_73, &var_54)
    
    sub_44f240(&result_1, "btn_focus")
    int32_t var_14_31 = 0xf
    
    if (data_cdf414 != 0)
        char* const result_18 = result_1
        
        if (result_18 != 0 && *result_18 != 0)
            char* eax_74 = sub_44f000(&result_1)
            int32_t temp46_1 = *(eax_74 + 4)
            *(eax_74 + 4) -= 1
            
            if (temp46_1 == 1)
                sub_45d050(eax_74, *(eax_74 + 0xc) + 0x10)
    
    int32_t var_14_32 = 0xffffffff
    sub_44f240(&result_1, "btn_zoom_dismiss")
    char* const result_39 = &data_5559b1
    char* edx_53 = *(arg2 + 4)
    char* const result_19 = result_1
    
    if (result_19 != 0)
        result_39 = result_19
    
    int32_t esi_36
    
    while (true)
        result_19.b = *result_39
        char temp45_1 = *edx_53
        bool c_16 = result_19.b u< temp45_1
        bool z_31 = result_19.b == temp45_1
        char var_55_31 = result_19.b
        result_19 = result_1
        
        if (z_31)
            if (var_55_31 == 0)
                esi_36 = 0
                break
            
            result_19.b = result_39[1]
            char temp47_1 = edx_53[1]
            c_16 = result_19.b u< temp47_1
            bool z_32 = result_19.b == temp47_1
            char var_55_32 = result_19.b
            result_19 = result_1
            
            if (z_32)
                result_39 = &result_39[2]
                edx_53 = &edx_53[2]
                
                if (var_55_32 != 0)
                    continue
                
                esi_36 = 0
                break
        
        esi_36 = sbb.d(esi_33, esi_33, c_16) | 1
        break
    
    int32_t var_14_33 = 0x10
    
    if (data_cdf414 != 0 && result_19 != 0 && *result_19 != 0)
        char* eax_76 = sub_44f000(&result_1)
        int32_t temp48_1 = *(eax_76 + 4)
        *(eax_76 + 4) -= 1
        
        if (temp48_1 == 1)
            sub_45d050(eax_76, *(eax_76 + 0xc) + 0x10)
    
    int32_t var_14_34 = 0xffffffff
    
    if (esi_36 == 0)
        result_39.b = 0
        sub_43e800(result_39.b)
    
    sub_44f240(&result_1, "btn_zoom_dismiss_tray")
    void* result_40 = &data_5559b1
    char* edx_56 = *(arg2 + 4)
    char* const result_20 = result_1
    
    if (result_20 != 0)
        result_40 = result_20
    
    int32_t esi_38
    
    while (true)
        result_20.b = *result_40
        char temp49_1 = *edx_56
        bool c_17 = result_20.b u< temp49_1
        bool z_33 = result_20.b == temp49_1
        char var_55_33 = result_20.b
        result_20 = result_1
        
        if (z_33)
            if (var_55_33 == 0)
                esi_38 = 0
                break
            
            result_20.b = *(result_40 + 1)
            char temp50_1 = edx_56[1]
            c_17 = result_20.b u< temp50_1
            bool z_34 = result_20.b == temp50_1
            char var_55_34 = result_20.b
            result_20 = result_1
            
            if (z_34)
                result_40 += 2
                edx_56 = &edx_56[2]
                
                if (var_55_34 != 0)
                    continue
                
                esi_38 = 0
                break
        
        esi_38 = sbb.d(esi_36, esi_36, c_17) | 1
        break
    
    int32_t var_14_35 = 0x11
    
    if (data_cdf414 != 0 && result_20 != 0 && *result_20 != 0)
        char* eax_78 = sub_44f000(&result_1)
        int32_t temp51_1 = *(eax_78 + 4)
        *(eax_78 + 4) -= 1
        
        if (temp51_1 == 1)
            sub_45d050(eax_78, *(eax_78 + 0xc) + 0x10)
    
    int32_t var_14_36 = 0xffffffff
    
    if (esi_38 == 0)
        data_5bcb00 = 0xffffffff
        data_5bcaf8 = 0
        data_5bcaf0 = 0
    
    sub_44f240(&result_1, "btn_dismiss_zoom_opponent")
    void* result_41 = &data_5559b1
    char* edx_59 = *(arg2 + 4)
    char* const result_21 = result_1
    
    if (result_21 != 0)
        result_41 = result_21
    
    int32_t esi_40
    
    while (true)
        result_21.b = *result_41
        char temp52_1 = *edx_59
        bool c_18 = result_21.b u< temp52_1
        bool z_35 = result_21.b == temp52_1
        char var_55_35 = result_21.b
        result_21 = result_1
        
        if (z_35)
            if (var_55_35 == 0)
                esi_40 = 0
                break
            
            result_21.b = *(result_41 + 1)
            char temp53_1 = edx_59[1]
            c_18 = result_21.b u< temp53_1
            bool z_36 = result_21.b == temp53_1
            char var_55_36 = result_21.b
            result_21 = result_1
            
            if (z_36)
                result_41 += 2
                edx_59 = &edx_59[2]
                
                if (var_55_36 != 0)
                    continue
                
                esi_40 = 0
                break
        
        esi_40 = sbb.d(esi_38, esi_38, c_18) | 1
        break
    
    int32_t var_14_37 = 0x12
    
    if (data_cdf414 != 0 && result_21 != 0 && *result_21 != 0)
        char* eax_80 = sub_44f000(&result_1)
        int32_t temp54_1 = *(eax_80 + 4)
        *(eax_80 + 4) -= 1
        
        if (temp54_1 == 1)
            sub_45d050(eax_80, *(eax_80 + 0xc) + 0x10)
    
    int32_t var_14_38 = 0xffffffff
    int32_t eax_81 = data_5bcb00
    
    if (esi_40 == 0)
        eax_81 = 0xffffffff
    
    data_5bcb00 = eax_81
    sub_44f240(&result_1, "btn_zoom")
    void* result_42 = &data_5559b1
    char* edx_62 = *(arg2 + 4)
    char* const result_22 = result_1
    
    if (result_22 != 0)
        result_42 = result_22
    
    int32_t esi_42
    
    while (true)
        result_22.b = *result_42
        char temp55_1 = *edx_62
        bool c_19 = result_22.b u< temp55_1
        bool z_37 = result_22.b == temp55_1
        char var_55_37 = result_22.b
        result_22 = result_1
        
        if (z_37)
            if (var_55_37 == 0)
                esi_42 = 0
                break
            
            result_22.b = *(result_42 + 1)
            char temp56_1 = edx_62[1]
            c_19 = result_22.b u< temp56_1
            bool z_38 = result_22.b == temp56_1
            char var_55_38 = result_22.b
            result_22 = result_1
            
            if (z_38)
                result_42 += 2
                edx_62 = &edx_62[2]
                
                if (var_55_38 != 0)
                    continue
                
                esi_42 = 0
                break
        
        esi_42 = sbb.d(esi_40, esi_40, c_19) | 1
        break
    
    int32_t var_14_39 = 0x13
    
    if (data_cdf414 != 0 && result_22 != 0 && *result_22 != 0)
        char* eax_83 = sub_44f000(&result_1)
        int32_t temp57_1 = *(eax_83 + 4)
        *(eax_83 + 4) -= 1
        
        if (temp57_1 == 1)
            sub_45d050(eax_83, *(eax_83 + 0xc) + 0x10)
    
    int32_t var_14_40 = 0xffffffff
    
    if (esi_42 == 0)
        int32_t eax_85 = sub_41af20(*(arg2 + 8) + 1)
        bool cond:5_1 = data_5bcb00 == eax_85
        data_5bcaf8 = 0
        
        if (cond:5_1)
            eax_85 = 0xffffffff
        
        data_5bcaf0 = 0
        data_5bcb00 = eax_85
        
        if (sub_443fc0() != 0 && *(sub_443fc0() + 0x14) == 8)
            sub_443df0(esi_42 + 8)
    
    sub_44f240(&result_1, "btn_zoomed_lArrow")
    void* result_43 = &data_5559b1
    char* edx_65 = *(arg2 + 4)
    char* const result_23 = result_1
    
    if (result_23 != 0)
        result_43 = result_23
    
    int32_t esi_44
    
    while (true)
        result_23.b = *result_43
        char temp58_1 = *edx_65
        bool c_20 = result_23.b u< temp58_1
        bool z_39 = result_23.b == temp58_1
        char var_55_39 = result_23.b
        result_23 = result_1
        
        if (z_39)
            if (var_55_39 == 0)
                esi_44 = 0
                break
            
            result_23.b = *(result_43 + 1)
            char temp59_1 = edx_65[1]
            c_20 = result_23.b u< temp59_1
            bool z_40 = result_23.b == temp59_1
            char var_55_40 = result_23.b
            result_23 = result_1
            
            if (z_40)
                result_43 += 2
                edx_65 = &edx_65[2]
                
                if (var_55_40 != 0)
                    continue
                
                esi_44 = 0
                break
        
        esi_44 = sbb.d(esi_42, esi_42, c_20) | 1
        break
    
    int32_t var_14_41 = 0x14
    
    if (data_cdf414 != 0 && result_23 != 0 && *result_23 != 0)
        char* eax_89 = sub_44f000(&result_1)
        int32_t temp60_1 = *(eax_89 + 4)
        *(eax_89 + 4) -= 1
        
        if (temp60_1 == 1)
            sub_45d050(eax_89, *(eax_89 + 0xc) + 0x10)
    
    int32_t var_14_42 = 0xffffffff
    
    if (esi_44 == 0)
        sub_43a240(0)
    
    sub_44f240(&result_1, "btn_zoomed_rArrow")
    char* ecx_100 = *(arg2 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_46
    
    while (true)
        char edx_68 = *result_2
        char temp61_1 = *ecx_100
        bool c_21 = edx_68 u< temp61_1
        
        if (edx_68 == temp61_1)
            if (edx_68 == 0)
                esi_46 = 0
                break
            
            edx_68 = result_2[1]
            char temp62_1 = ecx_100[1]
            c_21 = edx_68 u< temp62_1
            
            if (edx_68 == temp62_1)
                result_2 = &result_2[2]
                ecx_100 = &ecx_100[2]
                
                if (edx_68 != 0)
                    continue
                
                esi_46 = 0
                break
        
        esi_46 = sbb.d(esi_44, esi_44, c_21) | 1
        break
    
    int32_t var_14_43 = 0x15
    
    if (data_cdf414 != 0 && result != 0 && *result != 0)
        result = sub_44f000(&result_1)
        int32_t temp63_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp63_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    int32_t var_14_44 = 0xffffffff
    
    if (esi_46 == 0)
        result = sub_43a240(esi_46 + 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
