// 函数名称: sub_4400e0
// 虚拟地址: 0x4400e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4400e0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t eax = *arg2
    uint32_t eax = *arg2
    int32_t ebx = 0
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx_1
    
    if (eax u> 0x2a)
        var_10 = "WaitDuration"
        var_14 = 0x1dd1
        ecx_1 = "Halt"
        var_18 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
    else
        eax = zx.d(lookup_table_4402e0[eax])
        int32_t* edi_1 = data_65aabc
        void* ecx
        
        switch (eax)
            case 0
                ecx = nullptr
                goto label_44019b
            case 1
                ecx = 0xb
            label_44019b:
                eax = data_65ac30
                
                if (eax != 0)
                    eax = *(eax + 8)
                    
                    if (*((ecx << 4) + 0x557fb8) == ecx)
                        if (eax == 0)
                            void* eax_5 = sub_411690()
                            char eax_7
                            
                            if (*(eax_5 + 0x434) == 1)
                                eax_7 = sub_440040(sub_41ad20())
                            
                            if (*(eax_5 + 0x434) != 1 || eax_7 == 0 || *((ecx << 4) + 0x557fb8) != 6)
                                eax = *((ecx << 4) + 0x557fbc)
                            else
                                eax = *((ecx << 4) + 0x557fbc) * 2
                            
                            edi_1 = data_65aabc
                            goto label_44023e
                        
                        int32_t eax_4 = eax - 1
                        
                        if (eax == 1)
                            eax = *((ecx << 4) + 0x557fc0)
                        label_44023e:
                            
                            if (edi_1 == 0)
                                goto label_440123
                            
                            int32_t esi_4 = edi_1[1]
                            int32_t ecx_4 = *edi_1
                            int32_t temp3 = *((ebx << 3) + &data_e4731c)
                            
                            if (temp3 s> esi_4
                                    || (temp3 s>= esi_4 && *((ebx << 3) + &data_e47318) u>= ecx_4))
                                eax.b = 0
                                return eax
                            
                            int32_t eax_9
                            int32_t edx
                            edx:eax_9 = sx.q(eax)
                            *((ebx << 3) + &data_e47318) = eax_9 + ecx_4
                            int32_t eax_10
                            eax_10.b = 1
                            *((ebx << 3) + &data_e4731c) = adc.d(edx, esi_4, eax_9 + ecx_4 u< eax_9)
                            return eax_10
                        
                        eax = eax_4 - 1
                        
                        if (eax_4 == 1)
                            eax = *((ecx << 4) + 0x557fc4)
                            goto label_44023e
                        
                        var_10 = "WaitDurationAmount"
                        var_14 = 0x1d73
                        ecx_1 = "Halt"
                        var_18 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    else
                        var_10 = "WaitDurationAmount"
                        var_14 = 0x1d60
                        ecx_1 = "d.type == duration"
                        var_18 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                else
                    var_10 = "GetLocalSettings"
                    var_14 = 0x23d
                    var_18 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                    ecx_1 = "gGameSettings.localSettings"
            case 2
                ebx = 1
                ecx = 4
                goto label_44019b
            case 3
                ecx = 0xc
                goto label_44019b
            case 4
                ecx = 2
                goto label_44019b
            case 5
                if (edi_1 != 0)
                    int32_t ecx_2
                    ecx_2.b = arg2[1] != edi_1[0x192]
                    ecx = (ecx_2 << 2) + 1
                    goto label_44019b
                
            label_440123:
                var_10 = "GetClient"
                var_14 = 0x74
                var_18 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_1 = "gClient"
            case 6
                ecx = 5
                goto label_44019b
            case 7
                ecx = 3
                goto label_44019b
            case 8
                if (edi_1 == 0)
                    goto label_440123
                
                ecx = 6
                
                if (arg2[1] == edi_1[0x192])
                    ecx = 1
                
                goto label_44019b
            case 9
                ecx = 0xd
                goto label_44019b
            case 0xa
                ecx = 7
                goto label_44019b
            case 0xb
                ecx = 8
                goto label_44019b
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
