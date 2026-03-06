// 函数名称: sub_483570
// 虚拟地址: 0x483570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_483570(int32_t arg1, void* arg2, void* arg3, int32_t* arg4, void* arg5, void* arg6, int32_t arg7)
{
    // 第一条实际指令: void* result
    void* result
    
    if (arg6 u> 0x5f5e100)
        result.b = 0
    else
        int32_t* esi_2 = *arg4 + arg2
        
        if (arg6 == 0)
            *esi_2 = arg6
            result.b = 1
            return result
        
        int32_t ecx = arg4[0xa]
        result = *esi_2
        
        if ((ecx.b & 0x10) != 0)
            result.b = 1
            return result
        
        if ((ecx & 0x100) != 0 && result s>= arg7)
            result.b = 1
            return result
        
        void* eax = result + arg3
        *esi_2 = eax
        
        if (sub_48acc0(arg4[6]) * arg6 + result s> arg7 || eax s<= arg2)
            result.b = 0
        else
            result = sub_4833f0(eax, *esi_2, arg3, arg6, arg4, arg5, arg7)
            
            if (result.b == 0)
                result.b = 0
    
    return result
}
