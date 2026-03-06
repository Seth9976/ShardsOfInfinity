// 函数名称: sub_42aaf0
// 虚拟地址: 0x42aaf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_42aaf0(void** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541ac1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b74 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_45cfa0(0xb30)
    eax_3[3] += 1
    uint32_t (* esi)[0x4]
    
    if (eax_3[4] != 0xffffffff)
        esi = *eax_3
        
        if (esi == 0)
            sub_45ce30(eax_3)
            esi = *eax_3
        
        *eax_3 = *esi
    else
        esi = sub_45cd70(0xb30)
    
    char* var_b78 = 0xb30
    _memset(esi, 0, var_b78)
    var_b78 = sub_429de0
    var_b78 = `eh vector constructor iterator'(esi, 0x2c8, 4, sub_42a550)
    *arg1 = esi
    sub_44f240(&var_b78, "profiles.xml")
    void var_b64
    sub_48c750(&var_b64, 0)
    int32_t var_8_1 = 0
    char** edi_1 = data_dfc53c
    int32_t* eax_6 = sub_494ad0(edi_1, &var_b64)
    int32_t* var_b54_1
    int32_t* ebx_1
    
    if (eax_6 != 0)
        ebx_1 = sub_492a80(eax_6, edi_1)
        var_b54_1 = ebx_1
        sub_491590(eax_6)
    
    if (eax_6 == 0 || ebx_1 == 0)
        int32_t* eax_8 = sub_48bb90(data_dfc53c)
        ebx_1 = eax_8
        var_b54_1 = eax_8
    
    void var_b44
    void* result_4 = sub_42a220(&var_b44, ebx_1)
    void* result_2 = result_4
    var_8_1.b = 1
    int32_t i_1 = 4
    void* eax_10 = *arg1
    void* esi_2 = eax_10
    int32_t i
    
    do
        var_b78 = result_4 - eax_10 + esi_2
        sub_42ae00(esi_2, var_b78)
        esi_2 += 0x2c8
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* result_5 = result_2
    *(eax_10 + 0xb20) = *(result_5 + 0xb20)
    *(eax_10 + 0xb24) = *(result_5 + 0xb24)
    *(eax_10 + 0xb28) = *(result_5 + 0xb28)
    var_b78 = sub_429de0
    var_8_1.b = 2
    `eh vector vbase constructor iterator'(&var_b44, 0x2c8, 4, var_b78)
    var_8_1.b = 0
    data_dfc53c
    sub_48b5b0(var_b54_1)
    void* esi_3 = data_65ac38
    int32_t ecx_13 = 0
    int32_t edx_4 = *(esi_3 + 0xb20)
    
    if (edx_4 s> 0)
        void* eax_16 = esi_3
        
        while (true)
            if (*(eax_16 + 0x23c) == *(*arg1 + 0xb24))
                if (eax_16 != 0)
                    goto label_42acf8
                
                goto label_42acd8
            
            ecx_13 += 1
            eax_16 += 0x2c8
            
            if (ecx_13 s>= edx_4)
            label_42acd8:
                
                if (edx_4 s<= 0)
                    goto label_42ace0
                
                if (esi_3 != 0)
                    break
                
                goto label_42ace0
        
        goto label_42acf8
    
    label_42ace0:
    sub_42b140()
    sub_42a740(*arg1)
    esi_3 = data_65ac38
    label_42acf8:
    char* result = sub_42aaa0(*(esi_3 + 0xb24))
    char* result_3 = result
    char* edx_5 = *(result_3 + 0x240)
    
    if (edx_5 != 0)
        void var_b4c
        sub_42a890(&var_b4c, edx_5)
        var_b78 = nullptr
        var_8_1.b = 3
        char* var_b5c
        result = sub_48c610(&var_b5c)
        
        if (result.b != 0)
            var_b78 = var_b5c
            result = _fclose(var_b78)
            var_8_1.b = 5
        else
            *(result_3 + 0x240) = 0
            var_8_1.b = 4
        
        if (data_cdf414 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_2)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_2 = &data_5559b1
    
    int32_t var_8_2 = 6
    
    if (data_cdf414 != 0)
        char* result_1
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
