// 函数名称: sub_4b5320
// 虚拟地址: 0x4b5320
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b5320(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543028
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14
    int32_t* var_28 = &var_14
    int32_t* result_1
    sub_42ce10(&result_1, arg1, 4)
    int32_t var_8_1 = 0
    int32_t i = 0
    int32_t* esi_1 = var_14 + 0xc
    
    do
        int32_t edx_1 = esi_1[-1]
        
        if (edx_1 != 0)
            (*(*data_ce19b4 + 0x48))(i, edx_1)
            esi_1[-1] = 0
        
        if (*esi_1 != 0)
            int32_t eax_4 = esi_1[1]
            *esi_1 = 0
            
            if (eax_4 != 0)
                _aligned_free_base(eax_4)
        
        i += 1
        esi_1 = &esi_1[5]
    while (i s< 2)
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
