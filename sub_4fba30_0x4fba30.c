// 函数名称: sub_4fba30
// 虚拟地址: 0x4fba30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4fba30(int32_t arg1)
{
    // 第一条实际指令: int32_t* ecx = data_d76c60
    int32_t* ecx = data_d76c60
    char const* const var_10
    int32_t var_c
    char const* const var_8
    int32_t result
    char* ecx_1
    
    if (ecx[1] == 0x1e)
        int32_t* eax = sub_4459f0(ecx)
        result = 0
        int32_t edx_1 = eax[1]
        
        if (edx_1 s> 0)
            int32_t* ecx_3 = *eax
            
            do
                if (*ecx_3 == arg1)
                    return result
                
                result += 1
                ecx_3 = &ecx_3[0x46]
            while (result s< edx_1)
        
        var_8 = "FindElementIndex"
        var_c = 0x117
        var_10 = "c:\ax2017\engine\editor\uieditor.cpp"
        ecx_1 = "Halt"
    else
        var_8 = "UIDefGet"
        var_c = 0x10d
        var_10 = "c:\ax2017\engine\uidef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
