// 函数名称: __wctomb_s_l
// 虚拟地址: 0x52feb8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__wctomb_s_l(int32_t* arg1, char* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_20 = edi
    
    if (arg2 == 0 && arg3 != 0)
        if (arg1 != 0)
            *arg1 = 0
        
        return 0
    
    if (arg1 != 0)
        *arg1 = 0xffffffff
    
    int32_t result
    
    if (arg3 u<= 0x7fffffff)
        void* var_18
        _LocaleUpdate::_LocaleUpdate(&var_18, arg4)
        result = 0
        void* var_14
        wchar16 arg_10
        
        if (*(var_14 + 0xa8) != 0)
            int32_t var_8 = 0
            int32_t eax_7 =
                ___acrt_WideCharToMultiByte(*(var_14 + 8), 0, &arg_10, 1, arg2, arg3, 0, &var_8)
            
            if (eax_7 == 0)
                if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
                    if (arg2 != 0 && arg3 != 0)
                        _memset(arg2, 0, arg3)
                    
                    goto label_52ffce
                
                result = 0x2a
                *__errno() = 0x2a
            else if (var_8 != 0)
                result = 0x2a
                *__errno() = 0x2a
            else if (arg1 != 0)
                *arg1 = eax_7
        else
            void* eax_4
            eax_4.w = arg_10
            
            if (eax_4.w u<= 0xff)
                if (arg2 == 0)
                    goto label_52ff6b
                
                if (arg3 == 0)
                label_52ffce:
                    result = 0x22
                    *__errno() = 0x22
                    __invalid_parameter_noinfo()
                else
                    *arg2 = eax_4.b
                label_52ff6b:
                    
                    if (arg1 != 0)
                        *arg1 = 1
            else
                if (arg2 != 0 && arg3 != 0)
                    _memset(arg2, 0, arg3)
                
                result = 0x2a
                *__errno() = 0x2a
        char var_c
        
        if (var_c != 0)
            void* ecx_2 = var_18
            *(ecx_2 + 0x350) &= 0xfffffffd
    else
        result = 0x16
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    return result
}
