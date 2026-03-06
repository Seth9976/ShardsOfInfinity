// 函数名称: sub_536645
// 虚拟地址: 0x536645
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_536645(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x28
    int32_t __saved_ebp_1 = 0x28
    int32_t var_8 = 0x5ac8e8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_40 = ebx
    int32_t esi
    int32_t var_44 = esi
    int32_t edi
    int32_t var_48 = edi
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac8e8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t eax_19 = __security_cookie_1 ^ &__saved_ebp
    int32_t var_4c = eax_19
    int32_t* var_1c = &var_4c
    void* const var_50_6 = &data_536651
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_28 = nullptr
    int32_t var_38 = 0
    char ecx = 1
    char var_21 = 1
    int32_t var_50 = 8
    int32_t* esp = &var_4c
    
    if (arg1 s<= 8)
        if (arg1 == 8)
            goto label_5366a1
        
        if (arg1 == 2)
            goto label_53669a
        
        if (arg1 == 4)
            goto label_5366a1
        
        if (arg1 != 6)
            goto label_5366ca
        
        goto label_53669a
    
    int32_t result
    int32_t* eax_6
    int32_t* edi_1
    
    if (arg1 == 0xb)
    label_5366a1:
        int32_t* eax_7 = ___acrt_getptd_noexit()
        var_28 = eax_7
        
        if (eax_7 != 0)
            eax_6 = siglookup(arg1, *eax_7)
            esp = &var_4c
            
            if (eax_6 == 0)
                goto label_5366ca
            
            edi_1 = &eax_6[2]
            ecx = 0
            var_21 = 0
            goto label_5366e2
        
        result = 0xffffffff
    else if (arg1 == 0xf || (arg1 s> 0x14 && arg1 s<= 0x16))
    label_53669a:
        esp = &var_4c
        edi_1 = get_global_action_nolock(arg1)
    label_5366e2:
        int32_t var_34_1 = 0
        
        if (ecx != 0)
            ___acrt_lock(3)
            esp = &var_4c
            ecx = var_21
        
        int32_t var_30_1 = 0
        char var_22_1 = 0
        int32_t var_8_1 = 0
        int32_t edi_3 = *edi_1
        
        if (ecx != 0)
            edi_3 = ror.d(edi_3 ^ __security_cookie, (__security_cookie).b & 0x1f)
            ecx = var_21
        
        int32_t var_30_2 = edi_3
        eax_6.b = edi_3 == 1
        char var_22_2 = eax_6.b
        
        if (eax_6.b == 0)
            if (edi_3 == 0)
                if (ecx != 0)
                    ___acrt_unlock(3)
                
                sub_52a0ce(3)
                breakpoint
            
            if (arg1 != 8 && arg1 != 0xb && arg1 != 4)
                goto label_536777
            
            var_34_1 = var_28[1]
            var_28[1] = 0
            
            if (arg1 != 8)
            label_5367a5:
                int32_t var_50_3 = 0x20
                esp = &var_4c
                *edi_1 = __security_cookie
            else
                var_38 = *sub_53663c()
                *sub_53663c() = 0x8c
            label_536777:
                
                if (arg1 != 8)
                    goto label_5367a5
                
                void* ecx_3 = 0x24 + *var_28
                void* eax_14 = 0x6c + ecx_3
                
                while (true)
                    void* var_3c_1 = ecx_3
                    
                    if (ecx_3 == eax_14)
                        break
                    
                    *(ecx_3 + 8) = 0
                    ecx_3 += 0xc
        
        int32_t var_8_2 = 0xfffffffe
        $LN39(&__saved_ebp)
        
        if (var_22_2 == 0)
            if (arg1 != 8)
                edi_3(arg1)
            else
                int32_t var_50_4 = sub_530312()[2]
                edi_3(8)
            
            esp = &var_48
            
            if (arg1 == 8 || arg1 == 0xb || arg1 == 4)
                var_28[1] = var_34_1
                
                if (arg1 == 8)
                    sub_530312()[2] = var_38
        
        result = 0
    else
    label_5366ca:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    *(esp - 4) = &data_536836
    @__security_check_cookie@4(eax_19 ^ &__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    esp[1]
    esp[2]
    esp[3]
    int32_t __saved_ebp_2 = *(esp - 4)
    return result
}
