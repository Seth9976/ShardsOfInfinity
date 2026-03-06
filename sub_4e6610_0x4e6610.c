// 函数名称: sub_4e6610
// 虚拟地址: 0x4e6610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4e6610(void* arg1)
{
    // 第一条实际指令: int32_t eax = Ordinal_DSOUND_11(0, arg1 + 4, 0)
    int32_t eax = Ordinal_DSOUND_11(0, arg1 + 4, 0)
    
    if (eax != 0)
        int32_t var_8_1 = eax
        return sub_44e450("DirectSoundCreate8 error:%x")
    
    int32_t* eax_1 = *(arg1 + 4)
    int32_t result = (*(*eax_1 + 0x18))(eax_1, data_ce1790, 2)
    
    if (result == 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "hr == S_OK", "c:\ax2017\engine\windows\windowssound.cpp", 0x5f, 
        "WindowsSoundInterface::SoundInterfaceAttach")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
