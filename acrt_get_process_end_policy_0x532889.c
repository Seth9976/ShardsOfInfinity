// 函数名称: ___acrt_get_process_end_policy
// 虚拟地址: 0x532889
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall___acrt_get_process_end_policy(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    TEB* fsbase
    struct _PEB* ProcessEnvironmentBlock = fsbase->ProcessEnvironmentBlock
    var_8 = 0
    
    if (ProcessEnvironmentBlock->ProcessParameters->Flags s>= 0)
        ___acrt_AppPolicyGetProcessTerminationMethodInternal@4(&var_8)
        
        if (var_8 == 1)
            return 0
    
    return 1
}
