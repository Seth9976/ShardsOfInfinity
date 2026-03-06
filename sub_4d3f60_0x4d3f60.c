// 函数名称: sub_4d3f60
// 虚拟地址: 0x4d3f60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4d3f60()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_Endwrite@?$basic_filebuf@_WU?$char_traits@_W@std@@@std@@IAE_NXZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_b4 = edi
    int32_t var_b8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = data_ce26e4
    
    if (result != 0)
        if (*(result + 4) != 0x20)
            data_65ae40 = 0xff000000
            float var_84[0x6]
            float* eax_3 = sub_4d3450(&var_84)
            int128_t var_4c = *eax_3
            int128_t var_3c_1 = *(eax_3 + 0x10)
            int128_t var_2c_1 = *(eax_3 + 0x20)
            int64_t var_1c_1 = *(eax_3 + 0x30)
            sub_457570(&var_4c)
            sub_456c90(0x3f333333)
            sub_456c40(0x3e7)
            
            if (data_ce26f8 == 2)
                sub_47e890()
            
            void* eax_4 = data_ce26e4
            
            if (*(eax_4 + 4) == 0x1e)
                sub_4fbca0(edi)
                eax_4 = data_ce26e4
            
            if (*(eax_4 + 4) == 0x1d)
                sub_507e40()
                eax_4 = data_ce26e4
            
            if (*(eax_4 + 4) == 0x22)
                sub_473d20()
            
            int32_t* ecx_2 = data_ce1b00
            int32_t result_1
            float var_a4
            int128_t var_a0
            void* ThreadLocalStoragePointer
            
            if (ecx_2 != 0 && data_ce26f8 != 1)
                sub_47d5b0(ecx_2, (zx.o(0)).d, (zx.o(0)).d)
                ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            else if (data_ce1b04 == 0 || data_ce26f8 != 1)
                result_1 = 0xffc0c0c0
                data_65ae40 = result_1
                ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            else
                ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                void* esi_1 = *ThreadLocalStoragePointer
                
                if (data_e49cc8 s> *(esi_1 + 4))
                    __Init_thread_header(&data_e49cc8)
                    
                    if (data_e49cc8 == 0xffffffff)
                        int32_t var_8_1 = 0
                        data_e49ccc = sub_48d5b0("sys/skybox.material", 5)
                        int32_t var_8_2 = 0xffffffff
                        __Init_thread_footer(&data_e49cc8)
                
                if (data_e49cd0 s> *(esi_1 + 4))
                    __Init_thread_header(&data_e49cd0)
                    
                    if (data_e49cd0 == 0xffffffff)
                        int32_t var_8_3 = 1
                        data_e49cd4 = sub_48d5b0("sys/skybox.structure", 2)
                        int32_t var_8_4 = 0xffffffff
                        __Init_thread_footer(&data_e49cd0)
                
                int32_t eax_9 = data_ce2724
                int32_t* ecx_3 = data_e49cd4
                int32_t var_c0_1 = data_ce1b04
                var_a0 = data_5724f8
                var_a4 = 10f
                int64_t var_90_1 = data_ce271c.q
                int32_t var_88_1 = eax_9
                sub_459d40(eax_9, &var_a4, ecx_3, data_e49ccc, var_c0_1, 0)
            
            sub_456c40(0x3e9)
            
            if (data_ce26f8 == 1 && *(data_ce24d4 + 0x84) != 0)
                void* esi_2 = *ThreadLocalStoragePointer
                
                if (data_e49cd8 s> *(esi_2 + 4))
                    __Init_thread_header(&data_e49cd8)
                    
                    if (data_e49cd8 == 0xffffffff)
                        int32_t var_8_5 = 2
                        data_e49cdc = sub_48d5b0("sys/particle_3d.material", 5)
                        int32_t var_8_6 = 0xffffffff
                        __Init_thread_footer(&data_e49cd8)
                
                if (data_e49ce0 s> *(esi_2 + 4))
                    __Init_thread_header(&data_e49ce0)
                    
                    if (data_e49ce0 == 0xffffffff)
                        int32_t var_8_7 = 3
                        data_e49ce4 = sub_48d5b0("sys/holodeck.texture", 3)
                        int32_t var_8_8 = 0xffffffff
                        __Init_thread_footer(&data_e49ce0)
                
                __builtin_memcpy(&var_4c:8, 
                    "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x"
                "00\x00\x00\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80"
                "3f\x00\x00\x00\x00", 
                    0x30)
                var_a4 = 4f
                int32_t var_88_2 = 0
                int128_t var_6c
                __builtin_memcpy(&var_6c, 
                    "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00", 
                    0x20)
                var_a0 = data_5724f8
                int64_t var_90_2 = 0
                sub_4585d0(sub_459e70(0f, &var_4c:8, &var_a4, 4), &var_6c, &var_4c:8, &data_5c77bc, 
                    data_e49ce4, data_e49cdc)
            
            sub_456c40(0)
            int32_t* eax_17 = sub_4b5510()
            
            if (*(data_ce26e4 + 4) != 0x22)
                void* esi_3 = nullptr
                void* eax_19
                
                while (true)
                    void* ecx_7
                    
                    if (esi_3 != 0)
                        ecx_7 = *eax_17
                        esi_3 += 0x6c
                    else
                        esi_3 = *eax_17
                        ecx_7 = esi_3
                    
                    eax_19 = eax_17[1] * 0x6c + ecx_7
                    
                    if (esi_3 u>= eax_19)
                        break
                    
                    while ((*(esi_3 + 0x68) & 0xffff0000) == 0)
                        esi_3 += 0x6c
                        
                        if (esi_3 u>= eax_19)
                            goto label_4d4350
                    
                    void* var_bc_2 = ecx_7
                    sub_459da0(esi_3, data_ce2798)
                
            label_4d4350:
                void* esi_4 = data_ce26e4
                void* edi_2 = data_cdf428
                
                if (*(esi_4 + 4) == 0x18)
                    if (edi_2 == 0)
                        sub_44e4d0(eax_19, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                            "GetGameData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t* eax_20 = *(edi_2 + 0xc)
                    result_1 = 0
                    int32_t edx_5
                    eax_19, edx_5 = sub_4c4670(eax_20, &result_1)
                    
                    if (eax_19.b != 0)
                        do
                            int32_t* result_3 = result_1
                            sub_4c1b90(eax_19, edx_5, result_3, &data_5c779c)
                            
                            if ((0x8000 & GetKeyState(0x57)) != 0)
                                void* eax_22
                                eax_22.b = *(data_65ae04 + 0x18)
                                
                                if (eax_22.b != 0)
                                    HWND eax_23
                                    int32_t edx_6
                                    eax_23, edx_6 = GetFocus()
                                    
                                    if (eax_23 == data_ce1790 || eax_23 == 0)
                                        if (data_e49ce8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                            edx_6 = __Init_thread_header(&data_e49ce8)
                                            
                                            if (data_e49ce8 == 0xffffffff)
                                                int32_t var_8_9 = 4
                                                data_e49cec =
                                                    sub_48d5b0("sys/SpriteWireFrame.material", 5)
                                                int32_t var_8_10 = 0xffffffff
                                                edx_6 = __Init_thread_footer(&data_e49ce8)
                                        
                                        int32_t eax_27 = data_e49cec
                                        result_3[0x21] = eax_27
                                        sub_4c1b90(eax_27, edx_6, result_3, &data_5c779c)
                                        result_3[0x21] = 0
                            
                            eax_19, edx_5 = sub_4c4670(eax_20, &result_1)
                        while (eax_19.b != 0)
                        
                        esi_4 = data_ce26e4
                        edi_2 = data_cdf428
                
                if (*(esi_4 + 4) == 0x19)
                    if (edi_2 == 0)
                        sub_44e4d0(eax_19, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                            "GetGameData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t* edi_4 = *(edi_2 + 0x10)
                    void* esi_5 = nullptr
                    
                    while (true)
                        void* ecx_14
                        
                        if (esi_5 != 0)
                            ecx_14 = *edi_4
                            esi_5 += 0x7c
                        else
                            esi_5 = *edi_4
                            ecx_14 = esi_5
                        
                        void* eax_29 = edi_4[1] * 0x7c + ecx_14
                        
                        if (esi_5 u>= eax_29)
                            break
                        
                        while (true)
                            if ((*(esi_5 + 0x78) & 0xffff0000) != 0)
                                if (*(esi_5 + 0x20) == 1)
                                    break
                                
                                sub_49ee40(esi_5, &data_5c779c)
                                break
                            
                            esi_5 += 0x7c
                            
                            if (esi_5 u>= eax_29)
                                goto label_4d44e4
            
        label_4d44e4:
            result = data_ce26f8
            
            if (result == 1 || result == 2)
                result = sub_4f3000()
                
                if (data_ce26f8 == 2)
                    void* eax_30 = data_ce26e4
                    
                    if (eax_30 != 0 && *(eax_30 + 4) == 0x12)
                        var_a0 = data_59e500
                        sub_47d680(&var_a0:0xc, &data_571944)
                        int32_t var_8_11 = 5
                        sub_4afa60(
                            sub_44f240(&result_1, 
                                "Grumpy wizards make toxic brew for the evil Queen and Jack.\r%$1234567890?!"), 
                            &var_a0:0xc, &result_1, data_ce26e4, 0xff000000, 4)
                        int32_t var_8_12 = 6
                        
                        if (data_cdf414 != 0)
                            int32_t result_2 = result_1
                            
                            if (result_2 != 0 && *result_2 != 0)
                                char* eax_32 = sub_44f000(&result_1)
                                int32_t temp0_1 = *(eax_32 + 4)
                                *(eax_32 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
                        
                        int32_t var_8_13 = 0xffffffff
                        var_a0 = data_59e520
                        sub_47d680(&var_a0:0xc, &data_571948)
                        int32_t var_8_14 = 7
                        result = sub_4afa60(
                            sub_44f240(&result_1, 
                                "Grumpy wizards make toxic brew for the evil Queen and Jack.\r%$1234567890?!"), 
                            &var_a0:0xc, &result_1, data_ce26e4, 0xffffffff, 4)
                        int32_t var_8_15 = 8
                        
                        if (data_cdf414 != 0)
                            result = result_1
                            
                            if (result != 0 && *result != 0)
                                result = sub_44f000(&result_1)
                                int32_t temp1_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                        
                        int32_t var_8_16 = 0xffffffff
                    
                    if (eax_30 == 0 || *(eax_30 + 4) != 0x12 || data_ce26f8 == 2)
                        result = data_ce19c4
                        __builtin_memcpy(result + 0xa0, 
                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                        "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x80\x3f\x00", 
                            0x41)
                        *(result + 0x258) = 0
                        sub_45ae60()
        else
            result = sub_4f8e70()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
