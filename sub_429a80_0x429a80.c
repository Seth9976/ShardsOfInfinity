// 函数名称: sub_429a80
// 虚拟地址: 0x429a80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_429a80()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = data_65ac30
    
    if (esi == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_28 = sub_44ebe0()
    char* result_1
    sub_44f980(&result_1, "%slocalsettings.xml")
    int32_t var_8_1 = 0
    int32_t* eax_5 = sub_494290(esi, data_dfc524)
    char* result_3 = result_1
    char* const result_5 = &data_5559b1
    char* const result_4 = &data_5559b1
    
    if (result_3 != 0)
        result_4 = result_3
    
    if (sub_494520(eax_5, data_dfc524, eax_5, result_4) == 0)
        char* result_2 = result_1
        
        if (result_2 != 0)
            result_5 = result_2
        
        char* const result_6 = result_5
        sub_44e260("Failed to write file: '%s'")
    
    char* result = sub_491590(eax_5)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
