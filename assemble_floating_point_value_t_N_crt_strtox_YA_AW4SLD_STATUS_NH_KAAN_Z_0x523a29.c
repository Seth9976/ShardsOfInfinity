// 函数名称: ??$assemble_floating_point_value_t@N@__crt_strtox@@YA?AW4SLD_STATUS@@_NH_KAAN@Z
// 虚拟地址: 0x523a29
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$assemble_floating_point_value_t@N@__crt_strtox@@YA?AW4SLD_STATUS@@_NH_KAAN@Z(char arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(zx.d(arg1))
    arg5[1] = (((arg2 + 0x3ff) & 0x7ff) | eax_1 << 0xb) << 0x14 | (arg4 & 0xfffff)
    *arg5 = arg3
    return 0
}
