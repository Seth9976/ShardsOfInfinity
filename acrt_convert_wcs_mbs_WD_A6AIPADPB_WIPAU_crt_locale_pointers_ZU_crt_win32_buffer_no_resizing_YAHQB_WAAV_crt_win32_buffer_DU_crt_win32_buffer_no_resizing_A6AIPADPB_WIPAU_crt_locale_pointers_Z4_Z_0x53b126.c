// 函数名称: ??$__acrt_convert_wcs_mbs@_WD$$A6AIPADPB_WIPAU__crt_locale_pointers@@@ZU__crt_win32_buffer_no_resizing@@@@YAHQB_WAAV?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@A6AIPADPB_WIPAU__crt_locale_pointers@@@Z4@Z
// 虚拟地址: 0x53b126
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$__acrt_convert_wcs_mbs@_WD$$A6AIPADPB_WIPAU__crt_locale_pointers@@@ZU__crt_win32_buffer_no_resizing@@@@YAHQB_WAAV?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@A6AIPADPB_WIPAU__crt_locale_pointers@@@Z4@Z(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result
    
    if (arg1 != 0)
        int32_t eax_2 = arg3(0, arg1, 0, arg4, eax_1)
        
        if (eax_2 == 0xffffffff)
            result = *__errno()
        else if (eax_2 + 1 u<= *(arg2 + 0xc))
            int32_t eax_5 = arg3(*(arg2 + 8), arg1, *(arg2 + 0xc), arg4)
            
            if (eax_5 == 0xffffffff || eax_5 == *(arg2 + 0xc))
                result = *__errno()
            else
                *(arg2 + 0x10) = eax_5 + 1
                result = 0
        else
            int32_t var_10_1 = eax_2 + 1
            result = __crt_win32_buffer<char,struct __crt_win32_buffer_no_resizing>::allocate(arg2)
    else
        __crt_win32_buffer<char,struct __crt_win32_buffer_no_resizing>::set_to_nullptr(arg2)
        result = 0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
