// 函数名称: sub_4d6250
// 虚拟地址: 0x4d6250
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4d6250(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x2d0)
    int32_t* eax = *(arg1 + 0x2d0)
    int32_t result
    
    if (eax == 0)
        result = *(arg1 + 0x2d4)
    else
        void* var_c
        int32_t* var_10_1 = &var_c
        int32_t* var_8
        sub_42ce10(&var_8, eax, 0x15)
        result = *(var_c + 0x28)
        eax = var_8
        
        if (eax != 0)
            eax[7] -= 1
            var_8 = nullptr
    
    if (result != 0)
        return result
    
    sub_44e4d0(eax, &data_5559b1, "pSoundData", "c:\ax2017\engine\soundogg.cpp", 0xf7, 
        "SoundOggReaderGetSoundData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
