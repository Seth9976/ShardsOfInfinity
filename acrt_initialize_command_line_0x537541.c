// 函数名称: ___acrt_initialize_command_line
// 虚拟地址: 0x537541
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

PWSTR___acrt_initialize_command_line()
{
    // 第一条实际指令: data_65aa7c = GetCommandLineA()
    data_65aa7c = GetCommandLineA()
    data_65aa80 = GetCommandLineW()
    PWSTR result
    result.b = 1
    return result
}
