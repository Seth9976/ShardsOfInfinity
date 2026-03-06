// 函数名称: sub_515a30
// 虚拟地址: 0x515a30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_515a30(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4, void* arg5, void* arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    ebx.b = arg6 == 0x10
    char* var_90 = arg2
    int32_t* esi = arg3
    void* ebx_2 = (ebx + 1) * arg5
    int32_t* ecx = *esi
    int32_t* var_a4 = esi
    
    if (arg8 == 0)
        int32_t result = sub_514b70(arg2, arg2, esi, arg4, arg5, *ecx, ecx[1], arg6, arg7)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return result
    
    int32_t edi_1 = ecx[1]
    int32_t ecx_4 = *ecx
    int32_t var_80
    
    if (ecx_4 s< 0 || edi_1 s< 0)
        var_80 = 0
    else
        int32_t eax_3
        int32_t edx_2
        
        if (edi_1 != 0)
            edx_2:eax_3 = 0x7fffffff
        
        if (edi_1 != 0 && ecx_4 s> divs.dp.d(edx_2:eax_3, edi_1))
            var_80 = 0
        else
            int32_t ecx_5 = ecx_4 * edi_1
            
            if (ecx_5 s< 0 || ebx_2 s< 0)
                var_80 = 0
            else
                int32_t eax_5
                int32_t edx_4
                
                if (ebx_2 != 0)
                    edx_4:eax_5 = 0x7fffffff
                
                if (ebx_2 != 0 && ecx_5 s> divs.dp.d(edx_4:eax_5, ebx_2))
                    var_80 = 0
                else
                    int32_t var_bc_2 = ecx_5 * ebx_2
                    var_80 = _malloc()
    
    int32_t i = 0
    int32_t i_1 = 0
    int32_t var_94 = arg4
    
    do
        int32_t* eax_9 = *esi
        int128_t var_40 = data_59de80
        int32_t var_4c_1 = 2
        int32_t eax_10 = *eax_9
        int128_t var_78
        __builtin_memcpy(&var_78, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00", 0x14)
        int32_t var_48_1 = 2
        int128_t var_5c = data_59e140
        int32_t var_44_1 = 1
        int32_t edi_2 = *(&var_5c + i)
        int32_t var_30_1 = 0
        int32_t var_2c_1 = 1
        int32_t var_28_1 = 0
        uint32_t k_3 = divu.dp.d(0:(eax_10 + edi_2 - *(&var_40 + i) - 1), edi_2)
        int32_t i_2 = i_1
        int32_t var_64_1 = 0
        int32_t var_60_1 = 1
        int128_t var_24
        __builtin_memcpy(&var_24, 
            "\x08\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x04\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x"
        "00\x02\x00\x00\x00", 
            0x1c)
        int32_t ecx_10 = *(&var_24 + i_2)
        
        if (k_3 != 0)
            int32_t edi_3 = *(&var_78 + i_2)
            int32_t var_88_1 = edi_3
            uint32_t j_3 = divu.dp.d(0:(*(&var_24 + i_2) - 1 + *(*esi + 4) - edi_3), ecx_10)
            uint32_t j_2 = j_3
            
            if (j_3 != 0)
                int32_t eax_24 = (((*(*esi + 8) * k_3 * arg6 + 7) s>> 3) + 1) * j_3
                
                if (sub_514b70(eax_24, var_90, esi, var_94, arg5, k_3, j_3, arg6, arg7) == 0)
                    _free(var_80)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 0
                
                uint32_t j_1 = j_2
                
                if (j_1 s> 0)
                    uint32_t k_2 = k_3
                    void* eax_26 = nullptr
                    void* var_a0_1 = nullptr
                    int32_t esi_2 = k_2 * ebx_2
                    int32_t var_a8_1 = esi_2
                    uint32_t j
                    
                    do
                        if (k_2 s> 0)
                            int32_t edi_4 = 0
                            uint32_t k_1 = k_2
                            void* esi_3 = eax_26
                            uint32_t k
                            
                            do
                                sub_51d5b0(
                                    (**var_a4 * var_88_1 + *(&var_40 + i_1) + edi_4) * ebx_2 + var_80, 
                                    var_a4[3] + esi_3, ebx_2)
                                esi_3 += ebx_2
                                edi_4 += *(&var_5c + i_1)
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                            edi_3 = var_88_1
                            eax_26 = var_a0_1
                            j_1 = j_2
                            k_2 = k_3
                            esi_2 = var_a8_1
                        
                        edi_3 += ecx_10
                        eax_26 += esi_2
                        j = j_1
                        j_1 -= 1
                        var_88_1 = edi_3
                        var_a0_1 = eax_26
                        j_2 = j_1
                    while (j != 1)
                    esi = var_a4
                
                _free(esi[3])
                var_90 = &var_90[eax_24]
                var_94 -= eax_24
            
            i_2 = i_1
        
        i = i_2 + 4
        i_1 = i
    while (i s< 0x1c)
    
    esi[3] = var_80
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
