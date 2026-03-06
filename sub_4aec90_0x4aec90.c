// 函数名称: sub_4aec90
// 虚拟地址: 0x4aec90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4aec90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544778
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_20 = arg2
    char* esi = *arg2
    int32_t* var_18 = *(arg1 + 0x48)
    char* var_14 = esi
    
    if (esi != 0 && *esi != 0)
        char* eax_5 = sub_44f000(&var_14)
        *(eax_5 + 4) += 1
    
    char* const edi = &data_5559b1
    int32_t var_8_1 = 0
    char* const var_1c = &data_5559b1
    var_8_1.b = 1
    char* const ecx_1 = &data_5559b1
    
    if (esi != 0)
        ecx_1 = esi
    
    char* eax_6 = sub_48c4a0(ecx_1, U":")
    
    if (eax_6 != 0)
        char* const edx = &data_5559b1
        char* ecx_3 = *var_20
        
        if (ecx_3 != 0)
            edx = ecx_3
        
        var_8_1.b = 2
        sub_44f510(&var_14, sub_44f320(&var_20, edx, eax_6 - edx))
        var_8_1.b = 3
        
        if (data_cdf414 != 0)
            int32_t* eax_8 = var_20
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_44f000(&var_20)
                int32_t temp0_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                    var_20 = &data_5559b1
        
        var_8_1.b = 1
        sub_44f590(&var_1c, &eax_6[1])
        esi = var_14
        edi = var_1c
    
    int32_t* eax_11 = var_18
    
    for (int32_t i = 0; i s< 0xc8; )
        char* ecx_11 = *eax_11
        
        if (ecx_11 == 0)
            int32_t ebx_2 = *(arg1 + 0x48)
            var_8_1.b = 4
            
            if (data_cdf414 != 0 && edi != 0 && *edi != 0)
                char* eax_18 = sub_44f000(&var_1c)
                int32_t temp1_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
            
            int32_t var_8_3 = 5
            
            if (data_cdf414 != 0 && esi != 0 && *esi != 0)
                char* eax_19 = sub_44f000(&var_14)
                int32_t temp2_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return ebx_2
        
        char* const eax_12 = &data_5559b1
        
        if (esi != 0)
            eax_12 = esi
        
        if (__stricmp(ecx_11, eax_12) == 0)
            var_8_1.b = 6
            
            if (data_cdf414 != 0 && edi != 0 && *edi != 0)
                char* eax_15 = sub_44f000(&var_1c)
                int32_t temp3_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
            
            int32_t var_8_2 = 7
            
            if (data_cdf414 != 0 && esi != 0 && *esi != 0)
                char* eax_16 = sub_44f000(&var_14)
                int32_t temp4_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return var_18
        
        i += 1
        eax_11 = &var_18[0x11]
        var_18 = eax_11
    
    sub_44e4d0(eax_11, &data_5559b1, "Halt", "c:\ax2017\engine\font.cpp", 0x320, 
        "WrapperLookupEscapeTag")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
