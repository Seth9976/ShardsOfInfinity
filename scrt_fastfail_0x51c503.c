// 函数名称: ___scrt_fastfail
// 虚拟地址: 0x51c503
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___scrt_fastfail(int32_t arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_32c_1 = ebx
    
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd)
    
    int32_t var_330 = 3
    sub_51c6e3()
    uint32_t var_328[0x8][0x4]
    uint32_t (* eax_1)[0x4]
    int32_t ecx_1
    int32_t edx
    eax_1, ecx_1, edx = _memset(&var_328, 0, 0x2cc)
    bool p = unimplemented  {add esp, 0xc}
    bool a = unimplemented  {add esp, 0xc}
    uint32_t (* var_278)[0x4] = eax_1
    int32_t var_27c = ecx_1
    int32_t var_280 = edx
    int32_t var_284 = ebx
    int32_t esi
    int32_t var_288 = esi
    int32_t edi
    int32_t var_28c = edi
    int16_t ss
    int16_t var_260 = ss
    int16_t cs
    int16_t var_26c = cs
    int16_t ds
    int16_t var_290 = ds
    int16_t es
    int16_t var_294 = es
    int16_t fs
    int16_t var_298 = fs
    int16_t gs
    int16_t var_29c = gs
    int32_t var_338
    int32_t var_32c
    bool d
    int32_t var_330_1 = (add_overflow(&var_338, 0xc) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (&var_32c s< 0 ? 1 : 0) << 7 | (&var_338 == 0xfffffff4 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
        | (p ? 1 : 0) << 2 | (&var_338 u>= 0xfffffff4 ? 1 : 0)
    int32_t var_268 = var_330_1
    void* const __return_addr_1 = __return_addr
    __builtin_memcpy(&var_328, "\x01\x00\x01\x00", 4)
    int32_t ebp
    int32_t var_274 = ebp
    int32_t var_5c
    _memset(&var_5c, 0, 0x50)
    var_5c = 0x40000015
    int32_t var_58 = 1
    void* const __return_addr_2 = __return_addr
    int32_t ebx_1 = IsDebuggerPresent() - 1
    char ebx_2 = (neg.d(ebx_1)).b
    EXCEPTION_POINTERS ExceptionInfo
    ExceptionInfo.ExceptionRecord = &var_5c
    ExceptionInfo.ContextRecord = &var_328
    SetUnhandledExceptionFilter(nullptr)
    int32_t result = UnhandledExceptionFilter(&ExceptionInfo)
    
    if (result == 0 && sbb.b(ebx_2, ebx_2, ebx_1 != 0) == 0xff)
        sub_51c6e3()
    
    return result
}
