// 函数名称: ??R<lambda_21448eb78dd3c4a522ed7c65a98d88e6>@@QBEHXZ
// 虚拟地址: 0x525cf1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall??R<lambda_21448eb78dd3c4a522ed7c65a98d88e6>@@QBEHXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* var_90
    _LocaleUpdate::_LocaleUpdate(&var_90, **arg1)
    int32_t var_7c = 0
    int32_t var_80 = *arg1[1]
    int32_t* eax_7 = arg1[2]
    void var_8c
    void var_78
    __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >(
        &var_78, &var_80, *eax_7, eax_7[1], *arg1[3], &var_8c, *arg1[4])
    int32_t result = __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::process(
        &var_78)
    char var_84
    
    if (var_84 != 0)
        void* ecx_3 = var_90
        *(ecx_3 + 0x350) &= 0xfffffffd
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
