// 函数名称: sub_418140
// 虚拟地址: 0x418140
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_418140()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_164 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_42aaa0(*(data_65ac38 + 0xb24))
    int32_t var_14c
    _memset(&var_14c, 0, 0x138)
    int32_t var_154 = 0x6b
    int32_t var_150 = 2
    char* ecx_2 = *eax_3
    char* const eax_4 = &data_5559b1
    
    if (ecx_2 != 0)
        eax_4 = ecx_2
    
    char var_148
    _strncpy(&var_148, eax_4, 0x10)
    char var_139 = 0
    char* const ecx_3 = &data_5559b1
    int32_t var_138 = *(eax_3 + 8)
    char* eax_6 = *(eax_3 + 0x224)
    
    if (eax_6 != 0)
        ecx_3 = eax_6
    
    char var_134[0x1f]
    _strncpy(&var_134, ecx_3, 0x20)
    char var_115 = 0
    int32_t eax_7 = *(eax_3 + 0x22c)
    var_14c = eax_7
    char* const var_158 = &data_5559b1
    int32_t var_8_1 = 0
    sub_44f100(eax_7, 2, &var_158, 0)
    char* const esi_1 = var_158
    *esi_1 = 0x4350
    esi_1[2] = 0
    char* const eax_8 = &data_5559b1
    
    if (esi_1 != 0)
        eax_8 = esi_1
    
    char var_114[0xfe]
    _strncpy(&var_114, eax_8, 0xff)
    void* eax_9 = data_65aabc
    char var_16 = 0
    
    if (eax_9 == 0)
        sub_44e4d0(eax_9, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax_9 + 0x18) == 3)
        int32_t eax_10 = *(eax_9 + 0x14)
        void* ecx_5 = data_65acf4
        
        if (eax_10 != 0)
            uint32_t edx_1 = zx.d(eax_10.w)
            
            if (edx_1 u< *(ecx_5 + 4))
                void* edi_2 = edx_1 * 0x4c + *ecx_5
                
                if (*(edi_2 + 0x48) == eax_10)
                    int32_t var_168_1 = 0xf42a5
                    sub_450c90(eax_10, 0x140, edi_2 + 0x3c)
                    sub_450a70(&var_154, 0x140, edi_2 + 0x3c, &var_154)
    
    char* result
    
    for (int32_t i = 0; i s< 3; i += 1)
        result = sub_418050(i)
    
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_44f000(&var_158)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
