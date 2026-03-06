// 函数名称: ??R<lambda_1b3fd67d98fc4313a561b89752468e10>@@QBE_NXZ
// 虚拟地址: 0x525cc7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcall??R<lambda_1b3fd67d98fc4313a561b89752468e10>@@QBE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::unget(*arg1, *arg1[1])
    __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::unget(
        *arg1, *arg1[1])
    *arg1[1] = 0
    int32_t* eax_3 = arg1[2]
    return __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<wchar_t> >::restore_state(
        *arg1, *eax_3, eax_3[1])
}
