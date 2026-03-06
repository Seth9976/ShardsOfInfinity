// 函数名称: __TranslatorGuardHandler
// 虚拟地址: 0x51cc25
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")__TranslatorGuardHandler(int32_t arg1, int32_t arg2, int32_t arg3, EXCEPTION_RECORD* arg4, void* arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    @__security_check_cookie@4(*(arg5 + 8) ^ arg5)
    
    if ((arg4->ExceptionFlags & 0x66) != 0)
        *(arg5 + 0x24) = 1
        return 1
    
    __InternalCxxFrameHandler<class __FrameHandler3>(arg4, *(arg5 + 0x10), arg6, nullptr, 
        *(arg5 + 0xc), *(arg5 + 0x14), *(arg5 + 0x18), 1)
    
    if (*(arg5 + 0x24) == 0)
        sub_51cb38(arg5, arg4)
    
    int32_t var_10_2 = 0
    sub_51ca2d(0x123, &var_8, 0, 0, 0, 0)
    *(arg5 + 0x1c)
    *(arg5 + 0x20)
    jump(var_8)
}
