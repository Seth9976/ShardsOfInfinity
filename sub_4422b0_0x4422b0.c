// 函数名称: sub_4422b0
// 虚拟地址: 0x4422b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4422b0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ esi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542120
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_1c = arg4
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44f240(&result_1, "btnBack")
    char* const result_7 = &data_5559b1
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_7 = result_3
    
    char* edx = *(arg5 + 4)
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_7
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_7[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_7 = &result_7[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_7, result_7, c_1) | 1
        break
    
    if (ecx_2 == 0 || *(arg5 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_44f000(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        sub_439080()
    
    sub_44f240(&result_1, "btnRematch")
    char* result_4 = result_1
    char* const result_8 = &data_5559b1
    char* edx_3 = *(arg5 + 4)
    
    if (result_4 != 0)
        result_8 = result_4
    
    int32_t esi
    
    while (true)
        ebx.b = *result_8
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi = 0
                break
            
            ebx.b = result_8[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_8 = &result_8[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_4 = sub_44f000(&result_1)
        int32_t temp5_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi == 0)
        sub_439080()
        void* eax_5 = data_65aabc
        
        if (eax_5 == 0)
            sub_44e4d0(eax_5, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (*(eax_5 + 0x434) != 2)
            *(eax_5 + 0x42c) = 7
        else
            void* eax_6 = sub_41ab60(*(eax_5 + 0x438))
            void* ecx_9 = data_65aabc
            
            if (ecx_9 == 0)
                sub_44e4d0(eax_6, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            sub_422540(*(ecx_9 + 0x438))
            void* eax_7 = data_65aabc
            
            if (eax_7 == 0)
                sub_44e4d0(eax_7, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            *(eax_7 + 0x42c) = 5
    
    sub_44f240(&result_1, "btnMainMenu")
    char* result_5 = result_1
    char* const result_9 = &data_5559b1
    char* edx_6 = *(arg5 + 4)
    
    if (result_5 != 0)
        result_9 = result_5
    
    int32_t esi_2
    
    while (true)
        ebx.b = *result_9
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_2 = 0
                break
            
            ebx.b = result_9[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_9 = &result_9[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && result_5 != 0 && *result_5 != 0)
        result_5 = sub_44f000(&result_1)
        int32_t temp8_1 = *(result_5 + 4)
        *(result_5 + 4) -= 1
        
        if (temp8_1 == 1)
            result_5 = sub_45d050(result_5, *(result_5 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_2 == 0)
        void* ecx_14 = data_65aabc
        
        if (ecx_14 == 0)
            sub_44e4d0(result_5, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (*(ecx_14 + 0x434) != 2)
            *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x240) = 0
            sub_42a740(data_65ac38)
        else
            sub_422540(*(ecx_14 + 0x438))
        
        void* eax_9 = data_65aabc
        
        if (eax_9 == 0)
            sub_44e4d0(eax_9, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(eax_9 + 0x42c) = 5
    
    sub_44f240(&result_1, "btnPlayer")
    char* result_6 = result_1
    char* const result_10 = &data_5559b1
    char* edx_9 = *(arg5 + 4)
    
    if (result_6 != 0)
        result_10 = result_6
    
    int32_t esi_4
    
    while (true)
        ebx.b = *result_10
        char temp9_1 = *edx_9
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_4 = 0
                break
            
            ebx.b = result_10[1]
            char temp10_1 = edx_9[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                result_10 = &result_10[2]
                edx_9 = &edx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cdf414 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_10 = sub_44f000(&result_1)
        int32_t temp11_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_4 == 0)
        data_5bccc0 = *(arg5 + 8)
    
    sub_44f240(&result_1, "btnFriend")
    void* result = result_1
    void* result_2 = &data_5559b1
    char* edx_12 = *(arg5 + 4)
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_6
    
    while (true)
        ebx.b = *result_2
        char temp12_1 = *edx_12
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                esi_6 = 0
                break
            
            ebx.b = *(result_2 + 1)
            char temp13_1 = edx_12[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                result_2 += 2
                edx_12 = &edx_12[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_6 = 0
                break
        
        esi_6 = sbb.d(esi_4, esi_4, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_cdf414 != 0 && result != 0 && *result != 0)
        result = sub_44f000(&result_1)
        int32_t temp14_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp14_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_10 = 0xffffffff
    
    if (esi_6 == 0)
        int32_t eax_12 = sub_41af20(*(arg5 + 8))
        void* eax_14 = sub_41af80(sub_41ad20() + 8, eax_12)
        void* eax_15 = sub_4421f0(eax_14)
        
        if (eax_15.b == 0)
            sub_44e4d0(eax_15, &data_5559b1, "CanAddFriend(playerConfig)", 
                "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x245c, "ScorescreenClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result_1 = *(eax_14 + 0x18)
        result = data_65aabc
        
        if (result == 0)
            sub_44e4d0(result, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (*(result + 0x18) == 3)
            result = *(result + 0x14)
            void* ecx_28 = data_65acf4
            
            if (result != 0)
                uint32_t edx_16 = zx.d(result.w)
                
                if (edx_16 u< *(ecx_28 + 4))
                    void* esi_11 = edx_16 * 0x4c + *ecx_28
                    
                    if (*(esi_11 + 0x48) == result)
                        int32_t var_28_1 = 0xf42aa
                        sub_450c90(result, 4, esi_11 + 0x3c)
                        result = sub_450a70(&result_1, 4, esi_11 + 0x3c, &result_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
