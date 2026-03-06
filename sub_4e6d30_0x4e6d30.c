// 函数名称: sub_4e6d30
// 虚拟地址: 0x4e6d30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __stdcallsub_4e6d30(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_546058
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    
    if (*(esi + 0x59) != 0 && *(esi + 0x5a) != 0)
        int32_t* ebx_1 = esi[2]
        void var_38
        int32_t var_24
        int32_t eax_4 = (*(*ebx_1 + 0x10))(ebx_1, &var_24, &var_38)
        
        if (eax_4 != 0)
            sub_44e4d0(eax_4, &data_5559b1, "hr == S_OK", "c:\ax2017\engine\windows\windowssound.cpp", 
                0x1e4, "WindowsSoundInterface::SoundInterfaceUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = esi[7]
        char edx_1 = 0
        int32_t edi_1 = var_24
        arg1:3.b = 0
        
        if (result s> edi_1)
            edi_1 = esi[5]
            edx_1 = 1
            arg1:3.b = 1
        
        int32_t ecx_1 = esi[9]
        void* edi_2 = edi_1 - result
        
        if (ecx_1 s<= 0 || result s>= ecx_1)
        label_4e6dc5:
            
            if (edi_2 s>= 0x2000 || edx_1 != 0)
                void* edi_3 = edi_2 & 0xfffffffc
                void* var_28
                int32_t* var_4c_3 = &var_28
                int32_t* result_1
                sub_42ce10(&result_1, *esi, 0x15)
                int32_t var_8_1 = 0
                void* ecx_3 = esi[6]
                void* var_18_1 = edi_3
                void* var_14_1 = nullptr
                int32_t edx_2 = *(*(var_28 + 0x28) + 0xc)
                
                if (ecx_3 + edi_3 s> edx_2)
                    void* eax_11 = ecx_3 - edx_2 + edi_3
                    var_14_1 = eax_11
                    var_18_1 = edi_3 - eax_11
                    
                    if (eax_11 s>= esi[5])
                        sub_44e4d0(eax_11, &data_5559b1, 
                            "sourceWrapSize < pSoundInstance->mBufferSize", 
                            "c:\ax2017\engine\windows\windowssound.cpp", 0x215, 
                            "WindowsSoundInterface::SoundInterfaceUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                
                int32_t var_30
                int32_t var_2c
                uint32_t (* var_20)[0x4]
                int32_t var_1c
                int32_t eax_13 =
                    (*(*ebx_1 + 0x2c))(ebx_1, esi[7], edi_3, &var_20, &var_1c, &var_2c, &var_30, 0)
                
                if (eax_13 != 0)
                    sub_44e4d0(eax_13, &data_5559b1, "hr == S_OK", 
                        "c:\ax2017\engine\windows\windowssound.cpp", 0x21e, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (var_1c != edi_3)
                    sub_44e4d0(eax_13, &data_5559b1, "(int)lockedSize == writeLen", 
                        "c:\ax2017\engine\windows\windowssound.cpp", 0x21f, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (var_2c != eax_13)
                    sub_44e4d0(eax_13, &data_5559b1, "pLockedPtr2 == NULL", 
                        "c:\ax2017\engine\windows\windowssound.cpp", 0x220, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (var_30 != eax_13)
                    sub_44e4d0(eax_13, &data_5559b1, "lockedSize2 == 0", 
                        "c:\ax2017\engine\windows\windowssound.cpp", 0x221, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_4e6680(eax_13, var_20, esi, var_18_1, var_14_1)
                int32_t eax_15 = (*(*ebx_1 + 0x4c))(ebx_1, var_20, var_1c, 0, 0)
                
                if (eax_15 != 0)
                    sub_44e4d0(eax_15, &data_5559b1, "hr == S_OK", 
                        "c:\ax2017\engine\windows\windowssound.cpp", 0x228, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (arg1:3.b == eax_15.b)
                    esi[7] += edi_3
                else
                    esi[7] = eax_15
                
                result = result_1
                
                if (result != 0)
                    result[7] -= 1
        else
            result += edi_2
            
            if (result s< ecx_1)
                goto label_4e6dc5
            
            result = (*(*ebx_1 + 0x48))(ebx_1)
            
            if (result != 0)
                sub_44e4d0(result, &data_5559b1, "hr == S_OK", 
                    "c:\ax2017\engine\windows\windowssound.cpp", 0x1fa, 
                    "WindowsSoundInterface::SoundInterfaceUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
