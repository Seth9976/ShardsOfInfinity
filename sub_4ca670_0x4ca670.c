// 函数名称: sub_4ca670
// 虚拟地址: 0x4ca670
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4ca670(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545337
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_194 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* param0 = 0x104
    void var_11c
    _memset(&var_11c, 0, param0)
    char* const esi = &data_5559b1
    char* const var_128 = &data_5559b1
    param0 = 0x58
    int32_t var_8_1 = 0
    int32_t var_184
    param0 = _memset(&var_184, 0, param0)
    void** ecx_1 = &param0
    char* var_124
    char* var_120
    
    if (arg1 == 0)
        void* param0_2 = *(data_ce26e4 + 0x20)
        param0 = param0_2
        
        if (param0_2 != 0 && *param0_2 != 0)
            char* eax_8 = sub_44f000(ecx_1)
            *(eax_8 + 4) += 1
        
        sub_4a9d10(&var_120)
        var_8_1.b = 2
        char* eax_9 = var_120
        char* edx_4 = &data_5559b1
        
        if (eax_9 != 0)
            edx_4 = eax_9
        
        param0 = sub_4a8b60(&var_124, edx_4)
        var_8_1.b = 3
        sub_44f510(&var_128, param0)
        var_8_1.b = 4
        
        if (data_cdf414 != 0)
            char* eax_11 = var_124
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_44f000(&var_124)
                int32_t temp0_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
        
        esi = var_128
        char* const eax_13 = &data_5559b1
        
        if (esi != 0)
            eax_13 = esi
        
        char* const var_158_1 = eax_13
        var_8_1.b = 5
        
        if (data_cdf414 != 0)
            char* eax_14 = var_120
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_44f000(&var_120)
                int32_t temp1_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
    else
        var_124 = *(arg1 + 4)
        void* param0_1 = *(arg1 + 0x20)
        param0 = param0_1
        
        if (param0_1 != 0 && *param0_1 != 0)
            char* eax_4 = sub_44f000(ecx_1)
            *(eax_4 + 4) += 1
        
        sub_4a9620(&var_120, var_124)
        char* eax_5 = var_120
        char* const edx_1 = &data_5559b1
        
        if (eax_5 != 0)
            edx_1 = eax_5
        
        int32_t edi_1 = &var_11c - edx_1
        char i
        
        do
            i = *edx_1
            edx_1 = &edx_1[1]
            edx_1[edi_1 - 1] = i
        while (i != 0)
        
        var_8_1.b = 1
        
        if (data_cdf414 != 0 && eax_5 != 0 && *eax_5 != i)
            char* eax_6 = sub_44f000(&var_120)
            int32_t temp2_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
    
    var_8_1.b = 0
    int32_t var_180 = data_ce1c8c
    var_184 = 0x58
    void* var_168 = &var_11c
    int32_t var_164 = 0x104
    char const* const var_178 = "Image (*.jpg, *.png)"
    int32_t var_16c = 0
    int32_t var_160 = 0
    int32_t var_15c = 0
    char const* const var_154 = "Pick Image File"
    int32_t var_150 = 0x2001808
    
    if (arg2 == 8 || arg2 == 9)
        char const* const var_178_4 = "Structure (*.fbx)"
    else if (arg2 == 0xb)
        char const* const var_178_1 = "Material (*.materialFn.xml)"
    else if (arg2 == 0xa)
        char const* const var_178_2 = "Material (*.material.xml)"
    else if (arg2 == 0x4c)
        char const* const var_178_3 = "Particle (*.particle)"
    
    int32_t* result = nullptr
    param0 = &var_184
    
    if (GetOpenFileNameA(param0) != 0)
        sub_44f240(&var_124, &var_11c)
        var_8_1.b = 6
        char* edx_10 = &data_5559b1
        char* edi_2 = var_124
        
        if (edi_2 != 0)
            edx_10 = edi_2
        
        sub_4a8d30(&var_120, edx_10)
        var_8_1.b = 7
        char* ecx_14 = &data_5559b1
        char* eax_18 = var_120
        
        if (eax_18 != 0)
            ecx_14 = eax_18
        
        result = sub_4d26e0(ecx_14)
        var_8_1.b = 8
        
        if (data_cdf414 != 0)
            char* ecx_15 = var_120
            
            if (ecx_15 != 0 && *ecx_15 != 0)
                char* eax_20 = sub_44f000(&var_120)
                int32_t temp4_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                    var_120 = &data_5559b1
        
        var_8_1.b = 9
        
        if (data_cdf414 != 0 && edi_2 != 0 && *edi_2 != 0)
            char* eax_21 = sub_44f000(&var_124)
            int32_t temp5_1 = *(eax_21 + 4)
            *(eax_21 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xa
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        char* eax_22 = sub_44f000(&var_128)
        int32_t temp3_1 = *(eax_22 + 4)
        *(eax_22 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
