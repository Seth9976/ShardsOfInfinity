// 函数名称: sub_52a358
// 虚拟地址: 0x52a358
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_52a358(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = arg2
    int32_t ecx = arg2
    
    if (ecx == 0 || (ecx & (ecx - 1)) != 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else
        if (ecx u<= 4)
            ecx = 4
        
        int32_t ecx_2 = arg1 + 4 + ecx - 1
        
        if (arg1 u<= ecx_2)
            int32_t var_c_1 = ecx_2
            int32_t eax_4 = _malloc()
            
            if (eax_4 != 0)
                void* result = (ecx + 3 + eax_4) & not.d(ecx - 1)
                *(result - 4) = eax_4
                return result
        else
            *__errno() = 0xc
    
    return nullptr
}
