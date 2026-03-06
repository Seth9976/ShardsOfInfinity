// 函数名称: ??$common_chdir@D@@YAHQBD@Z
// 虚拟地址: 0x52bde2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_chdir@D@@YAHQBD@Z(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result
    
    if (arg1 != 0)
        if (___acrt_SetCurrentDirectoryA(arg1) != 0)
            int32_t var_118_1 = 0
            void var_110
            void* var_128 = &var_110
            void* var_120_1 = &var_110
            void** var_130_1 = &var_128
            int32_t var_124_1 = 0x105
            int32_t var_11c_1 = 0x105
            char var_114_1 = 0
            int32_t eax_7
            int32_t edx_1
            eax_7, edx_1 =
                __acrt_get_current_directory<struct __crt_win32_buffer_internal_dynamic_resizing>(
                var_130_1)
            int32_t result_1
            
            if (eax_7 == 0)
                result_1 = set_cwd_environment_variable<char>(eax_7.b, edx_1, var_130_1, var_120_1)
            else
                result_1 = 0xffffffff
            
            if (var_114_1 != 0)
                __free_base(var_120_1)
            
            result = result_1
        else
            ___acrt_errno_map_os_error(GetLastError())
            result = 0xffffffff
    else
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
