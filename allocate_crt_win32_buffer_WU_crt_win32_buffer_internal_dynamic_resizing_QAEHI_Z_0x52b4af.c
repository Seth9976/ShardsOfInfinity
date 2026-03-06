// 函数名称: ?allocate@?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@QAEHI@Z
// 虚拟地址: 0x52b4af
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall?allocate@?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@QAEHI@Z(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    __crt_win32_buffer<wchar_t,struct __crt_win32_buffer_internal_dynamic_resizing>::_deallocate(arg1)
    void* var_10 = arg1
    int32_t result = __crt_win32_buffer_internal_dynamic_resizing::allocate(arg1 + 8, arg2 * 2)
    
    if (result == 0)
        *(arg1 + 0x14) = 1
        result = 0
        *(arg1 + 0xc) = arg2
    else
        *(arg1 + 0xc) = 0
        *(arg1 + 0x14) = 0
    
    return result
}
