// 函数名称: sub_45d320
// 虚拟地址: 0x45d320
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_45d320(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 0x6a4)
    int32_t* ecx = *(arg1 + 0x6a4)
    int32_t var_c
    char const* const var_8
    int32_t* eax
    char* ecx_1
    
    if (ecx[1] == 0x22)
        eax = sub_4459f0(ecx)
        int32_t ecx_2 = *(arg1 + 0x6a8)
        
        if (ecx_2 s>= 0)
            if (ecx_2 s< eax[1])
                return *eax + ecx_2 * 0xc
            
            var_8 = "UI2GetAttribItem"
            var_c = 0x631
            ecx_1 = "item.attribItemIndex < def.el.numItems"
        else
            var_8 = "UI2GetAttribItem"
            var_c = 0x630
            ecx_1 = "item.attribItemIndex >= 0"
    else
        var_8 = "UI2DefGet"
        var_c = 0x623
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\engine\ui2.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
