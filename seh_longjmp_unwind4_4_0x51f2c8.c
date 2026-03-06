// 函数名称: __seh_longjmp_unwind4@4
// 虚拟地址: 0x51f2c8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __stdcall__seh_longjmp_unwind4@4(int32_t* arg1)
{
    // 第一条实际指令: ___except_validate_jump_buffer(arg1)
    ___except_validate_jump_buffer(arg1)
    *arg1
    return __local_unwind4(arg1[0xa], arg1[6], arg1[7])
}
