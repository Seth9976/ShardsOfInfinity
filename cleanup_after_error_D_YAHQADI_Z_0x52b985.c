// 函数名称: ??$cleanup_after_error@D@@YAHQADI@Z
// 虚拟地址: 0x52b985
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$cleanup_after_error@D@@YAHQADI@Z(char* arg1)
{
    // 第一条实际指令: *arg1 = 0
    *arg1 = 0
    *__errno() = 0x22
    __invalid_parameter_noinfo()
    return 0x22
}
