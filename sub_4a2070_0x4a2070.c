// 函数名称: sub_4a2070
// 虚拟地址: 0x4a2070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4a2070(int32_t arg1, int32_t* arg2, char* arg3, int32_t* arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543cf9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_20 = arg3
    int32_t var_24 = 0
    int32_t edx = *arg2
    char* const var_18 = &data_5559b1
    int32_t* edi = &arg3[edx * 0x48]
    int32_t var_8_1 = 0
    int32_t eax_4 = *edi
    
    if (eax_4 u> 3)
        sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\engine\materialfndef.cpp", 0x3a9, 
            "EmitItemFunction")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* const ebx = &data_5559b1
    int32_t* var_44
    char* const var_1c
    char* var_14
    
    switch (eax_4)
        case 0
            var_8_1.b = 9
            sub_44f510(&var_18, sub_4a1b20(eax_4, edx, &var_1c, edi, arg4))
            var_8_1.b = 0xa
        label_4a22d0:
            
            if (data_cdf414 != 0)
                char* eax_23 = var_1c
                
                if (eax_23 != 0 && *eax_23 != 0)
                    char* eax_24 = sub_44f000(&var_1c)
                    int32_t temp2_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(eax_24, *(eax_24 + 0xc) + 0x10)
                        var_1c = &data_5559b1
        case 1
            int32_t var_40_2 = edx
            var_8_1.b = 5
            var_44 = "samplerFn_layer%d"
            var_20 = sub_44f980(&var_14, "samplerFn_layer%d")
            int32_t var_24_1 = 1
            int32_t edx_6 = arg4[0xad]
            int32_t var_4c_2 = edx_6
            arg4[0xad] = edx_6 + 1
            char* ecx_8 = &data_5559b1
            arg4[edx * 3 + 0x5a] = edx_6
            arg4[edx_6 + 0xa9] = edi[4]
            char* eax_16 = var_14
            
            if (eax_16 != 0)
                ecx_8 = eax_16
            
            char* var_50_2 = ecx_8
            sub_44f980(&var_1c, "float4 %s(float2 arg_uv)\n{\n\treturn gMaterialColor%d;\n}\n")
            var_8_1.b = 6
            int32_t eax_17 = arg4[0x41]
            void* esi_2 = &arg4[eax_17 * 2]
            arg4[0x41] = eax_17 + 1
            sub_44f510(esi_2 + 4, &var_14)
            sub_44f510(esi_2 + 8, &var_1c)
            var_8_1.b = 7
            
            if (data_cdf414 != 0)
                char* const eax_19 = var_1c
                
                if (eax_19 != 0 && *eax_19 != 0)
                    char* eax_20 = sub_44f000(&var_1c)
                    int32_t temp1_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                        var_1c = &data_5559b1
            
            var_8_1.b = 5
            sub_44f510(&var_18, var_20)
            var_8_1.b = 8
            goto label_4a215b
        case 2
            int32_t var_40 = edx
            var_44 = "group%d"
            sub_44f980(&var_14, "group%d")
            char* edx_1 = &data_5559b1
            int32_t* var_4c_1 = arg4
            var_8_1.b = 1
            char* eax_5 = var_14
            
            if (eax_5 != 0)
                edx_1 = eax_5
            
            var_8_1.b = 2
            sub_44f510(&var_18, sub_4a25c0(eax_5, edx_1, &var_1c, arg2, var_20, edi[2]))
            var_8_1.b = 3
            
            if (data_cdf414 != 0)
                char* const eax_7 = var_1c
                
                if (eax_7 != 0 && *eax_7 != 0)
                    char* eax_8 = sub_44f000(&var_1c)
                    int32_t temp0_1 = *(eax_8 + 4)
                    *(eax_8 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                        var_1c = &data_5559b1
            
            *arg2 += edi[2]
            var_8_1.b = 4
        label_4a215b:
            
            if (data_cdf414 != 0)
                char* eax_10 = var_14
                
                if (eax_10 != 0 && *eax_10 != 0)
                    char* eax_11 = sub_44f000(&var_14)
                    int32_t temp3_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                        var_14 = &data_5559b1
        case 3
            int32_t* var_40_8 = arg4
            var_8_1.b = 0xb
            sub_44f510(&var_18, GSI1::QueryMiniPDBForTiDefnUDT2(eax_4, edx, &var_1c, edi))
            var_8_1.b = 0xc
            goto label_4a22d0
    
    var_8_1.b = 0
    char* const esi_3
    
    if (arg5 == 0)
        var_44.q = _mm_cvtps_pd(edi[9])
        sub_44f980(&var_1c, &data_58af08)
        int32_t var_24_2 = 2
        var_8_1.b = 0xf
        int32_t eax_28 = edi[8]
        
        if (eax_28 u> 6)
            sub_44e4d0(eax_28, &data_5559b1, "Halt", "c:\ax2017\engine\materialfndef.cpp", 0x380, 
                "EmitBlendFn")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        char const* const edx_14
        
        switch (eax_28)
            case 0
                edx_14 = "BlendAlpha"
            case 1
                edx_14 = "BlendMultiply"
            case 2
                edx_14 = "BlendAdd"
            case 3
                edx_14 = "BlendOverlay"
            case 4
                edx_14 = "BlendMask"
            case 5
                edx_14 = "BlendColor"
            case 6
                edx_14 = "BlendColorHSL"
        
        sub_44f240(&var_14, edx_14)
        var_8_1.b = 0x10
        char* const ecx_27 = &data_5559b1
        char* const eax_29 = var_1c
        esi_3 = var_18
        char* edi_1 = var_14
        
        if (eax_29 != 0)
            ecx_27 = eax_29
        
        char* const eax_30 = &data_5559b1
        char* const var_40_11 = ecx_27
        
        if (esi_3 != 0)
            eax_30 = esi_3
        
        char* const var_44_1 = eax_30
        
        if (edi_1 != 0)
            ebx = edi_1
        
        char* const var_48_4 = ebx
        var_8_1.b = 0x11
        sub_4a1db0(arg4, sub_44f980(&var_20, "\tretval = %s(retval, %s(uv), %s);\n"))
        var_8_1.b = 0x12
        
        if (data_cdf414 != 0)
            char* eax_32 = var_20
            
            if (eax_32 != 0 && *eax_32 != 0)
                char* eax_33 = sub_44f000(&var_20)
                int32_t temp6_1 = *(eax_33 + 4)
                *(eax_33 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
                    var_20 = &data_5559b1
        
        var_8_1.b = 0x13
        
        if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
            char* eax_34 = sub_44f000(&var_14)
            int32_t temp7_1 = *(eax_34 + 4)
            *(eax_34 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_45d050(eax_34, *(eax_34 + 0xc) + 0x10)
        
        var_8_1.b = 0x14
        
        if (data_cdf414 != 0)
            char* const eax_35 = var_1c
            
            if (eax_35 != 0 && *eax_35 != 0)
                char* eax_36 = sub_44f000(&var_1c)
                int32_t temp8_1 = *(eax_36 + 4)
                *(eax_36 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_45d050(eax_36, *(eax_36 + 0xc) + 0x10)
                    var_1c = &data_5559b1
    else
        esi_3 = var_18
        
        if (esi_3 != 0)
            ebx = esi_3
        
        char* const var_40_10 = ebx
        var_8_1.b = 0xd
        sub_4a1db0(arg4, sub_44f980(&var_20, "\tvec4 retval = %s(uv);\n"))
        var_8_1.b = 0xe
        
        if (data_cdf414 != 0)
            char* eax_26 = var_20
            
            if (eax_26 != 0 && *eax_26 != 0)
                char* eax_27 = sub_44f000(&var_20)
                int32_t temp4_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_27, *(eax_27 + 0xc) + 0x10)
    
    char* result = arg2
    *result += 1
    int32_t var_8_2 = 0x15
    
    if (data_cdf414 != 0 && esi_3 != 0 && *esi_3 != 0)
        result = sub_44f000(&var_18)
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
