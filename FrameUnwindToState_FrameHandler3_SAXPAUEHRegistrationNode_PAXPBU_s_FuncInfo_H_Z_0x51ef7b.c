// 函数名称: ?FrameUnwindToState@__FrameHandler3@@SAXPAUEHRegistrationNode@@PAXPBU_s_FuncInfo@@H@Z
// 虚拟地址: 0x51ef7b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?FrameUnwindToState@__FrameHandler3@@SAXPAUEHRegistrationNode@@PAXPBU_s_FuncInfo@@H@Z(void* arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x5ac378
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x5ac378 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_3 = &data_51ef87
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_38 = arg3
    int32_t esi = __FrameHandler3::GetCurrentState(arg1, arg2)
    int32_t var_20 = esi
    void* eax_1 = sub_51e354()
    *(eax_1 + 0x18) += 1
    int32_t var_8_1 = 0
    
    while (true)
        if (esi == arg4)
            int32_t var_8_4 = 0xfffffffe
            $LN16()
            
            if (esi != arg4)
                break
            
            int32_t var_38_2 = esi
            void* result = __FrameHandler3::SetState(arg1, arg3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        if (esi s<= 0xffffffff)
            break
        
        if (esi s>= *(arg3 + 4))
            break
        
        int32_t eax_2 = *(arg3 + 8)
        int32_t ecx_1 = *(eax_2 + (esi << 3))
        int32_t var_8_2 = 1
        
        if (*(eax_2 + (esi << 3) + 4) != 0)
            int32_t var_38_1 = ecx_1
            __CallSettingFrame@12(__FrameHandler3::SetState(arg1, arg3), 
                *(*(arg3 + 8) + (esi << 3) + 4), arg1, 0x103)
        
        int32_t var_8_3 = 0
        esi = ecx_1
        int32_t var_20_1 = esi
    
    sub_52f140()
    noreturn
}
