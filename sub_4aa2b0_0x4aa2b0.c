// 函数名称: sub_4aa2b0
// 虚拟地址: 0x4aa2b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4aa2b0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544510
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_4c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_5b2e40 == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    char* eax_4 = *(arg1 + 0x20)
    char* const lpFileName_17 = &data_5559b1
    char* edx = &data_5559b1
    
    if (eax_4 != 0)
        edx = eax_4
    
    char* lpFileName_11
    sub_4a93d0(&lpFileName_11, edx)
    int32_t var_8_1 = 0
    char** i_1 = nullptr
    int32_t var_34 = 0
    int32_t var_30 = 0
    var_8_1.b = 1
    char* lpFileName_14 = lpFileName_11
    char* lpFileName_16 = &data_5559b1
    char* lpFileName = 1
    
    if (lpFileName_14 != 0)
        lpFileName_16 = lpFileName_14
    
    char* lpFileName_9
    char* lpFileName_4
    lpFileName_9, lpFileName_4 = sub_484ab0(lpFileName_14, &i_1, lpFileName_16, lpFileName)
    char** i = i_1
    
    if (lpFileName_9.b == 0 || var_30 != 1)
        lpFileName_17.b = 1
    else
        if (i == 0)
            lpFileName = "XList<struct PackLocation>::GetHead"
            sub_44e4d0(lpFileName_9, &data_5559b1, "mpHead != NULL", "c:\ax2017\engine\xlist.h", 0x53, 
                lpFileName)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_5 = *(arg1 + 4)
        lpFileName = lpFileName_4
        char* lpFileName_2 = *(arg1 + 0x20)
        lpFileName = lpFileName_2
        
        if (lpFileName_2 != 0 && *lpFileName_2 != 0)
            char* eax_6 = sub_44f000(&lpFileName)
            *(eax_6 + 4) += 1
        
        char* lpFileName_8
        sub_4a9620(&lpFileName_8, eax_5)
        var_8_1.b = 8
        char* const lpFileName_5 = &data_5559b1
        char* lpFileName_7 = lpFileName_8
        
        if (lpFileName_7 != 0)
            lpFileName_5 = lpFileName_7
        
        lpFileName = lpFileName_5
        
        if (GetFileAttributesA(lpFileName) != 0xffffffff)
            char* lpFileName_10 = lpFileName_8
            char* lpFileName_13 = &data_5559b1
            
            if (lpFileName_10 != 0)
                lpFileName_13 = lpFileName_10
            
            BOOL var_2c
            char* lpFileName_6
            lpFileName_9, lpFileName_6 = sub_44e810(lpFileName_13, &var_2c)
            char* lpFileName_1
            
            if (lpFileName_9.b == 0 || var_2c != i[6] || lpFileName_1 != i[7])
                lpFileName_17.b = 1
            else
                int32_t eax_7 = *(arg1 + 4)
                lpFileName = lpFileName_6
                char* lpFileName_3 = *(arg1 + 0x20)
                lpFileName = lpFileName_3
                
                if (lpFileName_3 != 0 && *lpFileName_3 != 0)
                    char* eax_8 = sub_44f000(&lpFileName)
                    *(eax_8 + 4) += 1
                
                char* lpFileName_12
                sub_4a9b60(&lpFileName_12, eax_7)
                var_8_1.b = 0x15
                lpFileName_9 = lpFileName_12
                
                if (lpFileName_9 == 0 || *lpFileName_9 == 0)
                    goto label_4aa444
                
                var_2c.q = 0
                sub_44e810(lpFileName_9, &var_2c)
                
                if (var_2c != i[8] || lpFileName_1 != i[9])
                    lpFileName_9 = lpFileName_12
                    lpFileName_17.b = 1
                else
                    lpFileName_9 = lpFileName_12
                label_4aa444:
                    
                    if (*(arg1 + 4) != 4)
                        lpFileName_17.b = 0
                    else
                        char* lpFileName_15 = lpFileName_11
                        
                        if (lpFileName_15 != 0)
                            lpFileName_17 = lpFileName_15
                        
                        if (sub_44e810(lpFileName_17, &var_2c) == 0)
                            lpFileName_9 = lpFileName_12
                            lpFileName_17.b = 1
                        else
                            lpFileName = lpFileName_1
                            
                            if (sub_4aa170(var_2c, lpFileName) != 0)
                                lpFileName_9 = lpFileName_12
                                lpFileName_17.b = 1
                            else
                                lpFileName_9 = lpFileName_12
                                lpFileName_17.b = 0
                
                var_8_1.b = 0x25
                
                if (data_cdf414 != 0 && lpFileName_9 != 0 && *lpFileName_9 != 0)
                    lpFileName_9 = sub_44f000(&lpFileName_12)
                    int32_t temp3_1 = *(lpFileName_9 + 4)
                    *(lpFileName_9 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(lpFileName_9, *(lpFileName_9 + 0xc) + 0x10)
                        lpFileName_12 = &data_5559b1
        else
            lpFileName_17.b = 0
        
        var_8_1.b = 0x26
        
        if (data_cdf414 != 0)
            lpFileName_9 = lpFileName_8
            
            if (lpFileName_9 != 0 && *lpFileName_9 != 0)
                lpFileName_9 = sub_44f000(&lpFileName_8)
                int32_t temp2_1 = *(lpFileName_9 + 4)
                *(lpFileName_9 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(lpFileName_9, *(lpFileName_9 + 0xc) + 0x10)
                    lpFileName_8 = &data_5559b1
    
    while (i != 0)
        char** i_2 = i
        i = i[0xa]
        var_8_1.b = 0x28
        
        if (data_cdf414 != 0)
            char* eax_13 = *i_2
            
            if (eax_13 != 0 && *eax_13 != 0)
                char* eax_14 = sub_44f000(i_2)
                int32_t temp1_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
                    *i_2 = &data_5559b1
        
        var_8_1.b = 0x27
        sub_45d050(i_2, 0x30)
    
    int32_t var_8_2 = 0x29
    
    if (data_cdf414 != 0)
        lpFileName_9 = lpFileName_11
        
        if (lpFileName_9 != 0 && *lpFileName_9 != 0)
            lpFileName_9 = sub_44f000(&lpFileName_11)
            int32_t temp0_1 = *(lpFileName_9 + 4)
            *(lpFileName_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(lpFileName_9, *(lpFileName_9 + 0xc) + 0x10)
    
    lpFileName_9.b = lpFileName_17.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return lpFileName_9
}
