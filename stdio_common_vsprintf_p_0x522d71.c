// 函数名称: ___stdio_common_vsprintf_p
// 虚拟地址: 0x522d71
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___stdio_common_vsprintf_p(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t* arg6, char* arg7)
{
    // 第一条实际指令: return common_vsprintf<class __crt_stdio_output::positional_parameter_base,char>(arg1, arg2, arg3, arg4, arg5, arg6, arg7)
    return common_vsprintf<class __crt_stdio_output::positional_parameter_base,char>(arg1, arg2, arg3, 
        arg4, arg5, arg6, arg7)
}
