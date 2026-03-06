// 函数名称: sub_428770
// 虚拟地址: 0x428770
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_428770(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541908
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = sub_472550(arg1, sub_427200)
    void* ebx = data_65aabc
    
    if (ebx == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* result_3 = sub_42aaa0(*(data_65ac38 + 0xb24))
    void* result_1 = result_3
    
    if (*(result_3 + 0x240) != 0)
        int32_t var_30_1 = 0xffffffff
        sub_469930(arg1)
    
    char* eax_4 = *result_3
    char* edx_2 = &data_5559b1
    
    if (eax_4 != 0)
        edx_2 = eax_4
    
    char* var_1c
    sub_44f240(&var_1c, edx_2)
    int32_t var_8_1 = 0
    char* esi_1 = var_1c
    
    if (esi_1 == 0 || *esi_1 == 0)
        int32_t var_30_2 = 0xffffffff
        sub_469930(arg1)
    else
        sub_469cf0(&var_1c, &data_5bb64c, arg1, &var_1c, 0xffffffff)
    
    if (*(ebx + 0x1c) != 6)
        int32_t var_30_3 = 0xffffffff
        sub_469930(arg1)
    
    sub_441db0(*(result_1 + 8))
    int32_t var_30_4 = 0xffffffff
    sub_469930(arg1)
    int32_t eax_7 = sub_41e420()
    
    if (eax_7 u> 3)
        sub_44e4d0(eax_7, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
            0x144e, "TitleUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_8
    
    switch (eax_7)
        case 0
            int32_t var_30_5 = 0xffffffff
            eax_8 = sub_469930(arg1)
        case 1
            int32_t var_30_6 = 0xffffffff
            sub_469930(arg1)
            int32_t var_34_2 = 0xffffffff
            eax_8 = sub_469930(arg1)
        case 2
            int32_t var_30_7 = 0xffffffff
            sub_469930(arg1)
        label_4288d5:
            int32_t var_34_3 = 0xffffffff
            sub_469930(arg1)
            int32_t var_38_1 = 0xffffffff
            eax_8 = sub_469930(arg1)
        case 3
            int32_t var_30_8 = 0xffffffff
            sub_469930(arg1)
            goto label_4288d5
    
    result_1 = &data_5559b1
    char* result_2 = &data_5559b1
    var_8_1.b = 2
    void* ebx_1 = data_65aabc
    
    if (ebx_1 == 0)
        sub_44e4d0(eax_8, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_10 = sub_44f510(&result_2, ebx_1 + 0x20)
    
    if (*(ebx_1 + 0x18) u> 3)
        sub_44e4d0(eax_10, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
            0x136a, "ServerStatusMsg")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char const* const eax_12
    
    if (*(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x244) != 1)
        if (*(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x244) != 2)
            int32_t eax_15 = *(ebx_1 + 0x1c) - 1
            
            if (eax_15 u> 4)
                eax_12 = &data_5559b1
            else
                switch (eax_15)
                    case 0, 3
                        eax_12 = "Server unavailable"
                    case 1
                        eax_12 = "Network unavailable"
                    case 2
                        eax_12 = "Update Available"
                    case 4
                        eax_12 = "Server Full"
        else
            eax_12 = "Forced Offline"
    else
        eax_12 = "Always Offline"
    
    data_659a60 = eax_12
    sub_44f590(&result_1, eax_12)
    sub_469cf0(&result_2, &data_5bb624, arg1, &result_2, 0xffffffff)
    char* result = sub_469cf0(&result_1, &data_5bb610, arg1, &result_1, 0xffffffff)
    var_8_1.b = 3
    
    if (data_cdf414 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    var_8_1.b = 4
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_2 = 5
    
    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_44f000(&var_1c)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
