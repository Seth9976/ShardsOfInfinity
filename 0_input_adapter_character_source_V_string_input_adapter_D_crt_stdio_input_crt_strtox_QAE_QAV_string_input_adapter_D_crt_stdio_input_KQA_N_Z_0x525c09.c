// 函数名称: ??0?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAE@QAV?$string_input_adapter@D@__crt_stdio_input@@_KQA_N@Z
// 虚拟地址: 0x525c09
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscall??0?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAE@QAV?$string_input_adapter@D@__crt_stdio_input@@_KQA_N@Z(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: arg1[4] = 0
    arg1[4] = 0
    arg1[5] = 0
    *arg1 = arg2
    arg1[2] = arg3
    arg1[3] = arg4
    arg1[6] = arg5
    
    if (arg5 != 0)
        *arg5 = 1
    
    return arg1
}
