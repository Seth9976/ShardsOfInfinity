// 函数名称: sub_46ea40
// 虚拟地址: 0x46ea40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_46ea40(int32_t arg1, int32_t arg2, int32_t* arg3, char** arg4)
{
    // 第一条实际指令: *arg4 = &data_5559b1
    *arg4 = &data_5559b1
    int32_t esi = 1
    
    if (arg3[1] != 0x22)
        sub_44e4d0(arg4, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI2", "c:\ax2017\engine\ui2.cpp", 
            0x623, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_1 = sub_4459f0(arg3)
    int32_t i = 0
    int32_t* var_10 = eax_1
    
    if (eax_1[1] s> 0)
        int32_t ebx_1 = 0
        
        do
            int32_t* eax_3 = *eax_1 + ebx_1
            int32_t eax_4 = sub_4b88a0(eax_3, eax_3, &data_5b1d6c, 0x66)
            
            if (eax_4 == arg2)
                arg4[esi] = sub_4b8a40(eax_4, eax_3, &data_5b1d6c, 0x64)
                esi += 1
            
            if (esi == 0x10)
                break
            
            eax_1 = var_10
            i += 1
            ebx_1 += 0xc
        while (i s< eax_1[1])
    
    arg4[esi] = 0
    char** result
    result.b = 1
    return result
}
