// 函数名称: sub_443340
// 虚拟地址: 0x443340
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_443340(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = data_65ac30
    void* result = data_65ac30
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (result != 0)
        result = *(result + 0x20)
        
        if (result != 0 && result == 1)
            return result
        
        if (arg2 == 0)
            data_5bcc84 = arg2
            return result
        
        uint32_t ecx_1 = zx.d(arg2.w)
        
        if (ecx_1 u< data_5bcd80)
            int32_t esi_1 = data_5bcd7c
            result = ecx_1 * 0x568
            
            if (*(result + esi_1 + 0x564) == arg2)
                result = ecx_1 * 0x568
                
                if (*(result + esi_1 + 0x4f0) != 0)
                    data_5bcc84 = 0
                    return result
                
                data_5bcc84 = arg2
                return result
        
        var_8 = "DataArray<struct ShGfx>::DataArrayGet"
        var_c = 0x6d
        var_10 = "c:\ax2017\engine\dataarray.h"
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        var_8 = "GetLocalSettings"
        var_c = 0x23d
        var_10 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx = "gGameSettings.localSettings"
    
    sub_44e4d0(result, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
