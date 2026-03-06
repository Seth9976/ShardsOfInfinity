// 函数名称: ??$common_tox_l@$1?internal_isupper_l@@YA_NHQAU__crt_locale_pointers@@@Z$1?internal_map_lower@@YAHH0@Z@@YAHHKQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x52a628
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t??$common_tox_l@$1?internal_isupper_l@@YA_NHQAU__crt_locale_pointers@@@Z$1?internal_map_lower@@YAHH0@Z@@YAHHKQAU__crt_locale_pointers@@@Z(uint32_t arg1, uint32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: void* var_20
    void* var_20
    _LocaleUpdate::_LocaleUpdate(&var_20, arg3)
    void* var_1c
    char var_14
    
    if (arg1 u>= 0x100)
        int16_t var_8 = 0
        char var_6_1 = 0
        char* ecx_5
        
        if (*(var_1c + 4) s<= 1)
        label_52a6d9:
            *__errno() = 0x2a
            var_8.b = arg1.b
            ecx_5 = 1
            var_8:1.b = 0
        else
            char eax_6 = (arg1 s>> 8).b
            
            if (__isleadbyte_l(eax_6, &var_1c) == 0)
                goto label_52a6d9
            
            var_8.b = eax_6
            var_8:1.b = arg1.b
            char var_6_2 = 0
            ecx_5 = 2
        
        int16_t var_c = 0
        char var_a_1 = 0
        void* eax_11 = var_1c
        int32_t eax_12 = ___acrt_LCMapStringA(&var_1c, *(eax_11 + 0xa8), arg2, &var_8, ecx_5, &var_c, 
            3, *(eax_11 + 8), 1)
        
        if (eax_12 != 0)
            if (eax_12 != 1)
                uint32_t edx_3 = zx.d(var_c.b) << 8 | zx.d(var_c:1.b)
                
                if (var_14 != 0)
                    void* ecx_7 = var_20
                    *(ecx_7 + 0x350) &= 0xfffffffd
                
                return edx_3
            
            uint32_t eax_14 = zx.d(var_c.b)
            
            if (var_14 != 0)
                void* ecx_6 = var_20
                *(ecx_6 + 0x350) &= 0xfffffffd
            
            return eax_14
        
        if (var_14 != eax_12.b)
            void* eax_13 = var_20
            *(eax_13 + 0x350) &= 0xfffffffd
    else
        if (internal_isupper_l(arg1, &var_1c) != 0)
            uint32_t ecx_2 = zx.d(*(*(var_1c + 0x94) + arg1))
            
            if (var_14 != 0)
                void* eax_3 = var_20
                *(eax_3 + 0x350) &= 0xfffffffd
            
            return ecx_2
        
        if (var_14 != 0)
            void* ecx_3 = var_20
            *(ecx_3 + 0x350) &= 0xfffffffd
    return arg1
}
