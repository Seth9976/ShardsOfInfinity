// 函数名称: ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
// 虚拟地址: 0x51cb08
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* var_8 = arg2 + 0xc
    void* var_8 = arg2 + 0xc
    TEB* fsbase
    fsbase->NtTib.ExceptionList = fsbase->NtTib.ExceptionList->Next
    *(arg2 - 4)
    jump(arg1)
}
