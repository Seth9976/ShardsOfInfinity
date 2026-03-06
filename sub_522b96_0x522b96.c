// 函数名称: sub_522b96
// 虚拟地址: 0x522b96
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_522b96(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (((*(*arg1 + 0xc) u>> 0xc).b & 1) == 0 || *(*arg1 + 4) != 0)
    if (((*(*arg1 + 0xc) u>> 0xc).b & 1) == 0 || *(*arg1 + 4) != 0)
        return __crt_stdio_output::output_adapter_common<char,class __crt_stdio_output::stream_output_adapter<char> >::write_string_impl(
            arg1) __tailcall
    
    *arg3 += arg2
    return arg2
}
