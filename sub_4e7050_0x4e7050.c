// 函数名称: sub_4e7050
// 虚拟地址: 0x4e7050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4e7050()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543028
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* esi = arg_4
    int32_t* eax_3 = esi[2]
    int32_t eax_4 = (*(*eax_3 + 0x10))(eax_3, &arg_4, 0)
    
    if (eax_4 != 0)
        sub_44e4d0(eax_4, &data_5559b1, "hr == S_OK", "c:\ax2017\engine\windows\windowssound.cpp", 
            0x23b, "WindowsSoundInterface::SoundInterfaceGetCurrentPosition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(esi + 0x59) == eax_4.b)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg_4
    
    void* var_14
    int32_t* var_28 = &var_14
    int32_t* var_18
    sub_42ce10(&var_18, *esi, 0x15)
    int32_t var_8_1 = 0
    void* eax_6 = var_14
    int32_t edi = *(eax_6 + 0x28)
    
    if (edi == 0)
        sub_44e4d0(eax_6, &data_5559b1, "pSoundData", "c:\ax2017\engine\windows\windowssound.cpp", 
            0x246, "WindowsSoundInterface::SoundInterfaceGetCurrentPosition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx_4 = esi[7]
    int32_t* edx = arg_4
    void* eax_9
    
    if (edx s< ecx_4)
        eax_9 = ecx_4 - edx
    else
        eax_9 = esi[5] - edx + ecx_4
    
    int32_t edx_1 = esi[6]
    void* edx_2 = edx_1 - eax_9
    
    if (edx_1 - eax_9 s< 0)
        edx_2 += *(edi + 0xc)
    
    int32_t* ecx_5 = var_18
    
    if (ecx_5 != 0)
        ecx_5[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return edx_2
}
