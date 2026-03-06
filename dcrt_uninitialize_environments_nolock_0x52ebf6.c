// 函数名称: ___dcrt_uninitialize_environments_nolock
// 虚拟地址: 0x52ebf6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___dcrt_uninitialize_environments_nolock()
{
    // 第一条实际指令: sub_52eb80(&data_65a640, uninitialize_environment_internal<wchar_t>)
    sub_52eb80(&data_65a640, uninitialize_environment_internal<wchar_t>)
    sub_52eb80(0x65a644, uninitialize_environment_internal<char>)
    free_environment<char>(data_65a64c)
    return free_environment<char>(data_65a648)
}
