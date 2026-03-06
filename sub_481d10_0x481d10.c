// 函数名称: sub_481d10
// 虚拟地址: 0x481d10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_481d10(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543028
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14
    int32_t* var_28 = &var_14
    int32_t* result_1
    sub_42ce10(&result_1, *arg1, 0x15)
    int32_t var_8_1 = 0
    void* eax_4 = *(var_14 + 0x28)
    
    if (eax_4 == 0)
        sub_44e4d0(eax_4, &data_5559b1, "pSoundData", "c:\ax2017\engine\sound.cpp", 0x6e, 
            "SoundInstanceFree")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax_4 + 0x10) == 2)
        int32_t* esi_1 = arg1[0x15]
        
        if (esi_1 != 0)
            ov_clear(esi_1, eax_2)
            
            if (esi_1 != 0)
                sub_45d050(esi_1, 0x2e0)
            
            arg1[0x15] = 0
    
    (*(*data_cdf444 + 0x30))(arg1)
    void* edx = data_cdf448
    int32_t ecx_3 = *(edx + 0xc)
    *(edx + 0xc) = zx.d(arg1[0x18].w)
    int32_t* result = result_1
    arg1[0x18] = ecx_3
    *(edx + 0x10) -= 1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
