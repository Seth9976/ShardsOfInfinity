// 函数名称: sub_4f0280
// 虚拟地址: 0x4f0280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4f0280(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (arg1[1] != 0x12)
        return 
    
    void* i = sub_4459f0(arg1)
    void* i_2 = i
    void* i_1 = nullptr
    
    if (*(i_2 + 0x14) s<= 0)
        return 
    
    int32_t edi_1 = 0
    
    do
        int32_t* esi_1 = *(i_2 + 0x18)
        int32_t* ecx = *(esi_1 + edi_1)
        
        if (ecx[1] != 3)
            sub_44e4d0(i, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "c:\ax2017\engine\texture.h", 0x84, "TextureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(*sub_4459f0(ecx) + 0x28) = 1
        sub_4ed100(*(esi_1 + edi_1))
        edi_1 += 0x1c
        i = i_1 + 1
        i_1 = i
    while (i s< *(i_2 + 0x14))
}
