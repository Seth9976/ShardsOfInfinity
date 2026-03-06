// 函数名称: ??$common_atof_l@_W@@YANQB_WQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x52c6f8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double??$common_atof_l@_W@@YANQB_WQAU__crt_locale_pointers@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return float.t(0)
    
    void* var_20
    int32_t ecx_2 = _LocaleUpdate::_LocaleUpdate(&var_20, arg2)
    double var_10
    double* var_28_2 = &var_10
    int32_t var_2c_1 = ecx_2
    int32_t var_30_1 = ecx_2
    var_10 = fconvert.d(float.t(0))
    void var_1c
    __crt_strtox::parse_floating_point<class __crt_strtox::c_string_character_source<char>,float>(
        &var_1c, arg1, nullptr)
    long double result = fconvert.t(var_10)
    char var_14
    
    if (var_14 != 0)
        void* eax_2 = var_20
        *(eax_2 + 0x350) &= 0xfffffffd
    
    return result
}
