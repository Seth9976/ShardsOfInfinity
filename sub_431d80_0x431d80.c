// 函数名称: sub_431d80
// 虚拟地址: 0x431d80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_431d80(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541d28
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result_1
    int32_t result_3 = result_1
    int32_t result = *arg2 + result_3
    
    if (result s>= 0x1000)
        sub_44e4d0(result, &data_5559b1, "curInput + end < MAX_INPUTS", 
            "c:\ax2017\jams\shards\code\shardsai.cpp", 0xf77, "AddInputLocalRangeCards")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi = 5
    
    if (result_3 s> 5)
        do
            result = sub_430010(arg3, 0, esi)
            
            if (result.b != 0)
                char const* const eax_5
                
                if (esi != 0)
                    uint32_t eax_6 = zx.d(esi.w)
                    
                    if (eax_6 u>= 0xc8)
                        sub_44e4d0(eax_6, &data_5559b1, "idNoMimic < MAX_CARDS", 
                            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    eax_5 = *(*((eax_6 << 5) + arg3 + 0x14) + 0x24)
                else
                    eax_5 = "none"
                
                char const* const var_2c_2 = eax_5
                int32_t var_30_1 = esi
                sub_44f980(&result_1, arg4)
                char* const result_4 = &data_5559b1
                int32_t var_8_1 = 0
                int32_t result_2 = result_1
                
                if (result_2 != 0)
                    result_4 = result_2
                
                char* const result_5 = result_4
                result = sub_42fec0(result_2, arg2, result_4, 0xffffffff)
                int32_t var_8_2 = 1
                
                if (data_cdf414 != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_1)
                        int32_t temp0_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp0_1 == 1)
                            result = sub_45d050(result, *(result + 0xc) + 0x10)
                            result_1 = &data_5559b1
                
                int32_t var_8_3 = 0xffffffff
            
            esi += 1
        while (esi s< result_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
