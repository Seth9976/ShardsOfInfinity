// 函数名称: _memcpy_s
// 虚拟地址: 0x5297b7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_memcpy_s(uint32_t (* arg1)[0x4], void* arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: if (arg4 == 0)
    if (arg4 == 0)
        return 0
    
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    int32_t edi
    int32_t var_c_1 = edi
    int32_t result
    
    if (arg3 == 0 || arg2 u< arg4)
        _memset(arg1, 0, arg2)
        int32_t result_1
        void* eax_2
        
        if (arg3 != 0)
            if (arg2 u< arg4)
                eax_2 = __errno()
                result_1 = 0x22
                goto label_529826
            
            result = 0x16
        else
            eax_2 = __errno()
            result_1 = 0x16
        label_529826:
            *eax_2 = result_1
            __invalid_parameter_noinfo()
            result = result_1
    else
        sub_51d5b0(arg1, arg3, arg4)
        result = 0
    
    return result
}
