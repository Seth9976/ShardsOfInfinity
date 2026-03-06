// 函数名称: sub_4628c0
// 虚拟地址: 0x4628c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4628c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char const* const var_10
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* eax
    char* ecx
    
    if (arg1 != 0)
        uint32_t esi_1 = zx.d(arg1.w)
        
        if (esi_1 u< data_5c99a4)
            eax = esi_1 * 0x1008 + data_5c99a0
        
        if (esi_1 u>= data_5c99a4 || *(eax + 0x1004) != arg1)
            var_8 = "DataArray<struct UI2>::DataArrayGet"
            var_c = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_10 = "c:\ax2017\engine\dataarray.h"
        else
            eax = esi_1 * 0x1008 + data_5c99a0
            
            if (arg2 s< *(eax + 0x7f4))
                if (arg2 s>= 0)
                    return *(eax + (arg2 << 2) + 0x7f8)
                
                var_8 = "UI2GetChild"
                var_c = 0xd53
                var_10 = "c:\ax2017\engine\ui2.cpp"
                ecx = "i >= 0"
            else
                var_8 = "UI2GetChild"
                var_c = 0xd52
                var_10 = "c:\ax2017\engine\ui2.cpp"
                ecx = "i < ui.numChildren"
    else
        var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
        var_10 = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
