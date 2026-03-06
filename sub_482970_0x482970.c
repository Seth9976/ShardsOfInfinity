// 函数名称: sub_482970
// 虚拟地址: 0x482970
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_482970(void* arg1, int64_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543058
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax_3 = *(arg1 + 0xc)
    char* const esi = &data_5559b1
    char* var_30 = 0x2e
    
    if (eax_3 != 0)
        esi = eax_3
    
    void* eax_4
    char* ecx
    eax_4, ecx = _strrchr(esi, var_30.b)
    
    if (eax_4 != 0)
        var_30 = ".zip"
        uint32_t eax_5
        eax_5, ecx = __stricmp(eax_4, var_30)
        
        if (eax_5 == 0)
            var_30 = ecx
            sub_482900()
            noreturn
    
    char* eax_6 = *(arg1 + 0xc)
    var_30 = ecx
    var_30 = eax_6
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_44f000(&var_30)
        *(eax_7 + 4) += 1
    
    void var_18
    sub_48c750(&var_18, 2)
    int32_t var_8_1 = 0
    var_30 = nullptr
    *arg2 = 0
    char* result_1
    char* result
    
    if (sub_48c610(arg2).b != 0)
        int32_t var_8_3 = 2
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(result, *(result + 0xc) + 0x10)
        
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
