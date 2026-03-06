// 函数名称: sub_4e7410
// 虚拟地址: 0x4e7410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4e7410(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 8)
    int32_t* eax_1 = *(arg1 + 8)
    int32_t result = (*(*eax_1 + 0x4c))(eax_1, arg2, arg3, 0, 0)
    
    if (result == 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "hr == S_OK", "c:\ax2017\engine\windows\windowssound.cpp", 0x2a0, 
        "WindowsSoundInterface::SoundInterfaceWriteUnlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
