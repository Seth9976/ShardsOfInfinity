// 函数名称: sub_468d10
// 虚拟地址: 0x468d10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_468d10(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    
    if (arg1 == 0)
        return 
    
    uint32_t eax_1 = zx.d(arg1.w)
    void* ecx_1
    
    if (eax_1 u< data_5c99a4)
        ecx_1 = eax_1 * 0x1008 + data_5c99a0
    
    if (eax_1 u>= data_5c99a4 || *(ecx_1 + 0x1004) != arg1)
        sub_44e4d0(eax_1, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_468680(ecx_1)
}
