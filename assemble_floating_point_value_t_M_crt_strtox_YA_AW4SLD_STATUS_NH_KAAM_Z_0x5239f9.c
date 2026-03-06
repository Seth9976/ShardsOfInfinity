// 函数名称: ??$assemble_floating_point_value_t@M@__crt_strtox@@YA?AW4SLD_STATUS@@_NH_KAAM@Z
// 虚拟地址: 0x5239f9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$assemble_floating_point_value_t@M@__crt_strtox@@YA?AW4SLD_STATUS@@_NH_KAAM@Z(char arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: *arg4 = ((arg2 + 0x7f) << 0x17 & 0x7f800000) | zx.d(arg1) << 0x1f | (arg3 & 0x7fffff)
    *arg4 = ((arg2 + 0x7f) << 0x17 & 0x7f800000) | zx.d(arg1) << 0x1f | (arg3 & 0x7fffff)
    return 0
}
