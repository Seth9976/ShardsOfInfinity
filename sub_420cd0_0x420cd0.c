// 函数名称: sub_420cd0
// 虚拟地址: 0x420cd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_420cd0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
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
    sub_472550(arg4, sub_420a00)
    int32_t ecx_3 =
        sub_469cf0(sub_4725d0(arg4, sub_420c60), &data_5bb8d4, arg4, &data_5bb2c0, 0xffffffff)
    var_14 = &data_5559b1
    int32_t var_8_1 = 0
    
    if (sub_47a7a0(ecx_3, &var_14) == 0)
        sub_44f510(&var_14, &data_5bb2c0)
    
    char* const esi = var_14
    char* const edi = &data_5559b1
    
    if (esi != 0)
        edi = esi
    
    char* eax_5 = sub_48c4a0(edi, U"@.")
    char* result
    int32_t var_28_1
    
    if (eax_5 == 0 || eax_5 == edi)
        var_28_1 = 0xffffffff
        result = sub_469930(arg4)
    else
        char* edx_1 = sub_48c4a0(eax_5, &data_556c38)
        
        if (edx_1 == 0)
            var_28_1 = 0xffffffff
            result = sub_469930(arg4)
        else
            do
                result.b = *edx_1
                edx_1 = &edx_1[1]
            while (result.b != 0)
            
            if (edx_1 - &edx_1[1] u< 3)
                var_28_1 = 0xffffffff
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
