// 函数名称: __abnormal_termination
// 虚拟地址: 0x51f7ba
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__abnormal_termination()
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    
    if (ExceptionList->Handler == __unwind_handler
            && ExceptionList->__offset(0x8).d == *(ExceptionList->__offset(0xc).d + 0xc))
        return 1
    
    return 0
}
