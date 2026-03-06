// 函数名称: sub_42b530
// 虚拟地址: 0x42b530
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_42b530(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_541b5b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_174 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_cc = arg2
    char* result = *(arg1 + 0xf8) - 1
    
    if (result u<= 4)
        result.b = 0
    else
        if (arg2 == 0x7fffffff)
            sub_44e4d0(result, &data_5559b1, "gameId != GAMEIDX_UNSAVED", 
                "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x2cc, "LocalGameSave")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_44e260("==save game==")
        int32_t var_178_2 = arg2
        int32_t var_17c_1 = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x23c)
        int32_t var_180_1 = sub_44ebe0()
        char* result_1
        sub_44f980(&result_1, "%sgamelocal_%d_%d.xml")
        int32_t var_14_1 = 0
        void var_168
        _memset(&var_168, 0, 0x78)
        int32_t i_1 = *(arg1 + 0xec)
        int32_t var_d4_1 = *(arg1 + 0x108)
        int32_t i_2 = i_1
        int128_t var_ec_1 = *(arg1 + 0xf0)
        int64_t var_dc_1 = *(arg1 + 0x100)
        
        if (i_1 s> 0)
            void var_164
            void* ecx_2 = &var_164
            void* edx = arg1 + 0x28
            int32_t i
            
            do
                *(ecx_2 - 4) = edx - 0x18
                edx += 0x2c
                ecx_2 += 0x18
                *(ecx_2 - 0x18) = *(edx - 0x34)
                *(ecx_2 - 0x10) = *(edx - 0x2c)
                *(ecx_2 - 0xc) = *(edx - 0x28)
                *(ecx_2 - 0x14) = *(edx - 0x30)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t* edx_1 = data_dfc558
        void var_c0
        __builtin_memcpy(&var_c0, &var_168, 0x98)
        int32_t* eax_12 = sub_494290(&var_c0, edx_1)
        char* result_3 = result_1
        char* const result_6 = &data_5559b1
        char var_c1_1 = 1
        char* result_5 = &data_5559b1
        
        if (result_3 != 0)
            result_5 = result_3
        
        if (sub_494520(eax_12, data_dfc558, eax_12, result_5) == 0)
            char* result_2 = result_1
            
            if (result_2 != 0)
                result_6 = result_2
            
            char* const result_7 = result_6
            sub_44e260("Failed to write file: '%s'")
            var_c1_1 = 0
        
        sub_491590(eax_12)
        
        if (var_c1_1 != 0)
            result = TPI1::QueryTiForCVRecord(arg1)
            char var_c1_2 = result.b
            int32_t var_14_3 = 2
            
            if (data_cdf414 != 0)
                char* result_4 = result_1
                
                if (result_4 != 0 && *result_4 != 0)
                    result = sub_44f000(&result_1)
                    int32_t temp1_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(result, *(result + 0xc) + 0x10)
                    
                    result.b = var_c1_2
        else
            int32_t var_14_2 = 1
            
            if (data_cdf414 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_1)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(result, *(result + 0xc) + 0x10)
            
            result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
