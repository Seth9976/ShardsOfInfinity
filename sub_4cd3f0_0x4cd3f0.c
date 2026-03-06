// 函数名称: sub_4cd3f0
// 虚拟地址: 0x4cd3f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4cd3f0(int32_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545468
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_48 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c
    int32_t* var_4c = &var_1c
    int64_t var_24
    void* var_50 = &var_24:4
    int64_t* var_54 = &var_24
    char const* const var_58 = " %f %f %f"
    int32_t var_5c = *arg2
    int32_t eax_4 = sub_4529c0(&var_24, arg2, arg3)
    
    if (eax_4 == 3)
        int32_t eax_5 = var_1c
        *arg3 = var_24
        arg3[1].d = eax_5
    else if (eax_4 == 1)
        float xmm0_2[0x4] = var_24.d
        *arg3 = _mm_unpacklo_ps(xmm0_2, xmm0_2)
        arg3[1].d = xmm0_2
    
    var_50.q = _mm_cvtps_pd(arg3[1].d)
    var_58.q = _mm_cvtps_pd(*(arg3 + 4))
    int64_t var_60_1 = _mm_cvtps_pd(*arg3)
    char const* const var_64 = "%g %g %g"
    char* var_28
    sub_44f980(&var_28, "%g %g %g")
    int32_t var_8_1 = 0
    sub_44f510(arg4, &var_28)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* eax_6 = var_28
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&var_28)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
    
    char* result = *arg4
    char* const result_1 = &data_5559b1
    
    if (result != 0)
        result_1 = result
    
    *arg2 = result_1
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
