// 函数名称: sub_430130
// 虚拟地址: 0x430130
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_430130(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541cab
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_44c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = *(arg2 + 0x19d4) * 0x41c64e6d + 0x3039
    *(arg2 + 0x19d4) = eax_4
    arg3[1] = eax_4
    *arg3 = arg4
    int32_t result = *(arg2 + 0x2164)
    int32_t ecx = data_65ac50
    
    if (ecx != result)
        if (ecx != 0)
            sub_42f7e0()
            result = *(arg2 + 0x2164)
        
        data_65ac50 = result
        int32_t eax_6 = *(arg2 + 0x2164)
        int128_t var_43c
        __builtin_memcpy(&var_43c, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\xfc\xa9\xf1\xd2\x4d\x62\x50\x3f\x32\x00\x00\x00", 0x14)
        int32_t var_428_1 = eax_6
        int32_t var_424_1 = eax_6
        int32_t var_420_1 = eax_6
        int32_t ecx_1 = sub_42c1c0(0x65ac58, &var_43c)
        int32_t var_450_1 = ecx_1
        sub_430af0(ecx_1, arg2)
        int32_t ecx_2
        int32_t edx_2
        ecx_2, edx_2 = sub_42c590(0x65ac58)
        int32_t var_450_2 = *(arg2 + 0x2164)
        void var_414
        sub_412bd0(&var_414, edx_2, ecx_2, &var_414, "res/net/shards.eval.%d.net")
        int32_t* eax_8 = sub_48d5b0(&var_414, 0x1c)
        void var_41c
        void* var_450_3 = &var_41c
        int32_t* var_418
        sub_42ce10(&var_418, eax_8, 0x1c)
        int32_t var_8_1 = 0
        
        if (eax_8[2] != 4)
            sub_42d190(0x65ac58, eax_8)
        
        int32_t var_8_2 = 0xffffffff
        int32_t* eax_9 = var_418
        
        if (eax_9 != 0)
            eax_9[7] -= 1
        
        result = *(arg2 + 0x2164)
        data_65ac50 = result
    
    if (data_65ac48 == 0)
        int32_t* eax_10 = sub_45cfa0(0xc)
        eax_10[3] += 1
        int32_t* edi_2 = *eax_10
        
        if (edi_2 == 0)
            sub_45ce30(eax_10)
            edi_2 = *eax_10
        
        *eax_10 = *edi_2
        *edi_2 = 0
        edi_2[1] = 0
        edi_2[2] = 0
        data_65ac48 = edi_2
        uint32_t eax_12 = sub_41b670(0x400)
        *edi_2 = sub_45cff0(eax_12 << 2)
        result = eax_12 - 1
        edi_2[1] = result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
