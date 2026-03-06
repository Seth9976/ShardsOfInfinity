// 函数名称: sub_42eb10
// 虚拟地址: 0x42eb10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_42eb10(int32_t arg1, int32_t arg2, void* arg3, uint32_t (* arg4)[0x4], int16_t arg5, uint32_t arg6))[0x4]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    _memset(arg4, 0, 0xc8)
    void* edx_1 = sub_445af0(arg3, arg2)
    uint32_t eax_3 = zx.d(arg5)
    void* var_2c = edx_1
    
    if (eax_3 u>= 0xc8)
        sub_44e4d0(eax_3, &data_5559b1, "idNoMimic < MAX_CARDS", 
            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t ecx_1 = arg6
    int32_t i_1 = 0
    int32_t* eax_5 = *((eax_3 << 5) + arg3 + 0x14)
    int32_t* eax_6 = &eax_5[0xd]
    int32_t* var_28 = eax_6
    int32_t i
    
    do
        int32_t ebx_1 = *eax_6
        
        if (ebx_1 == 0)
            break
        
        uint32_t edi_1 = zx.d(ebx_1.b)
        
        if (ebx_1 s>= 0)
            if ((ebx_1 & 0x20000000) == 0)
                if (ecx_1 != 1)
                label_42ebaf:
                    void* eax_7 = eax_6[2]
                    
                    if (eax_7 s> *(edx_1 + 0xc))
                        ecx_1 = arg4[0xc][0]
                        eax_7 = ecx_1 + 1
                        arg4[0xc][0] = eax_7
                        (*arg4)[ecx_1 * 3] = 7
                    
                    if (edi_1 == 6)
                        ecx_1 = arg4[0xc][0]
                        void* edx_3 = &(*arg4)[ecx_1 * 3]
                        eax_7 = ecx_1 + 1
                        arg4[0xc][0] = eax_7
                        *edx_3 = 9
                        *(edx_3 + 8) = 1
                    
                    if ((ebx_1 & 0x100000) == 0)
                    label_42ec61:
                        void var_24
                        
                        if ((ebx_1 & 0x800000) != 0)
                            eax_7, ecx_1 = sub_448890(&var_24, arg2, arg3, &var_24)
                        
                        if ((ebx_1 & 0x800000) == 0 || eax_7.b != 0)
                            if ((ebx_1 & &__dos_header) != 0)
                                eax_7, ecx_1 = sub_446460(eax_7, 0xa, arg3, arg2)
                            
                            if ((ebx_1 & &__dos_header) != 0 && eax_7 s<= 1)
                                ecx_1 = arg4[0xc][0]
                                arg4[0xc][0] = ecx_1 + 1
                                (*arg4)[ecx_1 * 3] = 4
                            else if ((ebx_1 & 0x200000) != 0)
                                int32_t eax_17
                                eax_17, ecx_1 = sub_446540(eax_7, 4, arg3, 9, arg2)
                                
                                if (eax_17 s<= 0)
                                    ecx_1 = arg4[0xc][0]
                                    arg4[0xc][0] = ecx_1 + 1
                                    (*arg4)[ecx_1 * 3] = 5
                        else
                            ecx_1 = arg4[0xc][0]
                            arg4[0xc][0] = ecx_1 + 1
                            (*arg4)[ecx_1 * 3] = 6
                    else
                        eax_7, ecx_1 = sub_445af0(arg3, arg2)
                        
                        if (*(eax_7 + 0x1c) == 1)
                            goto label_42ec61
                        
                        int32_t edx_5
                        eax_7, ecx_1, edx_5 = sub_446600(eax_7, arg2, arg3, 6, arg2)
                        
                        if (eax_7 s> 0)
                            goto label_42ec61
                        
                        eax_7, ecx_1 = sub_446600(eax_7, edx_5, arg3, 7, arg2)
                        
                        if (eax_7 s> 1)
                            goto label_42ec61
                        
                        ecx_1 = arg4[0xc][0]
                        arg4[0xc][0] = ecx_1 + 1
                        (*arg4)[ecx_1 * 3] = 3
                    
                    edx_1 = var_2c
                    
                    if ((ebx_1 & 0x1000000) != 0 && *(edx_1 + 8) s< 0x2e)
                        ecx_1 = arg4[0xc][0]
                        arg4[0xc][0] = ecx_1 + 1
                        (*arg4)[ecx_1 * 3] = 0x12
                        edx_1 = var_2c
                    
                    int32_t eax_23 = *eax_5
                    
                    if (eax_23 == 5 || eax_23 == 6)
                        uint32_t ecx_32 = arg4[0xc][0]
                        arg4[0xc][0] = ecx_32 + 1
                        (*arg4)[ecx_32 * 3] = 8
                    label_42ed84:
                        eax_6 = var_28
                        ecx_1 = arg6
                        edx_1 = var_2c
                    else if ((ebx_1 & 0x8000000) != 0)
                        if ((ebx_1 & 0x4000) != 0)
                            uint32_t ecx_8 = arg4[0xc][0]
                            arg4[0xc][0] = ecx_8 + 1
                            (*arg4)[ecx_8 * 3] = 0xb
                            goto label_42ed84
                        
                        if ((ebx_1 & 0x1000) != 0)
                            uint32_t ecx_11 = arg4[0xc][0]
                            arg4[0xc][0] = ecx_11 + 1
                            (*arg4)[ecx_11 * 3] = 0xa
                            goto label_42ed84
                        
                        if ((ebx_1 & 0x2000) != 0)
                            uint32_t ecx_12 = arg4[0xc][0]
                            arg4[0xc][0] = ecx_12 + 1
                            (*arg4)[ecx_12 * 3] = 0xc
                            goto label_42ed84
                        
                        ecx_1 = arg6
                        eax_6 = var_28
                    else if (edi_1 != 0xe)
                        switch (edi_1)
                            case 7
                                uint32_t ecx_21 = arg4[0xc][0]
                                arg4[0xc][0] = ecx_21 + 1
                                (*arg4)[ecx_21 * 3] = 1
                                
                                if (sub_446460(ecx_21 + 1, edi_1 + 1, arg3, arg2) s< var_28[1])
                                    uint32_t ecx_24 = arg4[0xc][0]
                                    arg4[0xc][0] = ecx_24 + 1
                                    (*arg4)[ecx_24 * 3] = 2
                                
                                goto label_42ed84
                            case 8
                            label_42ef82:
                                uint32_t ecx_25 = arg4[0xc][0]
                                arg4[0xc][0] = ecx_25 + 1
                                (*arg4)[ecx_25 * 3] = 0x13
                                goto label_42ed84
                            case 0xd
                                if ((ebx_1 & 0x10000) != 0)
                                    uint32_t ecx_26 = arg4[0xc][0]
                                    arg4[0xc][0] = ecx_26 + 1
                                    (*arg4)[ecx_26 * 3] = 0xe
                                
                                if ((ebx_1 & 0x1000) != 0)
                                    uint32_t ecx_27 = arg4[0xc][0]
                                    arg4[0xc][0] = ecx_27 + 1
                                    (*arg4)[ecx_27 * 3] = 0xf
                                
                                if ((ebx_1 & 0x20000) != 0)
                                    uint32_t ecx_28 = arg4[0xc][0]
                                    arg4[0xc][0] = ecx_28 + 1
                                    (*arg4)[ecx_28 * 3] = 0xd
                                
                                goto label_42ed84
                            case 0xf
                                uint32_t var_4c_7 = ecx_1
                                
                                if (sub_44d320(arg3, arg2) != 0)
                                    uint32_t ecx_31 = arg4[0xc][0]
                                    arg4[0xc][0] = ecx_31 + 1
                                    (*arg4)[ecx_31 * 3] = 0x11
                                
                                goto label_42ed84
                            case 0x10
                                goto label_42ef82
                            case 0x13, 0x14
                                uint32_t ecx_29 = arg4[0xc][0]
                                arg4[0xc][0] = ecx_29 + 1
                                (*arg4)[ecx_29 * 3] = 0x14
                                goto label_42ed84
                        
                        ecx_1 = arg6
                        eax_6 = var_28
                    else
                        int32_t eax_31 = sub_4466c0(eax_23, edi_1 - 7, arg3, arg2, 5)
                        int32_t eax_32 = sub_4466c0(eax_31, edi_1 - 7, arg3, arg2, 6)
                        int32_t ebx_3 = eax_31 + eax_32
                        int32_t eax_33 = sub_4466c0(eax_32, edi_1 - 5, arg3, arg2, 5)
                        int32_t ecx_17 = eax_33 + sub_4466c0(eax_33, 9, arg3, arg2, 6)
                        int32_t edx_18 = var_28[1]
                        
                        if (ebx_3 s> edx_18)
                            uint32_t ecx_18 = arg4[0xc][0]
                            void* edx_19 = &(*arg4)[ecx_18 * 3]
                            arg4[0xc][0] = ecx_18 + 1
                            *edx_19 = 0
                            *(edx_19 + 4) = 0
                            goto label_42ed84
                        
                        int32_t eax_38 = ecx_17 + ebx_3
                        
                        if (eax_38 s> edx_18 && ebx_3 s> 0)
                            uint32_t ecx_19 = arg4[0xc][0]
                            void* edx_20 = &(*arg4)[ecx_19 * 3]
                            arg4[0xc][0] = ecx_19 + 1
                            *edx_20 = 0
                            *(edx_20 + 4) = 1
                            goto label_42ed84
                        
                        uint32_t ecx_20 = arg4[0xc][0]
                        
                        if (ecx_17 s> edx_18)
                            void* edx_21 = &(*arg4)[ecx_20 * 3]
                            arg4[0xc][0] = ecx_20 + 1
                            *edx_21 = 0
                            *(edx_21 + 4) = 2
                            goto label_42ed84
                        
                        void* edx_22 = &(*arg4)[ecx_20 * 3]
                        ecx_1 = arg6
                        arg4[0xc][0] = ecx_20 + 1
                        eax_6 = var_28
                        *edx_22 = 0
                        
                        if (eax_38 s<= 0)
                            *(edx_22 + 4) = 4
                        else
                            *(edx_22 + 4) = 3
                        
                        edx_1 = var_2c
            else if (ecx_1 == 1)
                goto label_42ebaf
        
        eax_6 = &eax_6[3]
        i = i_1 + 1
        var_28 = eax_6
        i_1 = i
    while (i s< 4)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
