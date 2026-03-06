// 函数名称: sub_4167e0
// 虚拟地址: 0x4167e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_4167e0(int32_t arg1, void* arg2, char** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result = arg3
    char** result_1 = result
    int32_t* edx = arg4
    char* arg_4
    char* ebx = arg_4
    *edx = 0
    int32_t eax_3 = *(ebx + 0x14)
    char* var_30_1
    
    if (eax_3 s> 0x3e8)
        if (eax_3 != 0x3e9)
        label_416b98:
            sub_44e4d0(eax_3, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x41f, "PlayerGetNameAvatar")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t ecx_21 = 0
        *edx = *(ebx + 0x10)
        int32_t ebx_6 = (ebx - arg2 - 8) s/ 0x2c
        int32_t edx_7 = 0
        
        if (*(arg2 + 0x1c) == 0x3e9)
            ecx_21 = 1
            edx_7.b = *(arg2 + 0x24) s< ebx_6
        
        if (*(arg2 + 0x48) == 0x3e9)
            ecx_21 += 1
            int32_t eax_29 = edx_7 + 1
            
            if (*(arg2 + 0x50) s>= ebx_6)
                eax_29 = edx_7
            
            edx_7 = eax_29
        
        if (*(arg2 + 0x74) == 0x3e9)
            ecx_21 += 1
            int32_t eax_30 = edx_7 + 1
            
            if (*(arg2 + 0x7c) s>= ebx_6)
                eax_30 = edx_7
            
            edx_7 = eax_30
        
        if (*(arg2 + 0xa0) == 0x3e9)
            ecx_21 += 1
            int32_t eax_31 = edx_7 + 1
            
            if (*(arg2 + 0xa8) s>= ebx_6)
                eax_31 = edx_7
            
            edx_7 = eax_31
        
        if (*(arg2 + 0xcc) == 0x3e9)
            ecx_21 += 1
            int32_t eax_32 = edx_7 + 1
            
            if (*(arg2 + 0xd4) s>= ebx_6)
                eax_32 = edx_7
            
            edx_7 = eax_32
        
        int32_t ecx_23 = neg.d(ecx_21 - 1)
        int32_t ecx_25 = sbb.d(ecx_23, ecx_23, ecx_21 != 1) & (edx_7 + 1)
        
        if (ecx_25 u> 4)
            sub_44e4d0(edx_7 + 1, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x3a0, "GetGuestPlayerName")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        char* eax_14
        
        switch (ecx_25)
            case 0, 1
                eax_14 = "Player 1"
            case 2
                eax_14 = "Player 2"
            case 3
                eax_14 = "Player 3"
            case 4
                eax_14 = "Player 4"
        
        var_30_1 = eax_14
        goto label_4168cd
    
    if (eax_3 == 0x3e8)
        void* eax_17 = data_65ac38
        int32_t ecx_9 = 0
        int32_t esi_1 = *(eax_17 + 0xb20)
        
        if (esi_1 s> 0)
            int32_t edx_2 = *(ebx + 0x18)
            edx = arg4
            
            while (true)
                ebx = arg_4
                
                if (*(eax_17 + 0x23c) == edx_2)
                    break
                
                ecx_9 += 1
                eax_17 += 0x2c8
                
                if (ecx_9 s>= esi_1)
                    goto label_41693b
        
        if (esi_1 s<= 0 || eax_17 == 0)
        label_41693b:
            *edx = *(ebx + 0x10)
            var_30_1 = ebx
        label_4168cd:
            arg3 = result
            goto label_4168cf
        
        char* esi_2 = *sub_42aaa0(*(ebx + 0x18))
        arg_4 = esi_2
        
        if (esi_2 != 0 && *esi_2 != 0)
            char* eax_20 = sub_44f000(&arg_4)
            *(eax_20 + 4) += 1
        
        int32_t var_8_1 = 0
        *arg4 = *(sub_42aaa0(*(ebx + 0x18)) + 8)
        
        if (sub_44f450(&arg_4, &data_5559b1) == 0)
            *result = esi_2
            
            if (esi_2 != 0 && *esi_2 != 0)
                char* eax_26 = sub_44f000(result)
                *(eax_26 + 4) += 1
            
            int32_t var_8_3 = 2
        else
            sub_44f240(result, "Player")
            int32_t var_8_2 = 1
        
        if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_24 = sub_44f000(&arg_4)
            int32_t temp6_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_45d050(eax_24, *(eax_24 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (eax_3 u> 3)
        goto label_416b98
    
    switch (eax_3)
        case 0
            sub_44f240(arg3, "(Closed)")
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        case 1
            *edx = *(ebx + 0x10)
            var_30_1 = ebx
        label_4168cf:
            sub_44f2d0(arg3, var_30_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        case 2
            int32_t eax_5 = *(ebx + 0x18)
            
            if (eax_5 == 0)
                sub_44f240(arg3, "Open")
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            if (eax_5 == 1)
                sub_44f240(arg3, "Optional")
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            sub_44e4d0(eax_5 - 1, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x3ee, "PlayerGetNameAvatar")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        case 3
            int32_t eax_10 = *(ebx + 0x18)
            
            if (eax_10 == 0)
                *edx = 0xd8
            else if (eax_10 == 1)
                *edx = 0xd9
            else
                if (eax_10 != 2)
                    sub_44e4d0(eax_10 - 2, &data_5559b1, "Halt", 
                        "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x401, 
                        "PlayerGetNameAvatar")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                *edx = 0xda
            
            var_30_1 = sub_4165b0(arg2, ebx)
            goto label_4168cd
}
