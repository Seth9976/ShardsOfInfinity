// 函数名称: __onexit
// 虚拟地址: 0x51b86b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__onexit(int32_t arg1)
{
    // 第一条实际指令: uint32_t __security_cookie_1 = __security_cookie
    uint32_t __security_cookie_1 = __security_cookie
    int32_t eax_2
    
    if (ror.d(__security_cookie_1 ^ data_659f94, __security_cookie_1.b & 0x1f) != 0xffffffff)
        eax_2 = __register_onexit_function()
    else
        eax_2 = __crt_atexit(arg1)
    
    int32_t eax_3 = neg.d(eax_2)
    return not.d(sbb.d(eax_3, eax_3, eax_2 != 0)) & arg1
}
