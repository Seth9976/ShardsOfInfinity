// 函数名称: sub_47a430
// 虚拟地址: 0x47a430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_47a430(int128_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax
    char* edx
    int32_t eax_1 = sub_46e020(eax, edx, ecx, arg2)
    int32_t edx_1 = eax_1
    
    if (edx_1 == 0)
        *arg1 = data_571d08
        return arg1
    
    uint32_t ecx_2 = zx.d(edx_1.w)
    
    if (ecx_2 u< data_5c99a4)
        int32_t esi_1 = data_5c99a0
        eax_1 = ecx_2 * 0x1008
        
        if (*(eax_1 + esi_1 + 0x1004) == edx_1)
            *arg1 = *(ecx_2 * 0x1008 + esi_1 + 0x6cc)
            return arg1
    
    sub_44e4d0(eax_1, &data_5559b1, "DataArrayTryToGet(id) != NULL", "c:\ax2017\engine\dataarray.h", 
        0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
