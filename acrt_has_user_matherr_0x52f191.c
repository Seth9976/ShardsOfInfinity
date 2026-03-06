// 函数名称: ___acrt_has_user_matherr
// 虚拟地址: 0x52f191
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_has_user_matherr()
{
    // 第一条实际指令: uint32_t __security_cookie_1 = __security_cookie
    uint32_t __security_cookie_1 = __security_cookie
    int32_t result
    result.b = ror.d(__security_cookie_1 ^ data_65a66c, __security_cookie_1.b & 0x1f) != 0
    return result
}
