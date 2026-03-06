// 函数名称: sub_48cd30
// 虚拟地址: 0x48cd30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_48cd30(int32_t arg1, char arg2, void* arg3, char arg4, int32_t arg5, int32_t arg6, int32_t* arg7, int64_t* arg8)
{
    // 第一条实际指令: void var_11c
    void var_11c
    int32_t eax_1 = __security_cookie ^ &var_11c
    *(arg3 + 0x325) = 0
    int32_t var_110
    __builtin_memcpy(&var_110, arg3 + 0x110, 0x100)
    *(arg3 + 0x327) = 0
    *(arg3 + 0x324) = 0
    __builtin_memcpy(arg3 + 0x110, arg6, 0x100)
    *(arg3 + 0x310) = *arg7
    *(arg3 + 0x314) = arg7[1]
    *(arg3 + 0x318) = *arg8
    *(arg3 + 0x320) = arg8[1].d
    int32_t eax_7 = (**(arg3 + 0x210))()
    void* edi_2
    
    if (eax_7 != (*data_653fdc)())
        edi_2 = arg3 + 0x110
    else
        edi_2 = arg3 + 0x110
        
        if (eax_7(arg3 + 0x210, &data_653fdc).b != 0)
            int32_t eax_9 = (**edi_2)()
            
            if (eax_9 != (*var_110)())
                *(arg3 + 0x324) = 1
            else if (eax_9(edi_2, &var_110).b == 0)
                *(arg3 + 0x324) = 1
    
    int32_t result
    result.b = *(arg3 + 4)
    
    if (arg2 == 0)
        if (result.b != 0)
            int32_t eax_11 = (*var_110)()
            result = (**(arg3 + 0x210))()
            
            if (eax_11 == result)
                result = eax_11(&var_110, arg3 + 0x210)
                
                if (result.b != 0)
                    result = arg5 - *(arg3 + 8)
                    
                    if (_mm_cvtepi32_ps(zx.o(result)) f< 750f)
                        if (arg4 == 0)
                            *(arg3 + 0x326) = 1
                        else
                            *(arg3 + 0x325) = 1
                            *(arg3 + 0x326) = 1
                    else if (arg4 != 0)
                        *(arg3 + 0x325) = 1
                        *(arg3 + 0x326) = 1
                    else
                        *(arg3 + 0x327) = 1
                    
                    __builtin_memcpy(edi_2, &var_110, 0x100)
        
        *(arg3 + 4) = 0
        __builtin_memcpy(arg3 + 0x210, &data_653fdc, 0x100)
    else if (result.b == 0)
        *(arg3 + 8) = arg5
        int32_t eax_14 = arg5 - *(arg3 + 0xc)
        __builtin_memcpy(arg3 + 0x210, edi_2, 0x100)
        void** esi_3 = arg3 + 0x110
        *(arg3 + 4) = 1
        void* edi_3 = arg3 + 0x10
        int32_t eax_16 = (**esi_3)()
        int32_t eax_17
        
        if (eax_16 != (**edi_3)())
            eax_17.b = 0
        else if (eax_16(esi_3, edi_3).b == 0)
            eax_17.b = 0
        else if (0.5f f<= _mm_cvtepi32_ps(zx.o(eax_14)))
            eax_17.b = 0
        else
            eax_17.b = 1
        
        *(arg3 + 0x328) = eax_17.b
        result = arg5
        *(arg3 + 0x325) = 1
        *(arg3 + 0xc) = result
        __builtin_memcpy(edi_3, esi_3, 0x100)
    
    @__security_check_cookie@4(eax_1 ^ &var_11c)
    return result
}
