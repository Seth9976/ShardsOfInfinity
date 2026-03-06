// 函数名称: ??$CatchIt@V__FrameHandler3@@@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z
// 虚拟地址: 0x51e61a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$CatchIt@V__FrameHandler3@@@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z(EXCEPTION_RECORD* arg1, void** arg2, int32_t arg3, void* arg4, void* arg5, int32_t* arg6, char* arg7, int32_t* arg8, int32_t arg9, void** arg10)
{
    // 第一条实际指令: if (arg7 != 0)
    if (arg7 != 0)
        BuildCatchObjectInternal<class __FrameHandler3>(arg1, arg2, arg6, arg7)
    
    void** eax = arg10
    
    if (eax == 0)
        eax = arg2
    
    sub_51cb38(eax, arg1)
    __FrameHandler3::FrameUnwindToState(arg2, arg4, arg5, *arg8)
    int32_t var_24 = arg8[1] + 1
    __FrameHandler3::SetState(arg2, arg5)
    int32_t result = CallCatchBlock(arg1, arg2, arg3, arg5, arg6[3], arg9, 0x100)
    
    if (result == 0)
        return result
    
    return _JumpToContinuation(result, arg2)
}
