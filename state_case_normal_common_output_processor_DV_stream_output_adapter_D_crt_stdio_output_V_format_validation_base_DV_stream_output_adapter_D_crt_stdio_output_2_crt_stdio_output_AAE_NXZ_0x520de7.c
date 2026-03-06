// 函数名称: ?state_case_normal_common@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x520de7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?state_case_normal_common@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: char var_8 = arg1.b
    char var_8 = arg1.b
    int32_t var_10 = 0
    char result = sub_520e4d(arg1)
    
    if (result == 0)
        return result
    
    if (__crt_stdio_output::stream_output_adapter<char>::write_character_without_count_update(
            arg1 + 0x448, *(arg1 + 0x31)) == 0)
        *(arg1 + 0x18) = 0xffffffff
    else
        *(arg1 + 0x18) += 1
    
    return 1
}
