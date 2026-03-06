// 函数名称: ?common_fseek_nolock@@YAHV__crt_stdio_stream@@_JH@Z
// 虚拟地址: 0x52aa12
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?common_fseek_nolock@@YAHV__crt_stdio_stream@@_JH@Z(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (((arg1[3] u>> 0xd).b & 1) == 0)
        *__errno() = 0x16
        return 0xffffffff
    
    arg1[3] &= 0xfffffff7
    int32_t var_14_1 = arg4
    int32_t ebx_1 = arg3
    int32_t var_8_1 = arg2
    
    if (common_fseek_binary_mode_read_only_fast_track_nolock(arg1, arg2, ebx_1) == 0)
        if (arg4 == 1)
            int32_t* var_14_2 = arg1
            int32_t eax_8
            int32_t edx_1
            eax_8, edx_1 = __ftelli64_nolock()
            var_8_1 = arg2 + eax_8
            ebx_1 = adc.d(ebx_1, edx_1, arg2 + eax_8 u< arg2)
        
        int32_t esi_5 = neg.d(arg4 - 1)
        ___acrt_stdio_flush_nolock(arg1)
        int32_t ecx_2 = arg1[1]
        arg1[2] = 0
        *arg1 = ecx_2
        
        if (((arg1[3] u>> 2).b & 1) != 0)
            arg1[3] &= 0xfffffffc
        else if (((arg1[3]).b & 0x41) == 0x41 && ((arg1[3] u>> 8).b & 1) == 0)
            arg1[6] = 0x200
        
        int32_t eax_23
        int32_t edx_2
        eax_23, edx_2 =
            __lseeki64_nolock(arg1[4], var_8_1, ebx_1, sbb.d(esi_5, esi_5, arg4 != 1) & arg4)
        int32_t result = eax_23 & edx_2
        
        if (result == 0xffffffff)
            return result
    
    return 0
}
