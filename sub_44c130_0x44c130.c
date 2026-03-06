// 函数名称: sub_44c130
// 虚拟地址: 0x44c130
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_44c130(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t ebx = arg2[1]
    *(arg3 + 0x2168) = arg5
    int32_t* eax_3 = *arg2
    int32_t var_5c_1
    char const* const var_58_1
    char* ecx_1
    
    if (*arg4 != eax_3)
        if (eax_3 == 0xb)
            goto label_44c1a1
        
        var_58_1 = "ShGameResumeOne"
        var_5c_1 = 0xd17
        ecx_1 = "Halt"
    else if (eax_3 == 0xb)
    label_44c1a1:
        int32_t ecx_2 = arg4[1]
        char var_25_1 = 0
        int32_t var_38
        int32_t eax_11
        
        if (ecx_2 u> 0xd)
            var_58_1 = "ShGameResumeOne"
            var_5c_1 = 0xd70
            ecx_1 = "Halt"
        else
            switch (ecx_2)
                case 0
                    sub_44a9e0(eax_3, ebx, arg3, arg4[2])
                label_44c1c7:
                    eax_3.b = var_25_1
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_3
                case 1
                    sub_44ac60(eax_3, ebx, arg3, arg4[2])
                    goto label_44c1c7
                case 2
                    sub_44b260(eax_3, ebx, arg3, arg4[2], arg4[0xb])
                    void* eax_9
                    eax_9.b = var_25_1
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_9
                case 3
                    while (true)
                        if (ebx s< 0)
                            var_58_1 = "GetPileHead"
                            var_5c_1 = 0xb1
                            ecx_1 = "who >= 0"
                            goto label_44c777
                        
                        uint32_t edx_2 = *(sub_445b50(arg3, ebx) + 0x28)
                        uint32_t ecx_7 = edx_2
                        
                        if (ecx_7 == 0)
                            goto label_44c1c7
                        
                        eax_3 = zx.d(ecx_7.w)
                        
                        if (eax_3 u>= 0xc8)
                            break
                        
                        void* esi_1 = (eax_3 << 5) + arg3
                        eax_3 = **(esi_1 + 0x14)
                        
                        if (eax_3 == 0xf)
                            ecx_7 = *(esi_1 + 0xc)
                        
                        if (eax_3 != 0xf)
                            edx_2 = 0
                        
                        if (ecx_7 == 0)
                            if (edx_2 == 0)
                                goto label_44c1c7
                            
                            ecx_7 = edx_2
                        
                        if (*(arg3 + 0x1a04) != 0)
                            goto label_44c1c7
                        
                        eax_3 = sub_44a9e0(eax_3, ebx, arg3, ecx_7)
                    
                label_44c23f:
                    var_58_1 = "CardGet"
                    var_5c_1 = 0x87
                    ecx_1 = "idNoMimic < MAX_CARDS"
                case 4
                    sub_44b3d0(eax_3, ebx, arg3, arg4[2])
                    goto label_44c1c7
                case 5
                    int32_t var_24 = arg4[2]
                    int32_t var_20 = arg4[3]
                    int32_t var_1c = arg4[4]
                    int32_t var_18 = arg4[5]
                    int32_t var_58_22 = ecx_2
                    uint32_t var_10 = ebx
                    int32_t var_14 = arg4[6]
                    int32_t var_c = 0
                    sub_44ba40(arg3, &var_24)
                    uint32_t eax_60
                    eax_60.b = 1
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_60
                case 6
                    uint32_t eax_14 = arg2[0xce]
                    uint32_t eax_15 = arg4[2]
                    eax_3 = zx.d(eax_15.w)
                    
                    if (eax_3 u< 0xc8)
                        int32_t var_58_11 = *(*((eax_3 << 5) + arg3 + 0x14) + 0x24)
                        int32_t var_5c_3 = *sub_445b50(arg3, ebx)
                        char const* const var_60_1 = "%s acquires %s."
                        void* var_64_1 = arg3
                        uint32_t (* eax_19)[0x4] = *(arg3 + 0x2168)
                        uint32_t ecx_24
                        
                        if (eax_19 == 2 || eax_19 == 3)
                            ecx_24 = eax_15
                        else
                            eax_19 = sub_44d360(arg3, ebx)
                            ecx_24 = eax_15
                            (*eax_19)[5] = 4
                            eax_19[2][0] = ecx_24
                        
                        sub_44ae50(eax_19, ebx, arg3, ecx_24, eax_14)
                        goto label_44c419
                    
                label_44c39e:
                    var_58_1 = "CardGet"
                    var_5c_1 = 0x90
                    ecx_1 = "idNoMimic < MAX_CARDS"
                case 7
                    *(sub_445b50(arg3, ebx) + 0x24) = arg4[2]
                    sub_449c10(arg4, ebx, arg3, arg4[2], &arg2[0xd7])
                    var_38 = arg2[0xd7]
                    int32_t var_34_3 = arg2[0xd8] + 1
                    sub_44c050(&var_38, ebx, arg3, &var_38)
                    int32_t* eax_31
                    eax_31.b = var_25_1
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_31
                case 8
                    int32_t ecx_35 = arg4[0xa]
                    void* eax_32 = &arg4[2]
                    int32_t esi_9 = 0
                    void* var_2c_2 = eax_32
                    int32_t var_30_2 = 0
                    
                    if (ecx_35 s<= 0)
                    label_44c588:
                        var_38 = arg2[0xd7]
                        eax_11 = arg2[0xd8]
                        goto label_44c372
                    
                    while (true)
                        eax_3 = zx.d((*(eax_32 + (esi_9 << 2))).w)
                        
                        if (eax_3 u>= 0xc8)
                            goto label_44c39e
                        
                        int32_t var_58_14 = *(*((eax_3 << 5) + arg3 + 0x14) + 0x24)
                        int32_t var_5c_6 = *sub_445b50(arg3, ebx)
                        char const* const var_60_4 = "%s banishes %s."
                        void* var_64_2 = arg3
                        void* ecx_37 = var_2c_2
                        int32_t eax_37 = *(ecx_37 + (var_30_2 << 2))
                        eax_3 = *(arg3 + 0x2168)
                        
                        if (eax_3 != 2 && eax_3 != 3)
                            eax_3 = sub_44d360(arg3, ebx)
                            eax_3[8] = eax_37
                            ecx_37 = var_2c_2
                            eax_3[5] = 7
                            eax_3[9] = 0
                        
                        if (ebx == 0xffffffff)
                            break
                        
                        int32_t esi_12 = *(ecx_37 + (var_30_2 << 2))
                        sub_4461a0(sub_446860(arg3, esi_12), esi_12, arg3, 0xb, ebx)
                        sub_445a20(var_2c_2, 0x22, arg3, ebx, *(var_2c_2 + (var_30_2 << 2)), 0, 0, 0)
                        eax_32 = var_2c_2
                        esi_9 = var_30_2 + 1
                        var_30_2 = esi_9
                        
                        if (esi_9 s>= ecx_35)
                            goto label_44c588
                    
                label_44c596:
                    var_58_1 = "MoveCard"
                    var_5c_1 = 0x294
                    ecx_1 = "where == CW_GLOBAL_DECK || where == CW_GLOBAL_DISCARD"
                case 9
                    uint32_t eax_50 = sub_4491c0(&arg4[2], ebx, arg3, &arg4[2], arg4[0xa], eax_3)
                    
                    if (arg4[0xa] != 0)
                        sub_44c050(eax_50, ebx, arg3, &arg2[0xd7])
                        goto label_44c1c7
                    
                    uint32_t eax_51 = arg2[0xd7]
                    int32_t esi_19 = arg2[0xd8]
                    uint32_t var_44 = eax_51
                    int32_t var_40_3 = esi_19
                    int32_t* eax_52 = sub_447380(arg3, &var_44)
                    
                    if ((*eax_52 & 0x40000000) != 0)
                        sub_44bfb0(sub_4496d0(eax_52, ebx, arg3, eax_51, 1), ebx, arg3, eax_51)
                        goto label_44c431
                    
                    int32_t var_40_4 = esi_19 + 1
                    sub_44c050(&var_44, ebx, arg3, &var_44)
                    goto label_44c1c7
                case 0xa
                    int32_t var_58_18 = ecx_2
                    sub_449d50(eax_3, ebx, arg3, arg4[2])
                label_44c419:
                    var_38 = arg2[0xd7]
                    int32_t var_34_2 = arg2[0xd8] + 1
                    sub_44c050(&var_38, ebx, arg3, &var_38)
                label_44c431:
                    void* eax_24
                    eax_24.b = var_25_1
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_24
                case 0xb
                    sub_447d30(eax_3, ebx, arg3, arg4[2])
                    var_38 = arg2[0xd7]
                    eax_11 = arg2[0xd8]
                label_44c372:
                    int32_t var_34_1 = eax_11 + 1
                    sub_44c050(&var_38, ebx, arg3, &var_38)
                    goto label_44c1c7
                case 0xc
                    int32_t ecx_43 = arg4[0xa]
                    void* eax_41 = &arg4[2]
                    int32_t esi_14 = 0
                    void* var_2c_3 = eax_41
                    int32_t var_30_3 = 0
                    
                    if (ecx_43 s<= 0)
                        goto label_44c588
                    
                    while (true)
                        eax_3 = zx.d((*(eax_41 + (esi_14 << 2))).w)
                        
                        if (eax_3 u>= 0xc8)
                            goto label_44c39e
                        
                        int32_t var_58_16 = *(*((eax_3 << 5) + arg3 + 0x14) + 0x24)
                        int32_t var_5c_7 = *sub_445b50(arg3, ebx)
                        char const* const var_60_5 = "%s returns %s to hand."
                        void* var_64_3 = arg3
                        void* ecx_45 = var_2c_3
                        int32_t eax_46 = *(ecx_45 + (var_30_3 << 2))
                        eax_3 = *(arg3 + 0x2168)
                        
                        if (eax_3 != 2 && eax_3 != 3)
                            eax_3 = sub_44d360(arg3, ebx)
                            eax_3[8] = eax_46
                            ecx_45 = var_2c_3
                            eax_3[5] = 6
                        
                        if (ebx == 0xffffffff)
                            break
                        
                        int32_t esi_17 = *(ecx_45 + (var_30_3 << 2))
                        sub_4461a0(sub_446860(arg3, esi_17), esi_17, arg3, 7, ebx)
                        sub_445a20(var_2c_3, 0x21, arg3, ebx, *(var_2c_3 + (var_30_3 << 2)), 0, 0, 0)
                        eax_41 = var_2c_3
                        esi_14 = var_30_3 + 1
                        var_30_3 = esi_14
                        
                        if (esi_14 s>= ecx_43)
                            goto label_44c588
                    
                    goto label_44c596
                case 0xd
                    if (ebx s>= 0)
                        void* eax_7 = sub_445b50(arg3, ebx)
                        uint32_t esi_2 = *(eax_7 + 0x34)
                        eax_3 = eax_7 + 0x34
                        
                        if (esi_2 == 0)
                            goto label_44c1c7
                        
                        while (true)
                            eax_3 = sub_44ab90(eax_3, ebx, arg3, esi_2)
                            
                            if (eax_3.b != 0)
                                eax_3 = zx.d(esi_2.w)
                                
                                if (eax_3 u>= 0xc8)
                                    break
                                
                                eax_3 = *((eax_3 << 5) + arg3 + 0x14)
                                
                                if (eax_3[0xa] != 3)
                                    eax_3 = sub_44ac60(eax_3, ebx, arg3, esi_2)
                                    
                                    if (*(arg3 + 0x1a04) != 0)
                                        goto label_44c1c7
                            
                            uint32_t esi_3 = zx.d(esi_2.w)
                            
                            if (esi_3 u>= 0xc8)
                                goto label_44c39e
                            
                            esi_2 = *((esi_3 << 5) + arg3 + 0xc)
                            
                            if (esi_2 == 0)
                                eax_3.b = var_25_1
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return eax_3
                        
                        goto label_44c23f
                    
                    var_58_1 = "GetPileHead"
                    var_5c_1 = 0xb7
                    ecx_1 = "who >= 0"
    else
        int32_t ecx = arg2[0xd6]
        
        if (ecx == 1 || (eax_3 == 1 && ecx == 0))
            goto label_44c1a1
        
        var_58_1 = "ShGameResumeOne"
        var_5c_1 = 0xd1d
        ecx_1 = "yld.yieldType == CHOICE_WAITING_FOR_SERVER || yld.yieldRef.type == YIELDREF_POWER || "
        "(yld.yieldType == CHOICE_ACTION && yld.yieldRef.type == YIELDREF_NONE)"
    
    label_44c777:
    sub_44e4d0(eax_3, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_5c_1, 
        var_58_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
