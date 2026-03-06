// 函数名称: sub_480090
// 虚拟地址: 0x480090
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_480090()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542f23
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_cdf42c != 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gTranslations == NULL", 
            "c:\ax2017\engine\localization.cpp", 0x45, "LocalizationInit")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_4 = sub_45cfa0(0x128)
    eax_4[3] += 1
    int32_t* esi = *eax_4
    
    if (esi == 0)
        sub_45ce30(eax_4)
        esi = *eax_4
    
    *eax_4 = *esi
    _memset(esi, 0, 0x128)
    int32_t* var_14_1 = esi
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28)(int32_t* arg1) = sub_480920
    `eh vector constructor iterator'(esi, 0xc, 0xc, PDBStream::PDBStream)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28_1)(int32_t* arg1) = sub_480920
    int32_t var_8_1 = 0
    int32_t result = `eh vector constructor iterator'(&esi[0x24], 0xc, 0xc, PDBStream::PDBStream)
    int32_t var_8_2 = 0xffffffff
    void* edi_1 = nullptr
    data_cdf42c = esi
    uint32_t eax_7
    
    while (true)
        void* ebx_1 = edi_1 + esi
        
        if (*(edi_1 + esi) != 0)
            sub_44e4d0(result, &data_5559b1, "mNodeBuckets == NULL", "c:\ax2017\engine\xmap.h", 0x72, 
                "XMap<class XString,struct Translation>::SetNumBuckets")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_7 = sub_41b670(0x400)
        *ebx_1 = sub_45cff0(eax_7 << 2)
        *(ebx_1 + 4) = eax_7 - 1
        int32_t ebx_2 = data_cdf42c
        
        if (*(ebx_2 + edi_1 + 0x90) != 0)
            break
        
        uint32_t eax_10 = sub_41b670(0x400)
        *(ebx_2 + edi_1 + 0x90) = sub_45cff0(eax_10 << 2)
        result = eax_10 - 1
        *(ebx_2 + edi_1 + 0x94) = result
        edi_1 += 0xc
        
        if (edi_1 s>= 0x90)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        esi = data_cdf42c
    
    sub_44e4d0(eax_7 - 1, &data_5559b1, "mNodeBuckets == NULL", "c:\ax2017\engine\xmap.h", 0x72, 
        "XMap<class XString,struct Translation>::SetNumBuckets")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
