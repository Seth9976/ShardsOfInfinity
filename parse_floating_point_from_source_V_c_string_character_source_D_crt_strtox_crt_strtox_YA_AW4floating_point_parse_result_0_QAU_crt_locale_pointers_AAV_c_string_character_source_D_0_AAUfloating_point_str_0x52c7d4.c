// 函数名称: ??$parse_floating_point_from_source@V?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA?AW4floating_point_parse_result@0@QAU__crt_locale_pointers@@AAV?$c_string_character_source@D@0@AAUfloating_point_string@0@@Z
// 虚拟地址: 0x52c7d4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t??$parse_floating_point_from_source@V?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA?AW4floating_point_parse_result@0@QAU__crt_locale_pointers@@AAV?$c_string_character_source@D@0@AAUfloating_point_string@0@@Z(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: char eax
    char eax
    int16_t ecx_1
    eax, ecx_1 = __crt_stdio_input::stream_input_adapter<wchar_t>::validate(arg2)
    
    if (eax == 0)
        return 7
    
    int32_t edi
    int32_t var_2c_1 = edi
    char* edi_1 = *arg2
    char* var_14_1 = edi_1
    ecx_1.b = *edi_1
    void* eax_1 = &edi_1[1]
    char var_9
    void* eax_4
    
    while (true)
        *arg2 = eax_1
        var_9 = ecx_1.b
        eax_4, ecx_1 = __ischartype_l(zx.d(ecx_1.b), 8, arg1)
        
        if (eax_4 == 0)
            break
        
        char* eax_2 = *arg2
        ecx_1.b = *eax_2
        eax_1 = &eax_2[1]
    
    ecx_1.b = var_9
    eax_4.b = ecx_1.b == 0x2d
    arg3[0xc2].b = eax_4.b
    
    if (ecx_1.b == 0x2d || ecx_1.b == 0x2b)
        char* eax_5 = *arg2
        ecx_1.b = *eax_5
        var_9 = ecx_1.b
        *arg2 = &eax_5[1]
    
    uint32_t result
    
    if (ecx_1.b == 0x49 || ecx_1.b == 0x69)
        result = __crt_strtox::parse_floating_point_possible_infinity<char,class __crt_strtox::c_string_character_source<char>,char const*>(
            &var_9, arg2, edi_1)
    else if (ecx_1.b == 0x4e || ecx_1.b == 0x6e)
        char* var_30_7 = edi_1
        result = __crt_strtox::parse_floating_point_possible_nan<char,class __crt_strtox::c_string_character_source<char>,char const*>(
            &var_9, arg2)
    else
        char result_1 = 0
        
        if (ecx_1.b == 0x30)
            char* edi_2 = *arg2
            eax_4.b = *edi_2
            *arg2 = &edi_2[1]
            
            if (eax_4.b == 0x78 || eax_4.b == 0x58)
                ecx_1.b = edi_2[1]
                result_1 = 1
                var_9 = ecx_1.b
                *arg2 = &edi_2[2]
                var_14_1 = edi_2
            else
                __crt_strtox::c_string_character_source<char>::unget(arg2, eax_4.b)
                ecx_1.b = var_9
        
        ecx_1:1.b = 0
        void* ebx_3 = &arg3[2]
        
        if (ecx_1.b == 0x30)
            ecx_1:1.b = 1
            
            do
                char* eax_8 = *arg2
                ecx_1.b = *eax_8
                var_9 = ecx_1.b
                *arg2 = &eax_8[1]
            while (ecx_1.b == 0x30)
        
        int32_t edi_3 = 0
        int32_t edx_3
        edx_3.b = result_1 == 0
        
        while (true)
            void* eax_7
            eax_7.b = ecx_1.b
            eax_7.b -= 0x30
            int32_t eax_10
            
            if (eax_7.b u> 9)
                eax_7.b = ecx_1.b
                eax_7.b -= 0x61
                
                if (eax_7.b u> 0x19)
                    eax_7.b = ecx_1.b
                    eax_7.b -= 0x41
                    
                    if (eax_7.b u> 0x19)
                        eax_10 = 0xffffffff
                    else
                        eax_10 = sx.d(ecx_1.b) - 0x37
                else
                    eax_10 = sx.d(ecx_1.b) - 0x57
            else
                eax_10 = sx.d(ecx_1.b) - 0x30
            
            if (eax_10 u> ((edx_3 - 1) & 6) + 9)
                break
            
            ecx_1:1.b = 1
            
            if (ebx_3 != &arg3[0xc2])
                *ebx_3 = eax_10.b
                ebx_3 += 1
            
            char* eax_13 = *arg2
            edi_3 += 1
            ecx_1.b = *eax_13
            var_9 = ecx_1.b
            *arg2 = &eax_13[1]
        
        int32_t var_10_1 = edi_3
        char* edi_4 = var_14_1
        
        if (ecx_1.b == ***(*arg1 + 0x88))
            char* eax_18 = *arg2
            int32_t edx_6
            edx_6.b = *eax_18
            void* eax_19 = &eax_18[1]
            ecx_1.b = edx_6.b
            var_9 = edx_6.b
            *arg2 = eax_19
            
            if (ebx_3 == &arg3[2] && edx_6.b == 0x30)
                int32_t edi_5 = var_10_1
                ecx_1:1.b = 1
                
                do
                    edx_6.b = *eax_19
                    edi_5 -= 1
                    eax_19 += 1
                    var_9 = edx_6.b
                    *arg2 = eax_19
                    ecx_1.b = edx_6.b
                while (edx_6.b == 0x30)
                
                var_10_1 = edi_5
            
            while (true)
                eax_19.b = ecx_1.b
                eax_19.b -= 0x30
                int32_t eax_21
                
                if (eax_19.b u> 9)
                    eax_19.b = ecx_1.b
                    eax_19.b -= 0x61
                    
                    if (eax_19.b u> 0x19)
                        ecx_1.b -= 0x41
                        
                        if (ecx_1.b u> 0x19)
                            eax_21 = 0xffffffff
                        else
                            eax_21 = sx.d(edx_6.b) - 0x37
                    else
                        eax_21 = sx.d(ecx_1.b) - 0x57
                else
                    eax_21 = sx.d(ecx_1.b) - 0x30
                
                if (eax_21 u> ((edx_3 - 1) & 6) + 9)
                    break
                
                ecx_1:1.b = 1
                
                if (ebx_3 != &arg3[0xc2])
                    *ebx_3 = eax_21.b
                    ebx_3 += 1
                
                char* eax_24 = *arg2
                edx_6.b = *eax_24
                var_9 = edx_6.b
                ecx_1.b = edx_6.b
                *arg2 = &eax_24[1]
            
            edi_4 = var_14_1
        
        char var_30_3 = (var_9.d).b
        int32_t* ecx_3 = arg2
        
        if (ecx_1:1.b != 0)
            __crt_strtox::c_string_character_source<char>::unget(ecx_3, var_30_3)
            char* eax_28 = *arg2
            char* var_20_2 = eax_28
            int16_t ecx_4
            ecx_4.b = *eax_28
            void* edx_7 = &eax_28[1]
            eax_28.b = 0
            var_9 = ecx_4.b
            void* var_18_2 = edx_7
            *arg2 = edx_7
            
            if (ecx_4.b == 0x45)
                eax_28.b = result_1
                eax_28.b ^= 1
            else if (ecx_4.b == 0x50)
                eax_28.b = result_1
            else if (ecx_4.b == 0x65)
                eax_28.b = result_1
                eax_28.b ^= 1
            else if (ecx_4.b == 0x70)
                eax_28.b = result_1
            
            int32_t edi_7 = 0
            
            if (eax_28.b != 0)
                ecx_4:1.b = *edx_7
                void* eax_29 = edx_7 + 1
                *arg2 = eax_29
                ecx_4.b = ecx_4:1.b
                var_9 = ecx_4.b
                
                if (ecx_4:1.b != 0x2b)
                    edx_7.b = ecx_4:1.b
                
                if (ecx_4:1.b == 0x2b || ecx_4:1.b == 0x2d)
                    ecx_4.b = *eax_29
                    var_9 = ecx_4.b
                    edx_7.b = ecx_4.b
                    *arg2 = eax_29 + 1
                
                edx_7:1.b = 0
                
                if (edx_7.b == 0x30)
                    edx_7:1.b = 1
                    
                    do
                        char* eax_30 = *arg2
                        ecx_4.b = *eax_30
                        var_9 = ecx_4.b
                        edx_7.b = ecx_4.b
                        *arg2 = &eax_30[1]
                    while (ecx_4.b == 0x30)
                
                void* eax_32
                
                while (true)
                    eax_29.b = edx_7.b
                    eax_29.b -= 0x30
                    
                    if (eax_29.b u> 9)
                        eax_29.b = edx_7.b
                        eax_29.b -= 0x61
                        
                        if (eax_29.b u> 0x19)
                            edx_7.b -= 0x41
                            
                            if (edx_7.b u> 0x19)
                                eax_32 = 0xffffffff
                            else
                                eax_32 = sx.d(ecx_4.b) - 0x37
                        else
                            eax_32 = sx.d(edx_7.b) - 0x57
                    else
                        eax_32 = sx.d(edx_7.b) - 0x30
                    
                    if (eax_32 u>= 0xa)
                        break
                    
                    edx_7:1.b = 1
                    edi_7 = edi_7 * 0xa + eax_32
                    
                    if (edi_7 s> 0x1450)
                        edi_7 = 0x1451
                        break
                    
                    char* eax_35 = *arg2
                    ecx_4.b = *eax_35
                    var_9 = ecx_4.b
                    edx_7.b = ecx_4.b
                    *arg2 = &eax_35[1]
                
                while (true)
                    eax_32.b = ecx_4.b
                    eax_32.b -= 0x30
                    int32_t eax_37
                    
                    if (eax_32.b u> 9)
                        eax_32.b = ecx_4.b
                        eax_32.b -= 0x61
                        
                        if (eax_32.b u> 0x19)
                            eax_32.b = ecx_4.b
                            eax_32.b -= 0x41
                            
                            if (eax_32.b u> 0x19)
                                eax_37 = 0xffffffff
                            else
                                eax_37 = sx.d(ecx_4.b) - 0x37
                        else
                            eax_37 = sx.d(ecx_4.b) - 0x57
                    else
                        eax_37 = sx.d(ecx_4.b) - 0x30
                    
                    if (eax_37 u>= 0xa)
                        break
                    
                    char* eax_40 = *arg2
                    ecx_4.b = *eax_40
                    var_9 = ecx_4.b
                    *arg2 = &eax_40[1]
                
                if (ecx_4:1.b == 0x2d)
                    edi_7 = neg.d(edi_7)
                
                if (edx_7:1.b == 0)
                    __crt_strtox::c_string_character_source<char>::unget(arg2, (var_9.d).b)
                    *arg2 = var_20_2
                    var_9 = 0
                    char* eax_41
                    eax_41.b = *var_20_2
                    var_9 = eax_41.b
                    *arg2 = var_18_2
            
            __crt_strtox::c_string_character_source<char>::unget(arg2, (var_9.d).b)
            
            if (ebx_3 == &arg3[2])
                result = 2
            else
                while (*(ebx_3 - 1) == 0)
                    ebx_3 -= 1
                    
                    if (ebx_3 == &arg3[2])
                        break
                
                if (ebx_3 == &arg3[2])
                    result = 2
                else if (edi_7 s> 0x1450)
                    result = 9
                else if (edi_7 s< 0xffffebb0)
                    result = 8
                else
                    int32_t eax_43
                    eax_43.b = result_1 == 0
                    int32_t edi_9 = edi_7 + (((eax_43 - 1) & 3) + 1) * var_10_1
                    
                    if (edi_9 s> 0x1450)
                        result = 9
                    else if (edi_9 s>= 0xffffebb0)
                        *arg3 = edi_9
                        arg3[1] = ebx_3 - &arg3[2]
                        result = zx.d(result_1)
                    else
                        result = 8
        else
            __crt_strtox::c_string_character_source<char>::unget(ecx_3, var_30_3)
            *arg2 = edi_4
            int32_t eax_25
            eax_25.b = result_1 == 0
            result = ((eax_25 - 1) & 0xfffffffb) + 7
    
    return result
}
