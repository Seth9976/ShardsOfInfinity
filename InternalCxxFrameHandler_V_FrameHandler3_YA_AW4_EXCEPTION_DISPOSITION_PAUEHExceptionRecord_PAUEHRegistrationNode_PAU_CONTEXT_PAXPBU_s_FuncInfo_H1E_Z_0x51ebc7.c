// 函数名称: ??$__InternalCxxFrameHandler@V__FrameHandler3@@@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@H1E@Z
// 虚拟地址: 0x51ebc7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$__InternalCxxFrameHandler@V__FrameHandler3@@@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@H1E@Z(int32_t* arg1, void** arg2, void* arg3, void* arg4, int32_t* arg5, int32_t arg6, void** arg7, char arg8)
{
    // 第一条实际指令: ___except_validate_context_record(arg3)
    ___except_validate_context_record(arg3)
    
    if (*(sub_51e354() + 0x20) != 0 || *arg1 == 0xe06d7363 || *arg1 == 0x80000026
            || (*arg5 & 0x1fffffff) u< 0x19930522 || (arg5[8].b & 1) == 0)
        if ((arg1[1].b & 0x66) == 0)
            if (arg5[3] != 0)
            label_51ec74:
                
                if (*arg1 == 0xe06d7363 && arg1[4] u>= 3 && arg1[5] u> 0x19930522)
                    int32_t esi_1 = *(arg1[7] + 8)
                    
                    if (esi_1 != 0)
                        return esi_1(arg1, arg2, arg3, arg4, arg5, arg6, arg7, zx.d(arg8))
                
                FindHandler<class __FrameHandler3>(arg1, arg2, arg3, arg4, arg5, arg8, arg6, arg7)
            else
                int32_t eax_4 = *arg5 & 0x1fffffff
                
                if (eax_4 u>= 0x19930521 && arg5[7] != 0)
                    goto label_51ec74
                
                if (eax_4 u>= 0x19930522 && ((arg5[8] u>> 2).b & 1) != 0)
                    goto label_51ec74
        else if (arg5[1] != 0 && arg6 == 0)
            __FrameHandler3::FrameUnwindToEmptyState(arg2, arg4, arg5)
    
    return 1
}
