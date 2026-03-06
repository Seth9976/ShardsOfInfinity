// 函数名称: sub_4dfe00
// 虚拟地址: 0x4dfe00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4dfe00(int32_t arg1, int32_t* arg2, char* arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t eax = sub_4ddfc0(arg5)
    int32_t eax = sub_4ddfc0(arg5)
    
    if (eax == 4)
        eax = *arg2
        
        if (eax == 0 || eax == 8)
            return sub_4de640(eax, arg4, arg2, arg5)
    else if (eax != 5)
        if (eax == 0xa)
            eax = *arg2
            
            if (eax == 0 || eax == 0xa)
                return sub_4de640(eax, arg4, arg2, arg5)
    else if (arg2[6] == 0)
        eax = *arg2
        
        if (eax == 0 || eax == 5)
            return sub_4de640(eax, arg4, arg2, arg5)
    
    if (*arg2 == 9)
        return sub_4de7d0(eax, arg2, arg3, arg4, arg5)
    
    int32_t eax_5 = sub_4ddfc0(arg5)
    int128_t var_1c
    __builtin_memset(&var_1c, 0, 0x14)
    char eax_6 = sub_4deb20(&var_1c, arg5)
    *arg2 = 8
    
    if (eax_6 == 0)
        return eax_6
    
    void* var_44_1
    int32_t var_40_6
    int32_t var_c
    
    if (var_c == 1 || var_c == 4)
        var_40_6 = eax_5
        var_44_1 = arg5
    else
        int32_t esi_1 = var_1c:8.d
        int32_t edi_1 = var_1c:4.d
        void* var_30 = sub_45cd70(sub_4dd7f0(var_c, esi_1, edi_1, 1))
        int32_t var_2c_1 = edi_1
        int32_t var_28_1 = esi_1
        int32_t eax_10 = sub_4dd730(edi_1, 1)
        int32_t var_20_1 = 1
        int32_t var_24_1 = eax_10
        sub_4ddd60(&var_1c, &var_30)
        int32_t ecx_11 = var_1c.d
        
        if (ecx_11 != 0)
            _aligned_free_base(ecx_11)
        
        int32_t eax_11 = *arg2
        void* ecx_12 = var_30
        var_1c.d = ecx_12
        var_1c:0xc.d = eax_10
        int32_t var_c_1 = 1
        
        if (eax_11 == 8)
            var_40_6 = eax_5
            var_44_1 = arg5
        else
            if (eax_11 != 0)
                if (eax_11 == 6)
                    goto label_4dffa9
                
                if (ecx_12 != 0)
                    _aligned_free_base(ecx_12)
                
                void* var_40_8 = arg5
                sub_44e260("texture encoding not supported %s")
                int32_t eax_14
                eax_14.b = 1
                return eax_14
            
            if (eax_5 != 2)
            label_4dffa9:
                sub_4df9d0(&var_1c, arg4, arg2, &var_1c, arg5)
                int32_t eax_17
                eax_17.b = 1
                return eax_17
            
            var_40_6 = 2
            var_44_1 = arg5
    
    sub_4deef0(&var_1c, arg4, arg2, &var_1c, var_44_1, var_40_6)
    void* eax_19
    eax_19.b = 1
    return eax_19
}
