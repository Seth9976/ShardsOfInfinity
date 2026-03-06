// 函数名称: ?exit_or_terminate_process@@YAXI@Z
// 虚拟地址: 0x529fb1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void?exit_or_terminate_process@@YAXI@Z(uint32_t arg1) __noreturn
{
    // 第一条实际指令: uint32_t eax
    uint32_t eax
    int32_t ecx
    HMODULE ecx_1
    int32_t edx
    eax, ecx_1, edx = ___acrt_get_process_end_policy(ecx)
    
    if (eax != 1)
        TEB* fsbase
        eax = fsbase->ProcessEnvironmentBlock->NtGlobalFlag u>> 8
        
        if ((eax.b & 1) == 0)
            TerminateProcess(GetCurrentProcess(), arg1)
            noreturn
    
    try_cor_exit_process(eax, edx, ecx_1, arg1)
    ExitProcess(arg1)
    noreturn
}
