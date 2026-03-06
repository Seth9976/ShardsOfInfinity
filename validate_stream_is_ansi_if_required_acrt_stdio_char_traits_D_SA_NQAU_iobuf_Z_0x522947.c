// 函数名称: ?validate_stream_is_ansi_if_required@?$__acrt_stdio_char_traits@D@@SA_NQAU_iobuf@@@Z
// 虚拟地址: 0x522947
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t?validate_stream_is_ansi_if_required@?$__acrt_stdio_char_traits@D@@SA_NQAU_iobuf@@@Z(void* arg1)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (((*(arg1 + 0xc) u>> 0xc).b & 1) != 0)
        result.b = 1
    else
        int32_t edi
        int32_t var_c_1 = edi
        result = __fileno(arg1)
        void* ecx_1 = &data_5b02a0
        int32_t edx_2
        int32_t esi_2
        void* edi_2
        
        if (result == 0xffffffff || result == 0xfffffffe)
            edx_2 = result s>> 6
            edi_2 = &data_5b02a0
            esi_2 = result & 0x3f
        else
            esi_2 = result & 0x3f
            edx_2 = result s>> 6
            edi_2 = esi_2 * 0x30 + (&data_65a778)[edx_2]
        
        if (*(edi_2 + 0x29) == 0 && result != 0xffffffff && result != 0xfffffffe)
            ecx_1 = esi_2 * 0x30 + (&data_65a778)[edx_2]
        
        if (*(edi_2 + 0x29) == 0 && (*(ecx_1 + 0x2d) & 1) == 0)
            result.b = 1
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result.b = 0
    
    return result
}
