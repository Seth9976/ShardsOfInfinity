// 函数名称: sub_53ef38
// 虚拟地址: 0x53ef38
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double __convention("regparm")sub_53ef38(int32_t arg1, int16_t arg2 @ x87control, long double arg3 @ st0, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t var_4 = edx
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg2)
    var_4.w = temp0
    long double result
    bool z
    
    if (z)
        int32_t eax_2
        
        if ((arg1 & 0xfffff) != 0 || arg4 != 0)
            long double result_1
            result_1, eax_2 = __convertTOStoQNaN(arg1, arg3)
            result = result_1
        else
        label_53efbc:
            result = data_54f3b0
            eax_2 = 1
        
        if (data_65a980 == 0)
            return __startOneArgErrorHandling(eax_2, 0xd, result, "acos", var_4)
    else
        if (var_4.w != 0x27f)
            __load_CW(var_4)
        
        bool c1
        
        if (arg1 u>= 0x3ff00000)
            if (arg1 u> 0x3ff00000 || ((arg5 & 0xfffff) | arg4) != 0)
                goto label_53efbc
            
            if ((arg5 & 0x80000000) == 0)
                result = float.t(0)
            else
                result = fconvert.t(3.1415926534682512) + fconvert.t(1.2154201012607932e-10)
        else
            result = __fpatan(arg3, sqrt((float.t(1) + arg3) * (float.t(1) - arg3)))
            c1 = unimplemented  {fpatan }
        
        if (data_65a980 == 0)
            arg1.w = var_4.w
            
            if (arg1.w != 0x27f)
                arg1.w &= 0x20
                
                if (arg1.w != 0)
                    bool c0
                    bool c2
                    bool c3
                    arg1.w = (c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe
                    arg1.w &= 0x20
                    
                    if (arg1.w != 0)
                        return __startOneArgErrorHandling(8, 0xd, result, "acos", var_4)
                
                int16_t x87control_1
                int16_t x87status_2
                x87control_1, x87status_2 = __fldcw_memmem16(var_4.w)
            
            return result
    
    int16_t x87control
    int16_t x87status_1
    
    if (var_4.w != 0x27f)
        x87control, x87status_1 = __fldcw_memmem16(var_4.w)
    return result
}
