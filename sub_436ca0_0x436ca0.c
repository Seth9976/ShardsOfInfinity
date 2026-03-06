// 函数名称: sub_436ca0
// 虚拟地址: 0x436ca0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_436ca0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t* arg5, void* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* result = arg5
    void* result_1 = arg6
    void* result_2 = result_1
    
    if (arg7 != 0)
        if (*arg7 == 1)
            result_1 = nullptr
        
        result_2 = result_1
    
    void* result_3 = result_1
    
    while (*result != 0xa)
        void* ecx = data_65aabc
        char const* const var_c8
        int32_t var_c4_4
        char const* const var_c0_5
        char* ecx_23
        
        if (ecx == 0)
        label_436fa0:
            var_c0_5 = "GetClient"
            var_c4_4 = 0x74
            var_c8 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_23 = "gClient"
        label_436fb6:
            sub_44e4d0(result_1, &data_5559b1, ecx_23, var_c8, var_c4_4, var_c0_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (*(ecx + 0x10) != *(ecx + 0xc) || data_e47340 != 0)
            TEB* fsbase
            
            if (data_e481e8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                __Init_thread_header(&data_e481e8)
                
                if (data_e481e8 == 0xffffffff)
                    data_e48548 = 0
                    __Init_thread_footer(&data_e481e8)
            
            __builtin_memcpy(&data_e481f0, result, 0x380)
            data_e481f0 = 0xb
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return &data_e481f0
        
        int32_t eax_4 = result[1]
        void* eax_5 = sub_4297e0(arg4, eax_4)
        int128_t var_44
        char eax_6 = sub_436a90(eax_5, &var_44)
        
        if (arg7 != 0 && *arg7 == 2 && eax_4 == arg7[1] && *(eax_5 + 0x10) s>= arg7[2])
            result_3 = nullptr
        
        if (eax_6 == 0)
            if (*(sub_41af80(&arg4[2], result[1]) + 0x14) != 3)
                int32_t edx_11 = arg4[0x3b]
                result_1 = nullptr
                int32_t edi_2 = result[1]
                
                if (edx_11 s<= 0)
                label_436ecc:
                    var_c0_5 = "PlayerIsAccountType"
                    var_c4_4 = 0xb7f
                    var_c8 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    ecx_23 = "Halt"
                    goto label_436fb6
                
                void* ecx_22 = &arg4[0xb]
                
                while (true)
                    if (*ecx_22 == edi_2)
                        if (arg4[result_1 * 0xb + 9] != 1)
                            break
                        
                        int32_t var_14 = *arg4
                        int32_t var_c = edi_2
                        int32_t var_10 = 0
                        void* eax_28 = sub_411690()
                        sub_450d30(eax_28, 0xf42b3, *(eax_28 + 0x14), 0xc, &var_14)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return result
                    
                    result_1 += 1
                    ecx_22 += 0x2c
                    
                    if (result_1 s>= edx_11)
                        goto label_436ecc
                
                break
            
            if (data_5c2d98 s> 0)
                break
            
            void var_ac
            int128_t* eax_14 = sub_42fb70(&var_ac, arg3, arg2 + (result[1] << 3), &var_ac, result)
            var_44 = *eax_14
            int128_t var_34_1 = eax_14[1]
            result_1 = data_65aabc
            int128_t var_24_1 = eax_14[2]
            
            if (result_1 == 0)
                goto label_436fa0
            
            int32_t edi = result[1]
            
            if (*(result_1 + 0x434) != 2)
                sub_436b50(&var_44, edi, arg4, &var_44)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            void* eax_15 = sub_41af80(&arg4[2], edi)
            
            if (*(eax_15 + 0x14) != 3)
                sub_44e4d0(eax_15, &data_5559b1, "IsAI(save, who) == true", 
                    "c:\ax2017\jams\shards\code\shardsclient.cpp", 0xba1, "SubmitNetworkAIAction")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_16 = sub_4297e0(arg4, edi)
            int32_t esi_2 = *(eax_16 + 0xc)
            sub_436820(eax_16, &var_44)
            int32_t edx_10 = *(eax_16 + 0xc) - esi_2
            int32_t* ecx_14 = *eax_16 + esi_2
            int32_t* var_6c = ecx_14
            int32_t var_70 = esi_2
            int32_t var_64 = edx_10
            *(result_1 + 0xc) += 1
            int32_t var_7c = *(result_1 + 0xc)
            char var_60 = 1
            int32_t var_78 = *arg4
            int32_t var_74 = edi
            int32_t* var_c0_3 = &var_7c
            sub_452560(&var_7c, edx_10, *(result_1 + 0x14), ecx_14)
            *(eax_16 + 0xc) = esi_2
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        result_1 = sub_44c7d0(&var_44, result, arg3, &var_44, result_2)
        result = result_1
        result_2 = result_3
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
