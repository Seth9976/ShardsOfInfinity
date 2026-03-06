// 函数名称: sub_479400
// 虚拟地址: 0x479400
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_479400(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        
        if (eax u< data_5c99a4)
            void* ecx_2 = eax * 0x1008 + data_5c99a0
            int32_t* edx
            
            if (*(ecx_2 + 0x1004) == arg1)
                return sub_479350(ecx_2, edx) __tailcall
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
