// 函数名称: ??$common_configure_argv@D@@YAHW4_crt_argv_mode@@@Z
// 虚拟地址: 0x52e721
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_configure_argv@D@@YAHW4_crt_argv_mode@@@Z(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    if (arg1 != 2 && arg1 != 1)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    int32_t edi
    int32_t var_20_1 = edi
    ___acrt_initialize_multibyte()
    ___acrt_GetModuleFileNameA(nullptr, &data_65a538, 0x104)
    char* eax_2 = data_65aa7c
    data_65aa84 = &data_65a538
    void* var_14_1 = eax_2
    
    if (eax_2 == 0 || *eax_2 == 0)
        eax_2 = &data_65a538
        var_14_1 = &data_65a538
    
    int32_t var_8 = 0
    int32_t var_10 = 0
    parse_command_line<char>(eax_2, nullptr, nullptr, &var_8, &var_10)
    int32_t* esi_1 = ___acrt_allocate_buffer_for_argv(var_8, var_10, 1)
    int32_t result
    
    if (esi_1 != 0)
        parse_command_line<char>(var_14_1, esi_1, &esi_1[var_8], &var_8, &var_10)
        
        if (arg1 != 1)
            int32_t* var_c = nullptr
            int32_t* var_24_3 = &var_c
            int32_t* var_28_3 = esi_1
            result = sub_536d35()
            int32_t* eax_11
            
            if (result == 0)
                int32_t* edx_1 = var_c
                int32_t ecx_2 = 0
                int32_t* eax_12 = edx_1
                
                if (*edx_1 != 0)
                    do
                        eax_12 = &eax_12[1]
                        ecx_2 += 1
                    while (*eax_12 != 0)
                
                eax_11 = nullptr
                data_65aa70 = ecx_2
                var_c = nullptr
                result = 0
                data_65aa74 = edx_1
            else
                eax_11 = var_c
            
            __free_base(eax_11)
            var_c = nullptr
        else
            data_65aa70 = var_8 - 1
            int32_t* eax_9 = esi_1
            esi_1 = nullptr
            data_65aa74 = eax_9
            result = 0
    else
        *__errno() = 0xc
        result = 0xc
    
    __free_base(esi_1)
    return result
}
