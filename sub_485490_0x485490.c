// 函数名称: sub_485490
// 虚拟地址: 0x485490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_485490(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    char const* const var_8
    void* eax
    char* ecx
    
    if (arg1[1] == 0x1e)
        eax = sub_4459f0(arg1)
        
        if (arg2 s>= 0)
            if (arg2 s< *(eax + 4))
                return arg2 * 0x118 + *eax
            
            var_8 = "UIDefGetElement"
            var_c = 0x115
            ecx = "index < def.numElements"
        else
            var_8 = "UIDefGetElement"
            var_c = 0x114
            ecx = "index >= 0"
    else
        var_8 = "UIDefGet"
        var_c = 0x10d
        ecx = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\uidef.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
