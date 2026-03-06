// 函数名称: sub_4fbab0
// 虚拟地址: 0x4fbab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4fbab0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t* ecx = data_d76c60
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    int32_t* eax
    char* ecx_1
    
    if (ecx[1] == 0x1e)
        eax = sub_4459f0(ecx)
        int32_t ecx_2 = 0
        int32_t esi_1 = eax[1]
        
        if (esi_1 s> 0)
            int32_t* edx = *eax
            
            do
                if (*edx == arg1)
                    if (arg2 != 0)
                        *arg2 = ecx_2
                    
                    return ecx_2 * 0x118 + *eax
                
                ecx_2 += 1
                edx = &edx[0x46]
            while (ecx_2 s< esi_1)
        
        var_18 = "FindElement"
        var_1c = 0x126
        var_20 = "c:\ax2017\engine\editor\uieditor.cpp"
        ecx_1 = "Halt"
    else
        var_18 = "UIDefGet"
        var_1c = 0x10d
        var_20 = "c:\ax2017\engine\uidef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
