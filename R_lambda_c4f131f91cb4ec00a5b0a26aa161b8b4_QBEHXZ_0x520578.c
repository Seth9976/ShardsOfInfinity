// 函数名称: ??R<lambda_c4f131f91cb4ec00a5b0a26aa161b8b4>@@QBEHXZ
// 虚拟地址: 0x520578
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall??R<lambda_c4f131f91cb4ec00a5b0a26aa161b8b4>@@QBEHXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_480 = edi
    int32_t* edi_1 = **arg1
    char eax_3 = ___acrt_stdio_begin_temporary_buffering_nolock(edi_1)
    void* var_478
    _LocaleUpdate::_LocaleUpdate(&var_478, *arg1[1])
    int32_t var_464 = **arg1
    int32_t* eax_9 = arg1[2]
    void var_474
    void var_460
    __crt_stdio_output::output_adapter_data<char,class __crt_stdio_output::string_output_adapter<char> >::output_adapter_data<char,class __crt_stdio_output::string_output_adapter<char> >(
        &var_460, &var_464, *eax_9, eax_9[1], *arg1[3], &var_474, *arg1[4])
    int32_t var_10 = 0
    int32_t result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::string_output_adapter<char> > >::process(
        &var_460)
    void var_420
    __crt_stdio_output::formatting_buffer::~formatting_buffer(&var_420)
    char var_46c
    
    if (var_46c != 0)
        void* ecx_4 = var_478
        *(ecx_4 + 0x350) &= 0xfffffffd
    
    ___acrt_stdio_end_temporary_buffering_nolock(eax_3, edi_1)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
