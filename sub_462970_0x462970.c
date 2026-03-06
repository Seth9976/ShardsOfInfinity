// 函数名称: sub_462970
// 虚拟地址: 0x462970
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_462970(void* arg1, int32_t arg2)
{
    // 第一条实际指令: char const* const var_10
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx
    
    if (arg2 s>= *(arg1 + 0x7f4))
        var_8 = "UI2GetChild"
        var_c = 0xd59
        var_10 = "c:\ax2017\engine\ui2.cpp"
        ecx = "i < ui.numChildren"
    else if (arg2 s>= 0)
        int32_t ecx_1 = *(arg1 + (arg2 << 2) + 0x7f8)
        
        if (ecx_1 != 0)
            uint32_t edx = zx.d(ecx_1.w)
            
            if (edx u< data_5c99a4)
                result = edx * 0x1008 + data_5c99a0
            
            if (edx u>= data_5c99a4 || *(result + 0x1004) != ecx_1)
                var_8 = "DataArray<struct UI2>::DataArrayGet"
                var_c = 0x6d
                ecx = "DataArrayTryToGet(id) != NULL"
                var_10 = "c:\ax2017\engine\dataarray.h"
            else
                result = edx * 0x1008 + data_5c99a0
                
                if (*(result + 0x784) == arg1)
                    return result
                
                var_8 = "UI2GetChild"
                var_c = 0xd5c
                var_10 = "c:\ax2017\engine\ui2.cpp"
                ecx = "child.parent == &ui"
        else
            var_8 = "DataArray<struct UI2>::DataArrayGet"
            var_c = 0x6c
            ecx = "id != DATAID_NULL"
            var_10 = "c:\ax2017\engine\dataarray.h"
    else
        var_8 = "UI2GetChild"
        var_c = 0xd5a
        var_10 = "c:\ax2017\engine\ui2.cpp"
        ecx = "i >= 0"
    
    sub_44e4d0(result, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
