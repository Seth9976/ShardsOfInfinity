// 函数名称: sub_454920
// 虚拟地址: 0x454920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_454920()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    void* eax_1 = sub_4b3f40(sub_4b3e00(ecx))
    int32_t* ecx_2 = *eax_1
    
    if (ecx_2[1] == 4)
        return *(sub_4459f0(ecx_2) + 0x28)
    
    sub_44e4d0(eax_1, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_SHADER", 
        "c:\ax2017\engine\shader.cpp", 0x8a, "ShaderGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
