// 函数名称: sub_4b33b0
// 虚拟地址: 0x4b33b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b33b0(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: void var_a8
    void var_a8
    int32_t eax_1 = __security_cookie ^ &var_a8
    int32_t* eax_2 = sub_4b3c10(arg3)
    int32_t* ecx = *eax_2
    
    if (ecx[1] != 0x20)
        sub_44e4d0(eax_2, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
            "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void var_a0
    int128_t* eax_5 = sub_4b0280(&var_a0, eax_2, arg2 * 0xb8 + *sub_4459f0(ecx), &var_a0)
    int128_t var_50 = *eax_5
    int128_t var_40 = eax_5[1]
    int64_t var_30 = eax_5[2].q
    void var_78
    int64_t* eax_7 = sub_4b7480(&var_78, &eax_2[0xf], &var_50, &var_78)
    *arg4 = *eax_7
    arg4[1] = *(eax_7 + 0x10)
    arg4[2].q = eax_7[4]
    @__security_check_cookie@4(eax_1 ^ &var_a8)
    return arg4
}
