// 函数名称: sub_4cf800
// 虚拟地址: 0x4cf800
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __convention("regparm")sub_4cf800(int32_t arg1, int32_t arg2, HWND arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_c = arg5
    int32_t var_c = arg5
    int32_t var_1c = arg4
    int32_t var_10 = arg6
    int32_t var_18 = arg7
    int32_t lParam = arg2
    char* const var_14 = &data_5559b1
    return SendMessageA(arg3, 0x180, 0, &lParam)
}
