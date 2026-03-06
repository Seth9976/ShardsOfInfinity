// 函数名称: sub_43a240
// 虚拟地址: 0x43a240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_43a240(int32_t arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg1 != 0
    int32_t var_10
    void* var_c
    void* result = sub_414300(&var_c, &var_10)
    
    if (result.b == 0)
        int32_t ecx_2 = data_5bcaec
        
        if (ecx_2 != 0)
            result = sub_43a120(ecx_2, arg1)
            
            if (result != 0)
                sub_43e800(0)
                uint32_t eax = zx.d(result.w)
                
                if (eax u< data_5bcd80)
                    int32_t* ecx_5 = eax * 0x568 + data_5bcd7c
                    
                    if (ecx_5[0x159] == result)
                        return sub_4329f0(ecx_5, 0)
                
                sub_44e4d0(eax, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                    "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct ShGfx>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
    else if ((var_10 & ((ebx << 1) + 2)) != 0)
        return sub_413510(var_c, (ebx << 1) + 2)
    
    return result
}
