// 函数名称: sub_4698b0
// 虚拟地址: 0x4698b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4698b0(int32_t arg1, int32_t arg2 @ xmm2)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        
        if (eax u< data_5c99a4)
            void* ecx_2 = eax * 0x1008 + data_5c99a0
            
            if (*(ecx_2 + 0x1004) == arg1)
                return sub_469800(eax, &data_5bbdc0, ecx_2, arg2, 0xffffffff)
        
        char const* const var_4_1 = "DataArray<struct UI2>::DataArrayGet"
        var_8 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_4 = "DataArray<struct UI2>::DataArrayGet"
        var_8 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_8, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
