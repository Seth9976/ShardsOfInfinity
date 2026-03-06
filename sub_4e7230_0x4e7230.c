// 函数名称: sub_4e7230
// 虚拟地址: 0x4e7230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __stdcallsub_4e7230(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] != 0x15)
    if (arg1[1] != 0x15)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_SOUND", 
            "c:\ax2017\engine\sound.cpp", 0x330, "SoundGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* result = sub_4459f0(arg1)
    void* result_1 = result
    int32_t* edx = *(result_1 + 0x20)
    
    if (edx != 0)
        result = (*(*edx + 8))(edx)
        *(result_1 + 0x20) = 0
    
    return result
}
