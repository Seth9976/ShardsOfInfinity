// 函数名称: sub_484c40
// 虚拟地址: 0x484c40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_484c40(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5431a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** i_2 = nullptr
    int32_t var_28 = 0
    int32_t var_24 = 0
    int32_t var_8_1 = 0
    int32_t eax_3 = 0
    
    if (data_5b2e40 != 0)
        eax_3 = 1
    
    char* var_40 = eax_3.b.d
    char eax_4
    char** ecx
    eax_4, ecx = sub_484ab0(eax_3, &i_2, arg1, var_40)
    char** i_1 = i_2
    char** i
    
    if (eax_4 != 0)
        i = i_1
        
        if (i != 0)
            do
                char** i_4 = i
                i = i[0xa]
                char* esi_1 = *i_4
                char* var_14 = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    ecx = &var_14
                    char* eax_5 = sub_44f000(ecx)
                    *(eax_5 + 4) += 1
                
                var_8_1.b = 3
                var_40 = ecx
                char** ecx_1 = &var_40
                var_40 = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_6 = sub_44f000(ecx_1)
                    *(eax_6 + 4) += 1
                
                int32_t* eax_7
                char** ecx_2
                eax_7, ecx_2 = sub_48d4c0(ecx_1)
                
                if (eax_7 == 0)
                    var_8_1.b = 4
                    
                    if (data_cdf414 != eax_7 && esi_1 != 0 && *esi_1 != eax_7.b)
                        ecx_2 = &var_14
                        char* eax_8 = sub_44f000(ecx_2)
                        int32_t temp2_1 = *(eax_8 + 4)
                        *(eax_8 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            ecx_2 = sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                            var_14 = &data_5559b1
                    
                    var_8_1.b = 0
                    goto label_484d46
                
                int32_t eax_14 = *eax_7
                char var_18
                var_18.d = eax_14
                var_8_1.b = 5
                
                if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                    ecx_2 = &var_14
                    char* eax_15 = sub_44f000(ecx_2)
                    int32_t temp1_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        ecx_2 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_14 = &data_5559b1
                    
                    eax_14 = var_18.d
                
                var_8_1.b = 0
                
                if (eax_14 == 0)
                label_484d46:
                    var_40 = i_4[4]
                    int32_t esi_2 = i_4[2]
                    int32_t var_44_1 = i_4[3]
                    char* var_48 = ecx_2
                    var_14 = &var_48
                    char* var_4c
                    
                    if (arg1 == 0)
                        var_4c = "XString::XString"
                        sub_44e4d0(arg1, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                            var_4c)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    char* ecx_5 = sub_44f240(&var_48, arg1)
                    var_8_1.b = 6
                    int32_t eax_10 = i_4[1]
                    var_4c = ecx_5
                    var_18.d = eax_10
                    char* eax_11 = *i_4
                    var_4c = eax_11
                    
                    if (eax_11 != 0 && *eax_11 != 0)
                        eax_11 = sub_44f000(&var_4c)
                        *(eax_11 + 4) += 1
                    
                    var_8_1.b = 0
                    ecx = sub_48de50(eax_11, esi_2, var_18.d, var_4c, var_48)
                else
                    char* eax_16 = *i_4
                    char* ecx_14 = &data_5559b1
                    
                    if (eax_16 != 0)
                        ecx_14 = eax_16
                    
                    var_40 = ecx_14
                    ecx = sub_44e260("Asset in pack is already loaded '%s'")
            while (i != 0)
            
            i_1 = i_2
        
        i.b = 1
    else
        i.b = 0
    
    int32_t var_8_2 = 7
    
    while (i_1 != 0)
        char** i_3 = i_1
        i_1 = i_1[0xa]
        var_8_2.b = 8
        
        if (data_cdf414 != 0)
            char* eax_12 = *i_3
            
            if (eax_12 != 0 && *eax_12 != 0)
                char* eax_13 = sub_44f000(i_3)
                int32_t temp0_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                    *i_3 = &data_5559b1
        
        var_8_2.b = 7
        sub_45d050(i_3, 0x30)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i.b
}
