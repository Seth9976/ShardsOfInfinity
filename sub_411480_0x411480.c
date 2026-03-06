// 函数名称: sub_411480
// 虚拟地址: 0x411480
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_411480()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_65aac8:4 == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    int32_t ecx
    int32_t var_40 = ecx
    char const* const var_44 = "Shards"
    int32_t esi = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x22c)
    char* var_28
    sub_44f980(&var_28, "%s-game-%d")
    int32_t var_50 = ecx
    int32_t var_14_1 = 0
    char* const edi_1 = &data_5559b1
    char* eax_5 = var_28
    char* const ecx_5 = &data_5559b1
    
    if (eax_5 != 0)
        ecx_5 = eax_5
    
    char* const var_54 = ecx_5
    int32_t edx
    int32_t var_58 = edx
    int32_t var_5c = esi
    void* var_24
    sub_44f980(&var_24, "v=1&tid=UA-34292269-5&cid=%d&t=event&ec=game-play&ea=%s&el=%s&ev=%d")
    var_14_1.b = 1
    void* eax_6 = var_24
    
    if (eax_6 != 0)
        edi_1 = eax_6
    
    void* eax_7
    char* ecx_6
    int32_t edx_1
    eax_7, ecx_6, edx_1 = sub_4501f0()
    int128_t xmm0 = data_65aac8
    char* const var_40_1 = edi_1
    *(eax_7 + 0x14) = 1
    *eax_7 = xmm0
    *(eax_7 + 0x24) = 1
    *(eax_7 + 0x28) = 2
    sub_452690(eax_7, edx_1, eax_7, ecx_6)
    var_14_1.b = 2
    void* eax_8
    
    if (data_cdf414 != 0)
        eax_8 = var_24
        
        if (eax_8 != 0 && *eax_8 != 0)
            eax_8 = sub_44f000(&var_24)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                var_24 = &data_5559b1
    
    int32_t var_14_2 = 3
    
    if (data_cdf414 != 0)
        eax_8 = var_28
        
        if (eax_8 != 0 && *eax_8 != 0)
            eax_8 = sub_44f000(&var_28)
            int32_t temp1_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    
    eax_8.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}
