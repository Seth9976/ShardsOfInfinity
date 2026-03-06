// 函数名称: sub_4c55f0
// 虚拟地址: 0x4c55f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4c55f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545148
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = arg1
    char* edx = *ebx
    char* const edi = &data_5559b1
    char* const arg_4
    void* esi = arg_4
    char* const eax_3 = &data_5559b1
    
    if (edx != 0)
        eax_3 = edx
    
    arg1.b = *(eax_3 + esi)
    
    if (arg1.b u>= 0x80)
        eax_3.b = arg1.b
        eax_3.b &= 0xe0
        
        if (eax_3.b != 0xc0)
            eax_3.b = arg1.b
            eax_3.b &= 0xf0
            
            if (eax_3.b != 0xe0)
                arg1.b &= 0xf8
                
                if (arg1.b != 0xf0)
                    sub_44e4d0(eax_3, &data_5559b1, "!Xutf8_is_invalid_lead_char(mText + charIndex)", 
                        "c:\ax2017\engine\uitextbox.cpp", 0x213, "UITextBox::GetCharacterX")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
    
    arg_4 = &data_5559b1
    int32_t var_8_1 = 0
    char* const eax_4 = &data_5559b1
    
    if (edx != 0)
        eax_4 = edx
    
    sub_44f690(&arg_4, eax_4, esi)
    uint32_t eax_6 = ebx[0x15] - 1
    
    if (eax_6 u<= 7)
        eax_6 = zx.d(lookup_table_4c5820[eax_6])
        
        switch (eax_6)
            case 0
                char* const esi_1 = arg_4
                
                if (esi_1 != 0)
                    edi = esi_1
                
                char* eax_7
                float xmm0
                eax_7, xmm0 = sub_4ae2c0(ebx[0xc], edi)
                int32_t var_14 = ebx[8] f+ ebx[4] + xmm0 f* ebx[0xe]
                int32_t var_8_2 = 1
                
                if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                    eax_7 = sub_44f000(&arg_4)
                    int32_t temp1_1 = *(eax_7 + 4)
                    *(eax_7 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        eax_7 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_7
            case 1
                char* eax_8 = *ebx
                char* const edx_4 = &data_5559b1
                
                if (eax_8 != 0)
                    edx_4 = eax_8
                
                float xmm0_3 = sub_4ae2c0(ebx[0xc], edx_4)
                char* const esi_2 = arg_4
                float xmm0_4 = xmm0_3 f* ebx[0xe]
                
                if (esi_2 != 0)
                    edi = esi_2
                
                int32_t* eax_9
                float xmm0_5
                eax_9, xmm0_5 = sub_4ae2c0(ebx[0xc], edi)
                int32_t var_14_2 =
                    ebx[6] f* 0.5f f+ ebx[4] f+ ebx[8] - xmm0_4 * 0.5f + xmm0_5 f* ebx[0xe]
                int32_t var_8_3 = 2
                
                if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                    eax_9 = sub_44f000(&arg_4)
                    int32_t temp2_1 = eax_9[1]
                    eax_9[1] -= 1
                    
                    if (temp2_1 == 1)
                        eax_9 = sub_45d050(eax_9, eax_9[3] + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9
    
    sub_44e4d0(eax_6, &data_5559b1, "Halt", "c:\ax2017\engine\uitextbox.cpp", 0x227, 
        "UITextBox::GetCharacterX")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
