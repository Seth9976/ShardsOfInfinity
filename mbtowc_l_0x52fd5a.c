// 函数名称: __mbtowc_l
// 虚拟地址: 0x52fd5a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__mbtowc_l(int16_t* arg1, char* arg2, uint32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_1c = edi
    
    if (arg2 == 0 || arg3 == 0)
        data_65a760 = 0
        data_65a764 = 0
    else
        if (*arg2 != 0)
            void* var_14
            int32_t ecx_2
            int32_t edx_1
            ecx_2, edx_1 = _LocaleUpdate::_LocaleUpdate(&var_14, arg4)
            void* var_10
            void* eax_2 = var_10
            int32_t result
            
            if (*(eax_2 + 8) == 0xfde9)
                result =
                    __crt_mbstring::__mbrtowc_utf8(eax_2, edx_1, ecx_2, arg1, arg2, arg3, &data_65a760)
                
                if (result s< 0)
                    result = 0xffffffff
            else if (*(eax_2 + 0xa8) != 0)
                if (__isleadbyte_l(*arg2, &var_10) == 0)
                    int32_t eax_9
                    eax_9.b = arg1 != 0
                    result = 1
                    
                    if (___acrt_MultiByteToWideChar(*(var_10 + 8), 
                            MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 1, arg1, eax_9) == 0)
                        *__errno() = 0x2a
                        result = 0xffffffff
                else
                    void* esi_1 = var_10
                    bool cond:0_1
                    
                    if (*(esi_1 + 4) s<= 1)
                    label_52fe30:
                        cond:0_1 = arg3 u< *(esi_1 + 4)
                    label_52fe33:
                        
                        if (cond:0_1 || arg2[1] == 0)
                            *__errno() = 0x2a
                            result = 0xffffffff
                        else
                            result = *(esi_1 + 4)
                    else
                        int32_t temp0_1 = *(esi_1 + 4)
                        cond:0_1 = arg3 u< temp0_1
                        
                        if (arg3 s< temp0_1)
                            goto label_52fe33
                        
                        int32_t eax_7
                        eax_7.b = arg1 != 0
                        int32_t eax_8 = ___acrt_MultiByteToWideChar(*(esi_1 + 8), 
                            MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, *(esi_1 + 4), arg1, eax_7)
                        esi_1 = var_10
                        
                        if (eax_8 == 0)
                            goto label_52fe30
                        
                        result = *(esi_1 + 4)
            else
                if (arg1 != 0)
                    *arg1 = zx.w(*arg2)
                
                result = 1
            
            char var_8
            
            if (var_8 != 0)
                void* ecx_5 = var_14
                *(ecx_5 + 0x350) &= 0xfffffffd
            
            return result
        
        if (arg1 != 0)
            *arg1 = 0
    
    return 0
}
