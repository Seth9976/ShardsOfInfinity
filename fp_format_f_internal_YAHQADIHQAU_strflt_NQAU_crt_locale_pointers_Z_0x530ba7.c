// 函数名称: ?fp_format_f_internal@@YAHQADIHQAU_strflt@@_NQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x530ba7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?fp_format_f_internal@@YAHQADIHQAU_strflt@@_NQAU__crt_locale_pointers@@@Z(char* arg1, int32_t arg2, void* arg3, int32_t* arg4, char arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_20 = edi
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, arg6)
    void* esi = arg3
    int32_t ecx_2 = arg4[1] - 1
    
    if (arg5 != 0 && ecx_2 == esi)
        void* eax_1
        eax_1.b = *arg4 == 0x2d
        *(eax_1 + ecx_2 + arg1) = 0x30
    
    void* ebx = arg1
    
    if (*arg4 == 0x2d)
        *arg1 = 0x2d
        ebx = &arg1[1]
    
    int32_t eax_3 = arg4[1]
    
    if (eax_3 s<= 0)
        int32_t var_24_1 = 1
        void* var_28_1 = ebx
        shift_bytes(arg1, arg2)
        *ebx = 0x30
        eax_3 = 1
    
    void* ebx_1 = ebx + eax_3
    
    if (esi s> 0)
        int32_t var_24_2 = 1
        void* var_28_2 = ebx_1
        shift_bytes(arg1, arg2)
        void* var_10
        char* eax_6
        eax_6.b = ***(var_10 + 0x88)
        *ebx_1 = eax_6.b
        int32_t eax_8 = arg4[1]
        
        if (eax_8 s< 0)
            int32_t eax_9 = neg.d(eax_8)
            
            if (arg5 != 0 || eax_9 s< esi)
                esi = eax_9
            
            void* var_24_3 = esi
            void* var_28_3 = ebx_1 + 1
            shift_bytes(arg1, arg2)
            _memset(ebx_1 + 1, 0x30, esi)
    
    char var_8
    
    if (var_8 != 0)
        void* eax_10 = var_14
        *(eax_10 + 0x350) &= 0xfffffffd
    
    return 0
}
