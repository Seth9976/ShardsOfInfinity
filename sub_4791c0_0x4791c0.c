// 函数名称: sub_4791c0
// 虚拟地址: 0x4791c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4791c0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t var_14
    void* eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx = zx.d(arg1.w)
        
        if (edx u< data_5c99a4)
            eax = edx * 0x1008 + data_5c99a0
            
            if (*(eax + 0x1004) == arg1)
                void* esi_1 = edx * 0x1008 + data_5c99a0
                *(esi_1 + 0x664) = *arg2
                *(esi_1 + 0x668) = arg2[1]
                sub_479260(esi_1)
                return sub_4660e0(esi_1)
        
        char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
        var_14 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_10 = "DataArray<struct UI2>::DataArrayGet"
        var_14 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
