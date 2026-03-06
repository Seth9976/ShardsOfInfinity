// 函数名称: ?fp_format_nan_or_infinity@@YAHW4__acrt_fp_class@@_NPADI1@Z
// 虚拟地址: 0x530d3d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?fp_format_nan_or_infinity@@YAHW4__acrt_fp_class@@_NPADI1@Z(int32_t arg1, char arg2, char* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = arg4
    char* ecx = arg3
    int32_t ebx
    ebx.b = arg2
    int32_t result
    
    if (edx u>= zx.d(ebx.b) + 4)
        if (ebx.b != 0)
            *ecx = 0x2d
            ecx = &ecx[1]
            edx -= 1
            *ecx = 0
        
        char const* const var_28_1 = "NAN(SNAN)"
        void* const var_48 = &data_54eb74
        void* const var_44_1 = &data_54eb74
        void* const var_40_1 = &data_54eb78
        void* const var_3c_1 = &data_54eb78
        int32_t edi
        int32_t var_58_1 = edi
        void* const var_30_1 = &data_54eb80
        void* const var_2c_1 = &data_54eb80
        int32_t edi_3 = (zx.d(arg5) ^ 1) * 2
        void* const var_1c_1 = &data_54eb80
        void* const var_c_1 = &data_54eb80
        void* const var_38_1 = &data_54eb7c
        void* const var_34_1 = &data_54eb7c
        void* const var_24_1 = &data_54eb7c
        char const* const var_20_1 = "nan(snan)"
        char const* const var_18_1 = "NAN(IND)"
        void* const var_14_1 = &data_54eb7c
        char const* const var_10_1 = "nan(ind)"
        char* esi_1 = (&var_48)[(arg1 << 2) + 0xfffffffc + edi_3]
        void* eax_6
        
        do
            eax_6.b = *esi_1
            esi_1 = &esi_1[1]
        while (eax_6.b != 0)
        
        result = _strcpy_s(ecx, edx, 
            (&var_48)[sbb.d(eax_6, eax_6, esi_1 - &esi_1[1] u< edx) + 1 + (arg1 << 2) + 0xfffffffc
                + edi_3])
        
        if (result != 0)
            int32_t var_64_2
            __builtin_memset(&var_64_2, 0, 0x14)
            sub_52d729()
            noreturn
    else
        *ecx = 0
        result = 0xc
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
