// 函数名称: sub_443b90
// 虚拟地址: 0x443b90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_443b90(int32_t arg1)
{
    // 第一条实际指令: char const* const var_28
    char const* const var_28
    int32_t var_24
    char const* const var_20
    int32_t* eax
    char* ecx_1
    
    if (arg1 u> 5)
        var_20 = "TutorialExecutAction"
        var_24 = 0x25b4
    label_443d7f:
        ecx_1 = "Halt"
        var_28 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
    label_443d8e:
        sub_44e4d0(eax, &data_5559b1, ecx_1, var_28, var_24, var_20)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* var_8
    uint32_t edx_2
    void* edi_1
    
    switch (arg1)
        case 0
            return 
        case 1
            int32_t* ebx_1 = data_5c2e30
            uint32_t i = 0
            edi_1 = data_5c2e2c
            
            do
                eax = sub_446c60(edi_1, i)
                i += 1
            while (i s< 6)
            
            if (*ebx_1 == 1)
                edx_2 = ebx_1[1]
            label_443be9:
                sub_448410(edi_1, edx_2)
                data_5c2e30 = sub_447710(edi_1)
                return 
            
            var_20 = "RecalcYield"
            var_24 = 0xfcd
            var_28 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
            ecx_1 = "yld.yieldType == CHOICE_ACTION"
            goto label_443d8e
        case 2
            void* ebx_2 = data_65aabc
            
            if (ebx_2 == 0)
            label_443c0b:
                var_20 = "GetClient"
                var_24 = 0x74
                var_28 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_1 = "gClient"
                goto label_443d8e
            
            int32_t i_2 = 5
            uint32_t ebx_3 = *(ebx_2 + 0x648)
            edi_1 = data_5c2e2c
            var_8 = data_5c2e30
            int32_t i_1
            
            do
                sub_446fe0(edi_1, ebx_3)
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            eax = var_8
            
            if (*eax == 1)
                edx_2 = eax[1]
                goto label_443be9
            
            var_20 = "RecalcYield"
            var_24 = 0xfcd
            var_28 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
            ecx_1 = "yld.yieldType == CHOICE_ACTION"
            goto label_443d8e
        case 3
            int32_t eax_2 = sub_444860()
            var_8 = nullptr
            eax = sub_445070(&data_5bcd7c, &var_8)
            int32_t* ecx_5 = var_8
            
            if (ecx_5 == 0xffffffff)
            label_443cdc:
                var_20 = "LookupCardByType"
                var_24 = 0x2590
                goto label_443d7f
            
            while (true)
                if (*ecx_5 == 0)
                    eax = zx.d((ecx_5[1]).w)
                    
                    if (eax u>= 0xc8)
                        var_20 = "CardGet"
                        var_24 = 0x87
                        var_28 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
                        ecx_1 = "idNoMimic < MAX_CARDS"
                        break
                    
                    if (**((eax << 5) + eax_2 + 0x14) == 0x31 && ecx_5[3] == 4)
                        sub_4329f0(ecx_5, 1)
                        return 
                
                eax = sub_445070(&data_5bcd7c, &var_8)
                ecx_5 = var_8
                
                if (ecx_5 == 0xffffffff)
                    goto label_443cdc
            
            goto label_443d8e
        case 4
            arg1.b = 1
            sub_43e800(arg1.b)
            return 
        case 5
            void* eax_8 = sub_42aaa0(*(data_65ac38 + 0xb24))
            void* eax_9 = sub_41ad20()
            int32_t ecx_8 = *(eax_8 + 0x258)
            int32_t edx_5 = *(eax_9 + 0xf8)
            
            if (ecx_8 s<= edx_5)
                ecx_8 = edx_5
            
            *(eax_8 + 0x258) = ecx_8
            sub_42a740(data_65ac38)
            eax = data_65aabc
            
            if (eax == 0)
                goto label_443c0b
            
            eax[0x10b] = 5
            return 
}
