// 函数名称: __mbsdec_l
// 虚拟地址: 0x53454a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*__mbsdec_l(int32_t arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return nullptr
    
    if (arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else if (arg1 u< arg2)
        void* var_14
        _LocaleUpdate::_LocaleUpdate(&var_14, arg3)
        char* result = arg2 - 1
        void* var_c
        
        if (*(var_c + 8) != 0)
            do
                result -= 1
                
                if (arg1 u> result)
                    break
            while ((*(zx.d(*result) + var_c + 0x19) & 4) != 0)
            
            result = arg2 - ((arg2 - result) & 1) - 1
        
        char var_8
        
        if (var_8 != 0)
            void* ecx_3 = var_14
            *(ecx_3 + 0x350) &= 0xfffffffd
        
        return result
    
    return nullptr
}
