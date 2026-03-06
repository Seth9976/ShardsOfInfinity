// 函数名称: sub_4aab70
// 虚拟地址: 0x4aab70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4aab70(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* ecx = *arg3
    int32_t* ecx = *arg3
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx_1
    
    if (ecx != 0)
        if (ecx[1] == 3)
            int32_t* eax_2 = sub_4459f0(ecx)
            **eax_2 = *arg4
            int32_t eax_4 = arg4[1]
            *(*eax_2 + 4) = eax_4
            return eax_4
        
        var_c = "TextureGetDef"
        var_10 = 0x84
        var_14 = "c:\ax2017\engine\texture.h"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        int32_t eax
        
        if (arg2 == 3 || arg2 == 5)
            eax = 1
        label_4aabb5:
            int32_t var_c_1 = 0
            int32_t* eax_1 = sub_48f6f0(eax, arg4[1], *arg4, eax, arg2)
            *arg3 = eax_1
            return eax_1
        
        if (arg2 == 4 || arg2 == 6)
            eax = 0x50
            goto label_4aabb5
        
        var_c = "VRTextureBind"
        var_10 = 0x91
        var_14 = "c:\ax2017\engine\vr.cpp"
        ecx_1 = "Halt"
    
    sub_44e4d0(arg1, &data_5559b1, ecx_1, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
