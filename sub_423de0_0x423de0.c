// 函数名称: sub_423de0
// 虚拟地址: 0x423de0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_423de0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_472550(arg4, sub_41df10)
    sub_4725d0(arg4, sub_41e3d0)
    void* eax_3 = sub_42aaa0(*(data_65ac38 + 0xb24))
    sub_441db0(*(eax_3 + 8))
    int32_t var_28 = 0xffffffff
    int32_t ecx_6 = sub_469930(arg4)
    var_14 = &data_5559b1
    int32_t var_8_1 = 0
    uint32_t eax_5 = sub_47a7a0(ecx_6, &var_14)
    char* const esi = var_14
    
    if (eax_5.b == 0)
        sub_469cf0(eax_5, &data_5bb2c8, arg4, eax_3, 0xffffffff)
    else
        char* eax_6
        
        if (esi != 0 && *esi != 0)
            eax_6 = sub_44f000(&var_14)
        
        if (esi == 0 || *esi == 0 || *(eax_6 + 8) s<= 0)
            int32_t var_28_1 = 0xffffffff
            sub_469930(arg4)
    
    int32_t eax_7 = sub_41e420()
    
    if (eax_7 u> 3)
        sub_44e4d0(eax_7, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
            0xef0, "GameProfileUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_2c_2
    char* result
    
    switch (eax_7)
        case 0
            int32_t var_28_2 = 0xffffffff
            result = sub_469930(arg4)
        case 1
            int32_t var_28_3 = 0xffffffff
            result = sub_469930(arg4)
        case 2
            int32_t var_28_4 = 0xffffffff
            sub_469930(arg4)
            var_2c_2 = 0xffffffff
            result = sub_469930(arg4)
        case 3
            int32_t var_28_5 = 0xffffffff
            sub_469930(arg4)
            var_2c_2 = 0xffffffff
            result = sub_469930(arg4)
    
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        result = sub_44f000(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
