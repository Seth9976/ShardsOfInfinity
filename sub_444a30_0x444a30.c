// 函数名称: sub_444a30
// 虚拟地址: 0x444a30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_444a30(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    
    if (arg1[0x114] != 0)
        if (arg1[0x4e] != 9)
            char var_115 = 0
            char var_116 = 0
            char var_117
            int128_t var_bc
            int128_t* eax_8 = sub_445190(&var_bc, &var_117, arg1, &var_bc)
            int128_t var_114 = *eax_8
            int128_t var_104 = eax_8[1]
            int128_t var_f4 = eax_8[2]
            int128_t var_e4 = eax_8[3]
            int32_t eax_9 = eax_8[5].d
            int32_t var_c4 = eax_9
            int128_t var_d4 = eax_8[4]
            char var_118
            int128_t var_64
            int128_t* eax_10 = sub_445190(eax_9, &var_118, &arg1[0x1a], &var_64)
            var_bc = *eax_10
            int128_t var_ac = eax_10[1]
            int128_t var_9c = eax_10[2]
            int128_t var_8c = eax_10[3]
            int32_t var_6c = eax_10[5].d
            int128_t var_7c = eax_10[4]
            void var_17c
            char var_119
            int128_t* eax_13 = sub_445190(&var_17c, &var_119, &arg1[0x34], &var_17c)
            bool cond:0 = var_117 != 0
            int32_t var_14 = eax_13[5].d
            var_64 = *eax_13
            int128_t var_54 = eax_13[1]
            int128_t var_44 = eax_13[2]
            int128_t var_34 = eax_13[3]
            int128_t var_24 = eax_13[4]
            char var_124_1
            
            if (not(cond:0) && var_118 == 0)
                var_124_1 = 0
            
            if (cond:0 || var_118 != 0 || var_119 != 0)
                var_124_1 = 1
            
            void* eax_15 = arg1[0x4e]
            char const* const var_1f0_2
            int32_t var_1ec_2
            char const* const var_1e8_4
            char* ecx_5
            float var_1e8_7
            int128_t* ecx_4
            int128_t xmm0_27
            int128_t xmm1_4
            int128_t xmm2_3
            int128_t xmm3_7
            int128_t xmm4_4
            
            if (eax_15 u> 8)
                var_1e8_4 = "MoveComponent<struct ShLoc>::MoveUpdate"
                var_1ec_2 = 0xe1
                var_1f0_2 = "c:\ax2017\jams\shards\code\cardmotion.h"
                ecx_5 = "Halt"
            else
                switch (eax_15)
                    case nullptr, 6
                        int128_t* var_1e8_6 = eax_13
                        var_1e8_7 = 0f
                    label_444d70:
                        int128_t* eax_23
                        eax_23, ecx_4 = sub_42c000(&var_17c, &var_64, &var_114, arg2, &var_17c, 
                            &arg1[0x117], &var_116, var_124_1, var_1e8_7)
                        ecx_4.b = var_116
                        var_115 = ecx_4.b
                        xmm0_27 = *eax_23
                        xmm1_4 = eax_23[1]
                        xmm2_3 = eax_23[2]
                        xmm3_7 = eax_23[3]
                        xmm4_4 = eax_23[4]
                        eax_15 = eax_23[5].d
                    label_444e93:
                        
                        if (ecx_4.b == 0)
                            __builtin_memcpy(&arg1[0x1a], &arg1[0x34], 0x68)
                            *(arg1 + 0x7c) = xmm0_27
                            arg1[0x1a] = 0
                            *(arg1 + 0x8c) = xmm1_4
                            *(arg1 + 0x9c) = xmm2_3
                            *(arg1 + 0xac) = xmm3_7
                            *(arg1 + 0xbc) = xmm4_4
                            arg1[0x33] = eax_15
                            eax_15.b = var_115
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return eax_15
                        
                        arg1[0x117] = 0
                        __builtin_memcpy(&arg1[0x1a], &arg1[0x34], 0x68)
                        bool cond:3_1 = arg1[0x1a] == 1
                        __builtin_memcpy(arg1, &arg1[0x1a], 0x68)
                        
                        if (cond:3_1)
                            int32_t eax_31 = arg1[0x114] - 1
                            arg1[0x114] = eax_31
                            sub_51dd40(&arg1[0x34], &arg1[0x50], eax_31 * 0x70)
                            char* eax_35
                            eax_35.b = var_115
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return eax_35
                        
                        var_1e8_4 = "MoveComponent<struct ShLoc>::MoveUpdate"
                        var_1ec_2 = 0xe9
                        var_1f0_2 = "c:\ax2017\jams\shards\code\cardmotion.h"
                        ecx_5 = "locCurrent.type == LOC_USER"
                    case 1
                        float xmm1_6 = var_bc.d f- var_64.d
                        float xmm0_29 = var_bc:4.d f- var_64:4.d
                        
                        if (25f > xmm1_6 * xmm1_6 + xmm0_29 * xmm0_29)
                            goto label_444e70
                        
                        eax_15 = data_65ac30
                        
                        if (eax_15 != 0)
                            int32_t eax_24 = *(eax_15 + 8)
                            int128_t* eax_28
                            float xmm3_9
                            
                            if (eax_24 == 0)
                                xmm3_9 = 0.0500000007f
                                void var_1d4
                                eax_28 = &var_1d4
                            else if (eax_24 == 1)
                                xmm3_9 = 0.100000001f
                                eax_28 = &var_114
                            else
                                if (eax_24 != 2)
                                    sub_44e4d0(eax_24 - 2, &data_5559b1, "Halt", 
                                        "c:\ax2017\jams\shards\code\cardmotion.cpp", 0x6f, "MoveToExp")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                xmm3_9 = 0.899999976f
                                eax_28 = &var_17c
                            
                            int128_t* eax_29
                            eax_29, ecx_4 = sub_419d90(eax_28, &var_64, &var_bc, xmm3_9, eax_28)
                            xmm0_27 = *eax_29
                            xmm1_4 = eax_29[1]
                            xmm2_3 = eax_29[2]
                            xmm3_7 = eax_29[3]
                            xmm4_4 = eax_29[4]
                            eax_15 = eax_29[5].d
                            goto label_444e8d
                        
                        var_1e8_4 = "GetLocalSettings"
                        var_1ec_2 = 0x23d
                        var_1f0_2 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                        ecx_5 = "gGameSettings.localSettings"
                    case 2, 3
                        eax_15 = data_65ac30
                        
                        if (eax_15 != 0)
                            int32_t eax_16 = *(eax_15 + 8)
                            float xmm2_1
                            
                            if (eax_16 == 0)
                                xmm2_1 = 500f
                            label_444c8d:
                                float xmm5_1 = var_bc.d
                                float xmm6_1 = var_bc:4.d
                                float xmm3_1 = var_64.d
                                float xmm4_1 = var_64:4.d
                                float xmm1_1 = xmm5_1 - xmm3_1
                                float xmm2_2 = xmm2_1 * arg2
                                float xmm0_21 = xmm6_1 - xmm4_1
                                
                                if (xmm2_2 * xmm2_2 > xmm1_1 * xmm1_1 + xmm0_21 * xmm0_21)
                                    goto label_444e70
                                
                                float xmm3_2 = xmm3_1 - xmm5_1
                                float xmm4_2 = xmm4_1 - xmm6_1
                                int128_t* eax_20
                                eax_20, ecx_4 = sub_419d90(&var_17c, &var_64, &var_bc, 
                                    xmm2_2 / sub_412d90(xmm3_2 * xmm3_2 + xmm4_2 * xmm4_2), &var_17c)
                                xmm0_27 = *eax_20
                                xmm1_4 = eax_20[1]
                                xmm2_3 = eax_20[2]
                                xmm3_7 = eax_20[3]
                                xmm4_4 = eax_20[4]
                                eax_15 = eax_20[5].d
                                goto label_444e8d
                            
                            if (eax_16 == 1)
                                xmm2_1 = 1000f
                                goto label_444c8d
                            
                            eax_15 = eax_16 - 2
                            
                            if (eax_16 == 2)
                                xmm2_1 = 2000f
                                goto label_444c8d
                            
                            var_1e8_4 = "MoveToLinear"
                            var_1ec_2 = 0x18
                            var_1f0_2 = "c:\ax2017\jams\shards\code\cardmotion.cpp"
                            ecx_5 = "Halt"
                        else
                            var_1e8_4 = "GetLocalSettings"
                            var_1ec_2 = 0x23d
                            var_1f0_2 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                            ecx_5 = "gGameSettings.localSettings"
                    case 4, 5
                        goto label_444e77
                    case 7
                        int128_t* var_1e8_8 = eax_13
                        var_1e8_7 = 0.400000006f
                        goto label_444d70
                    case 8
                    label_444e70:
                        var_115 = 1
                    label_444e77:
                        eax_15 = eax_13[5].d
                        xmm4_4 = eax_13[4]
                        xmm3_7 = eax_13[3]
                        xmm2_3 = eax_13[2]
                        xmm1_4 = eax_13[1]
                        xmm0_27 = *eax_13
                    label_444e8d:
                        ecx_4.b = var_115
                        goto label_444e93
            sub_44e4d0(eax_15, &data_5559b1, ecx_5, var_1f0_2, var_1ec_2, var_1e8_4)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        float xmm0_1 = arg2 * 1000f
        float xmm0_2
        
        if (0 f<= xmm0_1)
            xmm0_2 = xmm0_1 + 0.5f
        else
            xmm0_2 = xmm0_1 - 0.5f
        
        arg1[0x4f] -= int.d(xmm0_2)
        
        if (not(0 f< _mm_cvtepi32_ps(zx.o(arg1[0x4f]))))
            __builtin_memcpy(&arg1[0x34], &arg1[0x1a], 0x68)
            int32_t eax_3 = arg1[0x114] - 1
            arg1[0x114] = eax_3
            sub_51dd40(&arg1[0x34], &arg1[0x50], eax_3 * 0x70)
            char* eax_6
            eax_6.b = 1
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_6
    
    int32_t eax_1
    eax_1.b = 0
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return eax_1
}
