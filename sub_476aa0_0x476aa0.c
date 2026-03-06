// 函数名称: sub_476aa0
// 虚拟地址: 0x476aa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_476aa0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542d38
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_5cea2c != 0 && data_5cd9f0 != 0)
        void* eax_3 = sub_469160(data_5cda2c)
        int32_t var_3c_1 = data_dff67c
        int32_t* eax_4 = sub_45d320(eax_3)
        result = sub_4b8ac0(eax_4, eax_4, &data_5b1d6c, var_3c_1, 0x68)
        
        if (result != 0)
            result = result[1]
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            
            if (result != 0)
                int32_t var_3c_2 = data_dff67c
                int32_t* eax_5 = sub_45d320(eax_3)
                int32_t* eax_6 = sub_4b8ac0(eax_5, eax_5, &data_5b1d6c, var_3c_2, 0x68)
                char* var_18_1
                char* eax_8
                void* esi_2
                
                if (eax_6 != 0 && eax_6[1] != 0)
                    char const (** var_3c_3)[0xa] = &data_5b1d6c
                    int32_t* eax_7 = sub_45d320(eax_3)
                    eax_8 = sub_4b8a40(eax_7, eax_7, &data_5b1d6c, 0x6b)
                    esi_2 = nullptr
                    var_18_1 = eax_8
                
                if (eax_6 == 0 || eax_6[1] == 0 || eax_6[1] s<= 0)
                label_476b9e:
                    esi_2 = 0xffffffff
                else
                    int32_t edi_1 = 0
                    
                    while (__stricmp(*(*eax_6 + edi_1), eax_8) != 0)
                        eax_8 = var_18_1
                        esi_2 += 1
                        edi_1 += 0xc
                        
                        if (esi_2 s>= eax_6[1])
                            goto label_476b9e
                
                void* esi_4 = esi_2 + arg1
                
                if (esi_4 == 0xfffffffe)
                    esi_4 = result_1 - 1
                else if (esi_4 == result_1)
                    esi_4 = 0xffffffff
                
                int32_t* eax_11 = sub_45d320(eax_3)
                
                if (esi_4 != 0xffffffff)
                    int32_t var_3c_5 = data_dff67c
                    int32_t* eax_13 = sub_45d320(eax_3)
                    int32_t* eax_14 = sub_4b8ac0(eax_13, eax_13, &data_5b1d6c, var_3c_5, 0x68)
                    char* edx_6
                    
                    if (eax_14 == 0 || eax_14[1] s<= esi_4 || esi_4 s< 0)
                        edx_6 = &data_5559b1
                    else
                        int32_t eax_15 = *eax_14
                        edx_6 = *(eax_15 + esi_4 * 0xc)
                        
                        if (edx_6 == 0)
                            sub_44e4d0(eax_15, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 
                                0x94, "XString::XString")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                    
                    sub_44f240(&result_1, edx_6)
                    int32_t var_8_1 = 0
                    char* result_3 = &data_5559b1
                    char* result_2 = result_1
                    
                    if (result_2 != 0)
                        result_3 = result_2
                    
                    sub_4b8610(result_3, eax_11, &data_5b1d6c, 0x6b, result_3)
                    int32_t var_8_2 = 1
                    
                    if (data_cdf414 != 0 && result_2 != 0 && *result_2 != 0)
                        char* eax_16 = sub_44f000(&result_1)
                        int32_t temp0_1 = *(eax_16 + 4)
                        *(eax_16 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                    
                    int32_t var_8_3 = 0xffffffff
                else
                    sub_4b8790(sub_44f590(eax_3 + 0x798, &data_5559b1), eax_11, &data_5b1d6c, 0x6b)
                
                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_6
                ecx_6.b = 0
                result = sub_469210(ecx_6.b)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
