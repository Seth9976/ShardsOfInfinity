// 函数名称: ??$__acrt_mbs_to_wcs_cp@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHQBDAAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@I@Z
// 虚拟地址: 0x52b430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")??$__acrt_mbs_to_wcs_cp@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHQBDAAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@I@Z(int32_t arg1, int32_t arg2, int32_t arg3, uint8_t* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_c = arg6
    return __acrt_convert_wcs_mbs_cp<char,wchar_t,class <lambda_62f6974d9771e494a5ea317cc32e971c>,struct __crt_win32_buffer_internal_dynamic_resizing>(
        arg4, arg5, &var_8:3)
}
