// 函数名称: sub_494d70
// 虚拟地址: 0x494d70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_494d70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t eax = data_cdf884
    int32_t eax = data_cdf884
    
    if (eax s>= 0x100)
        sub_44e4d0(eax, &data_5559b1, "gAssetInfoTableItemCount < MAX_ASSET_TYPES", 
            "c:\ax2017\engine\assettyperegistry.cpp", 0x41, "AssetRegisterBeforeMain")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx_1 = eax * 7
    data_cdf884 = eax + 1
    *((ecx_1 << 2) + &data_cdf888) = arg2
    *((ecx_1 << 2) + &data_cdf88c) = arg3
    *((ecx_1 << 2) + &data_cdf890) = arg4
    *((ecx_1 << 2) + &data_cdf894) = arg5
    *((ecx_1 << 2) + &data_cdf898) = arg6
    return arg1
}
