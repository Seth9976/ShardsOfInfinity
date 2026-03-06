// 函数名称: ??$assemble_floating_point_snan@N@__crt_strtox@@YAX_NAAN@Z
// 虚拟地址: 0x5239d8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$assemble_floating_point_snan@N@__crt_strtox@@YAX_NAAN@Z(char arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(zx.d(arg1))
    int32_t result = eax_1 << 0x1f | 0x7ff00000
    *arg2 = 1
    arg2[1] = result
    return result
}
