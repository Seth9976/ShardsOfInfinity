// 函数名称: sub_4bdc10
// 虚拟地址: 0x4bdc10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4bdc10(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544ce1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    int32_t var_24
    sub_4bda40(&ExceptionList, arg2, &var_24, sub_4bdbe0)
    int32_t var_8_1 = 1
    int32_t esi = var_24
    char* var_1c
    char* eax_5
    
    if (esi == 2 || esi == 3 || esi == 4)
        uint32_t eax_7 = sub_4bd480(arg2)
        
        if (esi != 4)
            sub_44e4d0(eax_7, &data_5559b1, "result.result == UIPARSERESULT_SUCCESS_STRING", 
                "c:\ax2017\engine\ui2expr.cpp", 0x125, "parse_hex_literal")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        char* eax_8 = var_1c
        char* ecx_3 = &data_5559b1
        
        if (eax_8 != 0)
            ecx_3 = eax_8
        
        int32_t eax_9 = __atoi64(ecx_3)
        int32_t* eax_10 = sub_4bd420(*arg2)
        int32_t var_14_2 = 1
        *eax_10 = 2
        eax_10[1] = eax_9
        arg1[2] = &data_5559b1
        *arg1 = 3
        arg1[1] = eax_10
        int32_t var_8_3 = 3
        
        if (data_cdf414 != 0)
            eax_5 = var_1c
        label_4bdd12:
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_11 = sub_44f000(&var_1c)
                int32_t temp0_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
    else
        int32_t var_20
        arg1[1] = var_20
        eax_5 = var_1c
        *arg1 = esi
        arg1[2] = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_44f000(&arg1[2])
            *(eax_6 + 4) += 1
            eax_5 = var_1c
        
        int32_t var_14_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cdf414 != 0)
            goto label_4bdd12
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
