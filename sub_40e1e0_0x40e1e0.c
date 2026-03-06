// 函数名称: sub_40e1e0
// 虚拟地址: 0x40e1e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_40e1e0()
{
    // 第一条实际指令: int32_t ecx_1 = data_cdf884
    int32_t ecx_1 = data_cdf884
    
    if (ecx_1 s>= 0x100)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gAssetInfoTableItemCount < MAX_ASSET_TYPES", 
            "c:\ax2017\engine\assettyperegistry.cpp", 0x41, "AssetRegisterBeforeMain")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_44e680() __tailcall
        
        breakpoint
    
    int32_t result = ecx_1 * 7
    data_cdf884 = ecx_1 + 1
    *((result << 2) + &data_cdf888) = 4
    *((result << 2) + &data_cdf88c) = sub_4278e0
    *((result << 2) + &data_cdf890) = sub_4b53c0
    *((result << 2) + &data_cdf894) = sub_4e2310
    *((result << 2) + &data_cdf898) = "Shader (*.vsh)|*.vsh|"
    return result
}
