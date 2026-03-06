// 函数名称: sub_48c200
// 虚拟地址: 0x48c200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_48c200(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543228
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* esi = arg1
    char* var_18 = esi
    char eax_3 = *esi
    char* edi = esi
    
    if (eax_3 == 0x2f || eax_3 == 0x5c)
        edi = &esi[1]
    
    char* eax_4 = _strcspn(edi, "/\")
    void* edi_1 = edi + eax_4
    
    if (*edi_1 != 0)
        char* const lpFileName_4 = &data_5559b1
        
        do
            void* eax_6 = edi_1 - esi
            
            if (eax_6 s<= 0)
                sub_44e4d0(eax_6, &data_5559b1, "len > 0", "c:\ax2017\engine\definition.cpp", 0x45b, 
                    "MakeDirectoriesInFullPath")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            char* const lpFileName_2 = &data_5559b1
            int32_t var_8_1 = 0
            sub_44f690(&lpFileName_2, esi, eax_6)
            char* lpFileName_1 = lpFileName_2
            char* const lpFileName = &data_5559b1
            
            if (lpFileName_1 != 0)
                lpFileName = lpFileName_1
            
            if (GetFileAttributesA(lpFileName) == 0xffffffff)
                char* lpFileName_3 = &data_5559b1
                
                if (lpFileName_1 != 0)
                    lpFileName_3 = lpFileName_1
                
                if (__mkdir(lpFileName_3) == 0xffffffff)
                    if (lpFileName_1 != 0)
                        lpFileName_4 = lpFileName_1
                    
                    char* const lpFileName_5 = lpFileName_4
                    eax_4 = sub_44e260("Failed to create directory '%s'")
                    int32_t var_8_5 = 2
                    
                    if (data_cdf414 != 0 && lpFileName_1 != 0 && *lpFileName_1 != 0)
                        eax_4 = sub_44f000(&lpFileName_2)
                        int32_t temp1_1 = *(eax_4 + 4)
                        *(eax_4 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            int32_t eax_10 = sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_10
                    
                    break
                
                int32_t var_8_3 = 3
            else
                int32_t var_8_2 = 1
            
            if (data_cdf414 != 0 && lpFileName_1 != 0 && *lpFileName_1 != 0)
                char* eax_9 = sub_44f000(&lpFileName_2)
                int32_t temp0_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                    lpFileName_2 = &data_5559b1
            
            int32_t var_8_4 = 0xffffffff
            eax_4 = _strcspn(edi_1 + 1, "/\")
            esi = var_18
            edi_1 = edi_1 + 1 + eax_4
        while (*edi_1 != 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4
}
