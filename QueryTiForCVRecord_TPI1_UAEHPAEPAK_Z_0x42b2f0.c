// 函数名称: ?QueryTiForCVRecord@TPI1@@UAEHPAEPAK@Z
// 虚拟地址: 0x42b2f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcall?QueryTiForCVRecord@TPI1@@UAEHPAEPAK@Z(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$_Mpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_2c
    char* edx
    sub_42a970(&var_2c, edx)
    int32_t var_8_1 = 0
    int32_t var_24 = var_2c
    char* result_1
    char* result_3 = result_1
    char* result_2 = result_3
    
    if (result_3 != 0 && *result_3 != 0)
        char* eax_4 = sub_44f000(&result_2)
        *(eax_4 + 4) += 1
    
    void* esi = data_dfc55c
    var_8_1.b = 1
    void* eax_5 = *(esi + 0xc)
    
    if (eax_5 == 0)
        sub_44e4d0(eax_5, &data_5559b1, "pDefMap->definitionSize != 0", 
            "c:\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_40 = 0
    int32_t var_3c = 0
    char var_34 = 1
    int32_t var_30 = 0
    sub_483010(&var_40, esi, arg1 + 0x110, 0, &var_40)
    char* eax_7 = sub_45cd70(eax_5)
    sub_483280(eax_7, esi, arg1 + 0x110, eax_7, eax_5)
    int32_t var_68 = 1
    int32_t* var_18
    char* result
    void* ebx
    bool cond:0_1
    
    if (sub_48c610(&var_18) != 0)
        int32_t* esi_1 = var_18
        
        if (_fseek(esi_1, arg1 + 0x110, 0) == 0)
            int32_t* var_58_1 = esi_1
            ebx.b = _fwrite(eax_7, eax_5, 1) == 1
        else
            ebx.b = 0
        
        _fclose(esi_1)
        
        if (eax_7 != 0)
            _aligned_free_base(eax_7)
        
        if (ebx.b != 0)
            var_8_1.b = 4
            
            if (data_cdf414 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_2)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(result, *(result + 0xc) + 0x10)
            
            ebx.b = 1
        else
            var_8_1.b = 3
            
            if (data_cdf414 == 0)
                ebx.b = 0
            else
                result = result_2
                
                if (result != 0)
                    cond:0_1 = *result == ebx.b
                    goto label_42b3eb
                
                ebx.b = 0
    else
        char* result_4 = result_2
        char* const result_5 = &data_5559b1
        
        if (result_4 != 0)
            result_5 = result_4
        
        char* const result_6 = result_5
        sub_44e260("failed to open %d")
        var_8_1.b = 2
        
        if (data_cdf414 == 0 || result_4 == 0)
            ebx.b = 0
        else
            cond:0_1 = *result_4 == 0
        label_42b3eb:
            
            if (cond:0_1)
                ebx.b = 0
            else
                result = sub_44f000(&result_2)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(result, *(result + 0xc) + 0x10)
                
                ebx.b = 0
    int32_t var_8_2 = 5
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
