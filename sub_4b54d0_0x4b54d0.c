// 函数名称: sub_4b54d0
// 虚拟地址: 0x4b54d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4b54d0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 4)
    if (arg1[1] == 4)
        return sub_4459f0(arg1) __tailcall
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_SHADER", 
        "c:\ax2017\engine\shader.cpp", 0x8a, "ShaderGetDef")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
