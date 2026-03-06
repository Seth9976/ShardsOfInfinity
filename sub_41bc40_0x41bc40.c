// 函数名称: sub_41bc40
// 虚拟地址: 0x41bc40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_41bc40(int32_t* arg1)
{
    // 第一条实际指令: void* eax_4
    void* eax_4
    void* esi
    
    if (data_65ac14 != 2)
        esi = arg1
        eax_4 = nullptr
    else
        esi = sub_41bbf0(arg1)
        int32_t eax_1 = arg1[0x3f]
        int32_t var_18
        char const* const var_14
        
        if (eax_1 s> 0x3e8)
            if (eax_1 != 0x3e9)
                eax_4 = eax_1 - 0x3ea
                
                if (eax_1 != 0x3ea)
                label_41bd5d:
                    var_14 = "GetGameStatusMenu"
                    var_18 = 0x1da
                    goto label_41be61
                
                if (esi == 0)
                    eax_4 = 0x11
                else
                    eax_4 = 0xa
                    
                    if (*(esi + 0x20) != 0x3e9)
                        eax_4 = 0xd
                
                goto label_41bd92
            
            eax_4 = 6
        else if (eax_1 == 0x3e8)
            if (esi == 0)
                eax_4 = 0x10
            else
                int32_t eax_13
                eax_13.b = *(esi + 0x20) != 0x3ec
                eax_4 = (eax_13 << 1) + 0xb
        else if (eax_1 == 0)
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = muls.dp.d(0x10624dd3, sub_45ccc0(arg1))
            int32_t edx_2 = edx_1 s>> 6
            
            if (arg1[0x41] - ((edx_2 u>> 0x1f) + edx_2) s< 0)
                eax_4 = 5
            else if (esi == 0)
                if (arg1[0x3f] != 0)
                label_41bd23:
                    eax_4 = 4
                else
                    int32_t ecx_5 = 0
                    void* eax_12 = &arg1[7]
                    
                    while (*eax_12 != 2)
                        ecx_5 += 1
                        eax_12 += 0x2c
                        
                        if (ecx_5 s>= 5)
                            goto label_41bd23
                    
                    eax_4 = 2
            else if (*(esi + 0x20) == 1)
                eax_4 = 1
            else
                eax_4 = 3
        else if (eax_1 != 1)
            eax_4 = eax_1 - 2
            
            if (eax_1 != 2)
                goto label_41bd5d
            
            eax_4 = 0xf
            
            if (esi != 0)
                eax_4 = 9
        else if (esi == 0)
            eax_4 = 0xe
        else
            void* eax_5
            eax_5.b = *(esi + 0x20) == 4
            eax_4 = eax_5 + 7
        
    label_41bd92:
        
        if (eax_4 u> 0x11)
            var_14 = "GameCreateButtonState"
            var_18 = 0x282
        label_41be61:
            sub_44e4d0(eax_4, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", var_18, var_14)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    switch (eax_4)
        case nullptr
            return 0
        case 1
            return 2
        case 2
            return 3
        case 3
            if (arg1[7] == 1 && arg1[8] == *(esi + 0x18))
                int32_t ecx_6 = 0
                void* eax_20 = &arg1[0xa]
                
                while (true)
                    int32_t edx_3 = *(eax_20 - 0xc)
                    
                    if (edx_3 != 1)
                        if (edx_3 == 2 && *(eax_20 - 8) == 0)
                            break
                    else if (*eax_20 != 2)
                        break
                    
                    ecx_6 += 1
                    eax_20 += 0x2c
                    
                    if (ecx_6 s>= 5)
                        return 5
            
            return 4
        case 4, 0xe, 0xf, 0x10, 0x11
            return 1
        case 5, 6
            if (esi != 0)
                return 6
            
            return 1
        case 7, 8, 9
            return 8
        case 0xa, 0xb, 0xd
            return 7
}
