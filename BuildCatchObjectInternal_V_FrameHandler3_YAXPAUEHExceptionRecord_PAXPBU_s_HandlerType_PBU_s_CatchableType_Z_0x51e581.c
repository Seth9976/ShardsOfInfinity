// 函数名称: ??$BuildCatchObjectInternal@V__FrameHandler3@@@@YAXPAUEHExceptionRecord@@PAXPBU_s_HandlerType@@PBU_s_CatchableType@@@Z
// 虚拟地址: 0x51e581
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$BuildCatchObjectInternal@V__FrameHandler3@@@@YAXPAUEHExceptionRecord@@PAXPBU_s_HandlerType@@PBU_s_CatchableType@@@Z(void* arg1, void** arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x5ac440
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac440 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_3 = &data_51e58d
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    void** edi
    
    if (*arg3 s>= 0)
        edi = &arg2[3] + arg3[2]
    else
        edi = arg2
    
    int32_t var_8_1 = 0
    int32_t eax = sub_51e442(arg1, arg2, arg3, arg4)
    int32_t result
    
    if (eax == 1)
        void* eax_5 = ___AdjustPointer(*(arg1 + 0x18), &arg4[8])
        result = _CallMemberFunction1(edi, *(arg4 + 0x18), eax_5)
    else
        result = eax - 2
        
        if (eax == 2)
            void* eax_3 = ___AdjustPointer(*(arg1 + 0x18), &arg4[8])
            result = _CallMemberFunction2(edi, *(arg4 + 0x18), eax_3, 1)
    
    int32_t var_8_2 = 0xfffffffe
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
