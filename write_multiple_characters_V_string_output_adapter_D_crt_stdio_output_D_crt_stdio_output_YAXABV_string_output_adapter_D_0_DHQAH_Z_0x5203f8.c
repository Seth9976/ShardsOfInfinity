// 函数名称: ??$write_multiple_characters@V?$string_output_adapter@D@__crt_stdio_output@@D@__crt_stdio_output@@YAXABV?$string_output_adapter@D@0@DHQAH@Z
// 虚拟地址: 0x5203f8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void??$write_multiple_characters@V?$string_output_adapter@D@__crt_stdio_output@@D@__crt_stdio_output@@YAXABV?$string_output_adapter@D@0@DHQAH@Z(int32_t* arg1, char arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    
    if (arg3 s<= 0)
        return 
    
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        __crt_stdio_output::string_output_adapter<char>::write_character(arg1, arg2, arg4)
        
        if (*arg4 == 0xffffffff)
            break
        
        esi += 1
    while (esi s< arg3)
}
