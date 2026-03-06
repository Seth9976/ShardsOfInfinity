// 函数名称: sub_44ba40
// 虚拟地址: 0x44ba40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_44ba40(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t edi = *(arg2 + 0x14)
    uint32_t var_34c = edi
    void* eax_2 = sub_445b50(arg1, edi)
    void* edx_1 = nullptr
    void* eax_3 = arg2
    char ecx = 0
    void* var_350 = nullptr
    uint32_t ebx = *(eax_3 + 0x18)
    uint32_t var_358 = ebx
    int32_t var_20[0x5]
    
    if (ebx s< *(arg1 + 0x2164))
        while (true)
            eax_3 = *(eax_3 + (ebx << 2))
            void* var_348_1 = eax_3
            
            if (eax_3 != 0)
                int32_t var_3a8_4
                char const* const var_3a4_7
                char* ecx_32
                
                if (ebx == edi)
                    var_3a4_7 = "ShResumeDamageRef"
                    var_3a8_4 = 0xc5e
                    ecx_32 = "i != who"
                label_44bf95:
                    sub_44e4d0(eax_3, &data_5559b1, ecx_32, 
                        "c:\ax2017\jams\shards\code\shardsgame.cpp", var_3a8_4, var_3a4_7)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* eax_4 = sub_445b50(arg1, ebx)
                int32_t ecx_3
                eax_3, ecx_3 = sub_445af0(arg1, ebx)
                
                if (*(eax_3 + 8) s<= 0)
                label_44bf6b:
                    var_3a4_7 = "ShResumeDamageRef"
                    var_3a8_4 = 0xc63
                    ecx_32 = "damage == 0"
                    goto label_44bf95
                
                int32_t var_3a4_1 = ecx_3
                eax_3 = sub_447450(arg1, ebx)
                
                if (eax_3.b != 0)
                    goto label_44bf6b
                
                void* eax_5 = var_348_1
                
                if (eax_5 == 0xffffffff)
                    void* ecx_33 = eax_4
                    int32_t var_3a4_8 = *ecx_33
                    int32_t var_3a8_5 = *eax_2
                    char const* const var_3ac_7 = "%s damages %s infinity."
                    void* var_3b0_7 = arg1
                    int32_t eax_23 = *(arg1 + 0x2168)
                    
                    if (eax_23 != 2 && eax_23 != 3)
                        uint32_t (* eax_24)[0x4] = sub_44d360(arg1, edi)
                        ecx_33 = eax_4
                        *eax_24 = 6
                        (*eax_24)[2] = ebx
                        (*eax_24)[3] = 0xffffffff
                        eax_24[1][0] = 0
                    
                    eax_3 = eax_2
                    
                    if (*(eax_3 + 0x14) != 0xffffffff)
                        var_3a4_7 = "ShResumeDamageRef"
                        var_3a8_4 = 0xc70
                        ecx_32 = "p.power == -1"
                        goto label_44bf95
                    
                    *(ecx_33 + 8) = 0
                label_44bf49:
                    var_3a4_7 = "ShResumeDamageRef"
                    var_3a8_4 = 0xcaa
                    ecx_32 = "damage > 0"
                    goto label_44bf95
                
                if (*(arg1 + 0x2168) != 2)
                    int32_t edi_1 = 0
                    uint128_t var_390
                    sub_445fb0(&var_390, arg1, 7, ebx)
                    uint128_t xmm1_1 = var_390
                    uint128_t var_370 = xmm1_1
                    void var_380
                    sub_4460c0(&var_380)
                    eax_3 = _mm_bsrli_si128(xmm1_1, 4)
                    int32_t var_37c
                    
                    if (eax_3 != var_37c)
                        void** edx_5 = var_370:4.d
                        
                        while (true)
                            if (edx_5 == 0)
                                var_3a4_7 = "Cards::CardIt::operator *"
                                var_3a8_4 = 0x132
                                ecx_32 = &data_580cbc
                                goto label_44bf95
                            
                            eax_3 = *edx_5
                            
                            if (eax_3 != var_370:8.d)
                                var_3a4_7 = "Cards::CardIt::operator *"
                                var_3a8_4 = 0x133
                                ecx_32 = "c->where == where"
                                goto label_44bf95
                            
                            int32_t var_340[0xc8]
                            
                            if (*(edx_5 + 0x16) != 1)
                                int32_t eax_6 = edx_5[6]
                                int32_t ecx_9 = (edx_5 - arg1 - 4) s>> 5
                                
                                if (eax_6 == 0)
                                    eax_3 = ecx_9
                                else
                                    eax_3 = eax_6 << 0x10 | ecx_9
                                
                                uint32_t ecx_10 = zx.d(eax_3.w)
                                
                                if (ecx_10 u>= 0xc8)
                                    var_3a4_7 = "CardGet"
                                    var_3a8_4 = 0x87
                                    ecx_32 = "idNoMimic < MAX_CARDS"
                                    goto label_44bf95
                                
                                if (*(*((ecx_10 << 5) + arg1 + 0x14) + 0x30) != 0)
                                    var_340[edi_1] = eax_3
                                    edi_1 += 1
                            
                            eax_3 = sub_445ed0(&var_370)
                            edx_5 = var_370:4.d
                            
                            if (edx_5 == var_37c)
                                if (edi_1 s<= 0)
                                    break
                                
                                eax_3 = sub_445b50(arg1, ebx)
                                void* var_354_1 = eax_3
                                int32_t ebx_1 = 0
                                
                                do
                                    uint32_t ecx_15 = zx.d((var_340[ebx_1]).w)
                                    
                                    if (ecx_15 u>= 0xc8)
                                        goto label_44bea6
                                    
                                    uint32_t ecx_16 = ecx_15 << 5
                                    void* eax_8 = *(ecx_16 + arg1 + 0x14)
                                    *(ecx_16 + arg1 + 0x1a) = 1
                                    *(var_354_1 + 0x18) += *(eax_8 + 0x30)
                                    void* eax_10 = *(ecx_16 + arg1 + 0x14)
                                    eax_3 = sub_445a20(eax_10, 0x23, arg1, var_358, var_340[ebx_1], 
                                        *(eax_10 + 0x30), 0, 0)
                                    ebx_1 += 1
                                while (ebx_1 s< edi_1)
                                
                                int32_t ecx_18 = 0
                                
                                if (edi_1 s<= 0)
                                    break
                                
                                while (true)
                                    eax_3 = zx.d((var_340[ecx_18]).w)
                                    
                                    if (eax_3 u>= 0xc8)
                                        break
                                    
                                    void* eax_13 = *((eax_3 << 5) + arg1 + 0x14)
                                    int32_t var_3a4_4 = *(eax_13 + 0x30)
                                    int32_t var_3a8_1 = *(eax_13 + 0x24)
                                    int32_t var_3ac_3 = *var_354_1
                                    char const* const var_3b0_2 = "%s reveals %s for %d shields."
                                    void* var_3b4_2 = arg1
                                    ecx_18 += 1
                                    
                                    if (ecx_18 s>= edi_1)
                                        goto label_44bc80
                                
                            label_44bea6:
                                var_3a4_7 = "CardGet"
                                var_3a8_4 = 0x90
                                ecx_32 = "idNoMimic < MAX_CARDS"
                                goto label_44bf95
                    
                label_44bc80:
                    eax_5 = var_348_1
                
                int32_t* edi_2 = eax_4
                void* ecx_19 = nullptr
                
                if (eax_5 - edi_2[6] s>= 0)
                    ecx_19 = eax_5 - edi_2[6]
                
                void* eax_16 = edi_2[2]
                void* edx_10 = eax_16
                
                if (eax_16 s>= ecx_19)
                    edx_10 = ecx_19
                
                void* eax_17 = eax_16 - ecx_19
                
                if (eax_16 - ecx_19 s< 0)
                    eax_17 = nullptr
                else if (eax_17 s> 0x32)
                    eax_17 = 0x32
                
                int32_t edx_11 = *edi_2
                edi_2[2] = eax_17
                void* var_3a4_5 = eax_17
                int32_t edi_3 = *eax_2
                void* var_3a8_2 = ecx_19
                ebx = var_358
                void* ecx_20
                
                if (*(eax_4 + 0x18) s<= 0)
                    int32_t var_3ac_6 = edx_11
                    int32_t var_3b0_5 = edi_3
                    char const* const var_3b4_5 = "%s damages %s for %d leaving %d"
                    void* var_3b8_2 = arg1
                    int32_t eax_20 = *(arg1 + 0x2168)
                    
                    if (eax_20 == 2)
                        edi = var_34c
                        ecx_20 = eax_4
                    else
                        edi = var_34c
                        
                        if (eax_20 != 3)
                            uint32_t (* eax_21)[0x4] = sub_44d360(arg1, edi)
                            *eax_21 = 6
                            (*eax_21)[2] = ebx
                            (*eax_21)[3] = var_348_1
                            eax_21[1][0] = 0
                        
                        ecx_20 = eax_4
                else
                    ecx_20 = eax_4
                    int32_t var_3ac_4 = *(ecx_20 + 0x18)
                    void* var_3b0_3 = var_348_1
                    int32_t var_3b4_3 = edx_11
                    int32_t var_3b8_1 = edi_3
                    char const* const var_3bc_1 = "%s damages %s for %d-%d=%d leaving %d"
                    void* var_3c0_1 = arg1
                    int32_t eax_18 = *(arg1 + 0x2168)
                    uint32_t edi_4 = *(ecx_20 + 0x18)
                    
                    if (eax_18 == 2 || eax_18 == 3)
                        edi = var_34c
                    else
                        uint32_t (* eax_19)[0x4] = sub_44d360(arg1, var_34c)
                        *eax_19 = 6
                        (*eax_19)[2] = ebx
                        (*eax_19)[3] = var_348_1
                        eax_19[1][0] = edi_4
                        edi = var_34c
                        ecx_20 = eax_4
                
                eax_3 = var_348_1
                
                if (eax_3 s<= 0)
                    goto label_44bf49
                
                sub_445a20(eax_3, 0x26, arg1, edi, ebx, eax_3, *(ecx_20 + 0x18), edx_10)
                eax_3 = eax_4
                ecx = 1
                
                if (*(eax_3 + 8) == 0)
                    var_20[var_350] = ebx
                    var_350 += 1
            
            ebx += 1
            var_358 = ebx
            
            if (ebx s>= *(arg1 + 0x2164))
                break
            
            eax_3 = arg2
        
        if (ecx != 0)
            eax_3 = sub_445a20(eax_3, 0x28, arg1, edi, 0, 0, 0, 0)
        
        edx_1 = var_350
    
    int32_t edi_5 = 0
    
    if (edx_1 s> 0)
        do
            sub_445a20(eax_3, 0x27, arg1, var_34c, var_20[edi_5], 0, 0, 0)
            eax_3 = var_350
            edi_5 += 1
        while (edi_5 s< eax_3)
        
        if (eax_3 s> 0)
            sub_445a20(eax_3, 0x29, arg1, var_34c, 0, 0, 0, 0)
    
    uint32_t result = sub_44b5d0(arg1, var_34c)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
