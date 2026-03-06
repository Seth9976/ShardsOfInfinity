// 函数名称: sub_415d70
// 虚拟地址: 0x415d70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_415d70(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    
    if (*arg2 != 0)
        void var_33c
        sub_481a70(eax_1, arg1, &var_33c, &data_571dbc, 9)
        char var_338
        
        if (var_338 == 0)
        label_4160bd:
            void* eax_12 = sub_415b50(arg1, arg2)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_12
        
        char const* const var_398_1
        int32_t var_394_2
        char const* const var_390_2
        char* ecx_4
        
        if (*arg2 == 1 && (arg2[1].b & 6) != 0)
            int32_t eax_3 = (*arg2[0xd])()
            
            if (eax_3 != (*arg2[2])())
                goto label_415e3c
            
            if (eax_3(&arg2[0xd], &arg2[2]) == 0)
                goto label_415e3c
            
            eax_1 = data_65aabc
            
            if (eax_1 != 0)
                int32_t ecx_5 = *eax_1
                int32_t eax_7 = sbb.d(eax_1[1], arg2[0x19], ecx_5 u< arg2[0x18])
                
                if (eax_7 s> 0 || (eax_7 s>= 0 && ecx_5 - arg2[0x18] u> 0x1f4))
                    goto label_4160bd
                
                goto label_415e3c
            
            var_390_2 = "GetClient"
            var_394_2 = 0x74
            var_398_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_4 = "gClient"
        label_4160ec:
            sub_44e4d0(eax_1, &data_5559b1, ecx_4, var_398_1, var_394_2, var_390_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
    label_415e3c:
        float var_344 = arg2[0x1c]
        float xmm0_2 = arg2[0x1d]
        sub_481020(arg1, &var_344)
        struct InputHitResult::HitResult::VTable* var_380
        struct InputHitResult::HitResult::VTable** eax_8 = sub_4158d0(&var_380, arg1)
        float xmm3_1 = var_344
        float xmm2_1 = xmm0_2
        arg2[0xe] = eax_8[1]
        arg2[0xf] = eax_8[2]
        arg2[0x11] = eax_8[4]
        arg2[0x12] = eax_8[5]
        arg2[0x13] = eax_8[6]
        arg2[0x14] = eax_8[7]
        *(arg2 + 0x54) = *(eax_8 + 0x20)
        arg2[0x17] = eax_8[0xa]
        
        if (*arg2 != 1)
            goto label_415fca
        
        float xmm5_1 = arg2[0x1a]
        float xmm6_1 = arg2[0x1b]
        int32_t xmm4_1 = sub_41b760(xmm3_1 - xmm5_1)
        int32_t xmm0_8 = sub_41b760(xmm2_1 - xmm6_1)
        
        if (not(xmm4_1 f> xmm0_8))
            xmm4_1 = xmm0_8
        
        if (not(20f f>= xmm4_1))
            if (sub_41b760(xmm3_1 - xmm5_1) f<= 20f || (arg2[1].b & 0x10) == 0)
                if (not(sub_41b760(xmm2_1 - xmm6_1) f<= 20f) && (arg2[1].b & 0x20) != 0)
                    *arg2 = 5
                    eax_1 = 5
                    goto label_415fd1
                
                if (not(sub_41b760(xmm3_1 - xmm5_1) f<= 20f) && (arg2[1].b & 0x40) != 0)
                    *arg2 = 2
                    eax_1 = 2
                    goto label_415fd1
                
                if (not(sub_41b760(xmm2_1 - xmm6_1) f<= 20f) && (arg2[1].b & 0x80) != 0)
                    *arg2 = 3
                    eax_1 = 3
                    goto label_415fd1
                
                if ((arg2[1].b & 8) == 0)
                    goto label_415fca
                
                *arg2 = 6
                sub_4414a0(&var_344, &arg2[2], arg1, nullptr, &data_571d90, &data_571d90, &var_344)
                xmm2_1 = xmm0_2
                xmm3_1 = var_344
            label_415fca:
                eax_1 = *arg2
                
                if (eax_1 == 6 || eax_1 == 5 || eax_1 == 4)
                label_415fed:
                    float xmm1_4 = xmm3_1 f- arg2[0x1a]
                    float xmm4_3 = xmm2_1 f- arg2[0x1b]
                    
                    if (eax_1 != 4)
                        bool cond:0_1 = eax_1 != 3
                        eax_1 = arg2[3]
                        
                        if (not(cond:0_1))
                            if (eax_1 != 3 && eax_1 != 1)
                            label_4160d3:
                                var_390_2 = "GameSpecific_DragUpdateAction"
                                var_394_2 = 0x224b
                                ecx_4 = "item.type == HIT_GFX"
                                var_398_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                                goto label_4160ec
                            
                            arg2[0x1c] = var_344
                            arg2[0x1d] = xmm0_2
                        else if (eax_1 == 3)
                            arg2[0x1c] = var_344
                            arg2[0x1d] = xmm0_2
                        else
                            if (eax_1 != 1)
                                goto label_4160d3
                            
                            data_5bcca8 = arg2[4]
                            data_5bccac = xmm1_4
                            data_5bccb0 = xmm4_3
                            data_5bccb4 = xmm3_1
                            data_5bccb8 = xmm2_1
                            arg2[0x1c] = var_344
                            arg2[0x1d] = xmm0_2
                    else
                        float var_354 = xmm3_1 f- arg2[0x1c]
                        int32_t var_350_1 = 0
                        float var_34c = xmm1_4
                        int32_t var_348_1 = 0
                        sub_4414a0(&var_354, &arg2[2], arg1, 3, &var_354, &var_34c, &var_344)
                        arg2[0x1c] = var_344
                        arg2[0x1d] = xmm0_2
                else
                    arg2[0x1c] = var_344
                    arg2[0x1d] = xmm0_2
            else
                *arg2 = 4
                eax_1 = 4
            label_415fd1:
                
                if (eax_1 == 5 || eax_1 == 4)
                    goto label_415fed
                
                arg2[0x1c] = var_344
                arg2[0x1d] = xmm0_2
    
    eax_1.b = 0
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return eax_1
}
