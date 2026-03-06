// 函数名称: sub_434ea0
// 虚拟地址: 0x434ea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_434ea0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_541e50
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_11c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_65ae00
    int32_t var_b4 = 0
    int32_t var_b0 = 0
    int32_t var_a4 = 0
    uint128_t xmm1 = zx.o(*(eax_3 + 0x18))
    int32_t xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    int32_t var_a0 = 0
    int32_t xmm1_1 = _mm_cvtepi32_ps(xmm1)
    int32_t var_ac = xmm0_1
    int32_t var_a8 = xmm1_1
    int32_t var_9c = xmm0_1
    int32_t var_98 = xmm1_1
    void var_110
    int128_t* eax_5 = sub_434630(&var_110, arg2, arg2, &var_110)
    int128_t var_80 = *eax_5
    int128_t var_70 = eax_5[1]
    int128_t var_60 = eax_5[2]
    int128_t var_50 = eax_5[3]
    int32_t var_30 = eax_5[5].d
    int128_t var_40 = eax_5[4]
    int32_t eax_7 = sub_4338d0(arg2)
    float xmm0_7 = arg2[0x155]
    uint32_t (* edx)[0x4] = nullptr
    
    if (arg2[4] != 0xffffffff)
        edx = arg2[4]
    
    if (not(xmm0_7 <= 0f))
        float xmm0_9 = sub_4297a0(xmm0_7 * 1000f)
        float xmm0_10
        
        if (0 f<= xmm0_9)
            xmm0_10 = xmm0_9 + 0.5f
        else
            xmm0_10 = xmm0_9 - 0.5f
        
        edx = int.d(xmm0_10) + 0x3e8
    
    if (edx == 0x3e8)
        sub_44e4d0(eax_7, &data_5559b1, "sublayer != 1000", 
            "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x7a8, "ShDeclareCard")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_462b10(&var_b4, &arg2[0x14c], "card", data_dfcf94, &var_b4, &var_a4, eax_7, edx, 0)
    sub_469ac0(arg2[0x14c], &var_80)
    uint32_t eax_10 = zx.d((arg2[1]).w)
    
    if (eax_10 u>= 0xc8)
        sub_44e4d0(eax_10, &data_5559b1, "idNoMimic < MAX_CARDS", 
            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    *((eax_10 << 5) + arg1 + 0x14)
    
    if (sub_443fc0() != 0)
        void* eax_14
        int32_t ecx_4
        eax_14, ecx_4 = sub_443fc0()
        
        if (*(eax_14 + 0x18) == 0x15)
            int32_t var_120_1 = 0xffffffff
            int32_t var_124_1 = ecx_4
            sub_443fc0()
            sub_469930(arg2[0x14c])
    
    int32_t eax_16 = data_65ac30
    
    if (eax_16 == 0)
        sub_44e4d0(eax_16, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_120_2 = 0xffffffff
    *(eax_16 + 0xc)
    sub_469930(arg2[0x14c])
    void* eax_17 = sub_4153c0()
    int32_t ecx_7 = arg2[0x13c]
    char edx_7 = 0
    void* var_84_1 = eax_17
    
    if (ecx_7 == 0)
        if (arg2[0x42] != 1 || arg2[0x43] != 0x11)
            goto label_4350e0
        
        eax_17.b = 1
        goto label_4350e2
    
    if (arg2[0x28] == 1 && arg2[0x29] == 0x11 && arg2[0x5c] == 1 && arg2[0x5d] == 0x11)
        goto label_4350e9
    
    label_4350e0:
    eax_17.b = 0
    label_4350e2:
    
    if (eax_17.b != 0)
        eax_17 = var_84_1
    label_4350e9:
        
        if (eax_17 s> 0)
            int32_t var_120_3 = 0xffffffff
            eax_17 = sub_469930(arg2[0x14c])
            ecx_7 = arg2[0x13c]
            edx_7 = 1
    
    int32_t var_120_4
    bool cond:2_1
    
    if (ecx_7 != 0)
        if (arg2[0x28] == 1 && arg2[0x29] == 0x12 && arg2[0x5c] == 1)
            cond:2_1 = arg2[0x5d] != 0x12
            goto label_43513e
        
    label_435162:
        
        if (edx_7 == 0)
            eax_17 = sub_42b100()
            
            if (*(eax_17 + 0x24) == 1)
                var_120_4 = 0xffffffff
                eax_17 = sub_469930(arg2[0x14c])
    else
        if (arg2[0x42] != 1)
            goto label_435162
        
        cond:2_1 = arg2[0x43] != 0x12
    label_43513e:
        
        if (cond:2_1)
            goto label_435162
        
        float xmm0_11 = arg2[0x155]
        xmm0_11 - 0f
        eax_17:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
            | (xmm0_11 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2 || var_84_1 s<= 0)
            goto label_435162
        
        var_120_4 = 0xffffffff
        eax_17 = sub_469930(arg2[0x14c])
    void* ecx_11 = data_65aabc
    
    if (ecx_11 == 0)
        sub_44e4d0(eax_17, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_19
    
    if (arg2[2] == *(ecx_11 + 0x648))
        eax_19 = arg2[3]
    
    if (arg2[2] == *(ecx_11 + 0x648) && (eax_19 == 7 || eax_19 == 0xa))
        goto label_4351c8
    
    if (arg2[3] == 4)
        eax_19 = sub_434410(arg2[1])
        
        if (eax_19.b != 0)
            ecx_11 = data_65aabc
        label_4351c8:
            
            if (ecx_11 == 0)
                sub_44e4d0(eax_19, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_20 = data_5c2e30
            int32_t ecx_12 = *(ecx_11 + 0x648)
            
            if (*(eax_20 + 4) == ecx_12)
                if (data_5c2e2c == 0)
                    sub_44e4d0(eax_20, &data_5559b1, "gShardsClient.g", 
                        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x26fe, "ShGameGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t var_120_5 = 2
                
                if (sub_434380(eax_20, (arg2[1]).w, ecx_12, 0x800000) != 0)
                    void* eax_22 = data_5c2e2c
                    void* eax_23 = sub_445b50(eax_22, ecx_12)
                    char var_85_1
                    int32_t eax_24
                    int32_t edx_12
                    
                    if (*(eax_23 + 0x21) == 0)
                        eax_24, edx_12 = sub_446540(eax_23, 3, eax_22, 7, ecx_12)
                        var_85_1 = 0
                    
                    if (*(eax_23 + 0x21) != 0 || eax_24 s> 0)
                        var_85_1 = 1
                    
                    char var_86_1
                    int32_t eax_26
                    
                    if (*(eax_23 + 0x1f) == 0)
                        eax_26, edx_12 = sub_446540(eax_23, 1, eax_22, 7, ecx_12)
                        var_86_1 = 0
                    
                    if (*(eax_23 + 0x1f) != 0 || eax_26 s> 0)
                        var_86_1 = 1
                    
                    int32_t eax_28
                    
                    if (*(eax_23 + 0x22) == 0)
                        eax_28, edx_12 = sub_446540(eax_23, 4, eax_22, 7, ecx_12)
                    
                    if (*(eax_23 + 0x22) != 0 || eax_28 s> 0)
                        edx_12.b = 1
                    else
                        edx_12.b = 0
                    
                    char ecx_18 = var_85_1 | 4
                    int32_t var_120_9 = 0xffffffff
                    
                    if (var_86_1 == 0)
                        ecx_18 = var_85_1
                    
                    char eax_31 = ecx_18 | 2
                    
                    if (edx_12.b == 0)
                        eax_31 = ecx_18
                    
                    sub_469930(arg2[0x14c])
                    char eax_32 = eax_31
                    
                    if ((eax_32 & 1) == 0)
                        int32_t var_120_10 = 0xffffffff
                        sub_469930(arg2[0x14c])
                        eax_32 = eax_31
                    
                    if ((eax_32 & 4) == 0)
                        int32_t var_120_11 = 0xffffffff
                        sub_469930(arg2[0x14c])
                        eax_32 = eax_31
                    
                    if ((eax_32 & 2) == 0)
                        int32_t var_120_12 = 0xffffffff
                        sub_469930(arg2[0x14c])
    
    int32_t var_120_13 = 0xffffffff
    sub_469930(arg2[0x14c])
    
    if (sub_4383c0(arg2[1], nullptr) != 0)
        int32_t ecx_25 = data_5c2dbc
        int32_t eax_34 = 0
        
        if (ecx_25 s<= 0)
        label_43535e:
            int32_t* eax_35 = data_5c2e30
            int32_t edx_20 = eax_35[0xcb]
            
            if (ecx_25 s< edx_20 || edx_20 == 0xffffffff)
                if (*eax_35 != 2)
                    int32_t eax_37 = sub_434ae0(arg2)
                    
                    if (eax_37 != 0 && eax_37 - 1 u> 3)
                        sub_44e4d0(eax_37 - 1, &data_5559b1, "Halt", 
                            "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x8d8, "ShDeclareCard")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                
                int32_t var_120_15 = 0xffffffff
                sub_469930(arg2[0x14c])
        else
            while (*((eax_34 << 2) + &data_5c2d9c) != arg2[1])
                eax_34 += 1
                
                if (eax_34 s>= ecx_25)
                    goto label_43535e
            
            int32_t var_120_14 = 0xffffffff
            *data_5c2e30
            sub_469930(arg2[0x14c])
    
    if (*(arg2 + 0x15) != 0)
        int32_t var_120_16 = 0xffffffff
        sub_469930(arg2[0x14c])
    
    if (arg2[5].b != 0)
        int32_t var_120_17 = 0xffffffff
        sub_469930(arg2[0x14c])
    
    if (*(arg2 + 0x16) != 0)
        int32_t var_120_18 = 0xffffffff
        sub_469930(arg2[0x14c])
    
    struct _EXCEPTION_REGISTRATION_RECORD** result = sub_466e80(arg2[0x14c], data_5b0f3c)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
