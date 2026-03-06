// 函数名称: sub_48a130
// 虚拟地址: 0x48a130
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_48a130(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: char const* const var_28
    char const* const var_28
    int32_t var_24
    char const* const var_20
    char* ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        int32_t esi_1
        
        if (edx u< data_654ebc)
            esi_1 = data_654eb8
            arg1 = edx * 0x438
        
        if (edx u>= data_654ebc || *(arg1 + esi_1 + 0x434) != arg3)
            var_20 = "DataArray<struct UIState>::DataArrayGet"
            var_24 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_28 = "c:\ax2017\engine\dataarray.h"
        else
            arg1 = edx * 0x438
            int32_t* ecx_1 = *(arg1 + esi_1 + 4)
            
            if (ecx_1[1] == 0x1e)
                void* edx_2 = arg2 * 0x118 + *sub_4459f0(ecx_1)
                void var_14
                *arg4 = *sub_485510(&var_14, edx_2 + 0xc, arg5, &var_14, edx_2 + 0x1c)
                return arg4
            
            var_20 = "UIDefGet"
            var_24 = 0x10d
            var_28 = "c:\ax2017\engine\uidef.cpp"
            ecx = "ptr->assetType == ASSET_TYPE_UI"
    else
        var_20 = "DataArray<struct UIState>::DataArrayGet"
        var_24 = 0x6c
        ecx = "id != DATAID_NULL"
        var_28 = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, var_28, var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
