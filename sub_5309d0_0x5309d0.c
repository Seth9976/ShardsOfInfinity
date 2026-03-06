// 函数名称: sub_5309d0
// 虚拟地址: 0x5309d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_5309d0(char* arg1, int32_t arg2, int32_t arg3, char arg4, int32_t arg5, int32_t* arg6, char arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_1c = edi
    int32_t eax
    
    eax = arg3 s<= 0 ? 0 : arg3
    
    if (arg2 u<= eax + 9)
        *__errno() = 0x22
        __invalid_parameter_noinfo()
        return 0x22
    
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, arg8)
    char edx_1 = arg7
    
    if (edx_1 != 0)
        int32_t eax_4
        eax_4.b = arg3 s> 0
        int32_t var_24_2 = eax_4
        void* eax_5
        eax_5.b = *arg6 == 0x2d
        void* var_28_1 = eax_5 + arg1
        shift_bytes(arg1, arg2)
        edx_1 = arg7
    
    char* esi_1 = arg1
    
    if (*arg6 == 0x2d)
        *arg1 = 0x2d
        esi_1 = &arg1[1]
    
    if (arg3 s> 0)
        int32_t* eax_7
        eax_7.b = esi_1[1]
        *esi_1 = eax_7.b
        esi_1 = &esi_1[1]
        void* var_10
        char* eax_10
        eax_10.b = ***(var_10 + 0x88)
        *esi_1 = eax_10.b
    
    char* esi_2 = &esi_1[(zx.d(edx_1) ^ 1) + arg3]
    void* eax_14 = 0xffffffff
    
    if (arg2 != 0xffffffff)
        eax_14 = arg1 - esi_2 + arg2
    
    int32_t eax_17 = _strcpy_s(esi_2, eax_14, "e+000")
    
    if (eax_17 != 0)
        int32_t var_30_2
        __builtin_memset(&var_30_2, 0, 0x14)
        sub_52d729()
        noreturn
    
    if (arg4 != eax_17.b)
        *esi_2 = 0x45
    
    if (*arg6[2] != 0x30)
        int32_t edx_3 = arg6[1]
        int32_t edx_4 = edx_3 - 1
        
        if (edx_3 - 1 s< 0)
            edx_4 = neg.d(edx_4)
            esi_2[1] = 0x2d
        
        if (edx_4 s>= 0x64)
            int32_t eax_20
            int32_t edx_5
            edx_5:eax_20 = sx.q(edx_4)
            edx_4 = mods.dp.d(edx_5:eax_20, 0x64)
            esi_2[2] += (divs.dp.d(edx_5:eax_20, 0x64)).b
        
        if (edx_4 s>= 0xa)
            int32_t eax_23
            int32_t edx_6
            edx_6:eax_23 = sx.q(edx_4)
            edx_4 = mods.dp.d(edx_6:eax_23, 0xa)
            esi_2[3] += (divs.dp.d(edx_6:eax_23, 0xa)).b
        
        esi_2[4] += edx_4.b
    
    if (arg5 == 2 && esi_2[2] == 0x30)
        sub_51dd40(&esi_2[2], &esi_2[3], 3)
    
    char var_8
    
    if (var_8 != 0)
        void* eax_26 = var_14
        *(eax_26 + 0x350) &= 0xfffffffd
    
    return 0
}
