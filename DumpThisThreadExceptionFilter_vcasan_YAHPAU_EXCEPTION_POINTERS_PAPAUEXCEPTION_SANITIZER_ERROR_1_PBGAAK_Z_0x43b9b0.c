// 函数名称: ?DumpThisThreadExceptionFilter@__vcasan@@YAHPAU_EXCEPTION_POINTERS@@PAPAUEXCEPTION_SANITIZER_ERROR@1@PBGAAK@Z
// 虚拟地址: 0x43b9b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcall?DumpThisThreadExceptionFilter@__vcasan@@YAHPAU_EXCEPTION_POINTERS@@PAPAUEXCEPTION_SANITIZER_ERROR@1@PBGAAK@Z(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541f90
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_433c60(arg2)
    int32_t ecx_1 = *(eax_3 + 8)
    int32_t ecx_2 = *(eax_3 + 0xc)
    int32_t ecx_3 = *(eax_3 + 0x10)
    int32_t eax_4 = sub_4388e0(arg2, 0xa)
    int32_t* result_2 = data_5c2e30
    int32_t* result_1 = result_2
    
    if (result_2[1] == arg2)
    label_43ba51:
        int32_t var_48_1 = 0xffffffff
        sub_469930(arg1)
    else if (data_5bcb00 == 0xffffffff && *result_2 == 6)
        int32_t i = 0
        
        if (result_2[0xcd] s> 0)
            do
                if (sub_437070(*(result_2[0xcc] + (i << 2)))[2] == arg2)
                    goto label_43ba51
                
                result_2 = result_1
                i += 1
            while (i s< result_2[0xcd])
    
    if (data_5bcaf8 != 0 && data_5bcafc == arg2)
        int32_t var_48_2 = 0xffffffff
        sub_469930(arg1)
    
    if (data_5bcaf0 != 0 && data_5bcaf4 == arg2)
        int32_t var_48_3 = 0xffffffff
        sub_469930(arg1)
    
    void* esi_1 = sub_41ad20() + 8
    void* eax_7 = sub_41af80(esi_1, arg2)
    int32_t var_1c
    int32_t* var_48_4 = &var_1c
    sub_4167e0(eax_7, esi_1, &result_1, eax_7)
    int32_t var_8_1 = 0
    sub_441db0(var_1c)
    int32_t var_50 = 0xffffffff
    sub_469930(arg1)
    sub_469cf0(&result_1, &data_5c313c, arg1, &result_1, 0xffffffff)
    int32_t var_5c = ecx_1
    char* const var_14
    sub_44f980(&var_14, &data_5828f8)
    var_8_1.b = 1
    sub_469cf0(&var_14, &data_5c3178, arg1, &var_14, 0xffffffff)
    var_8_1.b = 2
    
    if (data_cdf414 != 0)
        char* eax_11 = var_14
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_48_5 = ecx_2
    var_8_1.b = 0
    sub_44f980(&var_14, &data_5828f8)
    var_8_1.b = 3
    sub_469cf0(&var_14, &data_5c318c, arg1, &var_14, 0xffffffff)
    var_8_1.b = 4
    
    if (data_cdf414 != 0)
        char* const eax_14 = var_14
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_44f000(&var_14)
            int32_t temp1_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    var_8_1.b = 0
    int32_t eax_16 = sub_4388e0(arg2, 9)
    int32_t eax_17 = sub_4388e0(arg2, 8)
    int32_t var_48_6 = eax_16
    sub_44f980(&var_14, &data_5828f8)
    var_8_1.b = 5
    sub_469cf0(&var_14, &data_5c3268, arg1, &var_14, 0xffffffff)
    var_8_1.b = 6
    
    if (data_cdf414 != 0)
        char* const eax_19 = var_14
        
        if (eax_19 != 0 && *eax_19 != 0)
            char* eax_20 = sub_44f000(&var_14)
            int32_t temp3_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_48_7 = eax_17
    var_8_1.b = 0
    sub_44f980(&var_14, &data_5828f8)
    var_8_1.b = 7
    sub_469cf0(&var_14, &data_5c327c, arg1, &var_14, 0xffffffff)
    var_8_1.b = 8
    
    if (data_cdf414 != 0)
        char* const eax_22 = var_14
        
        if (eax_22 != 0 && *eax_22 != 0)
            char* eax_23 = sub_44f000(&var_14)
            int32_t temp4_1 = *(eax_23 + 4)
            *(eax_23 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    var_8_1.b = 0
    *(eax_7 + 0x14) == 1 && sub_41ac90(*(eax_7 + 0x18)) == 1
    int32_t var_48_8 = 0xffffffff
    sub_469930(arg1)
    
    if (ecx_3 != 0)
        int32_t var_48_11 = ecx_3
        *((arg2 << 2) + &data_e4732c) = ecx_3
        sub_44f980(&var_14, &data_5828f8)
        var_8_1.b = 0xb
        sub_469cf0(&var_14, &data_5c31a0, arg1, &var_14, 0xffffffff)
        var_8_1.b = 0xc
        
        if (data_cdf414 != 0)
            char* const eax_31 = var_14
            
            if (eax_31 != 0 && *eax_31 != 0)
                char* eax_32 = sub_44f000(&var_14)
                int32_t temp5_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        var_8_1.b = 0
    else
        int32_t var_48_9 = *((arg2 << 2) + &data_e4732c)
        sub_44f980(&var_14, &data_5828f8)
        var_8_1.b = 9
        sub_469cf0(&var_14, &data_5c31a0, arg1, &var_14, 0xffffffff)
        var_8_1.b = 0xa
        
        if (data_cdf414 != 0)
            char* const eax_28 = var_14
            
            if (eax_28 != 0 && *eax_28 != 0)
                char* eax_29 = sub_44f000(&var_14)
                int32_t temp6_1 = *(eax_29 + 4)
                *(eax_29 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_48_10 = 0xffffffff
        var_8_1.b = 0
        sub_469930(arg1)
    
    if (eax_4 != 0)
        int32_t var_48_12 = 0xffffffff
        sub_469930(arg1)
    
    int32_t eax_33 = 0
    
    if (eax_4 - 1 s>= 0)
        eax_33 = eax_4 - 1
    
    int32_t var_48_13 = eax_33
    sub_44f980(&var_14, &data_5828f8)
    var_8_1.b = 0xd
    sub_469cf0(&var_14, &data_5c31b4, arg1, &var_14, 0xffffffff)
    var_8_1.b = 0xe
    
    if (data_cdf414 != 0)
        char* const eax_35 = var_14
        
        if (eax_35 != 0 && *eax_35 != 0)
            char* eax_36 = sub_44f000(&var_14)
            int32_t temp7_1 = *(eax_36 + 4)
            *(eax_36 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_45d050(eax_36, *(eax_36 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    var_8_1.b = 0
    
    if (*(eax_3 + 0x49) != 0)
        int32_t var_48_14 = 0xffffffff
        sub_469930(arg1)
    
    void* eax_38 = data_65aabc
    
    if (eax_38 == 0)
        sub_44e4d0(eax_38, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* esi_4 = data_5c2e30
    char* result = *(eax_38 + 0x648)
    
    if (esi_4[1] == result && *esi_4 == 7)
        int32_t edx_26 = esi_4[0xcd]
        int32_t ecx_45 = 0
        
        if (edx_26 s> 0)
            result = esi_4[0xcc]
            
            do
                if (*result == arg2)
                    int32_t var_48_15 = 0xffffffff
                    result = sub_469930(arg1)
                    break
                
                ecx_45 += 1
                result = &result[4]
            while (ecx_45 s< edx_26)
    
    int32_t var_8_2 = 0xf
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp8_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp8_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
