// 函数名称: sub_441b80
// 虚拟地址: 0x441b80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_441b80(void** arg1, void** arg2)
{
    // 第一条实际指令: void** var_c = arg1
    void** var_c = arg1
    var_c = arg2
    void* ecx = sub_432bd0()
    
    if (arg1[0x3e] - 1 u<= 4)
        data_5bcd74 = 0
        data_5bb200 = 0x21
    
    int32_t i = 0
    
    if (arg1[0x3b] s> 0)
        ecx = &arg1[0x48]
        
        do
            *ecx = 0
            i += 1
            ecx += 0x14
        while (i s< arg1[0x3b])
    
    void* var_1c = ecx
    data_5bcd70 = 0xffffffff
    int32_t eax_2
    int32_t ecx_2
    eax_2, ecx_2 = sub_44cb60(arg1, &data_5c2e30)
    void* edx = &data_dfd4c8
    int32_t i_1 = 0
    data_5c2e2c = &data_dfd4c8
    
    if (arg1[0x3b] s> 0)
        void* esi_1 = &arg1[0xa]
        
        do
            if (*(esi_1 - 4) == 3)
                int32_t eax_3 = *(esi_1 + 4)
                int32_t var_1c_1 = ecx_2
                eax_2, ecx_2 = sub_430130(eax_3, edx, (eax_3 << 3) + &data_5c2e04, *esi_1)
                edx = data_5c2e2c
            
            i_1 += 1
            esi_1 += 0x2c
        while (i_1 s< arg1[0x3b])
    
    int32_t* var_1c_2 = var_c
    void* ecx_4 = data_5c2e2c
    int32_t* var_24 = data_5c2e30
    data_5bcd78 = 1
    data_5c2e30 = sub_436ca0(eax_2, &data_5c2e04, ecx_4, arg1, var_24, 1, var_1c_2)
    void* eax_5 = data_65aabc
    
    if (eax_5 != 0)
        if (*(eax_5 + 0x434) == 1)
            int32_t eax_7 = sub_44dea0(*(sub_41ad20() + 0xf8), &var_c)
            int32_t ecx_6 = data_5bcd74
            
            if (ecx_6 s< eax_7 && ecx_6 << 5 != neg.d(var_c) && var_c[ecx_6 * 8 + 5] == 1)
                void* eax_8 = sub_443fc0()
                
                if (eax_8 != 0)
                    do
                        sub_443b90(*(eax_8 + 0x1c))
                        data_5bcd74 += 1
                        eax_8 = sub_443fc0()
                        
                        if (eax_8 == 0)
                            break
                    while (*(eax_8 + 0x14) == 1)
        
        if (*data_5c2e30 == 0xa)
        label_441d25:
            void* result = sub_41af80(&arg1[2], *(data_5c2e30 + 4))
            
            if (*(result + 0x14) == 3)
                return result
            
            return sub_437100(data_5c2e30)
        
        if (sub_41adc0() == 0)
            goto label_441d25
        
        int32_t ecx_10 = *(data_5c2e30 + 4)
        eax_5 = data_65aabc
        
        if (eax_5 != 0)
            if (*(eax_5 + 0x648) != ecx_10)
                *(eax_5 + 0x648) = ecx_10
                char eax_12 = sub_41adc0()
                int32_t ecx_11 = data_5bb240
                
                if (eax_12 != 0)
                    ecx_11 = 0x16
                
                data_5bb240 = ecx_11
            
            goto label_441d25
    
    sub_44e4d0(eax_5, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
