// 函数名称: sub_494930
// 虚拟地址: 0x494930
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_494930(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5438db
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_14c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_13c
    _memset(&var_13c, 0, 0x128)
    int32_t var_8_1 = 0
    int32_t edx
    int32_t var_134 = edx
    int32_t var_138 = 0
    int32_t var_24 = 1
    int32_t* result
    
    if (sub_4e0be0(&var_13c) == 0)
        result = nullptr
    else
        void* edi_1 = data_cdf47c
        *(edi_1 + 0x1c) += 1
        result = *(edi_1 + 0x10)
        
        if (result == 0)
            sub_494310(edi_1 + 0x10)
            result = *(edi_1 + 0x10)
        
        *(edi_1 + 0x10) = *result
        result[2] = 0
        result[3] = 0
        result[4] = 0
        *result = &data_5559b1
        result[1] = 0
        result[2] = 0
        result[3] = 0
        sub_44f590(result, *arg1)
        int32_t eax_5 = var_138
        char* edi_2 = *arg1
        
        if (eax_5 != 3)
            goto label_494a24
        
        if (sub_4e0be0(&var_13c) == 0)
            sub_491590(result)
            result = nullptr
        else
            eax_5 = var_138
        label_494a24:
            char* var_130
            int32_t var_12c
            
            if (eax_5 != 1)
                sub_491590(result)
                result = nullptr
            else if (__strnicmp(edi_2, var_130, var_12c) != 0)
                sub_491590(result)
                result = nullptr
            else if (sub_4e0be0(&var_13c) == 0)
                sub_491590(result)
                result = nullptr
            else if (sub_4948a0(result, &var_13c) == 0)
                sub_491590(result)
                result = nullptr
    
    int32_t var_8_2 = 1
    int32_t eax_10 = var_13c
    
    if (eax_10 != 0)
        _aligned_free_base(eax_10)
    
    void var_20
    sub_4e0e20(&var_20)
    var_13c = 0
    var_8_2.b = 2
    sub_4e0e20(&var_20)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
