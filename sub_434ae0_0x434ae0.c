// 函数名称: sub_434ae0
// 虚拟地址: 0x434ae0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_434ae0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    char const* const var_58_1
    int32_t var_54_1
    char const* const var_50_1
    char* ecx
    
    if (*arg1 == 0)
        eax_1 = sub_4383c0(arg1[1], nullptr)
        
        if (eax_1.b != 0)
            if (*data_5c2e30 != 1)
            label_434e34:
                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                return 0
            
            void* eax_3 = sub_444860()
            char var_21_1 = 0
            void* eax_4 = data_5c2e30
            int32_t edx_1 = 0
            int32_t ecx_2 = 0
            int32_t var_28_1 = 0
            int32_t edi_1 = *(eax_4 + 0x334)
            
            if (edi_1 s> 0)
                eax_1 = *(eax_4 + 0x330)
                
                do
                    if (*eax_1 == arg1[1])
                        goto label_434bd6
                    
                    ecx_2 += 1
                    eax_1 = &eax_1[1]
                while (ecx_2 s< edi_1)
                
                eax_4 = data_5c2e30
            
            int32_t edi_3 = arg1[1]
            ecx_2 = *(eax_4 + 0x338)
            eax_1 = sub_434ab0(eax_4, *(eax_4 + 0x33c), ecx_2, edi_3)
            
            if (eax_1.b == 0)
                void* ecx_3 = data_5c2e30
                ecx_2 = *(ecx_3 + 0x348)
                eax_1 = sub_434ab0(eax_1, *(ecx_3 + 0x34c), ecx_2, edi_3)
                
                if (eax_1.b == 0)
                    goto label_434e34
                
                var_21_1 = 1
                edx_1 = 0
            else
                edx_1 = 1
                var_28_1 = 1
            
        label_434bd6:
            void* edi_4 = data_65aabc
            
            if (edi_4 != 0)
                int32_t edi_5 = *(edi_4 + 0x648)
                int32_t var_50_4 = edx_1
                int32_t eax_5
                int32_t ecx_4
                eax_5, ecx_4 = sub_434380(eax_1, (arg1[1]).w, ecx_2, 0x800000)
                int32_t var_20
                
                if (eax_5.b != 0)
                    eax_5, ecx_4 = sub_448890(&var_20, edi_5, eax_3, &var_20)
                    
                    if (eax_5.b != 0)
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return 3
                
                int32_t var_50_6 = var_28_1
                int32_t eax_8
                int32_t ecx_8
                int32_t edx_7
                eax_8, ecx_8, edx_7 = sub_434380(eax_5, (arg1[1]).w, ecx_4, 0x100000)
                
                if (eax_8.b != 0)
                    bool cond:1_1
                    
                    if (var_21_1 == 0)
                        void* eax_12 = sub_445af0(eax_3, edi_5)
                        
                        if (*(eax_12 + 0x1c) == 1)
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return 2
                        
                        int32_t eax_13
                        int32_t edx_10
                        eax_13, edx_10 = sub_446600(eax_12, edi_5, eax_3, 6, edi_5)
                        
                        if (eax_13 s> 0)
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return 2
                        
                        int32_t eax_14
                        eax_14, ecx_8 = sub_446600(eax_13, edx_10, eax_3, 7, edi_5)
                        cond:1_1 = eax_14 s<= 1
                    else
                        var_20 = 0
                        
                        if (sub_446600(eax_8, edx_7, eax_3, 7, edi_5) s> 0)
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return 2
                        
                        void* eax_10 = sub_445af0(eax_3, edi_5)
                        
                        if (*(eax_10 + 0x1c) == 1)
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return 2
                        
                        int32_t eax_11
                        eax_11, ecx_8 = sub_446600(eax_10, edi_5, eax_3, 6, edi_5)
                        cond:1_1 = eax_11 s<= 0
                    
                    if (not(cond:1_1))
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return 2
                
                int32_t eax_16 = arg1[1]
                int32_t var_50_11 = var_28_1
                int16_t var_2c_2 = eax_16.w
                int32_t eax_17
                int32_t ecx_16
                eax_17, ecx_16 = sub_434380(eax_16, eax_16.w, ecx_8, 0x200000)
                int32_t ecx_17
                
                if (eax_17.b != 0)
                label_434d17:
                    eax_17, ecx_17 = sub_446540(eax_17, 4, eax_3, 9, edi_5)
                    
                    if (eax_17 s> 0)
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return 1
                else
                    int32_t var_50_12 = var_28_1
                    eax_17, ecx_17 = sub_434380(eax_17, var_2c_2, ecx_16, 0x8081000)
                    
                    if (eax_17.b != 0)
                        goto label_434d17
                
                int32_t var_50_14 = var_28_1
                int32_t eax_19
                int32_t ecx_21
                eax_19, ecx_21 = sub_434380(eax_17, (arg1[1]).w, ecx_17, &__dos_header)
                
                if (eax_19.b != 0)
                    eax_19, ecx_21 = sub_446460(eax_19, 0xa, eax_3, edi_5)
                    
                    if (eax_19 s> 1)
                    label_434e4a:
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return 4
                
                int32_t var_50_16 = var_28_1
                
                if (sub_4342f0(eax_19, (arg1[1]).w, ecx_21, 0xd) == 0)
                    goto label_434e34
                
                eax_1 = zx.d((arg1[1]).w)
                
                if (eax_1 u< 0xc8)
                    eax_1 <<= 5
                    int32_t ecx_23 = 0
                    int32_t* esi_2 = *(eax_1 + eax_3 + 0x14) + 0x34
                    
                    while (true)
                        if (*esi_2 == 0xd)
                            uint128_t var_3c
                            sub_445fb0(&var_3c, eax_3, 9, edi_5)
                            uint128_t xmm1_1 = var_3c
                            var_3c = xmm1_1
                            void var_18
                            sub_4460c0(&var_18)
                            eax_1 = _mm_bsrli_si128(xmm1_1, 4)
                            int32_t var_14
                            
                            if (eax_1 == var_14)
                                goto label_434e34
                            
                            int32_t** ecx_25 = var_3c:4.d
                            
                            while (true)
                                if (ecx_25 == 0)
                                    var_50_1 = "Cards::CardIt::operator *"
                                    var_54_1 = 0x132
                                    ecx = &data_580cbc
                                    break
                                
                                eax_1 = *ecx_25
                                
                                if (eax_1 != var_3c:8.d)
                                    var_50_1 = "Cards::CardIt::operator *"
                                    var_54_1 = 0x133
                                    ecx = "c->where == where"
                                    break
                                
                                if (sub_4472f0(ecx_25, esi_2) != 0)
                                    goto label_434e4a
                                
                                eax_1 = sub_445ed0(&var_3c)
                                ecx_25 = var_3c:4.d
                                
                                if (ecx_25 == var_14)
                                    goto label_434e34
                            
                            goto label_434e73
                        
                        ecx_23 += 1
                        esi_2 = &esi_2[3]
                        
                        if (ecx_23 s>= 4)
                            var_50_1 = "GetReturnPower"
                            var_54_1 = 0x3db
                            ecx = "Halt"
                            break
                else
                    var_50_1 = "CardGet"
                    var_54_1 = 0x87
                    ecx = "idNoMimic < MAX_CARDS"
                
            label_434e73:
                var_58_1 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
            else
                var_50_1 = "GetClient"
                var_54_1 = 0x74
                var_58_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx = "gClient"
        else
            var_50_1 = "CalcActiveSetEffect"
            var_54_1 = 0x756
            var_58_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            ecx = "IsCardInActiveSet(gfx.card.id)"
    else
        var_50_1 = "CalcActiveSetEffect"
        var_54_1 = 0x755
        var_58_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
        ecx = "gfx.type == SHGFX_CARD"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, var_58_1, var_54_1, var_50_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
