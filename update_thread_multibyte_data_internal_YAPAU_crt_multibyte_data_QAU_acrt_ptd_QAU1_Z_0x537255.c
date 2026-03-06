// 函数名称: ?update_thread_multibyte_data_internal@@YAPAU__crt_multibyte_data@@QAU__acrt_ptd@@QAU1@@Z
// 虚拟地址: 0x537255
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?update_thread_multibyte_data_internal@@YAPAU__crt_multibyte_data@@QAU__acrt_ptd@@QAU1@@Z(int32_t arg1 @ esi, int32_t arg2 @ edi, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_4 = 0xc
    int32_t var_4 = 0xc
    int32_t var_8 = 0x5ac928
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac928 ^ __security_cookie_1
    int32_t var_30 = __security_cookie_1 ^ &var_4
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_537261
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    int32_t* esi
    
    if ((*(arg3 + 0x350) & data_5b03e4) == 0 || *(arg3 + 0x4c) == 0)
        ___acrt_lock(5)
        int32_t var_8_1 = 0
        esi = *(arg3 + 0x48)
        int32_t* var_20_1 = esi
        
        if (esi != *arg4)
            if (esi != 0)
                bool cond:0_1 = *esi != 1
                *esi
                *esi -= 1
                
                if (not(cond:0_1) && esi != 0x5b0478)
                    __free_base(esi)
            
            esi = *arg4
            *(arg3 + 0x48) = esi
            int32_t* var_20_2 = esi
            *esi += 1
        
        int32_t var_8_2 = 0xfffffffe
        $LN13()
    else
        esi = *(arg3 + 0x48)
    
    if (esi != 0)
        int32_t entry_ebx
        return sub_5372dd(&var_4, esi, arg2, arg1, entry_ebx) __tailcall
    
    sub_52e289()
    noreturn
}
