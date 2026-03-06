// 函数名称: sub_4d6e80
// 虚拟地址: 0x4d6e80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4d6e80(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542e10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x4240) != 0)
        sub_4dd400(arg1 + 0x4240)
        result = *(arg1 + 0x4240)
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(arg1 + 0x4240, 0, 0x14)
        *(arg1 + 0x4258) = 0
    
    if (*(arg1 + 4) != 0)
        wglMakeCurrent(nullptr, nullptr)
        wglDeleteContext(*(arg1 + 4))
        HDC hDC = *(arg1 + 8)
        *(arg1 + 4) = 0
        result = ReleaseDC(*(arg1 + 0xc), hDC)
        *(arg1 + 8) = 0
    
    int32_t* edi_1 = data_ce26e8
    
    if (edi_1 != 0)
        int32_t* esi_1 = &edi_1[0x1090]
        
        if (*esi_1 != 0)
            sub_4dd400(esi_1)
            int32_t eax_3 = *esi_1
            
            if (eax_3 != 0)
                _aligned_free_base(eax_3)
                edi_1 = data_ce26e8
            
            __builtin_memset(esi_1, 0, 0x14)
            esi_1[6] = 0
        
        int32_t var_8_1 = 0xffffffff
        result = sub_45d050(edi_1, 0x5040)
        data_ce26e8 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
