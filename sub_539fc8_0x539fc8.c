// 函数名称: sub_539fc8
// 虚拟地址: 0x539fc8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_539fc8(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6, char arg7)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax_1 = arg5 & 3
    int32_t edi
    int32_t var_14 = edi
    *arg4 = 0
    int32_t eax_6
    
    if (eax_1 == 0)
        eax_6 = 0x80000000
    else if (eax_1 == 1)
        arg3.b = (arg5 & 0x70000) != 0
        int32_t eax_3
        eax_3.b = (arg5.b & 8) != 0
        arg3.b &= eax_3.b
        uint32_t eax_7 = zx.d(arg3.b)
        int32_t eax_8 = neg.d(eax_7)
        eax_6 = (sbb.d(eax_8, eax_8, eax_7 != 0) & 0x80000000) + 0x40000000
    else if (eax_1 == 2)
        eax_6 = 0xc0000000
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        eax_6 = 0xffffffff
    
    *(arg4 + 4) = eax_6
    *(arg4 + 8) = decode_open_create_flags(arg5)
    int32_t eax_19
    
    if (arg6 == 0x10)
        eax_19 = 0
    else if (arg6 == 0x20)
        eax_19 = 1
    else if (arg6 == 0x30)
        eax_19 = 2
    else if (arg6 == 0x40)
        eax_19 = 3
    else if (arg6 == 0x80)
        eax_19.b = *(arg4 + 4) == 0x80000000
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        eax_19 = 0xffffffff
    
    *(arg4 + 0x14) = 0
    *(arg4 + 0xc) = eax_19
    *(arg4 + 0x10) = 0x80
    
    if (arg5.b s< 0)
        *arg4 |= 0x10
    
    if ((0x8000 & arg5) == 0)
        if ((arg5 & 0x74000) != 0)
            *arg4 |= 0x80
        else
            if (__get_fmode(&var_8) != 0)
                int32_t var_28
                __builtin_memset(&var_28, 0, 0x14)
                sub_52d729()
                noreturn
            
            if (var_8 != 0x8000)
                *arg4 |= 0x80
    
    if ((0x100 & arg5) != 0 && ((not.d(data_65aa98)).b & arg7) s>= 0)
        *(arg4 + 0x10) = 1
    
    if ((arg5.b & 0x40) != 0)
        *(arg4 + 0x14) |= 0x4000000
        *(arg4 + 4) |= 0x10000
        *(arg4 + 0xc) |= 4
    
    if ((arg5 & 0x1000) != 0)
        *(arg4 + 0x10) |= 0x100
    
    if ((arg5 & 0x2000) != 0)
        *(arg4 + 0x14) |= 0x2000000
    
    if ((arg5.b & 0x20) != 0)
        *(arg4 + 0x14) |= 0x8000000
    else if ((arg5.b & 0x10) != 0)
        *(arg4 + 0x14) |= 0x10000000
    
    return arg4
}
