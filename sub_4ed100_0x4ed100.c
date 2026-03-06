// 函数名称: sub_4ed100
// 虚拟地址: 0x4ed100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4ed100(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    
    if (arg1[1] == 3)
        int32_t* esi = *sub_4459f0(arg1)
        int32_t* eax_2 = sub_48c3c0(data_e46f5c, 0x3c)
        sub_48b3f0(eax_2, eax_2, esi, 0)
        esi[0xd] = 0
        esi[0xf] = 0
        return sub_484240(arg1)
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
        "c:\ax2017\engine\texture.h", 0x84, "TextureGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
