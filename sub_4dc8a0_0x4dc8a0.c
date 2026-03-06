// 函数名称: sub_4dc8a0
// 虚拟地址: 0x4dc8a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4dc8a0(char* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544540
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = sub_44e260("Compiling opengl memory shader")
    
    if (arg1 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* var_18
    sub_44f240(&var_18, arg1)
    int32_t var_8_1 = 0
    char* var_14
    sub_44f240(&var_14, arg1)
    var_8_1.b = 1
    char* esi_1 = var_18
    int32_t ecx_3
    
    if (esi_1 == 0 || *esi_1 == 0)
        ecx_3 = 0
    else
        ecx_3 = *(sub_44f000(&var_18) + 8)
    
    *(arg2 + 0x18) = ecx_3 + 1
    char* eax_5 = sub_45cd70(ecx_3 + 1)
    void* var_30 = *(arg2 + 0x18)
    *(arg2 + 0x1c) = eax_5
    char* ecx_5 = &data_5559b1
    
    if (esi_1 != 0)
        ecx_5 = esi_1
    
    sub_51d5b0(eax_5, ecx_5, var_30)
    char* edi = var_14
    int32_t ecx_7
    
    if (edi == 0 || *edi == 0)
        ecx_7 = 0
    else
        ecx_7 = *(sub_44f000(&var_14) + 8)
    
    *(arg2 + 0x20) = ecx_7 + 1
    char* eax_7 = sub_45cd70(ecx_7 + 1)
    void* var_30_1 = *(arg2 + 0x20)
    *(arg2 + 0x24) = eax_7
    char* ecx_9 = &data_5559b1
    
    if (edi != 0)
        ecx_9 = edi
    
    sub_51d5b0(eax_7, ecx_9, var_30_1)
    var_8_1.b = 2
    char* result
    
    if (data_cdf414 != 0 && edi != 0 && *edi != 0)
        result = sub_44f000(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_2 = 3
    
    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_44f000(&var_18)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
