// 函数名称: sub_4c4480
// 虚拟地址: 0x4c4480
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4c4480(int32_t arg1, char* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    
    if (arg3[1] != 0x18)
        sub_44e4d0(arg1, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
            "c:\ax2017\engine\assetutils.cpp", 0x2e6, "FlanimGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax = sub_4459f0(arg3)
    
    if (arg2 == 0)
        *arg4 = arg2
        *arg5 = eax[0xd]
        *arg6 = eax[0xc]
        int32_t* eax_1
        eax_1.b = 1
        return eax_1
    
    int32_t* eax_2 = sub_4c1e70(eax, arg2)
    
    if (eax_2 == 0)
        *arg4 = 0
        *arg5 = eax[0xd]
        *arg6 = eax[0xc]
        int32_t* eax_7
        eax_7.b = 0
        return eax_7
    
    *arg4 = eax_2[1]
    *arg5 = eax_2[2] - eax_2[1] + 1
    *arg6 = eax_2[3]
    int32_t* eax_4
    eax_4.b = 1
    return eax_4
}
