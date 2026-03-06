// 函数名称: ??$__crt_fast_encode_pointer@PAP6AXXZ@@YAPAP6AXXZQAP6AXXZ@Z
// 虚拟地址: 0x51b621
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$__crt_fast_encode_pointer@PAP6AXXZ@@YAPAP6AXXZQAP6AXXZ@Z(int32_t arg1)
{
    // 第一条实际指令: return ror.d(arg1, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
    return ror.d(arg1, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
}
