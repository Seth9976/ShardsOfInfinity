// 函数名称: sub_4321e0
// 虚拟地址: 0x4321e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4321e0(int32_t arg1, int32_t* arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541db0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result = *arg2 + arg6
    
    if (result s>= 0x1000)
        sub_44e4d0(result, &data_5559b1, "curInput + end < MAX_INPUTS", 
            "c:\ax2017\jams\shards\code\shardsai.cpp", 0xfb8, "AddInputPlayerRangeCards")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi = 5
    
    if (arg6 s> 5)
        do
            result = arg7(arg3, arg4, esi, eax_2)
            
            if (result.b != 0)
                char const* const edi_1
                
                if (esi != 0)
                    uint32_t eax_5 = zx.d(esi.w)
                    
                    if (eax_5 u>= 0xc8)
                        sub_44e4d0(eax_5, &data_5559b1, "idNoMimic < MAX_CARDS", 
                            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    edi_1 = *(*((eax_5 << 5) + arg3 + 0x14) + 0x24)
                else
                    edi_1 = "none"
                
                char* var_34_2 = arg4
                char* result_1
                sub_44f980(&result_1, "Player-%d")
                int32_t var_8_1 = 0
                char* const result_5 = &data_5559b1
                char* result_3 = result_1
                char const* const var_34_3 = edi_1
                
                if (result_3 != 0)
                    result_5 = result_3
                
                int32_t var_38_2 = esi
                char* const result_7 = result_5
                char* const result_2
                sub_44f980(&result_2, arg5)
                char* const result_6 = &data_5559b1
                var_8_1.b = 1
                char* result_4 = result_2
                
                if (result_4 != 0)
                    result_6 = result_4
                
                char* const result_8 = result_6
                result = sub_42fec0(result_4, arg2, result_6, arg4)
                var_8_1.b = 2
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp0_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp0_1 == 1)
                            result = sub_45d050(result, *(result + 0xc) + 0x10)
                            result_2 = &data_5559b1
                
                int32_t var_8_2 = 3
                
                if (data_cdf414 != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_1)
                        int32_t temp1_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp1_1 == 1)
                            result = sub_45d050(result, *(result + 0xc) + 0x10)
                            result_1 = &data_5559b1
                
                int32_t var_8_3 = 0xffffffff
            
            esi += 1
        while (esi s< arg6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
