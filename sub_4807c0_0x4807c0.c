// 函数名称: sub_4807c0
// 虚拟地址: 0x4807c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4807c0(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542ff8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result = arg1
    void* esi = data_cdf42c
    
    if (esi != 0)
        int32_t esi_1 = *(esi + 0x120)
        sub_480520(&ExceptionList, result, &var_14, arg2)
        int32_t var_8_1 = 0
        int32_t ebx_2 = esi_1 * 0xc
        void* esi_2 = sub_480980(data_cdf42c + 0x90 + ebx_2, &var_14)
        
        if (esi_2 != 0)
            goto label_48088e
        
        esi_2 = sub_480980(ebx_2 + data_cdf42c, &var_14)
        
        if (esi_2 == 0)
            sub_480a10(data_cdf42c + 0x90 + ebx_2, &var_14, &data_586ab0)
        else
            void* eax_6 = data_cdf42c
            
            if (*(eax_6 + 0x124) == 0 || *(esi_2 + 4) == 0)
                sub_480a10(eax_6 + 0x90 + ebx_2, &var_14, esi_2)
            label_48088e:
                char* result_1 = *esi_2
                
                if (result_1 != 0)
                    result = result_1
            else
                sub_480a10(eax_6 + 0x90 + ebx_2, &var_14, &data_586ab0)
        
        int32_t var_8_2 = 4
        
        if (data_cdf414 != 0)
            char* eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_44f000(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
