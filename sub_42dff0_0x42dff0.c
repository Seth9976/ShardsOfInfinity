// 函数名称: sub_42dff0
// 虚拟地址: 0x42dff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_42dff0(int32_t arg1, void* arg2, int32_t arg3, int32_t* arg4, void* arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = *arg4
    int32_t var_334 = 0
    uint32_t var_34c = eax_2
    char const* const var_364_2
    int32_t var_360_1
    char const* const var_35c_1
    char* ecx_3
    
    if (eax_2 - 1 u> 8)
        var_35c_1 = "ToActions"
        var_360_1 = 0x27d
        ecx_3 = "Halt"
    label_42e674:
        var_364_2 = "c:\ax2017\jams\shards\code\shardsai.cpp"
    label_42e67e:
        sub_44e4d0(eax_2, &data_5559b1, ecx_3, var_364_2, var_360_1, var_35c_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t var_36c_2
    int32_t var_368_1
    char (* var_364_3)[0x324]
    uint32_t var_360_2
    void* ecx_20
    void* edx_12
    
    switch (eax_2)
        case 1
            sub_42da60(&var_334, arg5, arg2, &var_334, eax_2, 0, arg4[0xcc], arg4[0xcd], 0)
            int32_t ecx_2 = arg4[0xcf]
            char edx_1
            
            if (ecx_2 s> 0)
                eax_2 = zx.d((*arg4[0xce]).w)
                
                if (eax_2 u< 0xc8)
                    if (*(*((eax_2 << 5) + arg2 + 0x14) + 0x28) != 3)
                        goto label_42e0b7
                    
                    edx_1 = 1
                    goto label_42e0b9
                
            label_42e08d:
                var_35c_1 = "CardGet"
                var_360_1 = 0x87
                var_364_2 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
                ecx_3 = "idNoMimic < MAX_CARDS"
                goto label_42e67e
            
        label_42e0b7:
            edx_1 = 0
        label_42e0b9:
            
            if (arg4[0xcd] == 0 && (ecx_2 == 0 || (ecx_2 == 1 && edx_1 != 0)) && arg4[0xd1] s> 1
                    && arg6 != 0)
                int32_t i_6 = 0
                int32_t i_5 = 0
                eax_2 = zx.d((*arg4[0xd0]).w)
                
                if (eax_2 u< 0xc8)
                    int32_t i = 1
                    int32_t var_33c_1 = *(*((eax_2 << 5) + arg2 + 0x14) + 8)
                    
                    if (arg4[0xd1] s> 1)
                        int32_t i_2
                        
                        do
                            eax_2 = zx.d((*(arg4[0xd0] + (i << 2))).w)
                            
                            if (eax_2 u>= 0xc8)
                                goto label_42e08d
                            
                            int32_t ecx_4 = *(*((eax_2 << 5) + arg2 + 0x14) + 8)
                            i_2 = i
                            
                            if (ecx_4 s<= var_33c_1)
                                i_2 = i_5
                            
                            i += 1
                            i_5 = i_2
                            
                            if (ecx_4 s<= var_33c_1)
                                ecx_4 = var_33c_1
                            
                            var_33c_1 = ecx_4
                        while (i s< arg4[0xd1])
                        
                        i_6 = i_2
                    
                    int32_t var_35c_2 = 0
                    var_360_2 = 1
                    var_364_3 = arg4[0xd0] + (i_6 << 2)
                    var_368_1 = 2
                    var_36c_2 = *arg4
                    goto label_42e63b
                
                var_35c_1 = "CardGet"
                var_360_1 = 0x87
                var_364_2 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
                ecx_3 = "idNoMimic < MAX_CARDS"
                goto label_42e67e
            
            int32_t ecx_5 = arg4[0xce]
            int32_t eax_20 = arg4[0xcf] - 1
            
            if (edx_1 == 0)
                eax_20 = arg4[0xcf]
            
            int32_t eax_21 = ecx_5 + 4
            
            if (edx_1 == 0)
                eax_21 = ecx_5
            
            sub_42da60(&var_334, arg5, arg2, &var_334, *arg4, 1, eax_21, eax_20, 0)
            sub_42da60(&var_334, arg5, arg2, &var_334, *arg4, 2, arg4[0xd0], arg4[0xd1], 0)
            sub_42da60(&var_334, arg5, arg2, &var_334, *arg4, 2, arg4[0xd2], arg4[0xd3], 3)
            char eax_25 = edx_1
            
            if (eax_25 != 0)
                int32_t eax_26 = arg4[0xcf]
                
                if (eax_26 s> 1)
                    eax_26 = 1
                
                sub_42da60(&var_334, arg5, arg2, &var_334, *arg4, 1, arg4[0xce], eax_26, 0)
                eax_25 = edx_1
            
            if (arg4[0xcd] == 0 && arg4[0xcf] == 0 && eax_25 == 0)
                sub_42da60(&var_334, arg5, arg2, &var_334, *arg4, 4, arg4[0xd4], arg4[0xd5], 0)
                
                if (arg4[0xd5] != 1)
                label_42e2e2:
                    
                    if (arg3 != 1 || var_334 == 0)
                        void* eax_32 = *(sub_445af0(arg2, arg4[1]) + 0x14)
                        sub_42dc50(eax_32, arg4[1], arg2, eax_32, arg5, &var_334)
                        int32_t eax_33 = var_334
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_33
                else if (**(sub_445bb0(arg2, (*arg4[0xd4]).w) + 0x10) != 0x33)
                    goto label_42e2e2
            
            goto label_42e651
        case 2
            int32_t ebx_1 = arg4[0xcf]
            int32_t edi_1 = ebx_1 << 2
            char var_330[0x324]
            sub_51d5b0(&var_330, arg4[0xce], edi_1)
            int32_t esi_1 = arg4[0xcd]
            sub_51d5b0(&var_330[edi_1], arg4[0xcc], esi_1 << 2)
            uint32_t edi_2 = ebx_1 + esi_1
            int32_t ecx_16 = 0
            
            if (edi_2 s> 0)
                while (true)
                    eax_2 = zx.d((*(&var_330 + (ecx_16 << 2))).w)
                    
                    if (eax_2 u>= 0xc8)
                        break
                    
                    int32_t eax_40 = **((eax_2 << 5) + arg2 + 0x14)
                    
                    if (eax_40 != 6 && eax_40 != 5)
                        int32_t eax_41 = (&var_334)[edi_2]
                        edi_2 -= 1
                        *(&var_330 + (ecx_16 << 2)) = eax_41
                        ecx_16 -= 1
                    
                    ecx_16 += 1
                    
                    if (ecx_16 s>= edi_2)
                        goto label_42e3d5
                
                goto label_42e08d
            
        label_42e3d5:
            eax_2 = arg4[0xcb]
            
            if (eax_2 s>= edi_2)
                eax_2 = edi_2
            
            if (eax_2 == 0)
                uint32_t (* eax_42)[0x4] = sub_42da00(arg5, &var_334)
                *eax_42 = 2
                (*eax_42)[1] = 8
                (*eax_42)[2] = 0
                (*eax_42)[0xa] = 0
                (*eax_42)[0xb] = 0
                int32_t eax_43 = var_334
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_43
            
            if (eax_2 == 1)
                edx_12 = arg5
                int32_t var_35c_6 = 0
                var_360_2 = edi_2
                var_364_3 = &var_330
                var_368_1 = 8
                var_36c_2 = var_34c
                ecx_20 = arg2
                goto label_42e646
            
            if (eax_2 != 2)
                var_35c_1 = "ToActions"
                var_360_1 = 0x234
                ecx_3 = "numPower == 2"
                goto label_42e674
            
            int32_t i_3 = edi_2 - 1
            int32_t i_4 = i_3
            
            if (i_3 s<= 0)
                goto label_42e651
            
            int32_t eax_44 = 1
            uint32_t* ecx_21 = &var_330
            int32_t var_344_1 = 1
            uint32_t* var_33c_2 = &var_330
            int32_t i_1
            
            do
                int32_t esi_3 = eax_44
                
                if (eax_44 s< edi_2)
                    do
                        uint32_t (* eax_45)[0x4] = sub_42da00(arg5, &var_334)
                        *eax_45 = *arg4
                        (*eax_45)[1] = 8
                        (*eax_45)[2] = *var_33c_2
                        uint32_t ecx_25 = *(&var_330 + (esi_3 << 2))
                        esi_3 += 1
                        (*eax_45)[3] = ecx_25
                        (*eax_45)[0xa] = 2
                        (*eax_45)[0xb] = 0
                    while (esi_3 s< edi_2)
                    
                    eax_44 = var_344_1
                    ecx_21 = var_33c_2
                    i_3 = i_4
                
                eax_44 += 1
                ecx_21 = &ecx_21[1]
                i_1 = i_3
                i_3 -= 1
                var_344_1 = eax_44
                var_33c_2 = ecx_21
                i_4 = i_3
            while (i_1 != 1)
            int32_t eax_46 = var_334
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_46
        case 3
            int32_t var_35c_7 = 0
            var_360_2 = arg4[0xcd]
            var_364_3 = arg4[0xcc]
            var_368_1 = 6
        label_42e63a:
            var_36c_2 = eax_2
        label_42e63b:
            edx_12 = arg5
            ecx_20 = arg2
        label_42e646:
            sub_42da60(&var_334, edx_12, ecx_20, &var_334, var_36c_2, var_368_1, var_364_3, var_360_2, 
                0)
        label_42e651:
            int32_t eax_56 = var_334
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_56
        case 4
            uint32_t (* eax_47)[0x4] = sub_42da00(arg5, &var_334)
            *eax_47 = *arg4
            (*eax_47)[1] = 9
            (*eax_47)[2] = *arg4[0xcc]
            (*eax_47)[0xa] = 1
            int32_t eax_48 = var_334
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_48
        case 5
            uint32_t (* eax_49)[0x4] = sub_42da00(arg5, &var_334)
            *eax_49 = *arg4
            uint32_t ecx_36 = 0
            (*eax_49)[1] = 9
            
            if (arg4[0xd1] != 0)
                (*eax_49)[2] = *arg4[0xd0]
                ecx_36 = 1
            
            if (arg4[0xcd] != 0)
                (*eax_49)[ecx_36 + 2] = *arg4[0xcc]
                ecx_36 += 1
            
            if (arg4[0xcf] != 0)
                (*eax_49)[ecx_36 + 2] = *arg4[0xce]
                ecx_36 += 1
            
            int32_t eax_54 = var_334
            (*eax_49)[0xa] = ecx_36
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_54
        case 6
            int32_t var_35c_8 = 0
            var_360_2 = arg4[0xcd]
            var_364_3 = arg4[0xcc]
            var_368_1 = 0xb
            goto label_42e63a
        case 7
            int32_t var_35c_9 = 0
            var_360_2 = arg4[0xcd]
            var_364_3 = arg4[0xcc]
            var_368_1 = 0xa
            goto label_42e63a
        case 8
            int32_t var_35c_10 = 0
            var_360_2 = arg4[0xcd]
            var_364_3 = arg4[0xcc]
            var_368_1 = 0xc
            goto label_42e63a
        case 9
            int32_t var_35c_11 = 0
            var_360_2 = arg4[0xcd]
            var_364_3 = arg4[0xcc]
            var_368_1 = 7
            goto label_42e63a
}
