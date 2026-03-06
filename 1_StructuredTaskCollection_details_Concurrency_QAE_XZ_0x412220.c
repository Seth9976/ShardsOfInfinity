// 函数名称: ??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ
// 虚拟地址: 0x412220
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540e78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14
    char* lpThreadId = &var_14
    int32_t eax_3
    int32_t ecx
    eax_3, ecx = _rand_s(lpThreadId)
    
    if (eax_3 != 0)
        lpThreadId = "GoodRandSeed"
        sub_44e4d0(eax_3, &data_5559b1, "result == 0", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x61, lpThreadId)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_452a70(ecx, var_14)
    lpThreadId = nullptr
    CreateThread(nullptr, 0x100000, sub_411200, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, lpThreadId)
    lpThreadId = sub_429ba0(&data_65ac30)
    sub_44f240(&lpThreadId, "channelsettings.xml")
    void var_1c
    sub_48c750(&var_1c, 1)
    int32_t var_8_1 = 0
    char** esi = data_dfc52c
    int32_t* eax_4 = sub_494ad0(esi, &var_1c)
    
    if (eax_4 != 0)
        int32_t* eax_5 = sub_492a80(eax_4, esi)
        sub_491590(eax_4)
        data_65ac34 = eax_5
        
        if (eax_5 == 0)
            data_65ac34 = sub_48bb90(data_dfc52c)
    else
        data_65ac34 = eax_4
        data_65ac34 = sub_48bb90(data_dfc52c)
    
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* const var_18
        char* eax_7 = var_18
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_44f000(&var_18)
            int32_t temp1_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                var_18 = &data_5559b1
    
    int32_t var_8_3 = 0xffffffff
    sub_42aaf0(&data_65ac38)
    int32_t* eax_9 = data_65ac34
    
    if (eax_9 == 0)
        lpThreadId = "GetChannelSettings"
        sub_44e4d0(eax_9, &data_5559b1, "gGameSettings.channelSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x243, lpThreadId)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* lpThreadId_1 = *eax_9
    char const* const ecx_10 = "Live A"
    char* lpThreadId_2 = lpThreadId_1
    void* result
    int32_t edx_5
    
    while (true)
        edx_5.b = *lpThreadId_2
        char const temp0_1 = *ecx_10
        bool c_1 = edx_5.b u< temp0_1
        
        if (edx_5.b == temp0_1)
            if (edx_5.b == 0)
                result = nullptr
                break
            
            edx_5.b = lpThreadId_2[1]
            char temp2_1 = ecx_10[1]
            c_1 = edx_5.b u< temp2_1
            
            if (edx_5.b == temp2_1)
                lpThreadId_2 = &lpThreadId_2[2]
                ecx_10 = &ecx_10[2]
                
                if (edx_5.b != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(lpThreadId_2, lpThreadId_2, c_1) | 1
        break
    
    void* esi_2 = data_65ae00
    
    if (result != 0)
        ecx_10 = "Live B"
        char* lpThreadId_3 = lpThreadId_1
        
        while (true)
            edx_5.b = *lpThreadId_3
            char const temp3_1 = *ecx_10
            bool c_2 = edx_5.b u< temp3_1
            
            if (edx_5.b == temp3_1)
                if (edx_5.b == 0)
                    result = nullptr
                    break
                
                edx_5.b = lpThreadId_3[1]
                char temp4_1 = ecx_10[1]
                c_2 = edx_5.b u< temp4_1
                
                if (edx_5.b == temp4_1)
                    lpThreadId_3 = &lpThreadId_3[2]
                    ecx_10 = &ecx_10[2]
                    
                    if (edx_5.b != 0)
                        continue
                    
                    result = nullptr
                    break
            
            result = sbb.d(lpThreadId_3, lpThreadId_3, c_2) | 1
            break
        
        if (result != 0 || *(esi_2 + 0x2f) != 0)
            goto label_4123bf
    else if (*(esi_2 + 0x2f) != 0)
    label_4123bf:
        lpThreadId = lpThreadId_1
        int32_t var_30_1 = *(esi_2 + 0xc)
        sub_412bd0(result, edx_5, ecx_10, 0xe47810, "%s - %s")
        result = data_65ae00
        *(result + 0xc) = 0xe47810
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
