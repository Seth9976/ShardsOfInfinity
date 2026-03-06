// 函数名称: __register_thread_local_exe_atexit_callback
// 虚拟地址: 0x52a0e4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__register_thread_local_exe_atexit_callback(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0x20
    int32_t var_8 = 0x20
    
    if (data_65a3bc != __security_cookie)
        noreturn sub_52f140() __tailcall
    
    int32_t result = __crt_fast_encode_pointer<void (__stdcall*)(struct _RTL_CONDITION_VARIABLE*)>(arg1)
    data_65a3bc = result
    return result
}
