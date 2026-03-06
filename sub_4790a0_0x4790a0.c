// 函数名称: sub_4790a0
// 虚拟地址: 0x4790a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4790a0(uint32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t var_20
    int32_t var_20
    char const* const ecx
    
    if (arg3 != 0)
        arg1 = zx.d(arg3.w)
        
        if (arg1 u< data_5c99a4)
            void* ecx_2 = arg1 * 0x1008 + data_5c99a0
            
            if (*(ecx_2 + 0x1004) == arg3)
                int128_t var_18
                
                if (sub_478d90(&var_18, nullptr, ecx_2, &var_18) != 0)
                    *arg4 = var_18
                    return arg4
                
                *arg4 = data_571cf8
                return arg4
        
        char const* const var_1c_2 = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_1c = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_20, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
