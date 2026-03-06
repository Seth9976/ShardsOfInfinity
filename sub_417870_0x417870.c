// 函数名称: sub_417870
// 虚拟地址: 0x417870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_417870(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541060
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    `eh vector vbase constructor iterator'(&arg1[0xa], 4, 8, sub_44f380)
    char* result = `eh vector vbase constructor iterator'(&arg1[2], 4, 8, sub_44f380)
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0)
        result = arg1[1]
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&arg1[1])
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                arg1[1] = &data_5559b1
    
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = *arg1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(arg1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                *arg1 = &data_5559b1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
