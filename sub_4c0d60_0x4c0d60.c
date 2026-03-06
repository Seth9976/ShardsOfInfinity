// 函数名称: sub_4c0d60
// 虚拟地址: 0x4c0d60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c0d60(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1[0x1a]
    int32_t* ecx = arg1[0x1a]
    int32_t eax
    
    if (ecx != 0)
        eax = sub_45d050(ecx, arg1[0x1b] * 0x60)
        arg1[0x1a] = 0
    
    int32_t* ecx_1 = *arg1
    
    if (ecx_1[1] != 0x18)
        sub_44e4d0(eax, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
            "c:\ax2017\engine\assetutils.cpp", 0x2e6, "FlanimGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_2 = sub_4459f0(ecx_1)
    int32_t ecx_2 = *(eax_2 + 0x14)
    arg1[0x1b] = ecx_2
    int32_t result = *(eax_2 + 0x14)
    
    if (result s> 0)
        arg1[0x1a] = sub_45cff0(ecx_2 * 0x60)
        result = *(eax_2 + 0x14)
    
    int32_t i = 0
    
    if (result s> 0)
        int32_t edx_3 = 0
        
        do
            edx_3 += 0x60
            result = 0xffffffff
            i += 1
            *(edx_3 + arg1[0x1a] - 8) = 0xffffffff
        while (i s< *(eax_2 + 0x14))
    
    return result
}
