// 函数名称: sub_490ce0
// 虚拟地址: 0x490ce0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_490ce0(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5437a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_20 = arg1
    int32_t var_1c = 0
    int32_t* eax_3 = _fopen(arg2, "rb")
    
    if (eax_3 == 0)
        *arg1 = &data_5559b1
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    _fseek(eax_3, 0, 2)
    int32_t* var_40 = eax_3
    uint32_t eax_5 = sub_52b118()
    uint32_t var_14 = eax_5
    _fseek(eax_3, 0, 0)
    uint32_t (* eax_6)[0x4] = sub_45cd70(eax_5 + 1)
    uint32_t eax_7 = _fread(eax_6, 1, var_14, eax_3)
    _fclose(eax_3)
    uint32_t eax_8 = var_14
    
    if (eax_7 != eax_8)
        if (eax_6 != 0)
            _aligned_free_base(eax_6)
        
        *arg1 = &data_5559b1
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    *(eax_6 + eax_8) = 0
    sub_44f2d0(&var_14, eax_6)
    int32_t var_8_1 = 1
    
    if (eax_6 != 0)
        _aligned_free_base(eax_6)
    
    uint32_t esi_2 = var_14
    *arg1 = esi_2
    
    if (esi_2 != 0 && *esi_2 != 0)
        char* eax_10 = sub_44f000(arg1)
        *(eax_10 + 4) += 1
    
    int32_t var_1c_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
        char* eax_11 = sub_44f000(&var_14)
        int32_t temp0_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
