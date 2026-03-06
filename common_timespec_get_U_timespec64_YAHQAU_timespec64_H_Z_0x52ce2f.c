// 函数名称: ??$common_timespec_get@U_timespec64@@@@YAHQAU_timespec64@@H@Z
// 虚拟地址: 0x52ce2f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")??$common_timespec_get@U_timespec64@@@@YAHQAU_timespec64@@H@Z(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_c = arg3
    
    if (arg4 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else if (arg5 == 1)
        var_c = 0
        int32_t var_8_1 = 0
        ___acrt_GetSystemTimePreciseAsFileTime@4(&var_c)
        int32_t eax_1 = var_c
        uint32_t ecx_1 = sbb.d(var_8_1, 0x19db1de, eax_1 u< 0xd53e8000)
        
        if (ecx_1 s< 0x483f078)
        label_52ce8b:
            int32_t ebx
            int32_t var_14_2 = ebx
            int32_t var_18_1 = ebx
            uint32_t eax_3
            int32_t ecx_2
            int32_t edx
            eax_3, ecx_2, edx = __alldvrm(eax_1 + 0x2ac18000, ecx_1, 0x989680, 0)
            int32_t var_8_2 = ebx
            *arg4 = eax_3
            arg4[1] = edx
            arg4[2] = ecx_2 * 0x64
            return 1
        
        if (ecx_1 s<= 0x483f078 && eax_1 + 0x2ac18000 u< 0xdd478000)
            goto label_52ce8b
    
    return 0
}
