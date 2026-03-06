// 函数名称: sub_4a2890
// 虚拟地址: 0x4a2890
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4a2890(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543df8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_2c = arg1
    char* const var_20 = &data_5559b1
    int32_t var_8_1 = 0
    int32_t esi = *(arg1 + 0x104)
    int32_t esi_1 = esi - 1
    
    if (esi - 1 s>= 0)
        void* edi_2 = &arg1[8 + (esi_1 << 3)]
        int32_t temp1_1
        
        do
            char* eax_3 = *edi_2
            char* const ecx = &data_5559b1
            
            if (eax_3 != 0)
                ecx = eax_3
            
            sub_44f620(&var_20, ecx)
            temp1_1 = esi_1
            esi_1 -= 1
            edi_2 -= 8
        while (temp1_1 - 1 s>= 0)
    
    char* const var_14 = &data_5559b1
    int32_t i = 0
    var_8_1.b = 1
    char* var_5c
    char* var_24
    char* const var_1c
    
    if (*(arg1 + 0x15c) s> 0)
        do
            if (i != 0)
                int32_t i_4 = i
                var_5c = "uniform sampler texDiffuse%d;\n"
                var_8_1.b = 4
                char* ecx_6 = &data_5559b1
                char* eax_9 = *sub_44f980(&var_24, var_5c)
                
                if (eax_9 != 0)
                    ecx_6 = eax_9
                
                sub_44f620(&var_14, ecx_6)
                var_8_1.b = 5
                
                if (data_cdf414 != 0)
                    char* eax_10 = var_24
                    
                    if (eax_10 != 0 && *eax_10 != 0)
                        char* eax_11 = sub_44f000(&var_24)
                        int32_t temp2_1 = *(eax_11 + 4)
                        *(eax_11 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                            var_24 = &data_5559b1
            else
                int32_t i_3 = i
                var_5c = "uniform sampler texDiffuse;\n"
                var_8_1.b = 2
                char* ecx_2 = &data_5559b1
                char* eax_5 = *sub_44f980(&var_1c, var_5c)
                
                if (eax_5 != 0)
                    ecx_2 = eax_5
                
                sub_44f620(&var_14, ecx_2)
                var_8_1.b = 3
                
                if (data_cdf414 != i)
                    char* eax_6 = var_1c
                    
                    if (eax_6 != 0 && *eax_6 != 0)
                        char* eax_7 = sub_44f000(&var_1c)
                        int32_t temp3_1 = *(eax_7 + 4)
                        *(eax_7 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                            var_1c = &data_5559b1
            
            i += 1
            var_8_1.b = 1
        while (i s< *(arg1 + 0x15c))
    
    char* const edi_3 = &data_5559b1
    var_1c = &data_5559b1
    int32_t i_1 = 0
    var_8_1.b = 6
    
    if (*(arg1 + 0x2a0) s> 0)
        do
            int32_t i_5 = i_1
            var_5c = "uniform float3x3 gTexAnim%d;\n"
            var_8_1.b = 7
            char* ecx_10 = &data_5559b1
            char* eax_13 = *sub_44f980(&var_24, var_5c)
            
            if (eax_13 != 0)
                ecx_10 = eax_13
            
            sub_44f620(&var_1c, ecx_10)
            var_8_1.b = 8
            
            if (data_cdf414 != 0)
                char* eax_14 = var_24
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_44f000(&var_24)
                    int32_t temp4_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_24 = &data_5559b1
            
            i_1 += 1
            var_8_1.b = 6
        while (i_1 s< *(arg1 + 0x2a0))
        
        edi_3 = var_1c
    
    char* const esi_2 = &data_5559b1
    char* const var_30 = &data_5559b1
    var_8_1.b = 9
    int32_t i_2 = 0
    char* eax_16 = var_2c
    
    if (*(eax_16 + 0x2b4) s> 0)
        do
            int32_t i_6 = i_2
            var_5c = "uniform float4 gMaterialColor%d;\n"
            var_8_1.b = 0xa
            char* ecx_14 = &data_5559b1
            char* eax_18 = *sub_44f980(&var_24, var_5c)
            
            if (eax_18 != 0)
                ecx_14 = eax_18
            
            sub_44f620(&var_30, ecx_14)
            var_8_1.b = 0xb
            
            if (data_cdf414 != 0)
                char* eax_19 = var_24
                
                if (eax_19 != 0 && *eax_19 != 0)
                    char* eax_20 = sub_44f000(&var_24)
                    int32_t temp5_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                        var_24 = &data_5559b1
            
            i_2 += 1
            var_8_1.b = 9
        while (i_2 s< *(eax_16 + 0x2b4))
        
        esi_2 = var_30
        edi_3 = var_1c
    
    sub_44f240(&var_2c, 
        "%s\n%s\n\t\nuniform float4x4 gWorldViewProj;\nuniform float4 gOverlayColor;\nuniform float4 "
    "gMaterialColor;\n%s%s%s\nstruct VS_OUTPUT\n{\t\n\tfloat4 Position   SEM_")
    var_8_1.b = 0xc
    char* var_28
    sub_44f240(&var_28, 
        "#if !defined(HAVE_GLSLES)\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\t\t\t\t\t\n#define lowp\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define "
    "mediump\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define highp\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#endif\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#i")
    var_8_1.b = 0xd
    sub_44f240(&var_24, 
        "#ifndef SHADER_FUNCTIONS_INC\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define SHADER_FUNCTIONS_INC\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t")
    var_8_1.b = 0xe
    char* const ecx_21 = &data_5559b1
    char* const eax_21 = var_20
    char* ebx_1 = &data_5559b1
    char* const edx_9 = &data_5559b1
    
    if (eax_21 != 0)
        ecx_21 = eax_21
    
    char* const eax_22 = &data_5559b1
    char* const var_34 = ecx_21
    char* const var_58_6 = var_34
    
    if (esi_2 != 0)
        eax_22 = esi_2
    
    char* const ecx_22 = &data_5559b1
    var_5c = eax_22
    char* const eax_23 = &data_5559b1
    
    if (edi_3 != 0)
        eax_23 = edi_3
    
    int32_t* var_3c = eax_23
    char* const eax_24 = var_14
    int32_t* var_60_5 = var_3c
    
    if (eax_24 != 0)
        ecx_22 = eax_24
    
    char* eax_25 = var_24
    char* const var_64 = ecx_22
    
    if (eax_25 != 0)
        ebx_1 = eax_25
    
    char* const ecx_23 = &data_5559b1
    char* eax_26 = var_28
    char* var_68 = ebx_1
    
    if (eax_26 != 0)
        edx_9 = eax_26
    
    char* eax_27 = var_2c
    char* const var_6c = edx_9
    
    if (eax_27 != 0)
        ecx_23 = eax_27
    
    char* var_18
    sub_44f980(&var_18, ecx_23)
    var_8_1.b = 0xf
    char* const ebx_2 = &data_5559b1
    char* eax_28 = var_18
    
    if (eax_28 != 0)
        ebx_2 = eax_28
    
    int128_t* eax_29 = sub_48bbf0(data_e47054)
    int32_t* result = sub_48dc50(4, eax_29)
    char* const* var_58_7 = &var_34
    var_5c = 4
    int32_t** eax_30
    char* ecx_26
    eax_30, ecx_26 = sub_42ce10(&var_3c, result, var_5c)
    int32_t var_58_8 = 0
    var_5c = ecx_26
    var_8_1.b = 0x10
    
    if (ebx_2 == 0)
        sub_44e4d0(eax_30, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_31
    char ecx_28
    eax_31, ecx_28 = sub_44f240(&var_5c, ebx_2)
    sub_4e1eb0(eax_31, eax_29, ecx_28)
    int32_t* eax_32 = var_3c
    
    if (eax_32 != 0)
        eax_32[7] -= 1
    
    var_8_1.b = 0x11
    
    if (data_cdf414 != 0)
        char* eax_33 = var_18
        
        if (eax_33 != 0 && *eax_33 != 0)
            char* eax_34 = sub_44f000(&var_18)
            int32_t temp6_1 = *(eax_34 + 4)
            *(eax_34 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_45d050(eax_34, *(eax_34 + 0xc) + 0x10)
                var_18 = &data_5559b1
    
    var_8_1.b = 0x12
    
    if (data_cdf414 != 0)
        char* eax_35 = var_24
        
        if (eax_35 != 0 && *eax_35 != 0)
            char* eax_36 = sub_44f000(&var_24)
            int32_t temp7_1 = *(eax_36 + 4)
            *(eax_36 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_45d050(eax_36, *(eax_36 + 0xc) + 0x10)
    
    var_8_1.b = 0x13
    
    if (data_cdf414 != 0)
        char* eax_37 = var_28
        
        if (eax_37 != 0 && *eax_37 != 0)
            char* eax_38 = sub_44f000(&var_28)
            int32_t temp8_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
    
    var_8_1.b = 0x14
    
    if (data_cdf414 != 0)
        char* eax_39 = var_2c
        
        if (eax_39 != 0 && *eax_39 != 0)
            char* eax_40 = sub_44f000(&var_2c)
            int32_t temp9_1 = *(eax_40 + 4)
            *(eax_40 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
    
    var_8_1.b = 0x15
    
    if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
        char* eax_41 = sub_44f000(&var_30)
        int32_t temp10_1 = *(eax_41 + 4)
        *(eax_41 + 4) -= 1
        
        if (temp10_1 == 1)
            sub_45d050(eax_41, *(eax_41 + 0xc) + 0x10)
    
    var_8_1.b = 0x16
    
    if (data_cdf414 != 0 && edi_3 != 0 && *edi_3 != 0)
        char* eax_42 = sub_44f000(&var_1c)
        int32_t temp11_1 = *(eax_42 + 4)
        *(eax_42 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
    
    var_8_1.b = 0x17
    
    if (data_cdf414 != 0)
        char* const eax_43 = var_14
        
        if (eax_43 != 0 && *eax_43 != 0)
            char* eax_44 = sub_44f000(&var_14)
            int32_t temp12_1 = *(eax_44 + 4)
            *(eax_44 + 4) -= 1
            
            if (temp12_1 == 1)
                sub_45d050(eax_44, *(eax_44 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0x18
    
    if (data_cdf414 != 0)
        char* const eax_45 = var_20
        
        if (eax_45 != 0 && *eax_45 != 0)
            char* eax_46 = sub_44f000(&var_20)
            int32_t temp13_1 = *(eax_46 + 4)
            *(eax_46 + 4) -= 1
            
            if (temp13_1 == 1)
                sub_45d050(eax_46, *(eax_46 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
