// 函数名称: sub_4f5670
// 虚拟地址: 0x4f5670
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4f5670()
{
    // 第一条实际指令: int32_t* ecx = data_ce27a0
    int32_t* ecx = data_ce27a0
    char const* const var_18
    int32_t var_14
    char const* const var_10
    int32_t eax
    char* ecx_1
    
    if (ecx[1] == 0x20)
        eax = sub_4459f0(ecx)
        int32_t ecx_2 = data_ce37a4
        
        if (ecx_2 s> 0)
            int32_t i = 0
            
            if (ecx_2 s> 0)
                void* edx_1 = &data_d64c00
                
                do
                    int32_t ecx_3 = (&data_ce27a4)[i] * 0xb8
                    edx_1 += 0x24
                    i += 1
                    void* ecx_4 = ecx_3 + *eax
                    *(edx_1 + 0x8fdc) = *(ecx_4 + 8)
                    *(edx_1 + 0x8fec) = *(ecx_4 + 0x18)
                    *(edx_1 + 0x8ffc) = *(ecx_4 + 0x28)
                    *(edx_1 - 0x24) = *(ecx_4 + 8)
                    *(edx_1 - 0x14) = *(ecx_4 + 0x18)
                    *(edx_1 - 4) = *(ecx_4 + 0x28)
                while (i s< data_ce37a4)
            
            return sub_4f5420()
        
        var_10 = "SetDragTranslateOrigins"
        var_14 = 0x1d7
        var_18 = "c:\ax2017\engine\editor\fabeditor.cpp"
        ecx_1 = "gFab.s.activeSetCount > 0"
    else
        var_10 = "FabDefGet"
        var_14 = 0xe7
        var_18 = "c:\ax2017\engine\fabdef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
