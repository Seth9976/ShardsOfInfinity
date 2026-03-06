// 函数名称: ?allocate@__crt_win32_buffer_public_dynamic_resizing@@SAHQAPAXIABV__crt_win32_buffer_debug_info@@@Z
// 虚拟地址: 0x52c4a6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?allocate@__crt_win32_buffer_public_dynamic_resizing@@SAHQAPAXIABV__crt_win32_buffer_debug_info@@@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = arg2
    int32_t var_8 = arg2
    int32_t eax = _malloc()
    *arg1 = eax
    int32_t eax_1 = neg.d(eax)
    return (sbb.d(eax_1, eax_1, eax != 0) & 0xfffffff4) + 0xc
}
