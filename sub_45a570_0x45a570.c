// 函数名称: sub_45a570
// 虚拟地址: 0x45a570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_45a570()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5424e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = data_7db388
    int32_t eax_3 = 0
    
    if (ecx s> 0)
        do
            *((eax_3 << 2) + &data_cdb3d8) = eax_3
            eax_3 += 1
            ecx = data_7db388
        while (eax_3 s< ecx)
    
    int32_t eax_4 = ecx << 2
    int32_t eax_5 = eax_4 s>> 2
    sub_429140(eax_5, eax_4 + &data_cdb3d8, &data_cdb3d8, eax_5, sub_45a460)
    char* result = data_cdf400
    
    if (result s> 0)
        result -= 1
        int32_t i = 0
        data_cdf400 = result
        
        if (data_7db388 s> 0)
            do
                int32_t eax_6 = *((i << 2) + &data_cdb3d8)
                char* const var_14 = &data_5559b1
                int32_t var_8_1 = 0
                int32_t eax_7 = *(eax_6 * 0x180 + 0x65b388)
                
                if (eax_7 == 0)
                    sub_44f620(&var_14, "Mesh ")
                else if (eax_7 == 1)
                    int32_t var_2c_1 = *(eax_6 * 0x180 + 0x65b4d0)
                    var_8_1.b = 1
                    char* ecx_2 = &data_5559b1
                    char* var_18
                    char* eax_9 = *sub_44f980(&var_18, "QuadGroup count:%d ")
                    
                    if (eax_9 != 0)
                        ecx_2 = eax_9
                    
                    sub_44f620(&var_14, ecx_2)
                    var_8_1.b = 2
                    
                    if (data_cdf414 != 0)
                        char* eax_10 = var_18
                        
                        if (eax_10 != 0 && *eax_10 != 0)
                            char* eax_11 = sub_44f000(&var_18)
                            int32_t temp0_1 = *(eax_11 + 4)
                            *(eax_11 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                                var_18 = &data_5559b1
                    
                    var_8_1.b = 0
                
                char* const ecx_6 = &data_5559b1
                char* eax_13 = *(*(eax_6 * 0x180 + 0x65b3d0) + 0x20)
                
                if (eax_13 != 0)
                    ecx_6 = eax_13
                
                sub_44f620(&var_14, ecx_6)
                sub_44f620(&var_14, &data_583aa8)
                void* eax_14 = *(eax_6 * 0x180 + 0x65b3d4)
                
                if (eax_14 != 0)
                    char* eax_15 = *(eax_14 + 0x20)
                    char* const ecx_9 = &data_5559b1
                    
                    if (eax_15 != 0)
                        ecx_9 = eax_15
                    
                    sub_44f620(&var_14, ecx_9)
                    sub_44f620(&var_14, &data_583aa8)
                
                int32_t var_2c_5 = *(eax_6 * 0x180 + 0x65b4d4)
                var_8_1.b = 3
                char* ecx_12 = &data_5559b1
                char* const var_1c
                char* eax_17 = *sub_44f980(&var_1c, "layer:%d ")
                
                if (eax_17 != 0)
                    ecx_12 = eax_17
                
                sub_44f620(&var_14, ecx_12)
                var_8_1.b = 4
                
                if (data_cdf414 != 0)
                    char* eax_18 = var_1c
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_44f000(&var_1c)
                        int32_t temp1_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
                            var_1c = &data_5559b1
                
                char* const esi_4 = var_14
                char* const eax_20 = &data_5559b1
                
                if (esi_4 != 0)
                    eax_20 = esi_4
                
                char* const var_2c_7 = eax_20
                result = sub_44e260(&data_5742d0)
                int32_t var_8_2 = 5
                
                if (data_cdf414 != 0 && esi_4 != 0 && *esi_4 != 0)
                    result = sub_44f000(&var_14)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_45d050(result, *(result + 0xc) + 0x10)
                
                i += 1
                int32_t var_8_3 = 0xffffffff
            while (i s< data_7db388)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
