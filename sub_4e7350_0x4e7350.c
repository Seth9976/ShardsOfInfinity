// 函数名称: sub_4e7350
// 虚拟地址: 0x4e7350
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4e7350(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 8)
    int32_t* eax_1 = *(arg1 + 8)
    int32_t result
    int32_t var_c
    int32_t var_8
    int32_t eax_2 = (*(*eax_1 + 0x2c))(eax_1, arg2, arg3, &result, &arg1, &var_8, &var_c, 0)
    int32_t var_1c_1
    char const* const ecx_1
    
    if (eax_2 != 0)
        char const* const var_18 = "WindowsSoundInterface::SoundInterfaceWriteLock"
        var_1c_1 = 0x293
        ecx_1 = "hr == S_OK"
    else if (arg1 != arg3)
        char const* const var_18_1 = "WindowsSoundInterface::SoundInterfaceWriteLock"
        var_1c_1 = 0x294
        ecx_1 = "(int)lockedSize == lengthBytes"
    else if (var_8 == 0)
        if (var_c == 0)
            return result
        
        char const* const var_18_3 = "WindowsSoundInterface::SoundInterfaceWriteLock"
        var_1c_1 = 0x296
        ecx_1 = "lockedSize2 == 0"
    else
        char const* const var_18_2 = "WindowsSoundInterface::SoundInterfaceWriteLock"
        var_1c_1 = 0x295
        ecx_1 = "pLockedPtr2 == NULL"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx_1, "c:\ax2017\engine\windows\windowssound.cpp", var_1c_1, 
        "WindowsSoundInterface::SoundInterfaceWriteLock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
