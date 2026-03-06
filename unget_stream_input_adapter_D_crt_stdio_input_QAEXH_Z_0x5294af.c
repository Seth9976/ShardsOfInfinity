// 函数名称: ?unget@?$stream_input_adapter@D@__crt_stdio_input@@QAEXH@Z
// 虚拟地址: 0x5294af
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __thiscall?unget@?$stream_input_adapter@D@__crt_stdio_input@@QAEXH@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 0xffffffff)
    if (arg2 == 0xffffffff)
        return 
    
    int32_t* var_8_1 = *arg1
    arg1[1] -= 1
    __ungetc_nolock(arg2, var_8_1)
}
