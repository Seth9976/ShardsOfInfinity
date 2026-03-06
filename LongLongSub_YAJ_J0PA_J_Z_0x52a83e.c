// 函数名称: ?LongLongSub@@YAJ_J0PA_J@Z
// 虚拟地址: 0x52a83e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?LongLongSub@@YAJ_J0PA_J@Z(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t edx_1 = arg1 - arg3
    int32_t edx_1 = arg1 - arg3
    int32_t edi
    int32_t var_10 = edi
    int32_t edi_2 = sbb.d(arg2, arg4, arg1 u< arg3)
    int32_t result = 0
    int32_t ecx = 1
    int32_t ebx
    
    if (arg2 s> 0 || (arg2 s>= 0 && arg1 u>= 0))
        ebx = 0
    else
        ebx = 1
    
    int32_t esi
    
    if (arg4 s> 0 || (arg4 s>= 0 && arg3 u>= 0))
        esi = 0
    else
        esi = 1
    
    if (ebx != esi)
        int32_t esi_1
        
        if (arg2 s> 0 || (arg2 s>= 0 && arg1 u>= 0))
            esi_1 = 0
        else
            esi_1 = 1
        
        if (edi_2 s> 0)
            ecx = 0
        else if (edi_2 s>= 0 && edx_1 u>= 0)
            ecx = 0
        
        if (esi_1 != ecx)
            edx_1 = 0xffffffff
            result = 0x80070216
            edi_2 = 0xffffffff
    
    *arg5 = edx_1
    arg5[1] = edi_2
    return result
}
