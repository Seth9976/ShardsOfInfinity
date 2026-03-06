// 函数名称: sub_41ba70
// 虚拟地址: 0x41ba70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_41ba70(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541200
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_3a8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = arg1
    void* var_390 = eax_3
    int32_t* ecx = eax_3 + 8
    int32_t var_388 = 0
    int32_t ebx = 0xc8
    int32_t* var_398 = ecx
    int32_t var_384[0xdc]
    int32_t eax_7
    
    while (true)
        int32_t esi_1 = 0
        int32_t* edi_1 = ecx
        
        while (true)
            int32_t var_394
            int32_t* var_3ac_1 = &var_394
            char* const var_38c
            sub_4167e0(eax_3, eax_3, &var_38c, edi_1)
            int32_t var_8_1 = 0
            
            if (data_cdf414 != 0)
                char* eax_4 = var_38c
                
                if (eax_4 != 0 && *eax_4 != 0)
                    char* eax_5 = sub_44f000(&var_38c)
                    int32_t temp3_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
                        var_38c = &data_5559b1
            
            int32_t var_8_2 = 0xffffffff
            
            if (var_394 == ebx)
                eax_7 = var_388
                break
            
            eax_3 = var_390
            esi_1 += 1
            edi_1 = &edi_1[0xb]
            
            if (esi_1 s>= 5)
                var_384[var_388] = ebx
                eax_7 = var_388 + 1
                var_388 = eax_7
                break
        
        ecx = var_398
        ebx += 1
        
        if (ebx s>= 0xd7)
            break
        
        eax_3 = var_390
    
    if (eax_7 s> 0)
        int32_t result = var_384[modu.dp.d(0:(sub_452ac0()), var_388)]
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    sub_44e4d0(eax_7, &data_5559b1, "numAvatars > 0", 
        "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xe4, "RandomUnusedAvatar")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
