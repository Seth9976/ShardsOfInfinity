// 函数名称: sub_4b39b0
// 虚拟地址: 0x4b39b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4b39b0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = sub_4b3c10(arg1)
    uint32_t (* eax)[0x4] = sub_4b3c10(arg1)
    int32_t* edi = eax
    int32_t* ecx = *edi
    int32_t var_14
    char const* const var_10_1
    char* ecx_1
    
    if (ecx[1] == 0x20)
        int32_t* esi_2 = arg2 * 0xb8 + *sub_4459f0(ecx)
        eax = sub_4b07c0(edi, arg2)
        
        if (*esi_2 == 2)
            if (*eax == 0)
                int32_t* edx_1 = eax[6][0]
                
                if (edx_1 == 0)
                    edx_1 = esi_2[0x1d]
                
                sub_4b1380(&(*eax)[1], edx_1)
                return (*eax)[1]
            
            var_10_1 = "FabUIState"
            var_14 = 0x765
            ecx_1 = "elState.asset == NULL"
        else
            var_10_1 = "FabUIState"
            var_14 = 0x764
            ecx_1 = "el.type == FAB_UI"
    else
        var_10_1 = "FabDefGet"
        var_14 = 0xe7
        ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\engine\fabdef.cpp", var_14, var_10_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
