// 函数名称: sub_429ba0
// 虚拟地址: 0x429ba0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_429ba0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541938
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_30 = arg1
    sub_44f240(&var_30, "localsettings.xml")
    void var_18
    int32_t* eax_3 = sub_48c750(&var_18, 0)
    int32_t var_8_1 = 0
    
    if (*arg1 != 0)
        var_30 = "LocalSettingsLoad"
        sub_44e4d0(eax_3, &data_5559b1, "gLocalSettings == NULL", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0xf2, var_30)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char** esi = data_dfc524
    int32_t* eax_4 = sub_494ad0(esi, &var_18)
    int32_t* esi_1
    
    if (eax_4 != 0)
        esi_1 = sub_492a80(eax_4, esi)
        sub_491590(eax_4)
    else
        esi_1 = nullptr
    
    *arg1 = esi_1
    
    if (esi_1 == 0)
        esi_1 = sub_48bb90(data_dfc524)
        *arg1 = esi_1
    
    int32_t ecx_6 = esi_1[7]
    
    if (ecx_6 s< 0x300)
        ecx_6 = 0x300
    else if (ecx_6 s> 0x1000)
        ecx_6 = 0x1000
    
    void* esi_2 = data_65ae00
    *(esi_2 + 0x18) = ecx_6
    int32_t edx_3
    int32_t eax_9
    
    if (*(*arg1 + 0x14) == 0)
        edx_3:eax_9 = muls.dp.d(0x55555556, ecx_6 << 2)
    else
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = muls.dp.d(0x38e38e39, ecx_6 << 4)
        edx_3 = edx_2 s>> 1
    *(esi_2 + 0x14) = (edx_3 u>> 0x1f) + edx_3
    int32_t result
    result.b = *(*arg1 + 0x18)
    *(esi_2 + 0x23) = result.b
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        int32_t result_1
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
