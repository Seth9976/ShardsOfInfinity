// 函数名称: ?validate@?$stream_output_adapter@D@__crt_stdio_output@@QBE_NXZ
// 虚拟地址: 0x5226d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?validate@?$stream_output_adapter@D@__crt_stdio_output@@QBE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: void* eax_2 = *arg1
    void* eax_2 = *arg1
    
    if (eax_2 != 0)
        return __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(eax_2)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    int32_t result
    result.b = 0
    return result
}
