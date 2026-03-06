// 函数名称: ?try_get_function@@YAPAXW4function_id@?A0x391cf84c@@QBDQBW4module_id@2@2@Z
// 虚拟地址: 0x52f827
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?try_get_function@@YAPAXW4function_id@?A0x391cf84c@@QBDQBW4module_id@2@2@Z(int32_t arg1, PSTR arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    uint32_t __security_cookie_1 = __security_cookie
    int32_t edx_1 =
        ror.d(__security_cookie_1 ^ *((arg1 << 2) + &data_65a6d8), __security_cookie_1.b & 0x1f)
    
    if (edx_1 == 0xffffffff)
        return 0
    
    if (edx_1 != 0)
        return edx_1
    
    HMODULE hModule = try_get_first_available_module(arg3, arg4)
    
    if (hModule != 0)
        int32_t eax_3 = GetProcAddress(hModule, arg2)
        
        if (eax_3 != 0)
            *((arg1 << 2) + &data_65a6d8) = __crt_fast_encode_pointer<void (__cdecl**)()>(eax_3)
            return eax_3
    
    *((arg1 << 2) + &data_65a6d8)
    *((arg1 << 2) + &data_65a6d8) =
        ror.d(0xffffffff, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
    return 0
}
