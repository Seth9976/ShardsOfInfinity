// 函数名称: ?state_case_size@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x520f68
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?state_case_size@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: char eax = *(arg1 + 0x31)
    char eax = *(arg1 + 0x31)
    int32_t eax_3
    
    if (eax != 0x46)
        if (eax != 0x4e)
            if (arg1[0xb] != 0)
                goto label_520fa5
            
            eax_3 = sx.d(eax)
            
            if (eax_3 == 0x6c)
                char* eax_11 = arg1[4]
                int32_t var_4_1
                
                if (*eax_11 != 0x6c)
                    var_4_1 = 3
                else
                    arg1[4] = &eax_11[1]
                    var_4_1 = 4
                
                arg1[0xb] = var_4_1
            else if (eax_3 == 0x74)
                arg1[0xb] = 7
            else if (eax_3 == 0x77)
                arg1[0xb] = 0xc
            else if (eax_3 == 0x7a)
                arg1[0xb] = 6
            
            if (eax_3 == 0x6a)
                arg1[0xb] = 5
            else if (eax_3 == 0x49)
                char* edx_2 = arg1[4]
                eax_3.b = *edx_2
                
                if (eax_3.b == 0x33 && edx_2[1] == 0x32)
                    arg1[0xb] = 0xa
                    arg1[4] = &edx_2[2]
                else if (eax_3.b == 0x36 && edx_2[1] == 0x34)
                    arg1[0xb] = 0xb
                    arg1[4] = &edx_2[2]
                else if (eax_3.b == 0x64 || eax_3.b == 0x69 || eax_3.b == 0x6f || eax_3.b == 0x75
                        || eax_3.b == 0x78 || eax_3.b == 0x58)
                    arg1[0xb] = 9
            else if (eax_3 == 0x4c)
                arg1[0xb] = 8
            else if (eax_3 == 0x54)
                arg1[0xb] = 0xd
            else if (eax_3 == 0x68)
                char* eax_9 = arg1[4]
                
                if (*eax_9 != 0x68)
                    arg1[0xb] = 2
                else
                    arg1[4] = &eax_9[1]
                    arg1[0xb] = 1
        else if ((*arg1 & 8) == 0)
            arg1[7] = 8
        label_520fa5:
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            int32_t eax_8
            eax_8.b = 0
            return eax_8
    else if ((*arg1 & 8) == 0)
        arg1[7] = 7
        return __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_type(
            arg1) __tailcall
    
    eax_3.b = 1
    return eax_3
}
