// 函数名称: ??$write_multiple_characters@V?$stream_output_adapter@D@__crt_stdio_output@@D@__crt_stdio_output@@YAXABV?$stream_output_adapter@D@0@DHQAH@Z
// 虚拟地址: 0x5203bd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void??$write_multiple_characters@V?$stream_output_adapter@D@__crt_stdio_output@@D@__crt_stdio_output@@YAXABV?$stream_output_adapter@D@0@DHQAH@Z(int32_t* arg1, char arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    
    if (arg3 s<= 0)
        return 
    
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        int32_t eax
        
        if (__crt_stdio_output::stream_output_adapter<char>::write_character_without_count_update(arg1, 
                arg2) == 0)
            *arg4 = 0xffffffff
            eax = 0xffffffff
        else
            *arg4 += 1
            eax = *arg4
        
        if (eax == 0xffffffff)
            break
        
        esi += 1
    while (esi s< arg3)
}
