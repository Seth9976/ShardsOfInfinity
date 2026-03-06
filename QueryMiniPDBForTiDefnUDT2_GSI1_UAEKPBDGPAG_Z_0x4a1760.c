// 函数名称: ?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z
// 虚拟地址: 0x4a1760
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z(int32_t arg1, int32_t arg2, char** arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543bda
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_44 = arg2
    int32_t var_8_1 = 0
    int32_t var_20 = 0
    sub_44f980(arg3, "samplerFn_layer%d")
    int32_t var_8_2 = 0
    char* arg_4
    char* edi = arg_4
    int32_t var_20_1 = 1
    char* var_28
    sub_4a1600(&edi[0x28], arg2, &var_28, &edi[0x28], arg4)
    int32_t var_8_3 = 1
    int32_t esi_1 = 0
    int32_t ecx_1 = *(arg4 + 0x15c)
    
    if (ecx_1 s<= 0)
    label_4a17fc:
        esi_1 = 0xffffffff
    else
        void* eax_5 = arg4 + 0x14c
        
        while (*eax_5 != *(edi + 0xc))
            esi_1 += 1
            eax_5 += 4
            
            if (esi_1 s>= ecx_1)
                goto label_4a17fc
    
    sub_44f240(&arg_4, "texDiffuse")
    var_8_3.b = 2
    char* const ebx_1 = &data_5559b1
    char* const var_1c
    
    if (esi_1 s> 0)
        int32_t var_44_1 = esi_1
        var_8_3.b = 3
        char* ecx_3 = &data_5559b1
        char* eax_7 = *sub_44f980(&var_1c, &data_5828f8)
        
        if (eax_7 != 0)
            ecx_3 = eax_7
        
        sub_44f620(&arg_4, ecx_3)
        var_8_3.b = 4
        
        if (data_cdf414 != 0)
            char* eax_8 = var_1c
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_44f000(&var_1c)
                int32_t temp0_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                    var_1c = &data_5559b1
        
        var_8_3.b = 2
    
    char* var_18
    char** eax_10 = sub_4a1690(&var_18, edi)
    char* const var_24 = &data_5559b1
    var_8_3.b = 6
    
    if (*(edi + 0x14) != 0)
        sub_44e4d0(eax_10, &data_5559b1, "Halt", "c:\ax2017\engine\materialfndef.cpp", 0x2f4, 
            "EmitTextureFn")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* esi_2 = arg_4
    char* var_30 = esi_2
    
    if (esi_2 != 0 && *esi_2 != 0)
        char* eax_11 = sub_44f000(&var_30)
        *(eax_11 + 4) += 1
    
    var_8_3.b = 8
    sub_44f240(&var_1c, 
        "\tfloat2 duv = uv - float2(.5, .5);\n\tfloat dist = duv.x*duv.x + duv.y*duv.y;\n\tfloat alpha = 1.0 "
    "- smoothstep(0.24, 0.25, dist);\n\treturn float4(1.0, 1.0, 1.0, alpha);\n")
    int32_t var_20_2 = 3
    var_8_3.b = 9
    
    if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
        char* eax_12 = sub_44f000(&var_30)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
    
    var_8_3.b = 7
    sub_44f510(&var_24, &var_1c)
    int32_t var_20_3 = 1
    var_8_3.b = 0xa
    
    if (data_cdf414 != 0)
        char* const eax_13 = var_1c
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_44f000(&var_1c)
            int32_t temp2_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
    
    var_8_3.b = 6
    char* const ecx_15 = &data_5559b1
    char* const edi_1 = var_24
    char* const edx_9 = &data_5559b1
    char* eax_15 = var_18
    char* const esi_3 = &data_5559b1
    
    if (edi_1 != 0)
        ebx_1 = edi_1
    
    char* const var_44_4 = ebx_1
    
    if (eax_15 != 0)
        edx_9 = eax_15
    
    char* eax_16 = var_28
    char* const var_48 = edx_9
    
    if (eax_16 != 0)
        ecx_15 = eax_16
    
    char* const var_4c_2 = ecx_15
    char* eax_18 = *arg3
    
    if (eax_18 != 0)
        esi_3 = eax_18
    
    char* const var_50_1 = esi_3
    char* const var_14
    sub_44f980(&var_14, "float4 %s(float2 arg_uv)\n{\n%s\n%s\n%s}\n")
    var_8_3.b = 0xb
    int32_t eax_19 = *(arg4 + 0x104)
    void* ebx_2 = arg4 + (eax_19 << 3)
    *(arg4 + 0x104) = eax_19 + 1
    sub_44f510(ebx_2 + 4, arg3)
    sub_44f510(ebx_2 + 8, &var_14)
    var_8_3.b = 0xc
    char* esi_4 = arg_4
    
    if (data_cdf414 != 0)
        char* eax_21 = var_14
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_44f000(&var_14)
            int32_t temp3_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    var_8_3.b = 0xd
    
    if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
        char* eax_23 = sub_44f000(&var_24)
        int32_t temp4_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
    
    var_8_3.b = 0xe
    
    if (data_cdf414 != 0)
        char* eax_24 = var_18
        
        if (eax_24 != 0 && *eax_24 != 0)
            char* eax_25 = sub_44f000(&var_18)
            int32_t temp5_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
                var_18 = &data_5559b1
    
    var_8_3.b = 0xf
    
    if (data_cdf414 != 0 && esi_4 != 0 && *esi_4 != 0)
        char* eax_26 = sub_44f000(&arg_4)
        int32_t temp6_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp6_1 == 1)
            sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0x10
    
    if (data_cdf414 != 0)
        char* eax_27 = var_28
        
        if (eax_27 != 0 && *eax_27 != 0)
            char* eax_28 = sub_44f000(&var_28)
            int32_t temp7_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
