// 函数名称: sub_45f310
// 虚拟地址: 0x45f310
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_45f310(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (arg1[1] != 0x22)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI2", "c:\ax2017\engine\ui2.cpp", 
            0x623, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_1 = sub_4459f0(arg1)
    int32_t* ebx = eax_1
    int32_t i = 0
    
    if (ebx[1] s> 0)
        int32_t edi_1 = 0
        
        do
            eax_1 = __stricmp(sub_4b8a40(eax_1, *ebx + edi_1, &data_5b1d6c, 0x64), arg2)
            
            if (eax_1 == 0)
                return *ebx + i * 0xc
            
            i += 1
            edi_1 += 0xc
        while (i s< ebx[1])
    
    return 0
}
