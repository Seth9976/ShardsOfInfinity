// 函数名称: sub_4e2e60
// 虚拟地址: 0x4e2e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4e2e60(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545d8c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    char* const ebx
    char* const var_150 = ebx
    int32_t var_15c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_160 = 0x128
    char* var_13c
    uint32_t (* eax_3)[0x4] = _memset(&var_13c, 0, var_160)
    int32_t var_8_1 = 0
    
    if (arg1 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_160, arg1)
    void var_14c
    sub_48c750(&var_14c, 3)
    var_8_1.b = 1
    
    if (sub_4e0810(&var_13c, &var_14c) == 0)
    labelid_21:
        ebx.b = 0
    else
        int32_t var_138
        int32_t eax_5 = var_138
        
        if (eax_5 != 3)
            goto label_4e2f14
        
        if (sub_4e0be0(&var_13c) == 0)
        labelid_21:
            ebx.b = 0
        else
            eax_5 = var_138
        label_4e2f14:
            
            if (eax_5 != 1)
            labelid_21:
                ebx.b = 0
            else
                char* var_12c
                var_160 = var_12c
                char* var_130
                
                if (__strnicmp("Root", var_130, var_160) != 0)
                labelid_21:
                    ebx.b = 0
                else if (sub_4e0be0(&var_13c) == 0)
                labelid_21:
                    ebx.b = 0
                else
                    int32_t eax_9 = var_138
                    
                    if (eax_9 != 3)
                        goto label_4e2f75
                    
                    if (sub_4e0be0(&var_13c) == 0)
                    labelid_21:
                        ebx.b = 0
                    else
                        eax_9 = var_138
                    label_4e2f75:
                        
                        if (eax_9 != 1)
                        labelid_21:
                            ebx.b = 0
                        else
                            var_160 = var_12c
                            
                            if (__strnicmp("VERSION", var_130, var_160) != 0)
                            labelid_21:
                                ebx.b = 0
                            else
                                char eax_12
                                int32_t ecx_7
                                int32_t edx_2
                                eax_12, ecx_7, edx_2 = sub_4e0be0(&var_13c)
                                
                                if (eax_12 == 0 || var_138 != 3)
                                labelid_21:
                                    ebx.b = 0
                                else
                                    int32_t var_144
                                    var_160 = &var_144
                                    
                                    if (sub_4529c0(&var_144, edx_2, ecx_7, var_130, &data_5828f8) != 1)
                                    labelid_21:
                                        ebx.b = 0
                                    else if (sub_4e0be0(&var_13c) == 0 || var_144 != 2)
                                    labelid_21:
                                        ebx.b = 0
                                    else if (sub_4e0d40(&var_13c, "VERSION") == 0)
                                    label_4e3258:
                                        ebx.b = 0
                                    else if (sub_4e0cf0(&var_13c, "BONELIST") == 0)
                                    label_4e3258_1:
                                        ebx.b = 0
                                    else
                                        arg2[1] = 0
                                        uint32_t (* eax_18)[0x4] = sub_45cde0(0xc00)
                                        arg2[2] = eax_18
                                        sub_48b620(&(*eax_18)[1], "Root[0]")
                                        *eax_18 = sub_4950a0("Root[0]", 0)
                                        arg2[1] += 1
                                        ebx = &data_5559b1
                                        char* const var_140
                                        
                                        if (sub_4e0d40(&var_13c, "BONELIST") == 0)
                                            while (true)
                                                if (sub_4e0cf0(&var_13c, "BONE") == 0)
                                                    goto label_4e3258_2
                                                
                                                var_140 = &data_5559b1
                                                var_8_1.b = 0xa
                                                char eax_22 = sub_4e0df0(&var_13c)
                                                char* const esi_2 = var_140
                                                
                                                if (eax_22 != 0)
                                                    int32_t eax_23 = arg2[1]
                                                    
                                                    if (eax_23 s< 0x100)
                                                        ebx = arg2[2] + eax_23 * 0xc
                                                        char* edx_3 =
                                                            sub_45cd70(sub_44f8a0(&var_140) + 1)
                                                        char* const ecx_18 = &data_5559b1
                                                        *(ebx + 4) = edx_3
                                                        
                                                        if (esi_2 != 0)
                                                            ecx_18 = esi_2
                                                        
                                                        char* eax_26
                                                        
                                                        do
                                                            eax_26.b = *ecx_18
                                                            ecx_18 = &ecx_18[1]
                                                            *edx_3 = eax_26.b
                                                            edx_3 = &edx_3[1]
                                                        while (eax_26.b != 0)
                                                        *ebx = sub_4950a0(*(ebx + 4), 0)
                                                        
                                                        if (sub_4e0d40(&var_13c, "BONE") != 0)
                                                            arg2[1] += 1
                                                            var_8_1.b = 0x11
                                                            
                                                            if (data_cdf414 != 0 && esi_2 != 0
                                                                    && *esi_2 != 0)
                                                                char* eax_29 = sub_44f000(&var_140)
                                                                int32_t temp3_1 = *(eax_29 + 4)
                                                                *(eax_29 + 4) -= 1
                                                                
                                                                if (temp3_1 == 1)
                                                                    sub_45d050(eax_29, 
                                                                        *(eax_29 + 0xc) + 0x10)
                                                            
                                                            var_8_1.b = 1
                                                            
                                                            if (sub_4e0d40(&var_13c, "BONELIST") == 0)
                                                                continue
                                                            
                                                            ebx = &data_5559b1
                                                            break
                                                
                                                var_8_1.b = 0xf
                                                
                                                if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                                                    char* eax_35 = sub_44f000(&var_140)
                                                    int32_t temp2_1 = *(eax_35 + 4)
                                                    *(eax_35 + 4) -= 1
                                                    
                                                    if (temp2_1 == 1)
                                                        sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                                                
                                                goto label_4e3258_2
                                        
                                        if (sub_4e0cf0(&var_13c, "DATA") == 0)
                                        label_4e3258_2:
                                            ebx.b = 0
                                        else
                                            var_140 = &data_5559b1
                                            var_8_1.b = 0x13
                                            char eax_32 = sub_4e0df0(&var_13c)
                                            char* const esi_3 = var_140
                                            
                                            if (eax_32 == 0)
                                                ebx.b = 0
                                            else
                                                if (esi_3 != 0)
                                                    ebx = esi_3
                                                
                                                sub_4e24d0(ebx, arg2)
                                                
                                                if (sub_4e0d40(&var_13c, "DATA") == 0)
                                                    ebx.b = 0
                                                else if (sub_4e0d40(&var_13c, "Root") == 0)
                                                    ebx.b = 0
                                                else
                                                    ebx.b = 1
                                            
                                            var_8_1.b = 0x1a
                                            
                                            if (data_cdf414 != 0 && esi_3 != 0 && *esi_3 != 0)
                                                char* eax_39 = sub_44f000(&var_140)
                                                int32_t temp1_1 = *(eax_39 + 4)
                                                *(eax_39 + 4) -= 1
                                                
                                                if (temp1_1 == 1)
                                                    sub_45d050(eax_39, *(eax_39 + 0xc) + 0x10)
    
    var_8_1.b = 0x1b
    
    if (data_cdf414 != 0)
        char* const var_148
        char* eax_36 = var_148
        
        if (eax_36 != 0 && *eax_36 != 0)
            char* eax_37 = sub_44f000(&var_148)
            int32_t temp0_1 = *(eax_37 + 4)
            *(eax_37 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_37, *(eax_37 + 0xc) + 0x10)
                var_148 = &data_5559b1
    
    int32_t var_8_2 = 0x1c
    char* eax_38 = var_13c
    
    if (eax_38 != 0)
        var_160 = eax_38
        _aligned_free_base(var_160)
    
    void var_20
    sub_4e0e20(&var_20)
    var_13c = nullptr
    var_8_2.b = 0x1d
    sub_4e0e20(&var_20)
    int32_t result
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
