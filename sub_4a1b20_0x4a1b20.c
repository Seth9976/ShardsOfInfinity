// 函数名称: sub_4a1b20
// 虚拟地址: 0x4a1b20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_4a1b20(int32_t arg1, int32_t arg2, char** arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543c41
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_2c = arg3
    int32_t var_40 = arg2
    int32_t var_8_1 = 0
    int32_t var_28 = 0
    sub_44f980(arg3, "samplerFn_layer%d")
    int32_t var_8_2 = 0
    int32_t var_28_1 = 1
    char* var_20
    sub_4a1600(arg4 + 0x28, arg2, &var_20, arg4 + 0x28, arg5)
    int32_t var_8_3 = 1
    int32_t esi_1 = 0
    int32_t ecx_1 = *(arg5 + 0x15c)
    
    if (ecx_1 s<= 0)
    label_4a1bbc:
        esi_1 = 0xffffffff
    else
        void* eax_6 = arg5 + 0x14c
        
        while (*eax_6 != *(arg4 + 0xc))
            esi_1 += 1
            eax_6 += 4
            
            if (esi_1 s>= ecx_1)
                goto label_4a1bbc
    
    char* var_1c
    sub_44f240(&var_1c, "texDiffuse")
    var_8_3.b = 2
    char* const edi_1 = &data_5559b1
    
    if (esi_1 s> 0)
        int32_t var_40_1 = esi_1
        var_8_3.b = 3
        char* ecx_3 = &data_5559b1
        char* var_24
        char* eax_8 = *sub_44f980(&var_24, &data_5828f8)
        
        if (eax_8 != 0)
            ecx_3 = eax_8
        
        sub_44f620(&var_1c, ecx_3)
        var_8_3.b = 4
        
        if (data_cdf414 != 0)
            char* eax_9 = var_24
            
            if (eax_9 != 0 && *eax_9 != 0)
                char* eax_10 = sub_44f000(&var_24)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
        
        var_8_3.b = 2
    
    char* var_18
    sub_4a1690(&var_18, arg4)
    var_8_3.b = 5
    char* const ecx_8 = &data_5559b1
    char* esi_2 = var_1c
    char* const edx_5 = &data_5559b1
    char* eax_11 = var_18
    
    if (esi_2 != 0)
        edi_1 = esi_2
    
    char* const var_40_3 = edi_1
    
    if (eax_11 != 0)
        edx_5 = eax_11
    
    char* const esi_3 = &data_5559b1
    char* eax_12 = var_20
    char* const var_44 = edx_5
    
    if (eax_12 != 0)
        ecx_8 = eax_12
    
    char* eax_13 = *arg3
    char* const var_48_2 = ecx_8
    
    if (eax_13 != 0)
        esi_3 = eax_13
    
    char* const var_4c_1 = esi_3
    char* const var_14
    sub_44f980(&var_14, "float4 %s(float2 arg_uv)\n{\n%s%s\treturn tex2D(%s, uv);\n}\n")
    var_8_3.b = 6
    int32_t eax_14 = *(arg5 + 0x104)
    void* edi_2 = arg5 + (eax_14 << 3)
    *(arg5 + 0x104) = eax_14 + 1
    sub_44f510(edi_2 + 4, arg3)
    sub_44f510(edi_2 + 8, &var_14)
    var_8_3.b = 7
    char* esi_4 = var_1c
    
    if (data_cdf414 != 0)
        char* eax_16 = var_14
        
        if (eax_16 != 0 && *eax_16 != 0)
            char* eax_17 = sub_44f000(&var_14)
            int32_t temp1_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    var_8_3.b = 8
    
    if (data_cdf414 != 0)
        char* eax_18 = var_18
        
        if (eax_18 != 0 && *eax_18 != 0)
            char* eax_19 = sub_44f000(&var_18)
            int32_t temp2_1 = *(eax_19 + 4)
            *(eax_19 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
                var_18 = &data_5559b1
    
    var_8_3.b = 9
    
    if (data_cdf414 != 0 && esi_4 != 0 && *esi_4 != 0)
        char* eax_20 = sub_44f000(&var_1c)
        int32_t temp3_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xa
    
    if (data_cdf414 != 0)
        char* eax_21 = var_20
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_44f000(&var_20)
            int32_t temp4_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
