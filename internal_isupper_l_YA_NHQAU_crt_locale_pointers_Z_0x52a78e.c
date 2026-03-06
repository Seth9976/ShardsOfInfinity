// 函数名称: ?internal_isupper_l@@YA_NHQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x52a78e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?internal_isupper_l@@YA_NHQAU__crt_locale_pointers@@@Z(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    result.b = __ischartype_l(arg1, 1, arg2) != 0
    return result
}
