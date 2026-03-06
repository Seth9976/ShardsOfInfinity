// 函数名称: sub_4374e0
// 虚拟地址: 0x4374e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __fastcallsub_4374e0(char arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int128_t* result = __security_cookie ^ &__saved_ebp
    int128_t* result_2 = result
    
    if (arg1 == 0)
        int32_t i_1 = data_5bcd3c
        int32_t edi_1 = 0
        int32_t var_20_1 = 0
        bool cond:0_1 = i_1 == 0
        char var_1c[0x14]
        
        if (i_1 s> 0)
            void* ebx_1 = &data_5bccc8
            
            while (true)
                int32_t esi_1 = *ebx_1
                int32_t ecx = *(sub_41ad20() + 0xec)
                void* eax_2 = data_65aabc
                
                if (eax_2 != 0)
                    int32_t esi_2 = esi_1 - *(eax_2 + 0x648)
                    int32_t eax_3 = esi_2 + ecx
                    
                    if (esi_1 - *(eax_2 + 0x648) s>= 0)
                        eax_3 = esi_2
                    
                    *(&var_1c + (edi_1 << 2)) = eax_3
                    uint32_t (* eax_4)[0x4] = sub_4450d0(&data_5bcd7c)
                    int32_t var_34_1 = 0x10
                    int32_t var_2c_1 = 0xffffffff
                    int32_t var_28_1 = 0xffffffff
                    int32_t var_9c = 1
                    *eax_4 = 1
                    (*eax_4)[9] = 5
                    (*eax_4)[0xa] = 0xffffffff
                    eax_4[3][0] = *(ebx_1 + 0xc)
                    (*eax_4)[0xb] = *ebx_1
                    result = *ebx_1
                    int128_t* result_1 = result
                    eax_4[0x4f][0] = 0
                    int128_t var_98_1 = var_34_1.o
                    __builtin_memcpy(&eax_4[0xa], &var_9c, 0x68)
                    __builtin_memcpy(&(*eax_4)[0x42], &var_9c, 0x68)
                    eax_4[0x4f][0] += 1
                    __builtin_memcpy(&eax_4[0x17], &(*eax_4)[0x42], 0x68)
                    (*eax_4)[0x77] = 0x7d0
                    (*eax_4)[0x76] = 9
                    
                    if (*(ebx_1 + 8) s<= 0)
                    label_437659:
                        ebx_1 += 0x18
                        i_1 = data_5bcd3c
                        edi_1 = var_20_1 + 1
                        var_20_1 = edi_1
                        
                        if (edi_1 s< i_1)
                            continue
                        
                        cond:0_1 = i_1 == 0
                        break
                    else
                        data_dfcf48
                        sub_482460()
                        eax_2 = data_65aabc
                        
                        if (eax_2 != 0)
                            int32_t ecx_4 = *ebx_1
                            char var_b4_1
                            uint32_t eax_5
                            
                            if (ecx_4 != *(eax_2 + 0x648))
                                int32_t eax_7 = sub_41aec0(ecx_4) - 1
                                char eax_8 = sub_429030()
                                eax_5 = sub_47a240(eax_7)
                                int32_t var_b0_3 = 1
                                var_b4_1 = eax_8
                            else
                                int32_t var_b0_1 = 0
                                var_b4_1 = ecx_4.b
                                eax_5 = sub_429030()
                            
                            result = sub_47b200(eax_5, "stateEffectDisplayShields", eax_5, var_b4_1)
                            goto label_437659
                
                sub_44e4d0(eax_2, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
        
        if (not(cond:0_1))
            uint32_t (* eax_9)[0x4] = sub_4450d0(&data_5bcd7c)
            *eax_9 = 2
            eax_9[5][0] = *(data_cdf428 + 0x2c)
            sub_51d5b0(&(*eax_9)[0xe], &var_1c, i_1 << 2)
            (*eax_9)[0x13] = i_1
            sub_4366d0(&(*eax_9)[0xe])
            int32_t* eax_13 = sub_4953d0(data_dfc824, &(*eax_9)[0x1b])
            eax_13[0xb] = (*eax_9)[0x27]
            (*eax_9)[0x15] = eax_13[0x1e]
            
            if (i_1 s> 0)
                void* edi_6 = &(*eax_9)[0x16]
                void* ebx_3 = &(*eax_9)[0x1d]
                int32_t i
                
                do
                    int32_t* eax_15 = sub_4953d0(data_dfc828, ebx_3)
                    edi_6 += 4
                    ebx_3 += 8
                    eax_15[0xb] = (*eax_9)[0x27]
                    *(edi_6 - 4) = eax_15[0x1e]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            data_dfcf1c
            result = sub_482460()
    
    data_5bcd3c = 0
    @__security_check_cookie@4(result_2 ^ &__saved_ebp)
    return result
}
