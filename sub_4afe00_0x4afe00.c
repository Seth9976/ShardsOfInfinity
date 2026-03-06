// 函数名称: sub_4afe00
// 虚拟地址: 0x4afe00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4afe00(int32_t* arg1, int128_t* arg2, float arg3 @ xmm3, struct _EXCEPTION_REGISTRATION_RECORD** arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: arg3 - 0f
    arg3 - 0f
    arg1:1.b = (arg3 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg3, 0f) ? 1 : 0) << 2 | (arg3 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        return arg1
    
    int128_t xmm2_1 = data_57252c
    float xmm0_2 = arg3 f* data_57251c
    int128_t var_28
    __builtin_memcpy(&var_28, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x24)
    var_28.d = xmm0_2
    var_28:4.d = var_28:4.d * arg3
    var_28:8.d = var_28:8.d * arg3
    int128_t var_18
    var_18.d = xmm2_1 f* arg3
    var_28:0xc.d = var_28:0xc.d * arg3
    var_18:4.d = var_18:4.d * arg3
    var_18:8.d = var_18:8.d * arg3
    var_18:0xc.d = var_18:0xc.d * arg3
    float var_8
    float var_8_1 = var_8 * arg3
    struct _EXCEPTION_REGISTRATION_RECORD** ecx
    return sub_4afc40(0x3f800000, &var_28, ecx, arg2, arg4, arg5, arg6)
}
