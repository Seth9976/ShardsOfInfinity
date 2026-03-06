// 函数名称: sub_524215
// 虚拟地址: 0x524215
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_524215(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_30 = edi
    
    if (__crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<wchar_t> >::validate(
            arg2) == 0)
        return 7
    
    int32_t var_1c = arg2[4]
    int32_t eax_3 = arg2[5]
    char i_4 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    char i_3
    char* var_24_1 = &i_3
    int32_t* var_28 = arg2
    int32_t* var_20_1 = &var_1c
    
    while (true)
        i_3 = i_4
        
        if (__ischartype_l(zx.d(i_4), 8, arg1) == 0)
            break
        
        i_4 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
    
    char i = i_3
    uint32_t eax_5
    eax_5.b = i == 0x2d
    arg3[0xc2].b = eax_5.b
    
    if (i == 0x2d || i == 0x2b)
        i = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2).b
        i_3 = i
    
    if (i == 0x49 || i == 0x69)
        int32_t var_38_7 = eax_3
        int32_t var_3c_2 = var_1c
        return sub_524734(&i_3, arg2)
    
    if (i == 0x4e || i == 0x6e)
        int32_t var_38_6 = eax_3
        int32_t var_3c_1 = var_1c
        return sub_524912(&i_3, arg2)
    
    char var_5_1 = 0
    
    if (i == 0x30)
        uint32_t eax_6 = arg2[5]
        int32_t edi_1 = arg2[4]
        char eax_7 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        
        if (eax_7 == 0x78 || eax_7 == 0x58)
            var_5_1 = 1
            i = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2)
            var_1c = edi_1
            i_3 = i
            uint32_t var_18_2 = eax_6
        else
            sub_529468(arg2, eax_7)
            i = i_3
    
    int32_t* edx_2 = arg3
    int32_t var_10_1 = 0
    char var_6_1 = 0
    void* edi_2 = &edx_2[2]
    
    if (i == 0x30)
        var_6_1 = 1
        
        do
            i = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2).b
            i_3 = i
        while (i == 0x30)
        
        edx_2 = arg3
    
    int32_t ebx_2
    ebx_2.b = var_5_1 == 0
    
    while (true)
        eax_5.b = i
        eax_5.b -= 0x30
        int32_t eax_10
        
        if (eax_5.b u> 9)
            eax_5.b = i
            eax_5.b -= 0x61
            
            if (eax_5.b u> 0x19)
                eax_5.b = i
                eax_5.b -= 0x41
                
                if (eax_5.b u> 0x19)
                    eax_10 = 0xffffffff
                else
                    eax_10 = sx.d(i) - 0x37
            else
                eax_10 = sx.d(i) - 0x57
        else
            eax_10 = sx.d(i) - 0x30
        
        if (eax_10 u> ((ebx_2 - 1) & 6) + 9)
            break
        
        var_6_1 = 1
        
        if (edi_2 != &edx_2[0xc2])
            *edi_2 = eax_10.b
            edi_2 += 1
        
        var_10_1 += 1
        edx_2 = arg3
        i = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2).b
        i_3 = i
    
    int32_t ebx_6 = 0
    
    if (i == ***(*arg1 + 0x88))
        int32_t* edx_3 = arg3
        char i_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        i_3 = i_1
        
        if (edi_2 == &edx_3[2] && i_1 == 0x30)
            int32_t ebx_7 = var_10_1
            var_6_1 = 1
            
            do
                ebx_7 -= 1
                i_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                    arg2).b
                i_3 = i_1
            while (i_1 == 0x30)
            
            edx_3 = arg3
            var_10_1 = ebx_7
        
        while (true)
            void* eax_18
            eax_18.b = i_1
            eax_18.b -= 0x30
            int32_t eax_20
            
            if (eax_18.b u> 9)
                eax_18.b = i_1
                eax_18.b -= 0x61
                
                if (eax_18.b u> 0x19)
                    eax_18.b = i_1
                    eax_18.b -= 0x41
                    
                    if (eax_18.b u> 0x19)
                        eax_20 = 0xffffffff
                    else
                        eax_20 = sx.d(i_1) - 0x37
                else
                    eax_20 = sx.d(i_1) - 0x57
            else
                eax_20 = sx.d(i_1) - 0x30
            
            if (eax_20 u> ((ebx_2 - 1) & 6) + 9)
                break
            
            var_6_1 = 1
            
            if (edi_2 != &edx_3[0xc2])
                *edi_2 = eax_20.b
                edi_2 += 1
            
            edx_3 = arg3
            i_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2).b
            i_3 = i_1
        
        ebx_6 = 0
    
    if (var_6_1 != 0)
        sub_529468(arg2, (i_3.d).b)
        var_1c = arg2[4]
        int32_t var_18_3 = arg2[5]
        char i_5 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        i_3 = i_5
        char ecx_17 = 0
        
        if (i_5 == 0x45)
            ecx_17 = var_5_1 ^ 1
        else if (i_5 == 0x50)
            ecx_17 = var_5_1
        else if (i_5 == 0x65)
            ecx_17 = var_5_1 ^ 1
        else if (i_5 == 0x70)
            ecx_17 = var_5_1
        
        if (ecx_17 == 0)
            goto label_5245d7
        
        char i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        bool cond:1_1 = i_2 == 0x2d
        i_3 = i_2
        
        if (i_2 == 0x2b || i_2 == 0x2d)
            i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2)
            i_3 = i_2
        
        char var_6_2 = 0
        
        if (i_2 == 0x30)
            var_6_2 = 1
            
            do
                i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                    arg2)
                i_3 = i_2
            while (i_2 == 0x30)
        
        uint32_t eax_31
        
        while (true)
            if (i_2 - 0x30 u<= 9)
                eax_31 = sx.d(i_2) - 0x30
            else if (i_2 - 0x61 u<= 0x19)
                eax_31 = sx.d(i_2) - 0x57
            else if (i_2 - 0x41 u> 0x19)
                eax_31 = 0xffffffff
            else
                eax_31 = sx.d(i_2) - 0x37
            
            if (eax_31 u>= 0xa)
                break
            
            var_6_2 = 1
            ebx_6 = ebx_6 * 0xa + eax_31
            
            if (ebx_6 s> 0x1450)
                ebx_6 = 0x1451
                break
            
            i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2)
            i_3 = i_2
        
        while (true)
            eax_31.b = i_2
            eax_31.b -= 0x30
            int32_t eax_35
            
            if (eax_31.b u> 9)
                eax_31.b = i_2
                eax_31.b -= 0x61
                
                if (eax_31.b u> 0x19)
                    eax_31.b = i_2
                    eax_31.b -= 0x41
                    
                    if (eax_31.b u> 0x19)
                        eax_35 = 0xffffffff
                    else
                        eax_35 = sx.d(i_2) - 0x37
                else
                    eax_35 = sx.d(i_2) - 0x57
            else
                eax_35 = sx.d(i_2) - 0x30
            
            if (eax_35 u>= 0xa)
                break
            
            i_2 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2).b
            i_3 = i_2
        
        if (cond:1_1 != 0)
            ebx_6 = neg.d(ebx_6)
        
        if (var_6_2 != 0)
            goto label_5245d7
        
        if (<lambda_1d4abb0629169a79429c5bf3ec592ce5>::operator()(&var_28) != 0)
            i_3 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2)
        label_5245d7:
            sub_529468(arg2, (i_3.d).b)
            
            if (edi_2 != &arg3[2])
                while (*(edi_2 - 1) == 0)
                    edi_2 -= 1
                    
                    if (edi_2 == &arg3[2])
                        break
                
                if (edi_2 != &arg3[2])
                    if (ebx_6 s<= 0x1450)
                        if (ebx_6 s< 0xffffebb0)
                            return 8
                        
                        int32_t eax_40
                        eax_40.b = var_5_1 == 0
                        int32_t ebx_10 = ebx_6 + (((eax_40 - 1) & 3) + 1) * var_10_1
                        
                        if (ebx_10 s<= 0x1450)
                            if (ebx_10 s< 0xffffebb0)
                                return 8
                            
                            *arg3 = ebx_10
                            arg3[1] = edi_2 - &arg3[2]
                            return zx.d(var_5_1)
                    
                    return 9
            
            return 2
    else if (<lambda_1d4abb0629169a79429c5bf3ec592ce5>::operator()(&var_28) != 0)
        int32_t eax_24
        eax_24.b = var_5_1 == 0
        return ((eax_24 - 1) & 0xfffffffb) + 7
    
    return 7
}
