// 函数名称: sub_47b6d0
// 虚拟地址: 0x47b6d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_47b6d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542df0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = 0
    
    if (arg1[1] s<= 0)
        arg1[1] = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t edi = 0
    
    do
        struct _EXCEPTION_REGISTRATION_RECORD*** result_1 = *arg1 + 0xc + edi
        int32_t var_8_1 = 0
        
        if (data_cdf414 != 0)
            result = *result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(result_1)
                int32_t temp0_1 = result[1]
                result[1] -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(result, &result[3][2])
                    result = result_1
                    *result = &data_5559b1
        
        i += 1
        int32_t var_8_2 = 0xffffffff
        edi += 0x18
    while (i s< arg1[1])
    
    arg1[1] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
