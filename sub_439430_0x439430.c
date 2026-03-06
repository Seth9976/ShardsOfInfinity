// 函数名称: sub_439430
// 虚拟地址: 0x439430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_439430(int32_t arg1, int32_t arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: char* result = arg4
    char* result = arg4
    _memset(result, 0, 0x6c)
    void* eax = sub_443fc0()
    
    if (eax == 0)
        char const* const var_2c_1
        int32_t var_28_1
        char const* const var_24
        char* ecx
        
        if (*arg3 != 1)
            var_24 = "ShCalcEndTurnState"
            var_28_1 = 0x126a
            var_2c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            ecx = "yld.yieldType == CHOICE_ACTION"
        label_439763:
            sub_44e4d0(eax, &data_5559b1, ecx, var_2c_1, var_28_1, var_24)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (sub_4388e0(arg3[1], 6) == 0)
            *(result + (*(result + 0x68) << 3)) = 0
            *(result + 0x68) += 1
        
        if (arg3[0xd1] s> 0)
            *(result + (*(result + 0x68) << 3)) = 0xc
            *(result + 0x68) += 1
        
        if (arg3[0xcf] s> 0)
            int32_t* ebx_1 = arg3[0xce]
            int32_t eax_1
            eax_1.b = 0
            int32_t edx = 0
            char var_c_1 = eax_1.b
            int32_t i_1 = 0
            int32_t i
            
            do
                eax = zx.d((*ebx_1).w)
                
                if (eax u>= 0xc8)
                    goto label_43974a
                
                int32_t ecx_3 = *(*((eax << 5) + data_5c2e2c + 0x14) + 0x28)
                char eax_6 = var_c_1
                
                if (ecx_3 == 3)
                    eax_6 = 1
                
                var_c_1 = eax_6
                
                if (ecx_3 != 3)
                    edx += 1
                
                i = i_1 + 1
                ebx_1 = &ebx_1[1]
                i_1 = i
            while (i s< arg3[0xcf])
            
            if (var_c_1 != 0)
                *(result + (*(result + 0x68) << 3)) = 2
                *(result + 0x68) += 1
            
            if (edx == 1)
                *(result + (*(result + 0x68) << 3)) = 3
                *(result + 0x68) += 1
            else if (edx s> 1)
                *(result + (*(result + 0x68) << 3)) = 4
                *(result + 0x68) += 1
        
        void* ebx_2 = nullptr
        void* eax_11
        int32_t edx_1
        eax_11, edx_1 = sub_41ad20()
        int32_t var_10_1 = 0
        eax = *(eax_11 + 0xec)
        void* var_14_1 = eax
        int32_t edx_3
        
        if (eax s> 0)
            void* ecx_5 = nullptr
            
            do
                if (ecx_5 s< 0)
                    var_24 = "PGUIGet"
                    var_28_1 = 0x512
                    var_2c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    ecx = "who >= 0"
                    goto label_439763
                
                if (ecx_5 s>= 0x17c)
                    var_24 = "PGUIGet"
                    var_28_1 = 0x513
                    var_2c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    ecx = "(int)who < (int)MAX_PLAYERS"
                    goto label_439763
                
                if (*(ecx_5 + 0x5bcb50) != 0 || *(ecx_5 + 0x5bcb14) + *(ecx_5 + 0x5bcb2c) s<= 0)
                    edx_1.b = 1
                else
                    edx_1.b = 0
                
                eax = ebx_2 + 1
                
                if (edx_1.b != 0)
                    eax = ebx_2
                
                edx_1 = var_10_1 + 1
                ecx_5 += 0x4c
                var_10_1 = edx_1
                ebx_2 = eax
            while (edx_1 s< var_14_1)
            
            if (ebx_2 != 2 || arg3[0xd5] != 1)
                goto label_439631
            
            eax = zx.d((*arg3[0xd4]).w)
            
            if (eax u>= 0xc8)
                goto label_43974a
            
            edx_3 = data_5c2e2c
            
            if (**((eax << 5) + edx_3 + 0x14) != 0x33)
                goto label_439637
            
            *(result + (*(result + 0x68) << 3)) = 1
            *(result + 0x68) += 1
            goto label_439720
        
    label_439631:
        edx_3 = data_5c2e2c
    label_439637:
        eax = arg3[0xd5]
        
        if (eax != 1)
            if (eax s<= 1)
                goto label_43972e
            
            if (ebx_2 == 2)
                *(result + (*(result + 0x68) << 3)) = 6
                *(result + 0x68) += 1
                goto label_439720
            
            int32_t* ebx_3 = arg3[0xd4]
            uint32_t ecx_8 = zx.d((*ebx_3).w)
            
            if (ecx_8 u>= 0xc8)
            label_43974a:
                var_24 = "CardGet"
                var_28_1 = 0x87
                ecx = "idNoMimic < MAX_CARDS"
                var_2c_1 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
                goto label_439763
            
            int32_t edx_4 = 1
            void* ecx_10
            ecx_10.b = 0
            
            if (eax s> 1)
                ecx_10 = &ebx_3[1]
                
                while (true)
                    eax = zx.d((*ecx_10).w)
                    
                    if (eax u>= 0xc8)
                        goto label_43974a
                    
                    result = arg4
                    
                    if (*((ecx_8 << 5) + edx_3 + 8) != *((eax << 5) + data_5c2e2c + 8))
                        ecx_10.b = 1
                        break
                    
                    edx_4 += 1
                    ecx_10 += 4
                    
                    if (edx_4 s>= arg3[0xd5])
                        ecx_10.b = 0
                        break
            
            int32_t eax_25 = *(result + 0x68)
            
            if (ecx_10.b == 0)
                *(result + (eax_25 << 3)) = 8
            else
                *(result + (eax_25 << 3)) = 9
            
            *(result + 0x68) += 1
            goto label_439720
        
        int32_t eax_19 = *(result + 0x68)
        
        if (ebx_2 == 2)
            *(result + (eax_19 << 3)) = 5
            *(result + 0x68) += 1
            goto label_439720
        
        *(result + (eax_19 << 3)) = 7
        *(result + 0x68) += 1
        *(result + (*(result + 0x68) << 3) - 4) = *arg3[0xd4]
    label_439720:
        *(result + (*(result + 0x68) << 3) - 4) = *arg3[0xd4]
    label_43972e:
        void* edx_5 = &result[*(result + 0x68) << 3]
        int32_t eax_31 = (edx_5 - result) s>> 3
        sub_445260(eax_31, edx_5, result, eax_31, sub_439410)
    
    return result
}
