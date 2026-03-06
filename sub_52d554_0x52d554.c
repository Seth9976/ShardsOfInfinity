// 函数名称: sub_52d554
// 虚拟地址: 0x52d554
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_52d554(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t eax_1 = __security_cookie ^ &var_4
    int32_t edi
    int32_t var_330_1 = edi
    
    if (arg1 != 0xffffffff)
        int32_t var_334_1 = arg1
        sub_51c6e3()
    
    int32_t var_324
    _memset(&var_324, 0, 0x50)
    uint32_t var_2d4[0x8][0x4]
    int32_t ecx_2
    int32_t edx
    ecx_2, edx = _memset(&var_2d4, 0, 0x2cc)
    bool p = unimplemented  {add esp, 0x18}
    bool a = unimplemented  {add esp, 0x18}
    EXCEPTION_POINTERS ExceptionInfo
    ExceptionInfo.ExceptionRecord = &var_324
    ExceptionInfo.ContextRecord = &var_2d4
    uint32_t (* var_224)[0x8][0x4] = &var_2d4
    int32_t var_228 = ecx_2
    int32_t var_22c = edx
    int32_t ebx
    int32_t var_230 = ebx
    int32_t esi
    int32_t var_234 = esi
    int32_t var_238 = edi
    int16_t ss
    int16_t var_20c = ss
    int16_t cs
    int16_t var_218 = cs
    int16_t ds
    int16_t var_23c = ds
    int16_t es
    int16_t var_240 = es
    int16_t fs
    int16_t var_244 = fs
    int16_t gs
    int16_t var_248 = gs
    int32_t var_348
    int32_t var_330
    bool d
    int32_t var_334_2 = (add_overflow(&var_348, 0x18) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (&var_330 s< 0 ? 1 : 0) << 7 | (&var_348 == 0xffffffe8 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
        | (p ? 1 : 0) << 2 | (&var_348 u>= 0xffffffe8 ? 1 : 0)
    int32_t var_214 = var_334_2
    void* const __return_addr_2 = __return_addr
    __builtin_memcpy(&var_2d4, "\x01\x00\x01\x00", 4)
    int32_t var_220 = var_4
    var_324 = arg2
    int32_t var_320 = arg3
    void* const __return_addr_1 = __return_addr
    BOOL eax_7 = IsDebuggerPresent()
    SetUnhandledExceptionFilter(nullptr)
    int32_t result = UnhandledExceptionFilter(&ExceptionInfo)
    
    if (result == 0 && eax_7 == 0 && arg1 != 0xffffffff)
        int32_t var_334_4 = arg1
        sub_51c6e3()
    
    @__security_check_cookie@4(eax_1 ^ &var_4)
    return result
}
