// 函数名称: sub_4269b0
// 虚拟地址: 0x4269b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4269b0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5417a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_472550(arg1, sub_4268d0)
    void* esi = sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x25c
    int32_t eax_4 = sub_41e420()
    char* result
    char* result_2
    char** ecx_12
    
    if (eax_4 == 0)
        int32_t var_28_3 = 0xffffffff
        sub_469930(arg1)
        int32_t var_2c_3 = *(esi + 0x30) + *(esi + 0x3c)
        int32_t var_30_1 = *(esi + 0x24)
        sub_44f980(&result_2, "%d-%d")
        int32_t var_8_9 = 0
        sub_469cf0(&result_2, &data_5bbdfc, arg1, &result_2, 0xffffffff)
        int32_t var_8_10 = 1
        
        if (data_cdf414 != 0)
            char* result_5 = result_2
            
            if (result_5 != 0 && *result_5 != 0)
                char* eax_19 = sub_44f000(&result_2)
                int32_t temp0_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
        
        int32_t var_8_11 = 0xffffffff
        int32_t var_28_4 = *(esi + 0x34) + *(esi + 0x40)
        int32_t var_2c_4 = *(esi + 0x28)
        sub_44f980(&result_2, "%d-%d")
        int32_t var_8_12 = 2
        sub_469cf0(&result_2, &data_5bbe10, arg1, &result_2, 0xffffffff)
        int32_t var_8_13 = 3
        
        if (data_cdf414 != 0)
            char* result_6 = result_2
            
            if (result_6 != 0 && *result_6 != 0)
                char* eax_23 = sub_44f000(&result_2)
                int32_t temp1_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
        
        int32_t var_8_14 = 0xffffffff
        int32_t var_28_5 = *(esi + 0x38) + *(esi + 0x44)
        int32_t var_2c_5 = *(esi + 0x2c)
        sub_44f980(&result_2, "%d-%d")
        int32_t var_8_15 = 4
        sub_469cf0(&result_2, &data_5bbe24, arg1, &result_2, 0xffffffff)
        int32_t var_8_16 = 5
        
        if (data_cdf414 != 0)
            char* result_7 = result_2
            
            if (result_7 != 0 && *result_7 != 0)
                char* eax_27 = sub_44f000(&result_2)
                int32_t temp3_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_27, *(eax_27 + 0xc) + 0x10)
        
        int32_t var_8_17 = 0xffffffff
        int32_t var_28_6 = *(esi + 0xc) + *(esi + 0x18)
        int32_t var_2c_6 = *esi
        sub_44f980(&result_2, "%d-%d")
        int32_t var_8_18 = 6
        sub_469cf0(&result_2, &data_5bbe38, arg1, &result_2, 0xffffffff)
        int32_t var_8_19 = 7
        
        if (data_cdf414 != 0)
            char* result_8 = result_2
            
            if (result_8 != 0 && *result_8 != 0)
                char* eax_31 = sub_44f000(&result_2)
                int32_t temp5_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(eax_31, *(eax_31 + 0xc) + 0x10)
        
        int32_t var_8_20 = 0xffffffff
        int32_t var_28_7 = *(esi + 0x10) + *(esi + 0x1c)
        int32_t var_2c_7 = *(esi + 4)
        sub_44f980(&result_2, "%d-%d")
        int32_t var_8_21 = 8
        sub_469cf0(&result_2, &data_5bbe4c, arg1, &result_2, 0xffffffff)
        int32_t var_8_22 = 9
        
        if (data_cdf414 != 0)
            char* result_9 = result_2
            
            if (result_9 != 0 && *result_9 != 0)
                char* eax_35 = sub_44f000(&result_2)
                int32_t temp6_1 = *(eax_35 + 4)
                *(eax_35 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
        
        int32_t var_8_23 = 0xffffffff
        int32_t var_28_8 = *(esi + 0x14) + *(esi + 0x20)
        int32_t var_2c_8 = *(esi + 8)
        sub_44f980(&result_2, "%d-%d")
        int32_t var_8_24 = 0xa
        result = sub_469cf0(&result_2, &data_5bbe60, arg1, &result_2, 0xffffffff)
        int32_t var_8_25 = 0xb
        
        if (data_cdf414 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                ecx_12 = &result_2
                goto label_426e06
    else
        if (eax_4 - 1 u> 2)
            sub_44e4d0(eax_4, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x12b6, "StatsUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t var_28 = 0xffffffff
        sub_469930(arg1)
        int32_t var_2c = *(esi + 0x54) + *(esi + 0x60)
        int32_t var_30 = *(esi + 0x48)
        sub_44f980(&result_2, "%d-%d")
        int32_t var_8_1 = 0xc
        sub_469cf0(&result_2, &data_5bbdfc, arg1, &result_2, 0xffffffff)
        int32_t var_8_2 = 0xd
        
        if (data_cdf414 != 0)
            char* result_3 = result_2
            
            if (result_3 != 0 && *result_3 != 0)
                char* eax_8 = sub_44f000(&result_2)
                int32_t temp2_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
        int32_t var_28_1 = *(esi + 0x58) + *(esi + 0x64)
        int32_t var_2c_1 = *(esi + 0x4c)
        sub_44f980(&result_2, "%d-%d")
        int32_t var_8_4 = 0xe
        sub_469cf0(&result_2, &data_5bbe10, arg1, &result_2, 0xffffffff)
        int32_t var_8_5 = 0xf
        
        if (data_cdf414 != 0)
            char* result_4 = result_2
            
            if (result_4 != 0 && *result_4 != 0)
                char* eax_12 = sub_44f000(&result_2)
                int32_t temp4_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
        
        int32_t var_8_6 = 0xffffffff
        int32_t var_28_2 = *(esi + 0x5c) + *(esi + 0x68)
        int32_t var_2c_2 = *(esi + 0x50)
        char* result_1
        sub_44f980(&result_1, "%d-%d")
        int32_t var_8_7 = 0x10
        result = sub_469cf0(&result_1, &data_5bbe24, arg1, &result_1, 0xffffffff)
        int32_t var_8_8 = 0x11
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                ecx_12 = &result_1
            label_426e06:
                result = sub_44f000(ecx_12)
                int32_t temp7_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp7_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
