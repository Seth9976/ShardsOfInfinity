// 函数名称: __except_handler4
// 虚拟地址: 0x51ce80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__except_handler4(int32_t* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: char var_5 = 0
    char var_5 = 0
    void* esi = arg2 + 0x10
    int32_t* eax_1 = *(arg2 + 8) ^ __security_cookie
    int32_t result = 1
    _ValidateLocalCookies(eax_1, esi)
    ___except_validate_context_record(arg3)
    int32_t i_1 = *(arg2 + 0xc)
    
    if ((arg1[1].b & 0x66) == 0)
        int32_t* var_20 = arg1
        void* var_1c_1 = arg3
        *(arg2 - 4) = &var_20
        
        if (i_1 != 0xfffffffe)
            int32_t ecx_2
            int32_t i
            
            do
                int32_t eax_5 = i_1 + ((i_1 + 2) << 1)
                i = eax_1[eax_5]
                void* eax_6 = &eax_1[eax_5]
                
                if (*(eax_6 + 4) == 0)
                    ecx_2.b = var_5
                else
                    int32_t eax_7
                    eax_7, ecx_2 = @_EH4_CallFilterFunc@8()
                    ecx_2.b = 1
                    var_5 = 1
                    
                    if (eax_7 s< 0)
                        result = 0
                        goto label_51cf41_1
                    
                    if (eax_7 s> 0)
                        int32_t* eax_9 = arg1
                        
                        if (*eax_9 == 0xe06d7363)
                            if (__IsNonwritableInCurrentImage(&data_54c670) != 0)
                                int32_t var_30_2 = 1
                                ___DestructExceptionObject(arg1)
                            
                            eax_9 = arg1
                        
                        @_EH4_GlobalUnwind2@8(arg2, eax_9)
                        void* eax_11 = arg2
                        
                        if (*(eax_11 + 0xc) != i_1)
                            @_EH4_LocalUnwind@16(eax_11, i_1, esi, &__security_cookie)
                            eax_11 = arg2
                        
                        *(eax_11 + 0xc) = i
                        _ValidateLocalCookies(eax_1, esi)
                        @_EH4_TransferToHandler@8(*(eax_6 + 8), esi)
                        breakpoint
                
                i_1 = i
            while (i != 0xfffffffe)
            
            if (ecx_2.b != 0)
            label_51cf41:
                _ValidateLocalCookies(eax_1, esi)
    else if (i_1 != 0xfffffffe)
        @_EH4_LocalUnwind@16(arg2, 0xfffffffe, esi, &__security_cookie)
    label_51cf41_1:
        _ValidateLocalCookies(eax_1, esi)
    
    return result
}
